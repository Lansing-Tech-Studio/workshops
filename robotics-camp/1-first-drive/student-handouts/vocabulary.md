---
layout: default
title: Vocabulary
workshop: SPIKE Prime Robotics Camp
section: Student Handouts
print_friendly: true
---

# First Drive Vocabulary

## Word Bank

|---|---|---|
| hub | port | Motor |
| DriveBase | millimeter | degree |
| wheel_diameter | axle_track | calibration |
| `for` loop | sensor data | clockwise |

## Fill In the Blanks

1. The <span class="blank-line-short"></span> is the robot's brain that runs your program.
2. A motor or sensor plugs into a <span class="blank-line-short"></span> on the hub (A, B, C, …).
3. Distance is measured in <span class="blank-line-short"></span> — 1000 of them make a meter.
4. Angles for turning are measured in <span class="blank-line-short"></span>.
5. A positive turn goes <span class="blank-line-short"></span> (to the right).
6. <span class="blank-line-short"></span> means measuring what the robot really does and adjusting the numbers.
7. A <span class="blank-line-short"></span> repeats the same steps a set number of times.
8. When the robot does something unexpected, that's <span class="blank-line"></span> — it did exactly what the code said.

<div class="page-break-after"></div>

## Quick Checks

- Circle the unit used by `straight()`: <br>
  `degrees` / `millimeters` / `seconds`

- Circle the unit used by `turn()`: <br>
  `degrees` / `millimeters` / `seconds`

- The robot drove **too far** when you ran `straight(1000)`. Should you make
  `wheel_diameter` **bigger** or **smaller**? <br>
  Circle one: `bigger` / `smaller`

- Put these calibration steps in order (number them 1-3): <br>
  <span class="blank-line-short"></span> Adjust the number and run again <br>
  <span class="blank-line-short"></span> Run `straight(1000)` <br>
  <span class="blank-line-short"></span> Measure how far it actually went

## Stretch: Read the Code

What will this robot do? Write it in plain words.

```python
for i in range(4):
    robot.straight(300)
    robot.turn(90)
```

It will: <span class="blank-line-long"></span>
<span class="blank-line-long"></span>
