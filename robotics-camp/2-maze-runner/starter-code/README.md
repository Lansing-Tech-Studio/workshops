---
layout: default
title: Starter Code README
workshop: SPIKE Prime Robotics Camp
section: Starter Code
---

# Maze Runner — Starter Code

This folder holds the starter program for **Day 2: Maze Runner**.

- `maze_runner.py` — the starter you'll edit and calibrate today
- `solution/maze_runner.py` — instructor reference (a complete, worked example)

## How to run it

1. On a **Windows laptop or Chromebook**, open **Chrome, Edge, or Chromium** and go
   to [code.pybricks.com](https://code.pybricks.com).
   _(Web Bluetooth is required — iPads, iPhones, and Firefox will not connect.)_
2. Turn on your hub. Click the **Bluetooth / connect** button and pick **your
   hub's name** from the list (your hub has a name and a matching label).
3. Make a new program and paste in `maze_runner.py` (or build the same thing with
   blocks — see the
   [Block Coding Guide]({{ site.baseurl }}/robotics-camp/2-maze-runner/resources/block-coding-guide)).
4. Click **Run**. Watch what the robot actually does.

## What's new today: functions

A **function** gives a move a name so you can reuse it. You **define** it once:

```python
def forward_one_cell():
    robot.straight(250)
```

…and then **call** it as many times as you want by writing its name with parentheses:

```python
forward_one_cell()
forward_one_cell()
```

Solving the maze is just calling your named moves in the right **sequence** — the
program runs top to bottom, one step at a time.

## Before you trust the numbers — calibrate the cell!

The `forward_one_cell()` function contains a **starting guess**, not a correct answer:

```python
def forward_one_cell():
    robot.straight(250)   # set to YOUR maze cell size
```

Every maze is taped a little differently. You'll **measure and adjust** this today:

- Run `forward_one_cell()` once and see if the robot lands in the next cell
- Stopped short → raise the mm; overshot → lower the mm

Record your cell size on the
[worksheet]({{ site.baseurl }}/robotics-camp/2-maze-runner/student-handouts/worksheet).
_(This reuses your calibrated `wheel_diameter` / `axle_track` from Day 1 — if
turns are off, re-check `axle_track` before blaming the maze.)_

## Quick troubleshooting

- **Robot bumps a wall?** That's sensor data — find the step in your sequence that
  went wrong and fix _that_ one move, then run again.
- **Turns the wrong way?** `turn()` is **positive = clockwise / right**, negative =
  left. Check the sign of the number inside `turn_right()` / `turn_left()`.
- **`forward_one_cell()` overshoots or stops short?** Adjust the mm inside the
  function — the cell size is a calibration value, not a fixed number.
- **Hub not in the Bluetooth list?** Make sure it's on and not already connected to
  another laptop (only one connection at a time), then refresh the page.
