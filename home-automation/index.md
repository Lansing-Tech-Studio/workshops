---
layout: default
title: Home Automation with ESP32
tagline: Build a humidity-to-color LED display with a real ESP32 microcontroller — no experience needed.
preview: |
  **What you'll build:** Wire a DHT22 sensor and RGB LED on a breadboard, write C++ firmware, and watch your LED change color with the room's humidity — breathe on the sensor and watch the color shift instantly.

  **You'll walk away knowing how to:**
  - Wire a circuit on a breadboard
  - Upload code to a microcontroller
  - Read sensor data and drive an LED with PWM
---

# Home Automation with ESP32 - 4 Hour Camp

**Audience:** Students ages 14-18, no prior electronics experience required \
**Format:** 4-hour camp session (same content runs twice: morning and afternoon) \
**Group size:** 20 students per session \
**Theme:** _"Your first real hardware project — code something you can feel, see, and take home"_

- [Slides]({{ site.baseurl }}/home-automation/slides.html)
- Resources:
  - [Glossary]({{ site.baseurl }}/home-automation/resources/glossary)
  - [Next Steps]({{ site.baseurl }}/home-automation/resources/next-steps)
  - [Hardware Reference]({{ site.baseurl }}/home-automation/hardware)
- Student Handouts:
  - [Vocabulary Handout]({{ site.baseurl }}/home-automation/student-handouts/vocabulary)
  - [Worksheet]({{ site.baseurl }}/home-automation/student-handouts/worksheet)
- Instructor Notes:
  - [Common Questions]({{ site.baseurl }}/home-automation/instructor-notes/common-questions)
  - [Timing Guide]({{ site.baseurl }}/home-automation/instructor-notes/timing-guide)
- Starter Code:
  - [LED Blink]({{ site.baseurl }}/home-automation/onboard-LED-blink/)
  - [Random Blink]({{ site.baseurl }}/home-automation/random-blink/)
  - [DHT22 + RGB (full project)]({{ site.baseurl }}/home-automation/dht22-and-rgb/)

## 1. Workshop Goals

By the end of this camp, every student should be able to:

- Explain what a microcontroller is and how it differs from a regular computer
- Wire a simple circuit on a breadboard without help
- Upload code to an ESP32 using PlatformIO
- Read a humidity (and temperature) value from a DHT22 sensor in code
- Drive an RGB LED with PWM to mix colors
- Describe what "home automation" means and give real-world examples
- Take home a working humidity-to-color display they built themselves

## 2. The Project

Students build a **humidity-to-color display**: a DHT22 reads the room's humidity (and temperature), and an RGB LED changes color based on the reading. The firmware drives the color from **humidity by default** — because students can change it instantly by breathing on the sensor, which makes the cause-and-effect obvious and keeps the room engaged. A one-line switch drives the color from **temperature** instead for anyone who wants to try it. The finished circuit fits on a single half-size breadboard and runs off a USB power bank, so students can take it home.

### Color mapping (starting points — students can customize)

**Humidity-driven (default in [`dht22-and-rgb/`]({{ site.baseurl }}/home-automation/dht22-and-rgb/)):**

| Humidity (% RH) | LED color | Vibe        |
| --------------- | --------- | ----------- |
| Below 30 %      | Red       | Very dry    |
| 30–50 %         | Yellow    | Dry side    |
| 50–70 %         | Green     | Comfortable |
| Above 70 %      | Blue      | Very humid  |

**Temperature-driven (alternate mode):**

| Temperature         | LED color |
| ------------------- | --------- |
| Below 18 °C (64 °F) | Blue      |
| 18–23 °C (64–73 °F) | Green     |
| 23–28 °C (73–82 °F) | Yellow    |
| Above 28 °C (82 °F) | Red       |

## 3. Success Definition

A student is successful if they can say:

> "I wired this myself, I uploaded my own code, and it works. I know what each part does."

The circuit working is the floor, not the ceiling. Students who finish early can customize their color ranges, add Serial output, or explore adding WiFi.

## 4. Hardware

See [hardware.md]({{ site.baseurl }}/home-automation/hardware) for full details, pin assignments, wiring diagrams, and component notes.

**Each student station needs:**

- 1 × Elegoo ESP32 DevKit V1 (Type-C)
- 1 × DHT22 / AM2302 **bare 4-pin** sensor
- 1 × 5 mm RGB LED, common cathode (4-pin)
- 3 × 220 Ω resistors (one per LED color channel)
- 1 × 10 kΩ resistor (DHT22 DATA pull-up)
- 1 × 400-hole half-size breadboard
- 7 × male-to-male Dupont jumper wires
- 1 × USB-C cable (data + power for programming; just power if using a USB power bank at home)
- Laptop with PlatformIO + VS Code installed

**Per-room supplies:**

- Extra resistors, LEDs, and jumper wires (spares for mistakes)
- Printed wiring diagram at each station
- Instructor demo station visible from all seats

## 5. Software Setup

Students need the following installed **before camp day** (or arrive 30 min early):

- [VS Code](https://code.visualstudio.com/)
- [PlatformIO IDE extension](https://platformio.org/install/ide?install=vscode) for VS Code
  - Alternatively, can use [PlatformIO Core (CLI)](https://platformio.org/install/cli) if preferred
- USB driver for CP210x (Windows and some Mac users)

Instructors should test uploads on each laptop the day before camp if possible.

## 6. Camp Agenda

Total time: **4 hours (240 minutes)**

| Time          | Segment                                                     | Duration   |
| ------------- | ----------------------------------------------------------- | ---------- |
| 0:00–0:20     | Welcome, icebreaker, goal demo                              | 20 min     |
| 0:20–0:45     | What is home automation? Concepts + real examples           | 25 min     |
| 0:45–1:10     | Meet the hardware: ESP32, breadboard basics, circuit safety | 25 min     |
| 1:10–1:45     | Build the blink circuit + upload first code                 | 35 min     |
| **1:45–2:00** | **Break**                                                   | **15 min** |
| 2:00–2:30     | Wire and read the DHT22 sensor                              | 30 min     |
| 2:30–3:05     | Add the RGB LED + write the color logic                     | 35 min     |
| 3:05–3:30     | Integration: combine everything, debug together             | 25 min     |
| **3:30–3:40** | **Break**                                                   | **10 min** |
| 3:40–3:55     | Personalization: customize color ranges or add features     | 15 min     |
| 3:55–4:00     | Show and tell, take-home prep, wrap-up                      | 5 min      |

## 7. Segment Breakdown

### 0:00–0:20 — Welcome & Goal Demo

Show the finished project running — LED changing color as you hold the sensor. Let students ask questions before explaining anything. Set the tone: "You're going to build exactly this today."

- Icebreaker: "Name one thing in your home you wish was smarter or automated."
- Briefly introduce "Lansing Techster" as a curious co-builder.
- Point out the hardware at each station; don't let students start wiring yet.

### 0:20–0:45 — What Is Home Automation?

Slide-driven but interactive. Ask questions; don't just lecture.

- Real examples: smart thermostats, Philips Hue, motion-sensor lights, door locks
- What makes something "smart"? (sensors + logic + output)
- Where does the ESP32 fit? (tiny, cheap, programmable)
- Introduce the three pieces of today's project: sensor (DHT22) → brain (ESP32) → output (RGB LED)

### 0:45–1:10 — Meet the Hardware

Hands-on but guided. Students handle components and follow along as you explain each one.

- Breadboard anatomy: rows, columns, power rails, why no soldering needed
- ESP32: point out the USB port, GPIO pins, onboard LED (GPIO 2)
- DHT22 module: the three pins, why it needs power, ground, and data
- RGB LED: four legs, common cathode, which leg is which
- Resistors: why they matter, how to read color bands (quick version)
- **Safety rules**: don't connect/disconnect power while wiring; check your work before plugging in

### 1:10–1:45 — Build the Blink Circuit

Students wire the onboard LED blink circuit from the printed diagram and upload the starter code from `onboard-LED-blink/`.

- Walk through PlatformIO: open project, `platformio.ini`, `src/main.cpp`
- Upload together; watch Serial Monitor for "LED ON / LED OFF"
- **Milestone check**: every student should see the onboard LED blinking before moving on
- Common issues: wrong COM port, driver not installed, serial monitor baud rate

### 2:00–2:30 — DHT22 Sensor (after break)

Add the DHT22 to the existing circuit (it can share the breadboard). No RGB LED yet.

- Wire: VCC → 3V3, GND → GND, DATA → GPIO 4, plus a **10 kΩ pull-up between DATA and 3V3** (the bare 4-pin sensor has no built-in pull-up). Leave the NC pin unconnected.
- Walk through the library setup in `platformio.ini`
- Live-code reading temperature + humidity in the Serial Monitor
- **Milestone check**: every student sees real temperature/humidity numbers printing
- Discuss: what would you do with this data? thermostat? weather station?

### 2:30–3:05 — RGB LED + Color Logic

Add the RGB LED circuit (three resistors, three GPIO pins). Write the color-mapping function together.

- Wire: R → 220 Ω → GPIO 18, G → 220 Ω → GPIO 19, B → 220 Ω → GPIO 23, cathode (longest leg) → GND
- Introduce `ledcSetup` / `ledcAttachPin` / `ledcWrite` (LEDC PWM) for color mixing
- Test each channel individually first (red only, green only, blue only) — the firmware's startup self-test cycles R → G → B for exactly this reason
- Introduce the humidity (default) and temperature thresholds and color mapping
- Write `setColor(r, g, b)` helper together
- **Milestone check**: LED changes color when you breathe on the sensor (humidity mode) or warm it with your hand (temperature mode; less sensitive)

### 3:05–3:30 — Integration + Debugging

Combine the DHT22 read with the color logic in one `loop()`.

- Students who finish fast: encourage exploring intermediate colors (orange between red and yellow)
- Common bugs: wrong pin numbers, cathode vs anode confusion, library not installed, DHT read returning NaN
- Walk the room; don't fix bugs for students — ask guiding questions

### 3:40–3:55 — Personalization

Students customize something about their project:

- Adjust the humidity (or temperature) thresholds to match their preference
- Add a slow color fade instead of instant switch
- Print a custom status message to Serial (e.g., "Brendon's room: HUMID")
- Experiment with mixed colors (orange, purple, teal)

### 3:55–4:00 — Wrap-Up

- Quick show-and-tell: a few students demonstrate their project
- Explain how to keep the project running at home (USB power bank)
- Point to next steps resources
- Hand out any printed reference cards

## 8. Instructor Logistics (Two Sessions)

**Morning session prep (before students arrive):**

- Verify every laptop has PlatformIO and can upload to an ESP32
- Pre-load the starter project on each laptop so students don't spend time cloning
- Set out hardware kits at each station with a printed wiring diagram
- Test your own demo circuit is working

**Between sessions (turnaround ~30 min):**

- Collect any hardware left behind
- Restock any blown LEDs or missing resistors
- Reset demo station if anything was modified
- Quick mental debrief: what questions came up? adjust pacing if needed

**Energy management across both sessions:**

- Morning groups are usually sharper; afternoon groups sometimes need more energy from instructors
- The break segments are non-negotiable — hardware fatigue is real
- Keep the "show the goal first" demo for both sessions; it anchors motivation

## 9. Differentiation

**Students who finish early:**

- Add smooth color fading (interpolate between colors using PWM values)
- Add a WiFi connection and POST humidity data to a free webhook (e.g., webhook.site)
- Display humidity on the Serial plotter instead of monitor

**Students who struggle:**

- Pair with a neighbor or have a pre-wired "fast start" circuit ready
- Focus on getting the blink working; the DHT22 + LED can be a demo they watch
- Cut scope before cutting confidence — a working blink is a win

## 10. Materials Checklist

- [ ] Hardware kits assembled and counted (20 per session + 5 spares)
- [ ] Printed wiring diagrams (one per station, laminated if possible)
- [ ] Printed vocabulary handouts
- [ ] Laptops charged and software verified
- [ ] Instructor demo station assembled and tested
- [ ] USB power banks for take-home use (optional but great)
- [ ] Ziploc bags for students to take hardware home
