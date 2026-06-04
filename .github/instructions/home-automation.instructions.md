---
applyTo: "home-automation/**"
---

# Home Automation Workshop — AI Agent Context

This file provides context for AI agents working with files inside `home-automation/` or any of its subfolders.

## What This Workshop Is

A **4-hour camp** teaching students ages 12–14 to build a **humidity-to-color LED display** using an ESP32 microcontroller. The LED color is driven by **humidity by default** — students change it instantly by breathing on the sensor, which is the easiest, most visible cause-and-effect for the room; temperature is a one-line alternate mode. Students wire the circuit themselves on a breadboard and write C++ firmware using the Arduino framework via PlatformIO. The finished project runs off USB power and students take it home.

- 20 students per session; same content runs twice (morning + afternoon)
- No prior electronics or programming experience required
- Success = every student has a working, wired circuit they understand

## Hardware

| Component       | Details                                                                                             |
| --------------- | --------------------------------------------------------------------------------------------------- |
| Microcontroller | Elegoo ESP32 DevKit V1, Type-C (ESP-WROOM-32, DOIT 30-pin style)                                    |
| Sensor          | DHT22 / AM2302 **bare 4-pin** sensor (no built-in pull-up; requires external 10 kΩ pull-up on DATA) |
| Indicator       | 5 mm RGB LED, **common cathode**                                                                    |
| Resistors       | 3 × 10k Ω (one per LED color channel) + 1 × 10 kΩ (DHT22 DATA pull-up)                              |
| Other           | Half-size breadboard, jumper wires, USB-C cable                                                     |

**Pin assignments:**

| Signal      | GPIO |
| ----------- | ---- |
| DHT22 DATA  | 4    |
| RGB Red     | 25   |
| RGB Green   | 26   |
| RGB Blue    | 27   |
| Onboard LED | 2    |

**Avoid:** GPIO 6–11 (SPI flash), GPIO 34/35/36/39 (input-only), strapping pins (0, 2, 5, 12, 15) for sensor data lines.

## Firmware

- **Toolchain:** PlatformIO + Arduino framework for ESP32
- **Board:** `espressif32` platform, `az-delivery-devkit-v4` or `esp32dev` board
- **DHT22 library:** `adafruit/DHT sensor library` + `Adafruit Unified Sensor` (preferred); alternative: `beegee-tokyo/DHT sensor library for ESPx`
- **RGB LED PWM:** ESP32 LEDC peripheral via `ledcSetup()` / `ledcAttachPin()` / `ledcWrite()`, or `analogWrite()` in recent Arduino-ESP32 cores (both acceptable)
- **Serial baud rate:** 115200

### Project goal: humidity-to-color mapping (default)

```
Below 30 % RH → Red    (R=255, G=0,   B=0)    very dry
30–50 % RH    → Yellow (R=255, G=255, B=0)    dry side
50–70 % RH    → Green  (R=0,   G=255, B=0)    comfortable
Above 70 % RH → Blue   (R=0,   G=0,   B=255)  very humid
```

Humidity is the default because students can change it instantly by breathing on the sensor. A one-line switch (`COLOR_SOURCE`) drives the color from **temperature** instead:

```
Below 18 °C → Blue   (R=0,   G=0,   B=255)
18–23 °C    → Green  (R=0,   G=255, B=0)
23–28 °C    → Yellow (R=255, G=255, B=0)
Above 28 °C → Red    (R=255, G=0,   B=0)
```

Students can customize these thresholds and colors. Smooth fading between ranges is an extension for early finishers.

## Existing Starter Code

- `home-automation/onboard-LED-blink/` — PlatformIO project: blinks the onboard LED on GPIO 2; used to verify upload works before any external wiring
- `home-automation/random-blink/` — PlatformIO project: random blink pattern; useful for demonstrating loops/randomness

Both are complete PlatformIO projects with `platformio.ini` and `src/main.cpp`.

## Content Conventions

- Target audience is **12–14 year olds**; keep code comments friendly and explain the "why"
- Prefer short, clear variable names over terse ones (e.g., `redValue` not `rv`)
- Every code segment shown to students should compile and upload without modification
- The "Lansing Techster" robot persona is the peer-learner guide — use it for encouraging language, not lecturing
- Tone: "Cut scope before cutting confidence," "Momentum over perfection"
- Printed materials: max 6 sheets, 14pt+ font, grayscale-friendly

## Site Structure

This workshop follows the standard Lansing Tech Studio Jekyll layout:

```
home-automation/
├── index.md                        # Overview, goals, 4-hour agenda
├── hardware.md                     # Hardware reference (BOM, pins, wiring)
├── onboard-LED-blink/              # PlatformIO starter project
├── random-blink/                   # PlatformIO starter project
├── resources/
│   ├── glossary.md
│   └── next-steps.md
├── student-handouts/
│   ├── vocabulary.md
│   └── worksheet.md
└── instructor-notes/
    ├── common-questions.md
    └── timing-guide.md
```

Markdown files use Jekyll front matter (`layout: default`, `workshop: Home Automation with ESP32`). Trailing backslash (`\`) on a line produces a `<br>` in Kramdown — use it for metadata blocks and fill-in-the-blank items.

## What "Good" Looks Like

A complete code listing for the final project should:

1. Include the DHT22 library and define `DHT dht(4, DHT22)`
2. Set up three LEDC channels (or use `analogWrite`) for GPIO 25, 26, 27
3. Read humidity (and temperature) in the `loop()` with appropriate error handling for NaN
4. Call a `setColor(r, g, b)` helper that writes PWM values to all three channels
5. Map humidity ranges to RGB values by default (students customize the ranges); temperature mapping is the alternate mode
6. Print humidity + color name to Serial at 115200 baud
