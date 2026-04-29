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

  // Connect to WiFi
  Serial.printf("Connecting to WiFi: %s\n", WIFI_SSID);
  WiFi.mode(WIFI_STA);
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);

  unsigned long wifiStart = millis();
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
    if (millis() - wifiStart > 30000)
    {
      Serial.println("\nWiFi connect timeout. Restarting.");
      ESP.restart();
    }
  }
  Serial.println();
  Serial.print("Connected. IP address: ");
  Serial.println(WiFi.localIP());
  Serial.print("MAC address: ");
  Serial.println(WiFi.macAddress());

  // Register HTTP handlers
  server.on("/api/sensor", HTTP_GET, handleSensor);
  server.onNotFound(handleNotFound);
  server.begin();
  Serial.println("HTTP server started on port 80");
  Serial.print("Try: http://");
  Serial.print(WiFi.localIP());
  Serial.println("/api/sensor");
}

void loop()
{
  server.handleClient();

  // Read sensor on a timer (don't block the HTTP server)
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
}