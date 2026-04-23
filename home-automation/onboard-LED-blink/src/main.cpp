#include <Arduino.h>

#define LED_BUILTIN 2

void setup() {
  Serial.begin(115200);
  delay(1000);  // give the serial monitor a moment
  Serial.println("ESP32 blink test starting");
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  Serial.println("LED ON");
  delay(500);
  digitalWrite(LED_BUILTIN, LOW);
  Serial.println("LED OFF");
  delay(500);
}
