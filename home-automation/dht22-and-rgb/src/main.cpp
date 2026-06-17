#include <Arduino.h>
#include <DHT.h>
#include <WiFi.h>
#include <WebServer.h>
#include <ArduinoJson.h>

#include "secrets.h" // defines WIFI_SSID and WIFI_PASSWORD

// ---- DHT22 ----
#define DHTPIN 4
#define DHTTYPE DHT22
DHT dht(DHTPIN, DHTTYPE);

// ---- RGB LED (common cathode) ----
// Test-rig pins (Elegoo DevKit V1, available on this breadboard).
// Camp-final wiring uses GPIO 25/26/27 -- see project.md.
#define PIN_R 18
#define PIN_G 19
#define PIN_B 23
#define PWM_FREQ 5000    // 5 kHz, well above visible flicker
#define PWM_RESOLUTION 8 // 8-bit: values 0-255

// LEDC channels (Arduino-ESP32 v2.x API: one channel per LED color)
#define CH_R 0
#define CH_G 1
#define CH_B 2

// ---- Color source ----
// Choose which sensor reading drives the LED color.
// Set to SOURCE_HUMIDITY (default) or SOURCE_TEMPERATURE.
#define SOURCE_HUMIDITY 0
#define SOURCE_TEMPERATURE 1
#define COLOR_SOURCE SOURCE_HUMIDITY

// ---- Temperature thresholds (Celsius) ----
#define T_COLD 18.0
#define T_COOL 23.0
#define T_WARM 28.0

// ---- Humidity thresholds (% RH) ----
// Easy to affect: breathe on the sensor to push it up.
#define H_DRY 30.0
#define H_COMFY 50.0
#define H_HUMID 70.0

// ---- Read interval ----
const unsigned long READ_INTERVAL_MS = 2500;
unsigned long lastReadMs = 0;

// ---- Web server ----
WebServer server(80);
float cachedTempC = NAN;
float cachedHumidity = NAN;
unsigned long lastSuccessMs = 0;
const char *cachedColorLabel = "UNKNOWN";

// ---- Background WiFi / web server state ----
bool serverStarted = false;
unsigned long lastWifiAttemptMs = 0;
const unsigned long WIFI_RETRY_MS = 10000; // retry WiFi every 10s while disconnected

void handleSensor()
{
  JsonDocument doc;
  if (isnan(cachedTempC) || isnan(cachedHumidity))
  {
    doc["status"] = "error";
    doc["message"] = "no valid reading yet";
  }
  else
  {
    doc["status"] = "ok";
    doc["temp_c"] = cachedTempC;
    doc["temp_f"] = cachedTempC * 9.0 / 5.0 + 32.0;
    doc["humidity"] = cachedHumidity;
    doc["color"] = cachedColorLabel;
    doc["age_ms"] = millis() - lastSuccessMs;
  }
  String response;
  serializeJson(doc, response);
  server.sendHeader("Access-Control-Allow-Origin", "*");
  server.sendHeader("Access-Control-Allow-Methods", "GET");
  server.send(200, "application/json", response);
}

void handleNotFound()
{
  server.sendHeader("Access-Control-Allow-Origin", "*");
  server.send(404, "application/json", "{\"error\":\"not found\"}");
}

void setColor(uint8_t r, uint8_t g, uint8_t b)
{
  ledcWrite(CH_R, r);
  ledcWrite(CH_G, g);
  ledcWrite(CH_B, b);
}

const char *labelForTemp(float tempC)
{
  if (tempC < T_COLD)
    return "BLUE";
  if (tempC < T_COOL)
    return "GREEN";
  if (tempC < T_WARM)
    return "YELLOW";
  return "RED";
}

void updateColorFromTemp(float tempC)
{
  if (tempC < T_COLD)
  {
    setColor(0, 0, 255); // Blue: cold
  }
  else if (tempC < T_COOL)
  {
    setColor(0, 255, 0); // Green: comfortable
  }
  else if (tempC < T_WARM)
  {
    setColor(255, 200, 0); // Yellow: warm (red-biased to offset green-channel brightness)
  }
  else
  {
    setColor(255, 0, 0); // Red: hot
  }
}

const char *labelForHumidity(float humidity)
{
  if (humidity < H_DRY)
    return "RED";
  if (humidity < H_COMFY)
    return "YELLOW";
  if (humidity < H_HUMID)
    return "GREEN";
  return "BLUE";
}

void updateColorFromHumidity(float humidity)
{
  if (humidity < H_DRY)
  {
    setColor(255, 0, 0); // Red: very dry
  }
  else if (humidity < H_COMFY)
  {
    setColor(255, 200, 0); // Yellow: dry side of comfortable
  }
  else if (humidity < H_HUMID)
  {
    setColor(0, 255, 0); // Green: comfortable
  }
  else
  {
    setColor(0, 0, 255); // Blue: very humid (breath on sensor)
  }
}

void setup()
{
  Serial.begin(115200);
  delay(2000);
  Serial.println();
  Serial.println("=== DHT22 + RGB LED ===");

  dht.begin();

  ledcSetup(CH_R, PWM_FREQ, PWM_RESOLUTION);
  ledcSetup(CH_G, PWM_FREQ, PWM_RESOLUTION);
  ledcSetup(CH_B, PWM_FREQ, PWM_RESOLUTION);
  ledcAttachPin(PIN_R, CH_R);
  ledcAttachPin(PIN_G, CH_G);
  ledcAttachPin(PIN_B, CH_B);

  // Quick channel test: cycle R, G, B at startup so you can verify wiring
  Serial.println("Self-test: red, green, blue");
  setColor(255, 0, 0);
  delay(500);
  setColor(0, 255, 0);
  delay(500);
  setColor(0, 0, 255);
  delay(500);
  setColor(0, 0, 0);
  delay(200);

  // Start connecting to WiFi, but DON'T wait for it here. The LED + sensor
  // must work even with no network, so WiFi connects in the background and
  // the web server starts later (in loop()) once a connection exists.
  Serial.printf("Connecting to WiFi in the background: %s\n", WIFI_SSID);
  WiFi.mode(WIFI_STA);
  WiFi.setAutoReconnect(true);
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  Serial.print("MAC address: ");
  Serial.println(WiFi.macAddress());

  // Register handlers now; server.begin() happens in loop() when WiFi is up.
  server.on("/api/sensor", HTTP_GET, handleSensor);
  server.onNotFound(handleNotFound);

  delay(1000);
}

void loop()
{
  // 1. Sensor + LED ALWAYS run, with or without WiFi.
  if (millis() - lastReadMs >= READ_INTERVAL_MS)
  {
    lastReadMs = millis();
    float t = dht.readTemperature();
    float h = dht.readHumidity();

    if (!isnan(t) && !isnan(h))
    {
      cachedTempC = t;
      cachedHumidity = h;
      lastSuccessMs = millis();

      Serial.printf("T: %.1f C  H: %.1f%%  ->  ", t, h);
#if COLOR_SOURCE == SOURCE_TEMPERATURE
      cachedColorLabel = labelForTemp(t);
      Serial.println(cachedColorLabel);
      updateColorFromTemp(t);
#else
      cachedColorLabel = labelForHumidity(h);
      Serial.println(cachedColorLabel);
      updateColorFromHumidity(h);
#endif
    }
    else
    {
      Serial.println("Read failed"); // keep last good color, don't reboot
    }
  }

  // 2. Bring the web server up in the background once WiFi connects.
  if (WiFi.status() == WL_CONNECTED)
  {
    if (!serverStarted)
    {
      server.begin();
      serverStarted = true;
      Serial.print("WiFi connected. HTTP server: http://");
      Serial.print(WiFi.localIP());
      Serial.println("/api/sensor");
    }
    server.handleClient();
  }
  else if (millis() - lastWifiAttemptMs >= WIFI_RETRY_MS)
  {
    // Router may have just been plugged in / come into range — retry.
    lastWifiAttemptMs = millis();
    WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  }
}