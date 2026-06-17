#include <Arduino.h>

// ===========================================================================
// Interactive Serial RGB control
// ---------------------------------------------------------------------------
// Type a command into the Serial Monitor and the RGB LED changes color.
// You can use a color name (red, green, blue, ...) OR three numbers like
// 255,128,0 to mix your own color. Type "help" to see the menu again.
//
// No sensor, no WiFi -- just you, the Serial Monitor, and the LED.
// ===========================================================================

// ---- RGB LED (common cathode) ----
// Same wiring as the dht22-and-rgb project: R -> GPIO 18, G -> GPIO 19,
// B -> GPIO 23, common (longest) leg -> GND, each color through a 220 ohm
// resistor.
#define PIN_R 18
#define PIN_G 19
#define PIN_B 23
#define PWM_FREQ 5000    // 5 kHz, well above visible flicker
#define PWM_RESOLUTION 8 // 8-bit: values 0-255

// LEDC channels (Arduino-ESP32 v2.x API: one channel per LED color)
#define CH_R 0
#define CH_G 1
#define CH_B 2

// Send all three color values to the LED at once. 0 = off, 255 = full bright.
void setColor(uint8_t r, uint8_t g, uint8_t b)
{
  ledcWrite(CH_R, r);
  ledcWrite(CH_G, g);
  ledcWrite(CH_B, b);
}

void printMenu()
{
  Serial.println();
  Serial.println("Type a command and press Enter:");
  Serial.println("  Color names: red, green, blue, yellow, cyan,");
  Serial.println("               magenta, white, orange, purple, off");
  Serial.println("  Custom mix:  R,G,B   (three numbers 0-255, e.g. 255,128,0)");
  Serial.println("  help         show this menu again");
  Serial.println();
}

// Try to match the line to a known color name. Returns true and fills r/g/b
// on a match, false if the name is not recognized.
bool matchNamedColor(const String &name, uint8_t &r, uint8_t &g, uint8_t &b)
{
  if (name == "red")     { r = 255; g = 0;   b = 0;   return true; }
  if (name == "green")   { r = 0;   g = 255; b = 0;   return true; }
  if (name == "blue")    { r = 0;   g = 0;   b = 255; return true; }
  // Yellow/orange are red-biased to offset the green channel's extra brightness.
  if (name == "yellow")  { r = 255; g = 200; b = 0;   return true; }
  if (name == "orange")  { r = 255; g = 90;  b = 0;   return true; }
  if (name == "cyan")    { r = 0;   g = 255; b = 255; return true; }
  if (name == "magenta") { r = 255; g = 0;   b = 255; return true; }
  if (name == "purple")  { r = 130; g = 0;   b = 255; return true; }
  if (name == "white")   { r = 255; g = 255; b = 255; return true; }
  if (name == "off")     { r = 0;   g = 0;   b = 0;   return true; }
  return false;
}

// Try to read an "R,G,B" triple like "255,128,0". Returns true and fills
// r/g/b (each clamped to 0-255) on success.
bool parseRgbTriple(const String &line, uint8_t &r, uint8_t &g, uint8_t &b)
{
  int firstComma = line.indexOf(',');
  int secondComma = line.indexOf(',', firstComma + 1);
  if (firstComma < 0 || secondComma < 0)
  {
    return false; // need exactly two commas
  }

  String rStr = line.substring(0, firstComma);
  String gStr = line.substring(firstComma + 1, secondComma);
  String bStr = line.substring(secondComma + 1);
  rStr.trim();
  gStr.trim();
  bStr.trim();

  if (rStr.length() == 0 || gStr.length() == 0 || bStr.length() == 0)
  {
    return false;
  }

  r = (uint8_t)constrain(rStr.toInt(), 0, 255);
  g = (uint8_t)constrain(gStr.toInt(), 0, 255);
  b = (uint8_t)constrain(bStr.toInt(), 0, 255);
  return true;
}

// Handle one line of input from the Serial Monitor.
void handleCommand(String line)
{
  line.trim();
  if (line.length() == 0)
  {
    return; // ignore blank lines (e.g. a stray Enter)
  }

  if (line.equalsIgnoreCase("help") || line == "?")
  {
    printMenu();
    return;
  }

  uint8_t r, g, b;

  String lower = line;
  lower.toLowerCase();
  if (matchNamedColor(lower, r, g, b))
  {
    setColor(r, g, b);
    Serial.printf("Set RGB LED to %s (%d, %d, %d)\n", lower.c_str(), r, g, b);
    return;
  }

  if (parseRgbTriple(line, r, g, b))
  {
    setColor(r, g, b);
    Serial.printf("Set RGB LED to (%d, %d, %d)\n", r, g, b);
    return;
  }

  Serial.printf("Sorry, I didn't understand \"%s\". Type \"help\" for options.\n",
                line.c_str());
}

void setup()
{
  Serial.begin(115200);
  delay(2000);
  Serial.println();
  Serial.println("=== Interactive Serial RGB ===");

  ledcSetup(CH_R, PWM_FREQ, PWM_RESOLUTION);
  ledcSetup(CH_G, PWM_FREQ, PWM_RESOLUTION);
  ledcSetup(CH_B, PWM_FREQ, PWM_RESOLUTION);
  ledcAttachPin(PIN_R, CH_R);
  ledcAttachPin(PIN_G, CH_G);
  ledcAttachPin(PIN_B, CH_B);

  // Quick channel test: cycle R, G, B at startup so you can verify wiring.
  Serial.println("Self-test: red, green, blue");
  setColor(255, 0, 0);
  delay(500);
  setColor(0, 255, 0);
  delay(500);
  setColor(0, 0, 255);
  delay(500);
  setColor(0, 0, 0); // start with the LED off

  printMenu();
}

// Characters you've typed so far, collected until you press Enter.
String inputBuffer = "";

void loop()
{
  // Read the Serial Monitor one character at a time. We collect characters
  // into inputBuffer and only act when you press Enter. This (instead of
  // Serial.readStringUntil) means there's no 1-second timeout rushing you,
  // and we echo each key back so you can see what you're typing.
  while (Serial.available() > 0)
  {
    char c = (char)Serial.read();

    if (c == '\n' || c == '\r')
    {
      // Enter pressed: act on the line we've collected.
      if (inputBuffer.length() > 0)
      {
        Serial.println(); // move to a fresh line after the echoed text
        handleCommand(inputBuffer);
        inputBuffer = "";
      }
    }
    else if (c == '\b' || c == 127) // backspace or delete
    {
      if (inputBuffer.length() > 0)
      {
        inputBuffer.remove(inputBuffer.length() - 1);
        Serial.print("\b \b"); // erase the last character on screen
      }
    }
    else
    {
      inputBuffer += c;
      Serial.print(c); // echo the key so you can see what you're typing
    }
  }
}
