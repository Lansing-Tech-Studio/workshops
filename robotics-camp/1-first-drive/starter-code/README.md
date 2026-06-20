---
layout: default
title: Starter Code README
workshop: SPIKE Prime Robotics Camp
section: Starter Code
---

# First Drive — Starter Code

This folder holds the starter program for **Day 1: First Drive**.

- `drive_square.py` — the starter you'll edit and calibrate today
- `solution/drive_square.py` — instructor reference (a complete, calibrated example)

## How to run it

1. On a **Windows laptop or Chromebook**, open **Chrome, Edge, or Chromium** and go
   to [code.pybricks.com](https://code.pybricks.com).
   _(Web Bluetooth is required — iPads, iPhones, and Firefox will not connect.)_
2. Turn on your hub. Click the **Bluetooth / connect** button and pick **your
   hub's name** from the list (your hub has a name and a matching label).
3. Make a new program and paste in `drive_square.py` (or build the same thing with
   blocks — see the
   [Block Coding Guide]({{ site.baseurl }}/robotics-camp/1-first-drive/resources/block-coding-guide)).
4. Click **Run**. Watch what the robot actually does.

## Before you trust the numbers — calibrate!

The `drive_square.py` starter contains **starting guesses**, not correct answers:

```python
robot = DriveBase(left, right, wheel_diameter=56, axle_track=112)
```

Every robot is a little different. You'll **measure and adjust** these today:

- Run `robot.straight(1000)` and measure how far it really went → adjust `wheel_diameter`
- Run `robot.turn(360)` and see if it spins exactly once → adjust `axle_track`

Record your measured values on the
[worksheet]({{ site.baseurl }}/robotics-camp/1-first-drive/student-handouts/worksheet).

## Quick troubleshooting

- **Robot drives backward?** Flip a motor's `Direction`
  (`CLOCKWISE` ↔ `COUNTERCLOCKWISE`). This depends on how the motors are mounted —
  it's normal tuning, not a broken robot.
- **Turns the wrong way?** `turn()` is **positive = clockwise / right**, negative =
  left. Check the sign of your number.
- **Hub not in the Bluetooth list?** Make sure it's on and not already connected to
  another laptop (only one connection at a time), then refresh the page.
