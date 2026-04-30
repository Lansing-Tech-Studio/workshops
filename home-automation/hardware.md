# Hardware Reference

Technical details for the ESP32 temperature-to-color project.

**Project goal:** A DHT22 reads temperature and humidity; an RGB LED displays a color coded by the current temperature.

## Built circuit (source of truth: [`dht22-and-rgb/`]({{ site.baseurl }}/home-automation/dht22-and-rgb/))

- 1 × RGB LED, 1 × DHT22 share a single **400-hole half-size breadboard**
- DHT22 is the **bare 4-pin AM2302** variant (no built-in pull-up; an external 10 kΩ pull-up on the DATA line is required)
- LED and DHT22 are pushed directly into the breadboard (no extension wires)
- All three LED channels use **220 Ω** resistors (safe for every channel; green/blue run a bit dim — see _LED brightness trade-off_ below)
- **7 male-to-male Dupont jumpers** connect the ESP32 to the breadboard rails and signals
- PWM (ESP32 LEDC peripheral) drives all three LED channels so color mixing and fades are possible
- USB-C from the dev machine provides power

A reference schematic is published on Cirkit Designer: <https://app.cirkitdesigner.com/project/03023476-8be4-4019-81a9-b4774ba130f9>. The schematic shows extension wires on the LED and DHT22 to keep the diagram readable; the physical build seats both components directly in the breadboard.

## Bill of Materials

| Component       | Part                               | Notes                                                         |
| --------------- | ---------------------------------- | ------------------------------------------------------------- |
| Microcontroller | Elegoo ESP32 DevKit V1, Type-C     | ESP-WROOM-32 module, 30-pin DOIT-style, onboard LED on GPIO 2 |
| Sensor          | DHT22 / AM2302 bare sensor (4-pin) | 3.3 V or 5 V tolerant; **no** built-in pull-up                |
| Indicator       | 5 mm RGB LED, **common cathode**   | 4 leads: R, GND (longest), G, B                               |
| Resistors       | 3 × 220 Ω (¼ W)                    | One per LED color channel                                     |
| Pull-up         | 1 × 10 kΩ (¼ W)                    | Between DHT22 DATA and 3V3                                    |
| Breadboard      | 1 × 400-hole half-size             | Holds both the DHT22 and the RGB LED                          |
| Jumpers         | 7 × male-to-male Dupont wires      | ESP32 → breadboard for power, ground, and 4 signals           |
| Power           | USB-C cable to laptop              | ESP32 USB typically supplies up to 500 mA                     |

## Pin Assignments

These match the firmware in [`dht22-and-rgb/src/main.cpp`]({{ site.baseurl }}/home-automation/dht22-and-rgb/src/main.cpp). They were chosen because they sit physically next to each other on the Elegoo DevKit V1 board, none are strapping or input-only pins, and none collide with UART0 (used for upload / Serial Monitor).

| Signal      | ESP32 GPIO  | Why this pin                                                           |
| ----------- | ----------- | ---------------------------------------------------------------------- |
| DHT22 DATA  | **GPIO 4**  | General-purpose, no boot/strapping conflicts                           |
| RGB Red     | **GPIO 18** | PWM-capable (LEDC), no strapping conflicts; physically adjacent to G/B |
| RGB Green   | **GPIO 19** | PWM-capable (LEDC), no strapping conflicts                             |
| RGB Blue    | **GPIO 23** | PWM-capable (LEDC), no strapping conflicts                             |
| DHT22 VCC   | **3V3 pin** | DHT22 works fine at 3.3 V                                              |
| DHT22 GND   | **GND**     |                                                                        |
| RGB cathode | **GND**     | Common cathode = tie to ground                                         |

GPIO 25, 26, and 27 are also safe and PWM-capable (and 25/26 add DAC); they're a fine alternate layout if a future build prefers them.

## Wiring

**RGB LED (common cathode, 4 leads left-to-right on most 5 mm packages: R, GND, G, B — the longest lead is the cathode/GND):**

```text
GPIO 18 ── [220 Ω] ── Red leg
GND       ───────── Common cathode (longest leg)
GPIO 19 ── [220 Ω] ── Green leg
GPIO 23 ── [220 Ω] ── Blue leg
```

_Always put the resistor in series with each color leg — never between the cathode and GND, or the channels will fight each other._

**DHT22 / AM2302 bare sensor (4 pins, left-to-right with the vented side facing you: VCC, DATA, NC, GND):**

```text
VCC  ── 3V3
DATA ── GPIO 4  AND  [10 kΩ] ── 3V3  (pull-up)
NC   ── (leave unconnected)
GND  ── GND
```

The bare sensor has no built-in pull-up on DATA — the 10 kΩ resistor between DATA and VCC is required or you will get read errors. The third pin is "NC" (no connect); skip it on the breadboard.

## ESP32 Pin Caveats (why certain pins are avoided)

- **GPIO 6–11** are wired to the onboard SPI flash — **do not use.**
- **Strapping pins** (0, 2, 5, 12, 15) affect boot mode. Safe to use for outputs _after_ boot, but avoid for sensors that pull the line at power-on. We're steering clear of them here.
- **GPIO 34, 35, 36, 39** are **input-only** (no internal pull-up either). Fine for sensors, never for driving an LED.
- **GPIO pins are NOT 5 V tolerant.** Do not feed 5 V logic into any ESP32 pin. The DHT22 module is fine on 3.3 V, so this doesn't come up here.

## Power Notes

Rough current budget on USB:

| Draw                                   | Approx. current       |
| -------------------------------------- | --------------------- |
| ESP32 idle (no WiFi)                   | ~50 mA                |
| ESP32 WiFi transmitting                | spikes to ~400–500 mA |
| RGB LED, all channels on through 220 Ω | ~18 mA total          |
| DHT22 during read                      | ~1.5 mA               |

USB supplies 500 mA comfortably, so powering everything from the dev board's 3V3 rail is fine for this project. If we later added WS2812 strips or a motor, we'd need external power.

## LED Brightness Trade-off

The RGB LED's forward voltages are not equal:

| Channel | Forward voltage | Current through 220 Ω at 3.3 V |
| ------- | --------------- | ------------------------------ |
| Red     | ~2.0 V          | ~5.9 mA (bright)               |
| Green   | ~3.1 V          | ~0.9 mA (dim)                  |
| Blue    | ~3.1 V          | ~0.9 mA (dim)                  |

If the green and blue channels look too faint once we test, swap their resistors for **100 Ω** or **150 Ω**. Keep red at **220 Ω** so it doesn't dominate. This is a common tuning step, not a mistake.

## Libraries (PlatformIO / Arduino)

From [`dht22-and-rgb/platformio.ini`]({{ site.baseurl }}/home-automation/dht22-and-rgb/platformio.ini):

- **`adafruit/DHT sensor library`** (plus its dependency `Adafruit Unified Sensor`) — simple, works everywhere.
- Alternative: **`beegee-tokyo/DHT sensor library for ESPx`** (a.k.a. `DHTesp`) — ESP32-optimized, non-blocking reads.

RGB LED PWM uses the built-in ESP32 `LEDC` peripheral (no extra library needed). The current firmware uses the **Arduino-ESP32 v2.x LEDC API** (`ledcSetup` + `ledcAttachPin` + `ledcWrite(channel, value)`) because that is what the pinned `espressif32` platform ships. The newer v3.x API (`ledcAttach(pin, freq, resolution)` + `ledcWrite(pin, value)`) is functionally equivalent and a drop-in replacement when the framework version is bumped.

## Datasheets & References

- Reference schematic (Cirkit Designer): <https://app.cirkitdesigner.com/project/03023476-8be4-4019-81a9-b4774ba130f9>
- ESP32 DevKit V1 pinout: search "ESP32 DevKit V1 DOIT pinout" (Elegoo uses this standard layout)
- DHT22 / AM2302 datasheet: Aosong AM2302
- Elegoo product page: <https://www.amazon.com/dp/B0D8T53CQ5>
- RGB LED product page: <https://www.amazon.com/dp/B077XGF3YR>
- DHT22 product page: <https://www.amazon.com/dp/B0DQ8L629K>
- Amazon list with all components: <https://www.amazon.com/hz/wishlist/ls/HMU4FBJGQS83>
