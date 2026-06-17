#include <Arduino.h>
#include <WiFi.h>
#include <WebServer.h>
#include <ArduinoJson.h>
#include <DHT.h>

#include "secrets.h" // defines WIFI_SSID and WIFI_PASSWORD

// ---- Configuration ----
#define DHTPIN 4
#define DHTTYPE DHT22
const unsigned long READ_INTERVAL_MS = 3000; // Read sensor every 3s
// ------------------------

DHT dht(DHTPIN, DHTTYPE);
WebServer server(80);

// Cached sensor values (updated in loop, served from handler)
float cachedTempC = NAN;
float cachedHumidity = NAN;
unsigned long lastReadMs = 0;
unsigned long lastSuccessMs = 0;

// ---- Background WiFi / web server state ----
bool serverStarted = false;
unsigned long lastWifiAttemptMs = 0;
const unsigned long WIFI_RETRY_MS = 10000; // retry WiFi every 10s while disconnected

void handleSensor()
{
  // Build JSON response
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
    doc["age_ms"] = millis() - lastSuccessMs;
  }

  String response;
  serializeJson(doc, response);

  // CORS headers so a page on another origin can fetch this
  server.sendHeader("Access-Control-Allow-Origin", "*");
  server.sendHeader("Access-Control-Allow-Methods", "GET");
  server.send(200, "application/json", response);
}

void handleNotFound()
{
  server.sendHeader("Access-Control-Allow-Origin", "*");
  server.send(404, "application/json", "{\"error\":\"not found\"}");
}

void setup()
{
  Serial.begin(115200);
  delay(2000);
  Serial.println();
  Serial.println("=== ESP32 DHT22 web server ===");

  dht.begin();

  // Start connecting to WiFi, but DON'T wait for it here. The sensor must
  // keep working even with no network, so WiFi connects in the background and
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
}

void loop()
{
  // 1. Read sensor on a timer (don't block), with or without WiFi.
  if (millis() - lastReadMs >= READ_INTERVAL_MS)
  {
    lastReadMs = millis();
    float h = dht.readHumidity();
    float t = dht.readTemperature();

    if (!isnan(h) && !isnan(t))
    {
      cachedHumidity = h;
      cachedTempC = t;
      lastSuccessMs = millis();
    }
    // If a read fails, keep serving the last good value rather than NaN
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