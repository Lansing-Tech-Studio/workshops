---
layout: default
title: Vocabulary
workshop: AI Builder Series
section: Student Handouts
print_friendly: true
---

# One Thing at a Time Vocabulary

## Word Bank

|---|---|---|
| separation of concerns | refactor | data |
| display | logic | styling |
| extract | module | file structure |
| side effect | | |

## Fill In the Blanks

1. <span class="blank-line-short"></span> means each part of your code has one job.
2. To <span class="blank-line-short"></span> means to reorganize code without changing what it does.
3. The questions and answers in our quiz are the <span class="blank-line-short"></span>.
4. The HTML structure and what the user sees is the <span class="blank-line-short"></span>.
5. Scoring and answer checking are part of the <span class="blank-line-short"></span>.
6. Colors, fonts, and layout are the <span class="blank-line-short"></span>.
7. To <span class="blank-line-short"></span> means to pull code out into its own file or function.
8. A <span class="blank-line-short"></span> is a self-contained piece of code that does one thing.
9. How files and folders are organized is called the <span class="blank-line-short"></span>.
10. A <span class="blank-line-short"></span> is when changing one part accidentally changes something else.

<div class="page-break-after"></div>

## Quick Checks

- Match each file to its concern:

| File | Concern |
|------|---------|
| `questions.js` | <span class="blank-line-short"></span> |
| `styles.css` | <span class="blank-line-short"></span> |
| `script.js` | <span class="blank-line-short"></span> |
| `index.html` | <span class="blank-line-short"></span> |

- True or False:
  - Refactoring changes how the app works: <span class="blank-line-short"></span>
  - You should test after every change: <span class="blank-line-short"></span>
  - It's fine to change 5 things at once: <span class="blank-line-short"></span>

## Stretch: Spot the Concern

Read this code and label each line with its concern (data, display, logic, or
styling):

```javascript
var score = 0;                          // __________
scoreEl.textContent = "Score: " + score; // __________
if (answer === correct) { score++; }     // __________
scoreEl.style.color = "green";           // __________
```
