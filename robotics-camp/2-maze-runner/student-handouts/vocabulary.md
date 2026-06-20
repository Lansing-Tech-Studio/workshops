---
layout: default
title: Vocabulary
workshop: SPIKE Prime Robotics Camp
section: Student Handouts
print_friendly: true
---

# Maze Runner Vocabulary

## Word Bank

|---|---|---|
| function | define | call |
| sequence | maze | cell |
| `forward_one_cell` | `turn_right` | `turn_left` |
| DriveBase | calibration | sensor data |

## Fill In the Blanks

1. A <span class="blank-line-short"></span> is a named move you can reuse as many times as you want.
2. To <span class="blank-line-short"></span> a function you write `def name():` with its steps underneath.
3. To <span class="blank-line-short"></span> a function you write its name with parentheses, like `forward_one_cell()`.
4. A program runs top to bottom, one step at a time — that order is the <span class="blank-line-short"></span>.
5. One square step of the maze is a <span class="blank-line-short"></span>.
6. The function that drives forward one step of the maze is <span class="blank-line"></span>.
7. Measuring how far one cell really is and adjusting the number is <span class="blank-line-short"></span>.
8. When the robot bumps a wall, that's <span class="blank-line"></span> — it did exactly what the sequence said.

<div class="page-break-after"></div>

## Quick Checks

- Circle what `def` does: <br>
  `runs a move` / `names a move` / `connects the hub`

- Circle how you run a function called `turn_right`: <br>
  `def turn_right` / `turn_right()` / `turn right`

- Your robot stopped **short** of the next cell. Should the mm inside
  `forward_one_cell()` be **bigger** or **smaller**? <br>
  Circle one: `bigger` / `smaller`

- Put these maze-solving steps in order (number them 1-3): <br>
  <span class="blank-line-short"></span> Write the named moves in the right order <br>
  <span class="blank-line-short"></span> Plan the path on paper <br>
  <span class="blank-line-short"></span> Run it and fix the step that bumped a wall

## Stretch: Read the Code

What will this robot do? Write it in plain words.

```python
forward_one_cell()
turn_right()
forward_one_cell()
forward_one_cell()
```

It will: <span class="blank-line-long"></span>
<span class="blank-line-long"></span>
