---
layout: default
title: Worksheet
workshop: Home Automation with ESP32
section: Student Handouts
print_friendly: true
---

# Home Automation with ESP32 Mission Worksheet

Use this sheet to capture notes, plan your wiring, and track what you learned
today. No perfect answers needed.

## 1) Warm-Up

- One thing in my home I wish was smarter: <span class="blank-line"></span>
- The three pieces of a "smart" thing are sensor, brain, and: <span class="blank-line-short"></span>

## 2) Meet the Hardware

Match each part to its job:

- ESP32: <span class="blank-line-long"></span>
- DHT22: <span class="blank-line-long"></span>
- RGB LED: <span class="blank-line-long"></span>

## 3) Mission 1: Blink

Goal: get the onboard LED blinking.

- The onboard LED is on GPIO: <span class="blank-line-short"></span>
- I saw it blink (check one): &nbsp; Yes ☐ &nbsp; Not yet ☐
- If it didn't upload, the thing I checked first was: <span class="blank-line"></span>

## 4) Mission 2: Read the Sensor

Goal: see real humidity and temperature in the Serial Monitor.

Fill in your wiring:

- DHT22 VCC → <span class="blank-line-short"></span>
- DHT22 DATA → GPIO <span class="blank-line-short"></span>
- DHT22 GND → <span class="blank-line-short"></span>
- Pull-up resistor value: <span class="blank-line-short"></span>

My first reading: humidity <span class="blank-line-short"></span> % &nbsp; temperature <span class="blank-line-short"></span>

<div class="page-break-after"></div>

## 5) Mission 3: Color Logic

Goal: the LED changes color with humidity.

Write the color you chose for each range:

- Below 30 % (very dry): <span class="blank-line-short"></span>
- 30–50 % (dry side): <span class="blank-line-short"></span>
- 50–70 % (comfortable): <span class="blank-line-short"></span>
- Above 70 % (very humid): <span class="blank-line-short"></span>

My LED wiring (each color leg needs a resistor):

- Red leg → 220 Ω → GPIO <span class="blank-line-short"></span>
- Green leg → 220 Ω → GPIO <span class="blank-line-short"></span>
- Blue leg → 220 Ω → GPIO <span class="blank-line-short"></span>
- Longest leg (common cathode) → <span class="blank-line-short"></span>

Test: I breathed on the sensor and the color changed. &nbsp; Yes ☐ &nbsp; Not yet ☐

## 6) If Time: Make It Mine

Pick one and describe it:

- The change I made: <span class="blank-line"></span>
- What it does now: <span class="blank-line"></span>

## 7) Debugging Checklist

If something breaks, I will:

- Read the message in the Serial Monitor
- Check every wire against the diagram (power, ground, data)
- Check that each LED leg has its resistor
- Make one small change, then test again
