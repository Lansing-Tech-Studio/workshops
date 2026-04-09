---
layout: default
title: "AI Builder Series #3: Save Points"
workshop: AI Builder Series
comments: true
---

# Save Points - 2 Hour Workshop

**Audience:** Students ages 10-16 who completed Workshops 1-2 \
**Theme:** _"Save before you experiment"_ \
**Series:** AI Builder Series (Workshop 3 of 4)

* [Slides]({{ site.baseurl }}/ai-builder-series/3-save-points/slides.html)
* Resources:
  * [Glossary]({{ site.baseurl }}/ai-builder-series/3-save-points/resources/glossary)
  * [Next Steps]({{ site.baseurl }}/ai-builder-series/3-save-points/resources/next-steps)
* Student Handouts:
  * [Vocabulary]({{ site.baseurl }}/ai-builder-series/3-save-points/student-handouts/vocabulary)
  * [Worksheet]({{ site.baseurl }}/ai-builder-series/3-save-points/student-handouts/worksheet)
* Instructor Notes:
  * [Common Questions]({{ site.baseurl }}/ai-builder-series/3-save-points/instructor-notes/common-questions)
  * [Timing Guide]({{ site.baseurl }}/ai-builder-series/3-save-points/instructor-notes/timing-guide)

## 1. Workshop Goals

By the end of this workshop, every student should be able to:

* Explain what a "known good version" is and why it matters
* Use git to create save points (commits) before making changes
* Write test cases in plain English that describe expected behavior
* Ask AI to generate test cases for their project
* Follow the development loop: save, change, test, keep or rollback
* Roll back to a previous version when a change breaks something

This workshop is about building safely — saving your progress so experiments
can't destroy your work.

## 2. Success Definition

A student is successful if they can say:

> "I can save a working version of my project, try adding something new, test it, and
> go back to my save point if it broke."

## 3. Environment & Prerequisites

### Required Software

Before the workshop, students should have:

* **VS Code** installed with **GitHub Copilot**
* **Playwright MCP** configured
* **Git** installed and configured
* Their **quiz app from Workshop 2** (cleanly separated version)

See the complete [Setup Guide]({{ site.baseurl }}/SETUP) for step-by-step
instructions.

### Primary Path

* Local development using VS Code with GitHub Copilot Chat
* Git for version control (commits and reverts)
* Playwright MCP for testing

### Fallback Path (If Needed)

* Students who missed Workshops 1-2 can use the starter-code from this workshop's
  `starter-code/` folder

## 4. 2-Hour Agenda (Minute-by-Minute)

### 0:00-0:10 — The "Oh No" Moment

> Experience what happens without save points

* Instructor demo: make a change to the quiz app that breaks everything
* Try to undo it — but there's no save point to go back to
* "Has this ever happened to you?"
* Ask: "What if you could go back in time to before the mistake?"

### 0:10-0:30 — Git: Your Save Point System

> Learn to freeze working versions in time

Topics:

* What is git? A system that remembers every version of your project
* Analogy: video game save files — you save before the boss fight
* Key commands:
  * `git add .` — select what to save
  * `git commit -m "message"` — create the save point
  * `git log` — see all your save points
  * `git checkout` — go back to a previous save point
* Students make their first commit of the Workshop 2 quiz app
* View `git log` together: "Look, you have a save point now"

### 0:30-0:50 — Writing Test Cases

> Describe what the quiz app should do

* What is a test case? A plain-English description of expected behavior
* Format: "When I [do this], [this should happen]"
* Students write 3-5 test cases on paper or in a checklist file:
  * "When I click Start, the first question appears"
  * "When I pick the right answer, my score goes up by 1"
  * "When I pick the wrong answer, the correct answer is highlighted green"
  * "After the last question, I see my final score"
  * "When I click Play Again, the quiz restarts with score 0"
* Use Copilot to help generate additional test cases
* Run through the test cases manually to confirm they all pass

### 0:50-1:00 — Break

* Encourage movement
* Optional prompt on screen: "What feature would you add to your quiz if you knew
  you could undo it?"

### 1:00-1:20 — Feature 1: Add with the Loop

> Practice the save-change-test cycle

* Students pick a feature to add: score display improvement, question counter, or
  category label
* The loop:
  1. **Save**: `git commit -m "Before adding [feature]"`
  2. **Change**: prompt Copilot to add the feature
  3. **Test**: run through the test cases — does everything still work?
  4. **Keep or rollback**: if tests pass, commit. If not, `git checkout .` to undo
* Walk through the full loop together as a group first
* Students practice independently

### 1:20-1:40 — Feature 2: The Intentional Rollback

> Experience the power of going back

* Instructor provides a specific prompt that will subtly break something:
  * Example: "Add a timer that counts down from 10 seconds per question. If time
    runs out, skip to the next question." (This often breaks scoring)
* Students follow the loop: save, change, test
* They discover their test cases catch the bug
* Walk through the rollback together: `git checkout .`
* Key moment: "Your save point just rescued you"
* Students try again with a better prompt, or choose a different feature

### 1:40-1:55 — Feature 3: On Your Own

> Apply the full loop independently

* Students add a feature of their choice using the complete workflow
* Encourage creative features: sound effects, animations, difficulty levels
* Instructor circulates and helps
* Each student should have at least 3 commits in their git log by now

### 1:55-2:00 — Wrap-Up and Review Git Log

> See the story of your project

* Run `git log` on the projector
* "Each line is a save point. You can see the whole history of your project."
* Preview Workshop 4: "You know how to build carefully on your own. Next time,
  you'll build with a team — and everything you learned becomes even more important."

## 5. Printed Student Handouts

### Handout 1: Vocabulary (Fill-in-the-Blank)

* Commit, repository, revert, git log, test case
* Known good version, rollback, development loop

### Handout 2: Mission Worksheet

* Test case writing exercise
* Feature loop tracking (save, change, test, result)
* Git log reflection

## 6. Instructor Guardrails

* Git can be intimidating. Keep it to the minimum commands: add, commit, log,
  checkout. Do NOT introduce branches yet — that's Workshop 4.
* The intentional rollback in Feature 2 is critical. If students never need to
  roll back, they won't understand why save points matter. Engineer a failure.
* Test cases should stay in plain English for younger students. Older students
  (14+) can optionally write them as Playwright scripts.
* Some students may resist reverting ("but I want to keep the broken version and
  fix it"). Acknowledge that instinct, but emphasize: a clean rollback is the
  safest move. Fixing broken code is an advanced skill.
* Have the fallback starter code ready (the clean separated quiz from Workshop 2).

## 7. Bridge to Workshop #4 (Team Up)

End with:

> "Today you learned to save your progress and experiment safely. Next time, you'll
> work with a team — and save points, test cases, and separated code will be the
> only things keeping you from chaos."

## 8. Overarching Goals

* Build the habit of saving before changing
* Show that test cases are just descriptions of expected behavior
* Prove that rollbacks are a safety net, not a failure
* Give students a project with real git history they can review
* Set up the version control foundation for team collaboration in Workshop 4
