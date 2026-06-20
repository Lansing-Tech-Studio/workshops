---
layout: default
title: Starter Code README
workshop: SPIKE Prime Robotics Camp
section: Starter Code
---

# Obstacle Avoidance — Starter Code

This folder holds the starter program for **Session 4: Obstacle Avoidance**.

* `obstacle_avoid.py` — the starter you'll edit and tune today
* `solution/obstacle_avoid.py` — instructor reference (a complete, runnable example)

## How to run it

1. On a **Windows laptop or Chromebook**, open **Chrome, Edge, or Chromium** and go
   to [code.pybricks.com](https://code.pybricks.com).
   *(Web Bluetooth is required — iPads, iPhones, and Firefox will not connect.)*
2. Turn on your hub. Click the **Bluetooth / connect** button and pick **your
   hub's name** from the list (your hub has a name and a matching label).
3. Make a new program and paste in `obstacle_avoid.py` (or build the same thing with
   blocks — see the
   [Block Coding Guide]({{ site.baseurl }}/robotics-camp/4-obstacle-avoidance/resources/block-coding-guide)).
4. Click **Run**. Drive it toward an obstacle and watch it react.

## It runs forever — use the Stop button

This program is built around a `while True:` loop, which **never ends on its own**:

```python
while True:
    if eyes.distance() < 200:
        ...
```

To stop the robot, click the editor's **Stop** button. That's expected — a sensor
robot keeps checking and reacting until you tell it to quit.

## Before you trust the trigger — tune it!

The starter checks `eyes.distance() < 200`, but **200 mm is a starting guess**, not
a correct answer:

```python
if eyes.distance() < 200:     # object closer than 200 mm
```

Every course and robot is a little different. You'll **measure and adjust** this:

* Stops too far from the wall → lower the number
* Bumps the wall before reacting → raise the number

Also confirm the sensor's **actual port**. The starter uses `Port.C`, but yours may
be different:

```python
eyes = UltrasonicSensor(Port.C)   # use YOUR sensor's actual port
```

Record your trigger distance on the
[worksheet]({{ site.baseurl }}/robotics-camp/4-obstacle-avoidance/student-handouts/worksheet).

## Quick troubleshooting

* **The robot never stops?** That's the `while True:` loop — it runs forever on
  purpose. Click the editor's **Stop** button.
* **`distance()` shows 2000?** That means **nothing is detected** — 2000 mm is the
  sensor's "no object" reading, not a bug. Put something in front of it.
* **Sensor not responding?** Check that it's plugged in and that the port in your code
  matches the port it's actually in.
* **Hub not in the Bluetooth list?** Make sure it's on and not already connected to
  another laptop (only one connection at a time), then refresh the page.
