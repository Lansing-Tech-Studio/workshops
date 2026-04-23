#include <Arduino.h>

#define LED_BUILTIN 2

void setup()
{
  Serial.begin(115200);
  pinMode(LED_BUILTIN, OUTPUT);
  randomSeed(analogRead(0));
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(random(500, 3001));
  digitalWrite(LED_BUILTIN, LOW);
  delay(random(500, 3001));
}
