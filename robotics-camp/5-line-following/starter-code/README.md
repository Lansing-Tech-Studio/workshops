---
layout: default
title: Starter Code README
workshop: SPIKE Prime Robotics Camp
section: Starter Code
---

# Line Following — Starter Code

This folder holds the starter program for **Session 5: Line Following + Showcase**.

* `line_follow.py` — the starter you'll edit, calibrate, and tune today
* `solution/line_follow.py` — instructor reference (a complete, runnable example)

## How to run it

1. On a **Windows laptop or Chromebook**, open **Chrome, Edge, or Chromium** and go
   to [code.pybricks.com](https://code.pybricks.com).
   *(Web Bluetooth is required — iPads, iPhones, and Firefox will not connect.)*
2. Turn on your hub. Click the **Bluetooth / connect** button and pick **your
   hub's name** from the list (your hub has a name and a matching label).
3. Make a new program and paste in `line_follow.py` (or build the same thing with
   blocks — see the
   [Block Coding Guide]({{ site.baseurl }}/robotics-camp/5-line-following/resources/block-coding-guide)).
4. Click **Run**. Watch the robot follow the **edge** of the line.

## You need contrast

This only works if the line stands out from the floor. Use **black electrical tape
on white** poster board, or a light-colored floor. No contrast → the sensor can't
tell the line from the floor.

## Before you trust the numbers — calibrate!

The `line_follow.py` starter contains **starting guesses**, not correct answers:

```python
BLACK = 10            # measured on the tape
WHITE = 80            # measured on the floor
threshold = (BLACK + WHITE) / 2
GAIN = 1.2            # TUNE: too low = sloppy, too high = wobbly
```

Every tape, floor, and robot is a little different. You'll **measure and tune** today:

* Hold the sensor over the **black tape** and read `line_sensor.reflection()` → that's `BLACK`
* Hold it over the **white floor** and read `line_sensor.reflection()` → that's `WHITE`
* The `threshold` is the **midpoint** between them
* Change only **`GAIN`** and watch: too low = sloppy, too high = wobbly. Find *just right*.

Record your readings and GAIN tries on the
[worksheet]({{ site.baseurl }}/robotics-camp/5-line-following/student-handouts/worksheet).

## This follows the EDGE of the line

The robot rides the **edge** — half on the black, half on the white — not the center.
That's why a small, steady wobble is normal. The sensor must be mounted facing **down**
at the front, near the floor.

## Quick troubleshooting

* **Robot ignores the line / drifts straight off?** `GAIN` is probably too low, or
  your `threshold` is wrong — re-measure `BLACK` and `WHITE` and recompute it.
* **Robot wobbles wildly?** `GAIN` is too high — lower it. Slowing `DRIVE_SPEED` helps too.
* **It steers the wrong way?** It's following the *other* edge — start the robot on
  the other side of the line (or, in the stretch version, swap the two sensors).
* **Program won't stop?** `while True:` runs forever — use the editor's **Stop** button.
* **Hub not in the Bluetooth list?** Make sure it's on and not already connected to
  another laptop (only one connection at a time), then refresh the page.
