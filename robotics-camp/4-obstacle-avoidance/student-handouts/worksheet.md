---
layout: default
title: Worksheet
workshop: SPIKE Prime Robotics Camp
section: Student Handouts
print_friendly: true
---

# Obstacle Avoidance Mission Worksheet

Use this sheet to record your sensor readings and tune your trigger distance. No
perfect numbers needed — measure, adjust, and try again. Curiosity wins.

**My hub's name:** <span class="blank-line"></span> &nbsp;&nbsp;
**My team:** <span class="blank-line"></span>

## 1) Read the Sensor

Run a program that prints `eyes.distance()`. Move your hand toward the sensor.

- Distance with **nothing** in front of it: <span class="blank-line-short"></span> mm
- Distance with my hand **close**: <span class="blank-line-short"></span> mm
- Which port is the distance sensor in? <span class="blank-line-short"></span>

## 2) Predict the Decision

Read this code and write what the robot does in each case.

```python
if eyes.distance() < 200:
    robot.straight(-100)
    robot.turn(90)
else:
    robot.drive(150, 0)
```

- When the distance is **less than 200**, the robot will: <br>&nbsp;<br>
  <span class="blank-line-long"></span>
- When the distance is **200 or more**, the robot will: <br>&nbsp;<br>
  <span class="blank-line-long"></span>

<div class="page-break-after"></div>

## 3) Tune the Trigger Distance

Run the robot at an obstacle and adjust the trigger until it stops where you want.

| Try | Trigger I used | Too early / Hit the wall / Just right |
|-----|----------------|----------------------------------------|
| 1 | <span class="blank-line-short"></span> mm | <span class="blank-line-short"></span> |
| 2 | <span class="blank-line-short"></span> mm | <span class="blank-line-short"></span> |
| 3 | <span class="blank-line-short"></span> mm | <span class="blank-line-short"></span> |

**My best trigger distance:** <span class="blank-line-short"></span> mm

## 4) Design a Course

Draw an obstacle course for your robot. Mark the start, the obstacles, and the table
edges it must not fall off.

<br>&nbsp;<br>&nbsp;<br>&nbsp;<br>&nbsp;<br>&nbsp;<br>

- What should the robot do when it reaches an obstacle? <span class="blank-line-long"></span>

## 5) Reflection

- The hardest part of getting the robot to react was: <br>&nbsp;<br>
  <span class="blank-line-long"></span>
- One time the robot did something I didn't expect, and what the code actually said was: <br>&nbsp;<br>
  <span class="blank-line-long"></span>
