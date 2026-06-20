---
layout: default
title: Worksheet
workshop: SPIKE Prime Robotics Camp
section: Student Handouts
print_friendly: true
---

# First Drive Mission Worksheet

Use this sheet to plan your moves and record your calibration. No perfect numbers
needed — measure, adjust, and try again. Curiosity wins.

**My hub's name:** <span class="blank-line"></span> &nbsp;&nbsp;
**My team:** <span class="blank-line"></span>

## 1) Predict the Square

Before you run the code, draw the path the robot will take and label each move
(`straight` and `turn`). Mark where it starts and which way it faces.

<br>&nbsp;<br>&nbsp;<br>&nbsp;<br>&nbsp;<br>&nbsp;<br>

- How many `straight` moves does a square need? <span class="blank-line-short"></span>
- How many `turn` moves? <span class="blank-line-short"></span>
- How many degrees is each turn? <span class="blank-line-short"></span>

## 2) First Moves

- I ran `straight(200)`. What happened? <span class="blank-line-long"></span>
- I ran `turn(90)`. Which way did it turn? <span class="blank-line-short"></span>
- Did I have to flip a motor `Direction`? Circle: `yes` / `no`

<div class="page-break-after"></div>

## 3) Calibration: Distance

Run `robot.straight(1000)` and measure the **real** distance.

| Try | wheel_diameter I used | Distance it actually drove |
|-----|-----------------------|----------------------------|
| 1 | <span class="blank-line-short"></span> | <span class="blank-line-short"></span> mm |
| 2 | <span class="blank-line-short"></span> | <span class="blank-line-short"></span> mm |
| 3 | <span class="blank-line-short"></span> | <span class="blank-line-short"></span> mm |

**My best `wheel_diameter`:** <span class="blank-line-short"></span> mm

## 4) Calibration: Turn

Run `robot.turn(360)` and check if it spins exactly once.

| Try | axle_track I used | Too much / Too little / Just right |
|-----|-------------------|------------------------------------|
| 1 | <span class="blank-line-short"></span> | <span class="blank-line-short"></span> |
| 2 | <span class="blank-line-short"></span> | <span class="blank-line-short"></span> |
| 3 | <span class="blank-line-short"></span> | <span class="blank-line-short"></span> |

**My best `axle_track`:** <span class="blank-line-short"></span> mm

## 5) Reflection

- The hardest part of getting the robot to drive right was: <br>&nbsp;<br>
  <span class="blank-line-long"></span>
- One time the robot did something I didn't expect, and what the code actually said was: <br>&nbsp;<br>
  <span class="blank-line-long"></span>
