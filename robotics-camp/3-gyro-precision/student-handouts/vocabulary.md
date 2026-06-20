---
layout: default
title: Vocabulary
workshop: SPIKE Prime Robotics Camp
section: Student Handouts
print_friendly: true
---

# Gyro Precision Vocabulary

## Word Bank

|---|---|---|
| gyro | gyroscope | heading |
| IMU | accuracy | drift |
| calibration | DriveBase | degree |
| `use_gyro` | clockwise | sensor data |

## Fill In the Blanks

1. A <span class="blank-line-short"></span> is a sensor that detects how the robot is turning.
2. The robot's <span class="blank-line-short"></span> is the direction it's facing, in degrees, and it starts at 0.
3. The chip inside the hub that holds the gyro is the <span class="blank-line-short"></span>.
4. When the robot slowly veers off course because small errors add up, that's <span class="blank-line-short"></span>.
5. Turning the gyro on makes the robot's turns more <span class="blank-line-short"></span>.
6. <span class="blank-line-short"></span> means measuring what the robot really does and adjusting the numbers.
7. A positive heading or turn goes <span class="blank-line-short"></span> (to the right).
8. When the robot does something unexpected, that's <span class="blank-line"></span> — it did exactly what the code said.

<div class="page-break-after"></div>

## Quick Checks

- Circle what a gyro senses: <br>
  `distance` / `turning` / `color`

- The heading starts at what number when the program begins? <br>
  Circle one: `0` / `90` / `360`

- You turned the gyro **on** and the same square ended up **closer** to where it should.
  Did the gyro make the turn **more** or **less** accurate? <br>
  Circle one: `more` / `less`

- Your `turn(360)` over-spun a little past a full circle. Should you try a turn number
  that's **bigger** or **smaller**? <br>
  Circle one: `bigger` / `smaller`

## Stretch: Read the Code

What will this robot do? Write it in plain words.

```python
robot.use_gyro(True)
robot.turn(360)
print(hub.imu.heading())
```

It will: <span class="blank-line-long"></span>
<span class="blank-line-long"></span>
