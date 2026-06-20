---
layout: default
title: Setup & Firmware Guide (Instructor)
workshop: SPIKE Prime Robotics Camp
section: Instructor Notes
---

# SPIKE Prime Robotics Camp — Setup & Firmware Guide

This camp uses **Pybricks**, which runs **in a web browser over Bluetooth**. There
is nothing to install on student laptops — but each hub needs a **one-time firmware
install over USB** before the first session, and there are a few device requirements
to check ahead of time. Do this setup the week before camp, not the morning of.

## Device & browser requirements

- **Use Chrome, Edge, or Chromium** with **Web Bluetooth**. This works on
  **Windows laptops** and **Chromebooks (ChromeOS)**.
- **iPads and iPhones do NOT work** — iOS Safari and Chrome-for-iOS don't support
  Web Bluetooth. **Firefox does not work on any platform.** If a student brings a
  tablet, it can't connect; have a spare laptop available.
- Test the connection flow on the actual camp laptops at least once before Day 1.

## One-time hub firmware install (per hub, over USB)

Do this once for each of the 3 hubs. You need a **micro-USB cable** and a
Chrome/Edge browser.

1. Charge the hub and connect it to the laptop with the **micro-USB cable**.
2. (If the hub is brand new or was used with the LEGO app) update it to the latest
   **official LEGO SPIKE firmware** first, using the LEGO SPIKE app.
3. Open [code.pybricks.com](https://code.pybricks.com).
4. Click the **Bluetooth/settings** firmware installer, choose the **SPIKE Prime**
   hub, and follow the prompts to **install the Pybricks firmware** over USB.
5. When it finishes, the hub light shows Pybricks is installed. After this, the hub
   connects over **Bluetooth** — the USB cable is only needed if you ever reinstall
   firmware.

Full official steps: [Installing Pybricks firmware](https://pybricks.com/learn/getting-started/install-pybricks/).

> Reinstalling the official LEGO firmware (to use the LEGO app again) is also done
> from the same installer over USB. The Pybricks firmware does not erase the hub
> permanently.

## Name and label each hub

In the Pybricks settings, give each hub a **distinct name** (animals or city names
work well — "Lansing," "Otter," "Capitol"). Put a **matching physical label** on the
hub. With 3 hubs connecting over Bluetooth, students need to pick the right one out
of the list quickly — names + labels prevent a lot of confusion.

## Pre-build the robots

Robots are **pre-built before Day 1** using the standard **two-motor driving base**
so Session 1 can go straight to connecting and driving. Build all three (or build
them with a helper the night before).

For each robot, **record on a sticky note** taped to the robot:

- Which **port** each motor is plugged into (e.g., A and B)
- The **`Direction`** each motor needs (`CLOCKWISE` or `COUNTERCLOCKWISE`) so it
  drives forward, not backward — this depends on how the motors are mounted
- Which ports the **color sensor** and **distance sensor** use (added for Sessions
  4–5; the base set includes both)

These per-robot values are not universal — they depend on the build, and students
will verify/adjust them in code. Recording them up front saves time.

## Calibration is part of the curriculum (don't pre-solve it)

Several values look like they should be constants but are **measured on the actual
robot and surface**. Let students measure them — that's the learning:

- `wheel_diameter` / `axle_track` (Session 1) — start near 56 / 112 mm, then drive
  `straight(1000)` and `turn(360)` and adjust
- Maze cell size (Session 2)
- Gyro turn fudge, e.g. `turn(357)` vs `turn(362)` for a true 360° (Session 3)
- Obstacle trigger distance (Session 4)
- Line-following `BLACK` / `WHITE` thresholds and `GAIN` (Session 5)

The starter and solution `.py` files use example numbers clearly labeled as
starting guesses. Don't present them as correct answers.

## Block coding vs. Python

Pybricks supports **both** in the same editor. Younger or newer students can use the
**block** mode; students ready to type use **Python**. Each session has a
`resources/block-coding-guide.md` that mirrors the Python step by step. You can mix
tracks within a team — the concepts are identical.

## Day-of checklist

- [ ] All 3 hubs flashed with Pybricks firmware, named, and labeled
- [ ] Robots pre-built; motor ports/directions and sensor ports noted on each robot
- [ ] Laptops charged, on Chrome/Edge, tested against code.pybricks.com
- [ ] Micro-USB cable on hand (in case a hub needs a re-flash)
- [ ] Hubs charged
- [ ] Tape, poster board, cardboard, rulers, and whiteboards staged for the day's session

## Troubleshooting

**A hub doesn't appear in the Bluetooth list.**
Make sure the hub is on and not already connected to another laptop (only one
connection at a time). Refresh the browser. Confirm the laptop's Bluetooth is on.

**"Bluetooth not available" or no pairing prompt.**
Confirm the browser is Chrome/Edge/Chromium (not Firefox, not Safari) and that it's
a laptop/Chromebook, not an iPad. On managed Chromebooks, Web Bluetooth may need to
be enabled in admin policy — check before camp.

**The robot drives backward / turns the wrong way.**
The motor `Direction` is wrong for how it's mounted. Flip the `Direction` on that
motor (`CLOCKWISE` ↔ `COUNTERCLOCKWISE`) in the code. This is expected per-build
tuning, not a hardware fault.

**A `while True:` program won't stop.**
Click **Stop** in the Pybricks editor, or briefly disconnect. Teach students where
the stop button is before running loop programs in Session 4.
