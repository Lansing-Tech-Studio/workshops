---
layout: default
title: Vocabulary
workshop: SPIKE Prime Robotics Camp
section: Student Handouts
print_friendly: true
---

# Line Following Vocabulary

## Word Bank

|---|---|---|
| ColorSensor | reflection | threshold |
| proportional control | GAIN | deviation |
| edge | calibration | `while` loop |
| BLACK | WHITE | sensor data |

## Fill In the Blanks

1. The <span class="blank-line-short"></span> reads how much light bounces back off the floor.
2. <span class="blank-line-short"></span> is that amount of light, as a number from 0 to 100.
3. Black tape reflects a <span class="blank-line-short"></span> number; white floor reflects a high number.
4. The <span class="blank-line-short"></span> is the midpoint between the BLACK and WHITE readings.
5. How far the reading is from the threshold is called the <span class="blank-line-short"></span>.
6. Steering in proportion to how far off you are is called <span class="blank-line"></span>.
7. The <span class="blank-line-short"></span> decides how hard the robot steers — too low is sloppy, too high is wobbly.
8. The robot follows the <span class="blank-line-short"></span> of the line, not the center, so a small wobble is normal.

<div class="page-break-after"></div>

## Quick Checks

- Circle what `line_sensor.reflection()` returns: <br>
  `a color` / `a number 0-100` / `a distance in mm`

- Over **black tape**, is the reflection reading **high** or **low**? <br>
  Circle one: `high` / `low`

- Your robot **wobbles** back and forth along the line. Should you make
  `GAIN` **bigger** or **smaller**? <br>
  Circle one: `bigger` / `smaller`

- Put these calibration steps in order (number them 1-3): <br>
  <span class="blank-line-short"></span> Compute the threshold (midpoint) <br>
  <span class="blank-line-short"></span> Read reflection on the black tape <br>
  <span class="blank-line-short"></span> Read reflection on the white floor

## Stretch: Read the Code

What does this loop make the robot do? Write it in plain words.

```python
while True:
    deviation = line_sensor.reflection() - threshold
    robot.drive(DRIVE_SPEED, GAIN * deviation)
    wait(10)
```

It will: <span class="blank-line-long"></span>
<span class="blank-line-long"></span>
