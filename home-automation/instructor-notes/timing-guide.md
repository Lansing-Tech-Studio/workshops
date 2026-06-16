---
layout: default
title: Timing Guide
workshop: Home Automation with ESP32
section: Instructor Notes
---

# Home Automation with ESP32 Timing Guide

<button type="button" id="brief-toggle" onclick="document.body.classList.toggle('brief')">Toggle abbreviated view</button>

<style>
#brief-toggle {
  margin: 0.5rem 0 1rem;
  padding: 0.5rem 1rem;
  font-size: 1rem;
  cursor: pointer;
  border: 1px solid #888;
  border-radius: 4px;
  background: #f4f4f4;
}
#brief-toggle:hover { background: #e6e6e6; }
body.brief #brief-toggle { background: #d6ebd6; border-color: #4a8; }
.brief-only { display: none; }
body.brief .brief-only { display: block; font-weight: bold; }
body.brief .detail { display: none; }
@media print {
  #brief-toggle { display: none; }
}
</style>

**Audience**: students ages 12-18, no prior electronics experience required. \
**Format**: 4-hour camp session (same content runs morning and afternoon). \
**Goal**: every student wires, codes, and takes home a working humidity-to-color display. \
**Two breaks**: 15 min each.

## 0:00–0:20 — Welcome & Goal Demo

<div class="brief-only" markdown="1">
Demo the finished project, run the icebreaker, intro Techster. **Don't let students wire yet.**
</div>

<div class="detail" markdown="1">
- Show the finished project running; let the LED change as you hold the sensor
- Icebreaker: "Name one thing in your home you wish was smarter."
- Introduce "Lansing Techster" as a curious co-builder
- Point out the kit at each station — **don't let students start wiring yet**
</div>

## 0:20–0:45 — What Is Home Automation?

<div class="brief-only" markdown="1">
Interactive slides: smart = sensors + logic + output. Today: DHT22 → ESP32 → RGB LED.
</div>

<div class="detail" markdown="1">
Slide-driven but interactive — ask, don't lecture.

- Real examples: smart thermostats, Philips Hue, motion lights, door locks
- What makes something "smart"? sensors + logic + output
- The three pieces of today's project: sensor (DHT22) → brain (ESP32) → output (RGB LED)
</div>

## 0:45–1:10 — Meet the Hardware

<div class="brief-only" markdown="1">
Hand out and name the parts: breadboard, ESP32, DHT22, RGB LED, resistors. **Safety: never wire while powered.**
</div>

<div class="detail" markdown="1">
Students handle parts and follow along.

- Breadboard anatomy: rows, columns, power rails, why no soldering
- ESP32: USB port, GPIO pins, onboard LED (GPIO 2)
- DHT22: the pins and why it needs power, ground, and data
- RGB LED: four legs, common cathode, which leg is which
- Resistors: why they matter, reading color bands (quick)
- **Safety rules**: never wire while powered; check work before plugging in
</div>

## 1:10–1:45 — Build the Blink Circuit

<div class="brief-only" markdown="1">
PlatformIO upload; Serial shows "LED ON / LED OFF". **Milestone: onboard LED blinks for everyone.**
</div>

<div class="detail" markdown="1">
- Walk through PlatformIO: open project, `platformio.ini`, `src/main.cpp`
- Upload together; watch Serial Monitor for "LED ON / LED OFF"
- Common issues: wrong COM port, driver not installed, baud rate
- **Milestone**: every student sees the onboard LED blinking before moving on
</div>

## 1:45–2:00 — Break (15 min)

<div class="page-break-after"></div>

## 2:00–2:30 — DHT22 Sensor

<div class="brief-only" markdown="1">
Wire DHT22 (DATA → GPIO 4, 10 kΩ pull-up). Read temp + humidity to Serial. **Milestone: real numbers print.**
</div>

<div class="detail" markdown="1">
Add the DHT22 to the existing breadboard. No RGB LED yet.

- Wire: VCC → 3V3, GND → GND, DATA → GPIO 4, plus a **10 kΩ pull-up** between DATA and 3V3. Leave NC unconnected.
- Walk through the library setup in `platformio.ini`
- Live-code reading temperature + humidity to the Serial Monitor
- **Milestone**: every student sees real numbers printing
- Discuss: what would you do with this data?
</div>

## 2:30–3:05 — RGB LED + Color Logic

<div class="brief-only" markdown="1">
Wire RGB (220 Ω → GPIO 18/19/23, cathode → GND). LEDC PWM + `setColor()`. **Milestone: LED changes when a student breathes on the sensor.**
</div>

<div class="detail" markdown="1">
Add the LED (three resistors, three GPIOs) and write the color mapping together.

- Wire: R → 220 Ω → GPIO 18, G → 220 Ω → GPIO 19, B → 220 Ω → GPIO 23, cathode (longest leg) → GND
- Introduce LEDC PWM (`ledcSetup` / `ledcAttachPin` / `ledcWrite`)
- Test each channel alone first — the firmware's startup self-test cycles R → G → B for exactly this
- Introduce the humidity thresholds and write `setColor(r, g, b)` together
- **Milestone**: LED changes color when a student breathes on the sensor
</div>

## 3:05–3:30 — Integration + Debugging

<div class="brief-only" markdown="1">
Combine the DHT22 read + color logic in one `loop()`. Watch for `nan`, wrong pins, cathode/anode mix-ups. Walk the room.
</div>

<div class="detail" markdown="1">
- Combine the DHT22 read with the color logic in one `loop()`
- Common bugs: wrong pins, cathode/anode confusion, library missing, DHT read returns `nan`
- Walk the room — ask guiding questions, don't fix bugs for students
</div>

## 3:30–3:40 — Break (10 min)

## 3:40–3:55 — Personalization

<div class="brief-only" markdown="1">
Each student customizes one thing; strugglers aim for a solid working build.
</div>

<div class="detail" markdown="1">
Each student customizes one thing:

- Adjust the thresholds, add a slow fade, print a custom Serial message, or mix new colors
- Students who struggle: focus on a solid working build — that's the win
</div>

## 3:55–4:00 — Show & Tell + Wrap-Up

<div class="brief-only" markdown="1">
A few demos, home power tip (USB power bank), hand out reference cards.
</div>

<div class="detail" markdown="1">
- A few students demo their project
- How to keep it running at home (USB power bank)
- Point to the [Next Steps]({{ site.baseurl }}/home-automation/resources/next-steps) resources; hand out reference cards
</div>

## Between sessions (~30 min turnaround)

<div class="brief-only" markdown="1">
Collect stray hardware, restock LEDs/resistors, reset demo station, quick debrief.
</div>

<div class="detail" markdown="1">
- Collect stray hardware; restock blown LEDs and missing resistors
- Reset the demo station
- Quick debrief: what questions came up? adjust pacing for the afternoon group
</div>
