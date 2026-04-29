#include <Arduino.h>
#include <DHT.h>

#define DHTPIN 4
#define DHTTYPE DHT22

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200);
  delay(2000);  // Give the DHT22 time to stabilize after power-on (datasheet says ~1s)
  Serial.println();
  Serial.println("=== DHT22 test starting ===");
  Serial.print("Using GPIO: ");
  Serial.println(DHTPIN);
  dht.begin();
  delay(1000);  // Extra settle time before first read
}

void loop() {
  delay(2500);  // DHT22 minimum is 2s between reads; give some margin

  float humidity = dht.readHumidity();
  float tempC = dht.readTemperature();

  if (isnan(humidity) && isnan(tempC)) {
    Serial.println("Both reads failed (NaN) — likely wiring or pull-up issue");
  } else if (isnan(humidity)) {
    Serial.println("Humidity NaN, temp OK — unusual, suspect timing");
  } else if (isnan(tempC)) {
    Serial.println("Temp NaN, humidity OK — unusual, suspect timing");
  } else {
    Serial.print("OK  H: ");
    Serial.print(humidity);
    Serial.print("%  T: ");
    Serial.print(tempC);
    Serial.println(" C");
  }
}