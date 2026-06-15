---
layout: default
title: Next Steps
workshop: Home Automation with ESP32
section: Resources
---

# Next Steps After Home Automation with ESP32

You wired a real circuit and built a humidity-to-color display. Here are good
ways to keep going.

## 1) Upgrade This Project

Pick one small improvement:

- Add a smooth color **fade** between ranges instead of an instant switch (see the [`dht22-and-rgb-smooth/`]({{ site.baseurl }}/home-automation/dht22-and-rgb-smooth/) version)
- Tune the color thresholds to match your room
- Print a custom status message to the Serial Monitor (e.g. "HUMID")
- Switch the LED to read **temperature** instead of humidity (a one-line change)
- Mix new colors — orange, purple, teal — by combining channels

## 2) Add Something New

When you're ready for a bigger challenge:

- Connect the ESP32 to **WiFi** and POST your humidity reading to a free webhook (try <https://webhook.site>)
- Add a second sensor (light, motion, or a button)
- Log readings over time and graph them with the Serial Plotter
- Add a buzzer or a small display

## 3) Learn More

- Random Nerd Tutorials (great ESP32 beginner guides): <https://randomnerdtutorials.com/>
- ESP32 DevKit V1 pinout reference: <https://wiki.elegoo.com/oshw-getting-started-kits/first-look-esp32>
- PlatformIO docs: <https://docs.platformio.org/>
- DHT22 / AM2302 datasheet: search "Aosong AM2302 datasheet"
- The full [Hardware Reference]({{ site.baseurl }}/home-automation/hardware) for this project (pins, wiring, parts)

## 4) Keep It Running at Home

- Power the board from a **USB power bank** — no laptop needed
- The code is already on the ESP32, so it runs the moment it gets power
- Put it somewhere you'll notice the color change (bathroom, kitchen, plant shelf)

Rule: keep each upgrade small enough to finish in one sitting.
