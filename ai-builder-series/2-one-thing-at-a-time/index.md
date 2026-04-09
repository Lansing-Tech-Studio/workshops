---
layout: default
title: "AI Builder Series #2: One Thing at a Time"
workshop: AI Builder Series
comments: true
---

# One Thing at a Time - 2 Hour Workshop

**Audience:** Students ages 10-16 who completed Workshop 1 (Prompt Power-Ups) \
**Theme:** _"Change one piece, test one piece"_ \
**Series:** AI Builder Series (Workshop 2 of 4)

* [Slides]({{ site.baseurl }}/ai-builder-series/2-one-thing-at-a-time/slides.html)
* Resources:
  * [Glossary]({{ site.baseurl }}/ai-builder-series/2-one-thing-at-a-time/resources/glossary)
  * [Next Steps]({{ site.baseurl }}/ai-builder-series/2-one-thing-at-a-time/resources/next-steps)
* Student Handouts:
  * [Vocabulary]({{ site.baseurl }}/ai-builder-series/2-one-thing-at-a-time/student-handouts/vocabulary)
  * [Worksheet]({{ site.baseurl }}/ai-builder-series/2-one-thing-at-a-time/student-handouts/worksheet)
* Instructor Notes:
  * [Common Questions]({{ site.baseurl }}/ai-builder-series/2-one-thing-at-a-time/instructor-notes/common-questions)
  * [Timing Guide]({{ site.baseurl }}/ai-builder-series/2-one-thing-at-a-time/instructor-notes/timing-guide)

## 1. Workshop Goals

By the end of this workshop, every student should be able to:

* Explain what "separation of concerns" means in their own words
* Identify the different concerns in a web project (data, display, logic, styling)
* Use AI to refactor one piece of code without touching the rest
* Verify each change didn't break anything using Playwright MCP
* Explain why changing everything at once makes bugs hard to find

This workshop is about learning to organize code so each part has one job.

## 2. Success Definition

A student is successful if they can say:

> "I can break my project into separate parts, change one part at a time, and check
> that everything still works after each change."

## 3. Environment & Prerequisites

### Required Software

Before the workshop, students should have:

* **VS Code** installed with **GitHub Copilot**
* **Playwright MCP** configured (set up in Workshop 1)
* **Git** installed and configured
* Their **quiz app from Workshop 1** (or the fallback starter code)

See the complete [Setup Guide]({{ site.baseurl }}/SETUP) for step-by-step
instructions.

### Primary Path

* Local development using VS Code with GitHub Copilot Chat
* Playwright MCP for verifying the app still looks and works correctly

### Fallback Path (If Needed)

* Students who missed Workshop 1 can use the starter-code from this workshop's
  `starter-code/` folder

## 4. 2-Hour Agenda (Minute-by-Minute)

### 0:00-0:10 — Review and Reconnect

> Open the quiz app and remember where we left off

* Open the quiz app from Workshop 1
* Quick recap: "This works, but look at the code — everything is jumbled together"
* Ask: "What happens if we want to add 20 more questions? Or change all the colors?"

### 0:10-0:30 — The Spaghetti Problem

> Experience why tangled code is hard to change

Topics:

* Instructor demo: try to add a new feature to the messy code — it breaks something
  else
* Discussion: why did this happen?
* Introduce separation of concerns
* Analogy: LEGO bricks — each brick does one thing, you can swap them without
  rebuilding everything
* The 4 concerns in our quiz app:
  1. **Data** — the questions and answers
  2. **Display** — the HTML structure
  3. **Logic** — scoring, question flow, checking answers
  4. **Styling** — colors, fonts, layout

### 0:30-0:50 — Identify the Concerns

> Color-code the code to see what belongs where

* As a group, go through the quiz app code
* Use colored comments or highlighters to mark each line:
  * Blue = data (questions, answers)
  * Green = display (HTML elements, DOM updates)
  * Orange = logic (scoring, answer checking)
  * Pink = styling (CSS, visual changes)
* Students do this on their own code
* Discussion: "Which color has the most code? Which parts are tangled together?"

### 0:50-1:00 — Break

* Encourage movement
* Optional prompt on screen: "If you could only change one part of your quiz, what
  would it be?"

### 1:00-1:25 — Refactor Round 1: Extract Question Data

> Move questions into their own file

* Use Copilot to move hardcoded questions into a separate file (`questions.js`)
* Key prompt technique: tell AI to do ONLY this change
  * Good: "Move the questions array into a separate file called questions.js.
    Don't change anything else."
  * Bad: "Clean up my code"
* After the change: test with Playwright — does the quiz still work? Same questions?
  Same behavior?
* If it works: celebrate! If not: read the error and fix only the connection between
  files

### 1:25-1:45 — Refactor Round 2: Separate Logic and Styling

> Pull scoring into its own function and CSS into its own file

* Step 1: Use Copilot to extract scoring logic into clear functions
  * Prompt: "Extract the score tracking and answer checking into their own functions.
    Don't change the questions or the HTML."
  * Test with Playwright after this change
* Step 2: Use Copilot to move all CSS into a separate `styles.css` file
  * Prompt: "Move all the CSS from the style tag into a separate styles.css file and
    link it in the HTML. Don't change any functionality."
  * Test with Playwright after this change
* Each step: one change, one test

### 1:45-1:55 — The Contrast Demo

> See what happens when you skip separation

* Instructor demo: ask AI to "refactor everything at once" on a copy of the original
  messy code
* Compare the chaos to what students just did methodically
* Ask: "Which approach would you trust more? Which would you rather debug?"

### 1:55-2:00 — Wrap-Up and Preview

> Celebrate the clean structure and look ahead

* Look at the file structure: `index.html`, `styles.css`, `questions.js`, `script.js`
* "Each file has one job now. You can change the questions without touching the
  styling. You can redesign the look without touching the logic."
* Preview Workshop 3: "Now that your code is organized, we can safely add features.
  But first, we need save points so we can undo mistakes."

## 5. Printed Student Handouts

### Handout 1: Vocabulary (Fill-in-the-Blank)

* Separation of concerns, refactor, data, display, logic, styling
* Extract, module, file structure

### Handout 2: Mission Worksheet

* Color-coding exercise
* Refactor tracking (what changed, did it still work?)
* Reflection

## 6. Instructor Guardrails

* Have the fallback starter code ready for students who missed Workshop 1 or whose
  quiz app doesn't work
* The color-coding exercise is key for younger students — make it visual
* Resist the urge to refactor more than planned. The goal is 3-4 clean separations,
  not perfect architecture
* Playwright verification after each step is essential — it proves refactoring
  shouldn't change behavior
* If students' code is already somewhat organized from Workshop 1, have them refactor
  the fallback starter code instead

## 7. Bridge to Workshop #3 (Save Points)

End with:

> "Today we organized our code so each part has one job. Next time, we'll learn to
> save our progress before making changes — so we can always go back if something
> breaks."

## 8. Overarching Goals

* Build the habit of small, focused changes
* Show that refactoring improves code without changing behavior
* Reinforce Playwright MCP as a verification tool
* Prepare the codebase for safe feature additions in Workshop 3
