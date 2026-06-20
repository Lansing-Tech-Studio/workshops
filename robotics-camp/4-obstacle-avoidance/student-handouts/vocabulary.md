---
layout: default
title: Vocabulary
workshop: SPIKE Prime Robotics Camp
section: Student Handouts
print_friendly: true
---

# Obstacle Avoidance Vocabulary

## Word Bank

|---|---|---|
| sensor | `UltrasonicSensor` | distance |
| `if` | `else` | condition |
| `while` loop | `wait` | trigger distance |
| millimeter | sensor data | DriveBase |

## Fill In the Blanks

1. A <span class="blank-line-short"></span> measures something about the world and reports it as a number.
2. The distance sensor's reading comes from <span class="blank-line"></span>, and it returns 2000 mm when nothing is in front of it.
3. The unit the distance sensor uses is the <span class="blank-line-short"></span>.
4. An <span class="blank-line-short"></span> runs its code only when the condition is true.
5. The <span class="blank-line-short"></span> part runs when the `if` condition is false.
6. The true-or-false test an `if` checks, like `eyes.distance() < 200`, is the <span class="blank-line-short"></span>.
7. A <span class="blank-line-short"></span> keeps repeating; `while True:` repeats forever.
8. When the robot does something unexpected, that's <span class="blank-line"></span> — it did exactly what the code said.

<div class="page-break-after"></div>

## Quick Checks

- Circle the unit used by `distance()`: <br>
  `degrees` / `millimeters` / `seconds`

- The sensor has **nothing** in front of it. What number does `distance()` give? <br>
  Circle one: `0` / `200` / `2000`

- The robot stops **too far** from the wall. Should you make the trigger number
  **bigger** or **smaller**? <br>
  Circle one: `bigger` / `smaller`

- A `while True:` loop runs forever. How do you stop it? <br>
  <span class="blank-line-long"></span>

## Stretch: Read the Code

What will this robot do? Write it in plain words.

```python
while True:
    if eyes.distance() < 200:
        robot.straight(-100)
        robot.turn(90)
    else:
        robot.drive(150, 0)
    wait(10)
```

It will: <span class="blank-line-long"></span>
<span class="blank-line-long"></span>
