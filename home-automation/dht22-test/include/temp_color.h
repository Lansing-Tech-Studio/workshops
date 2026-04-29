#pragma once

// Holds red, green, and blue brightness values (0–255 each).
struct Color
{
  int red;
  int green;
  int blue;
};

// Map a temperature in Celsius to an RGB color.
//
// Below 18 °C  → Blue   (cold)
// 18 – 23 °C   → Green  (comfortable)
// 23 – 28 °C   → Yellow (warm)
// Above 28 °C  → Red    (hot)
//
// Students can change the thresholds and colors to customize their project!
inline Color getColorForTemp(float tempC)
{
  if (tempC < 18.0f)
  {
    return {0, 0, 255}; // Blue
  }
  else if (tempC < 23.0f)
  {
    return {0, 255, 0}; // Green
  }
  else if (tempC < 28.0f)
  {
    return {255, 255, 0}; // Yellow
  }
  else
  {
    return {255, 0, 0}; // Red
  }
}

// Map a relative humidity percentage (0–100) to an RGB color.
//
// Below 30 %   → Red    (too dry)
// 30 – 60 %    → Green  (comfortable)
// 60 – 70 %    → Yellow (humid)
// 70 % and up  → Blue   (very humid / muggy)
//
// Students can change the thresholds and colors to customize their project!
inline Color getColorForHumidity(float humidity)
{
  if (humidity < 30.0f)
  {
    return {255, 0, 0}; // Red
  }
  else if (humidity < 60.0f)
  {
    return {0, 255, 0}; // Green
  }
  else if (humidity < 70.0f)
  {
    return {255, 255, 0}; // Yellow
  }
  else
  {
    return {0, 0, 255}; // Blue
  }
}
