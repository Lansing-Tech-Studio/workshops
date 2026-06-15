---
layout: default
title: Timing Guide
workshop: Home Automation with ESP32
section: Instructor Notes
---

# Home Automation with ESP32 Timing Guide (4 hours / 240 minutes)

**Audience**: students ages 14-18, no prior electronics experience required. \
**Format**: 4-hour camp session (same content runs morning and afternoon). \
**Goal**: every student wires, codes, and takes home a working humidity-to-color display. \
**Two breaks are non-negotiable** — hardware fatigue is real.

## 0:00–0:20 — Welcome & Goal Demo

- Show the finished project running; let the LED change as you hold the sensor
- Icebreaker: "Name one thing in your home you wish was smarter."
- Introduce "Lansing Techster" as a curious co-builder
- Point out the kit at each station — **don't let students start wiring yet**

## 0:20–0:45 — What Is Home Automation?

Slide-driven but interactive — ask, don't lecture.

- Real examples: smart thermostats, Philips Hue, motion lights, door locks
- What makes something "smart"? sensors + logic + output
- The three pieces of today's project: sensor (DHT22) → brain (ESP32) → output (RGB LED)

## 0:45–1:10 — Meet the Hardware

Students handle parts and follow along.

- Breadboard anatomy: rows, columns, power rails, why no soldering
- ESP32: USB port, GPIO pins, onboard LED (GPIO 2)
- DHT22: the pins and why it needs power, ground, and data
- RGB LED: four legs, common cathode, which leg is which
- Resistors: why they matter, reading color bands (quick)
- **Safety rules**: never wire while powered; check work before plugging in

## 1:10–1:45 — Build the Blink Circuit

- Walk through PlatformIO: open project, `platformio.ini`, `src/main.cpp`
- Upload together; watch Serial Monitor for "LED ON / LED OFF"
- Common issues: wrong COM port, driver not installed, baud rate
- **Milestone**: every student sees the onboard LED blinking before moving on

## 1:45–2:00 — Break (15 min)

## 2:00–2:30 — DHT22 Sensor

Add the DHT22 to the existing breadboard. No RGB LED yet.

- Wire: VCC → 3V3, GND → GND, DATA → GPIO 4, plus a **10 kΩ pull-up** between DATA and 3V3. Leave NC unconnected.
- Walk through the library setup in `platformio.ini`
- Live-code reading temperature + humidity to the Serial Monitor
- **Milestone**: every student sees real numbers printing
- Discuss: what would you do with this data?

## 2:30–3:05 — RGB LED + Color Logic

Add the LED (three resistors, three GPIOs) and write the color mapping together.

- Wire: R → 220 Ω → GPIO 18, G → 220 Ω → GPIO 19, B → 220 Ω → GPIO 23, cathode (longest leg) → GND
- Introduce LEDC PWM (`ledcSetup` / `ledcAttachPin` / `ledcWrite`)
- Test each channel alone first — the firmware's startup self-test cycles R → G → B for exactly this
- Introduce the humidity thresholds and write `setColor(r, g, b)` together
- **Milestone**: LED changes color when a student breathes on the sensor

## 3:05–3:30 — Integration + Debugging

- Combine the DHT22 read with the color logic in one `loop()`
- Common bugs: wrong pins, cathode/anode confusion, library missing, DHT read returns `nan`
- Walk the room — ask guiding questions, don't fix bugs for students

## 3:30–3:40 — Break (10 min)

## 3:40–3:55 — Personalization

Each student customizes one thing:

- Adjust the thresholds, add a slow fade, print a custom Serial message, or mix new colors
- Students who struggle: focus on a solid working build — that's the win

## 3:55–4:00 — Show & Tell + Wrap-Up

- A few students demo their project
- How to keep it running at home (USB power bank)
- Point to the [Next Steps]({{ site.baseurl }}/home-automation/resources/next-steps) resources; hand out reference cards

## Between sessions (~30 min turnaround)

- Collect stray hardware; restock blown LEDs and missing resistors
- Reset the demo station
- Quick debrief: what questions came up? adjust pacing for the afternoon group
