---
layout: default
title: Worksheet
workshop: SPIKE Prime Robotics Camp
section: Student Handouts
print_friendly: true
---

# Gyro Precision Mission Worksheet

Use this sheet to compare the gyro off vs. on and record your true-360° turn. No
perfect numbers needed — measure, adjust, and try again. Curiosity wins.

**My hub's name:** <span class="blank-line"></span> &nbsp;&nbsp;
**My team:** <span class="blank-line"></span>

## 1) Predict

- A gyro senses the robot's <span class="blank-line-short"></span>.
- The line that turns the gyro on is `robot.use_gyro(`<span class="blank-line-short"></span>`)`.
- Which run do you think will be more accurate? Circle: `gyro off` / `gyro on`

## 2) The Experiment: Gyro Off vs. On

Run the **same** move (your square or a maze path) twice. Measure how far the robot ends
up from where it *should* be — that's the **error**.

| Run | Gyro | How far off it ended (the error) |
|-----|------|----------------------------------|
| 1 | off | <span class="blank-line-short"></span> mm / cm |
| 2 | on | <span class="blank-line-short"></span> mm / cm |

- Which run was more accurate? Circle: `gyro off` / `gyro on`
- Was your prediction right? Circle: `yes` / `no`

<div class="page-break-after"></div>

## 3) Read the Heading

Run a turn, then `print(hub.imu.heading())`.

- I ran `turn(90)`. The heading printed: <span class="blank-line-short"></span> degrees
- The heading starts at what number? <span class="blank-line-short"></span>
- Positive heading means turning which way? Circle: `clockwise` / `counter-clockwise`

## 4) Calibrate a True 360°

Run `robot.turn(360)` with the gyro **on**, then check the heading. Tune the turn number
until a full turn truly ends where it started (try numbers like 355-363).

| Try | turn() number I used | Heading after (should be near 0) | Over / Under / Just right |
|-----|----------------------|----------------------------------|---------------------------|
| 1 | <span class="blank-line-short"></span> | <span class="blank-line-short"></span> | <span class="blank-line-short"></span> |
| 2 | <span class="blank-line-short"></span> | <span class="blank-line-short"></span> | <span class="blank-line-short"></span> |
| 3 | <span class="blank-line-short"></span> | <span class="blank-line-short"></span> | <span class="blank-line-short"></span> |

**My hub's true 360° turn value:** `turn(`<span class="blank-line-short"></span>`)`

## 5) Reflection

- The biggest difference I saw between the gyro off and the gyro on was: <br>&nbsp;<br>
  <span class="blank-line-long"></span>
- My true-360° number wasn't exactly 360. Why does each hub need its own number? <br>&nbsp;<br>
  <span class="blank-line-long"></span>
