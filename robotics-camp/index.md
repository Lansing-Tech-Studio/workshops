---
layout: default
title: SPIKE Prime Robotics Camp
workshop: SPIKE Prime Robotics Camp
comments: true
---

# SPIKE Prime Robotics Camp

**Audience:** Students ages 9-14 (no coding experience needed) \
**Format:** 5 daily sessions, 3 hours each (9:00 a.m.-12:00 p.m.) \
**Theme:** _"Teach the robot to do exactly what you mean"_ \
**Tools:** LEGO SPIKE Prime + [Pybricks](https://pybricks.com/) (block coding or Python)

## Series Overview

Over five mornings, teams program a LEGO SPIKE Prime robot we call **Techster**.
Each day is a **mission** that upgrades what Techster can do — drive on command,
solve a maze, turn accurately with a gyro, react to obstacles, and finally follow
a line. The camp is **cumulative**: the same robot and the same code grow across
the week, so what you build on Day 1 you keep using on Day 5.

> **Lansing Techster says:** I do _exactly_ what your code says — no more, no less.
> When something looks wrong, that's not a failure, it's **sensor data**. Read what
> the code actually told me to do, and you'll find the fix.

## The Missions

| # | Session | Mission | New Skill |
|---|---------|---------|-----------|
| 1 | [First Drive]({{ site.baseurl }}/robotics-camp/1-first-drive/) | Make Techster drive a distance, turn an angle, and trace a square | Distance, angle, `for` loop, calibration |
| 2 | [Maze Runner]({{ site.baseurl }}/robotics-camp/2-maze-runner/) | Get Techster through a taped maze without touching the walls | Sequencing, functions |
| 3 | [Gyro Precision]({{ site.baseurl }}/robotics-camp/3-gyro-precision/) | Upgrade Techster's "inner compass" so turns stay accurate | The gyro, reading a heading |
| 4 | [Obstacle Avoidance]({{ site.baseurl }}/robotics-camp/4-obstacle-avoidance/) | Give Techster eyes so it reacts to the world | Sensors, `if`/`else`, `while` loop |
| 5 | [Line Following]({{ site.baseurl }}/robotics-camp/5-line-following/) | Teach Techster to follow a line, then demo the week | Reflection, threshold, proportional control |

## Teams and Roles

12 students share **3 SPIKE Prime kits** in **teams of 4**. Everyone codes — roles
rotate about every 20 minutes so each person tries each job:

* **Coder** — types the program and runs it
* **Builder / Mechanic** — checks the robot, motors, and sensor mounting
* **Navigator** — plans the moves as pseudocode on paper before they're typed
* **Tester** — measures results, records numbers, and reports what actually happened

Every robotics block also has an **off-robot task** so all four teammates stay busy
even when it isn't their turn at the keyboard.

## Setup & Prerequisites

Pybricks runs **in a web browser over Bluetooth** — there is nothing to install on
student laptops. This is different from our other workshops, and it has a few
requirements worth checking ahead of time.

### Browser & device requirements

* **Use Chrome, Edge, or Chromium** with **Web Bluetooth**. This works on
  **Windows laptops** and **Chromebooks (ChromeOS)** — our two main platforms.
* **iPads and iPhones are NOT supported** (iOS Safari and Chrome-for-iOS don't
  support Web Bluetooth). **Firefox is not supported on any platform.** If someone
  brings a tablet, it won't be able to connect.

### One-time hub setup (instructor, before camp)

Each SPIKE Prime hub needs a one-time firmware install over a **micro-USB cable**:
first the latest official LEGO SPIKE firmware, then the **Pybricks firmware** from
[code.pybricks.com](https://code.pybricks.com). After that, the hub connects over
**Bluetooth** for the rest of the week. Full steps are in the instructor's
[Setup & Firmware Guide]({{ site.baseurl }}/robotics-camp/instructor-notes/setup-and-firmware).

> Robots are **pre-built before Day 1** using the standard two-motor driving base,
> so Session 1 goes straight to connecting and driving.

### Block coding or Python?

Pybricks supports **both block coding and text Python** — same robot, same ideas.
Newer or younger students can start in **blocks**; students ready for typing can
use the **Python** shown in each session. Every session includes a block-coding
guide alongside the Python so both tracks stay together.

## Materials Checklist

* 3 LEGO SPIKE Prime sets (the base set includes the color and distance sensors)
* 3+ Windows laptops or Chromebooks with Chrome / Edge / Chromium
* 1 micro-USB cable for the one-time firmware install
* Painters' tape (mazes)
* Black electrical tape + white poster board (line following)
* Cardboard and blocks (obstacle course)
* Whiteboards / paper (pseudocode and planning)
* Rulers / measuring tape (calibration)
* Hub name labels (animal or city names) so teams can find their hub in the
  Bluetooth list

## Keep Learning

The [Learn More]({{ site.baseurl }}/robotics-camp/resources/learn-more) page
collects Pybricks documentation, robotics tutorials, and ideas for what to build
after camp.

## Robot's Journey

* **After Session 1:** Techster drives a calibrated distance, turns an angle, and traces a square
* **After Session 2:** Techster solves a maze using named, reusable moves (functions)
* **After Session 3:** Techster uses its gyro for noticeably straighter, more accurate turns
* **After Session 4:** Techster senses obstacles and changes what it does in response
* **After Session 5:** Techster follows a line — and the team can explain how they tuned it
