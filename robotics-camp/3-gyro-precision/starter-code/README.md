---
layout: default
title: Starter Code README
workshop: SPIKE Prime Robotics Camp
section: Starter Code
---

# Gyro Precision — Starter Code

This folder holds the starter program for **Day 3: Gyro Precision**.

- `gyro_drive.py` — the starter you'll run and calibrate today
- `solution/gyro_drive.py` — instructor reference (a complete example, including a worked true-360° tune)

## How to run it

1. On a **Windows laptop or Chromebook**, open **Chrome, Edge, or Chromium** and go
   to [code.pybricks.com](https://code.pybricks.com).
   _(Web Bluetooth is required — iPads, iPhones, and Firefox will not connect.)_
2. Turn on your hub. Click the **Bluetooth / connect** button and pick **your
   hub's name** from the list (your hub has a name and a matching label).
3. Make a new program and paste in `gyro_drive.py` (or build the same thing with
   blocks — see the
   [Block Coding Guide]({{ site.baseurl }}/robotics-camp/3-gyro-precision/resources/block-coding-guide)).
4. Click **Run**. Watch what the robot does and read the heading in the output console.

## Reuse your setup from Day 1

The top of `gyro_drive.py` is the **same** hub/motor/DriveBase setup you calibrated in
Day 1 — use **your** calibrated `wheel_diameter`, `axle_track`, and verified ports
and `Direction`. Don't rewrite it from scratch.

## The one new line: turn on the gyro

```python
robot.use_gyro(True)      # now turns/straights use the gyro
```

That's it. After that, the same `straight()` and `turn()` commands use the gyro to
hold a straighter, more accurate path.

## Read the heading

```python
print(hub.imu.heading())  # degrees; positive = clockwise; starts at 0
```

The number shows up in the **output console** in the Pybricks editor. Watch it change
as the robot turns.

## Today's two experiments

1. **Off vs. on:** Run the same square (or maze path) with the gyro **off**, mark where
   it ends, then add `use_gyro(True)` and run the _exact same code_ again. Chart the
   error on the [worksheet]({{ site.baseurl }}/robotics-camp/3-gyro-precision/student-handouts/worksheet).
2. **Tune a true 360°:** The gyro is better, **not perfect**. A real full turn might
   need `turn(357)` or `turn(362)` on **your** hub. Tune it and record your number.

## Quick troubleshooting

- **Heading doesn't start at 0?** It resets to 0 when the program starts — read it after
  the program is running.
- **The 360° turn is a little off even with the gyro on?** That's expected — tune the
  turn value (try 355-363) for your hub. It's **calibration**, not a broken robot.
- **Hub not in the Bluetooth list?** Make sure it's on and not already connected to
  another laptop (only one connection at a time), then refresh the page.
