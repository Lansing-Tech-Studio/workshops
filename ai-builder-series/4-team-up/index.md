---
layout: default
title: "AI Builder Series #4: Team Up"
workshop: AI Builder Series
comments: true
---

# Team Up - 2 Hour Workshop

**Audience:** Students ages 10-16 who completed Workshops 1-3 \
**Theme:** _"Build together without breaking each other's work"_ \
**Series:** AI Builder Series (Workshop 4 of 4)

* [Slides]({{ site.baseurl }}/ai-builder-series/4-team-up/slides.html)
* Resources:
  * [Glossary]({{ site.baseurl }}/ai-builder-series/4-team-up/resources/glossary)
  * [Next Steps]({{ site.baseurl }}/ai-builder-series/4-team-up/resources/next-steps)
* Student Handouts:
  * [Vocabulary]({{ site.baseurl }}/ai-builder-series/4-team-up/student-handouts/vocabulary)
  * [Worksheet]({{ site.baseurl }}/ai-builder-series/4-team-up/student-handouts/worksheet)
* Instructor Notes:
  * [Common Questions]({{ site.baseurl }}/ai-builder-series/4-team-up/instructor-notes/common-questions)
  * [Timing Guide]({{ site.baseurl }}/ai-builder-series/4-team-up/instructor-notes/timing-guide)

## 1. Workshop Goals

By the end of this workshop, every student should be able to:

* Explain why branches let multiple people work on the same project safely
* Create a git branch for their own feature work
* Push a branch to GitHub and open a pull request
* Review another student's pull request and leave constructive feedback
* Merge pull requests and resolve merge conflicts
* Use test cases to verify the combined project still works after merging

This workshop is about building together — using everything from Workshops 1-3
so that a team can work on the same project without breaking each other's work.

## 2. Success Definition

A student is successful if they can say:

> "I can work on a project with other people using branches, pull requests, and
> merge — and use tests to make sure our combined work still works."

## 3. Environment & Prerequisites

### Required Software

Before the workshop, students should have:

* **VS Code** installed with **GitHub Copilot**
* **Playwright MCP** configured
* **Git** installed and configured
* Their **quiz app from Workshop 3** pushed to GitHub

See the complete [Setup Guide]({{ site.baseurl }}/SETUP) for step-by-step
instructions.

### Workshop-Specific Setup (Instructor Prep)

* **Shared GitHub repository** created for each team (2-3 students per team)
* All team members added as **collaborators** on the shared repo
* Shared repo contains the clean quiz app baseline (Workshop 3 starter code)

### Primary Path

* Local development using VS Code with GitHub Copilot Chat
* Git branches, GitHub pull requests, and code review
* Playwright MCP for post-merge verification

### Fallback Path (If Needed)

* Students who missed Workshops 1-3 can be paired with experienced students
  and follow along

## 4. 2-Hour Agenda (Minute-by-Minute)

### 0:00-0:10 — Why Teams Need Rules

> Experience what happens when two people change the same thing

* Quick demo: two "developers" (instructor plays both) edit the same file
  differently at the same time
* What happens when they try to combine their work? Conflict!
* "This is why we learned everything in Workshops 1-3":
  * Prompt skills (W1) — communicate clearly about what you're building
  * Separation of concerns (W2) — work on different files to avoid conflicts
  * Save points and tests (W3) — verify the combined code still works

### 0:10-0:25 — Git Branches: Your Own Workspace

> Learn to work in parallel without stepping on each other

Topics:

* What is a branch? A parallel version of the project
* Analogy: parallel universes — you can experiment without affecting the main version
* Key commands:
  * `git branch feature-name` — create a branch
  * `git checkout feature-name` — switch to a branch
  * `git checkout -b feature-name` — create and switch in one step
* Demo: create a branch, make a change, switch back — the change is only on the
  branch
* Students create their first branch

### 0:25-0:40 — Form Teams and Assign Work

> Split the work by concern

* Students form teams of 2-3
* Each team clones the shared GitHub repo
* Teams decide who works on what:
  * **Person A**: New question categories (data concern — `questions.js`)
  * **Person B**: UI redesign or new visual theme (styling concern — `styles.css`,
    `index.html`)
  * **Person C** (if 3-person team): New feature like a timer, difficulty selector,
    or score animations (logic concern — `script.js`)
* Each person creates a branch named after their feature
* Key rule: each person works on different files (this is why Workshop 2 matters!)

### 0:40-0:50 — Break

* Encourage movement
* Optional prompt on screen: "What's the hardest part about working on a team
  project?"

### 0:50-1:20 — Build on Your Branch

> Work independently using everything you've learned

* Each student works on their assigned feature on their own branch
* They use the full workflow from the series:
  * Good prompts (W1) to guide Copilot
  * Changes only to their concern's files (W2)
  * Commit save points and run test cases (W3)
* Instructor circulates, helps, and ensures at least one pair will touch the same
  file (to create a merge conflict for the learning moment)

### 1:20-1:40 — Pull Requests and Code Review

> Propose changes and review each other's work

* Students push their branches to GitHub:
  * `git push -u origin feature-name`
* Open a pull request on GitHub
* Use Copilot to help write a PR description:
  * What changed?
  * Why?
  * How to test it
* Teams review each other's PRs:
  * Read the code changes
  * Leave at least one constructive comment
  * Approve or request changes
* Model good review comments: "This works! One suggestion: ..." not "This is wrong"

### 1:40-1:55 — Merge and Resolve

> Combine everyone's work into one project

* Teams merge their PRs into main, one at a time
* At least one team will hit a merge conflict:
  * Walk through resolving it together
  * Show that the conflict markers tell you exactly what's different
  * Resolve, test, commit
* After all merges:
  * Pull the latest main: `git pull`
  * Run test cases
  * Use Playwright to verify the combined app works
* Celebrate when it works! Troubleshoot together when it doesn't

### 1:55-2:00 — Series Wrap-Up

> Celebrate the full journey

* Show the git log: every commit, branch, and merge tells the story
* Review the series journey:
  * Workshop 1: learned to talk to AI clearly
  * Workshop 2: organized code so each part has one job
  * Workshop 3: saved progress and tested before changing
  * Workshop 4: combined all of it to build as a team
* "Everything you learned works together. You can apply this to any project."
* Mention Claude Code as another AI coding tool to explore
* Mention Godot MCP for game development projects
* Encourage students to apply these skills to their own projects

## 5. Printed Student Handouts

### Handout 1: Vocabulary (Fill-in-the-Blank)

* Branch, pull request, merge, merge conflict, code review
* Collaborator, main branch, push, clone

### Handout 2: Mission Worksheet

* Team planning (who works on what)
* Branch tracking
* PR and review checklist
* Post-merge testing
* Series reflection

## 6. Instructor Guardrails

* **Pre-create shared repos**: this must be done before the workshop. Each team needs
  a shared GitHub repo with all members as collaborators. Test permissions in advance.
* **Engineer a merge conflict**: the easiest way is to have two students both modify
  a shared file slightly (e.g., both change the `<h1>` text or both add a CSS rule
  to the same selector). This should feel organic.
* **Keep PR reviews positive**: model constructive language. This is many students'
  first code review. Make it encouraging.
* **For younger students (10-12)**: the instructor may need to drive the git commands
  while students focus on the code changes and reviews. That's fine — the concepts
  matter more than memorizing commands.
* **If a team finishes early**: challenge them to do another round of branch → PR →
  merge for a second feature.
* **The final Playwright test is the payoff**: if possible, show it on a projector
  so everyone sees the combined result.

## 7. What Comes After the Series

Encourage students to:

* Apply the 4-skill toolkit to build their own project from scratch
* Explore Claude Code as an alternate AI coding tool
* Try the Godot MCP server for game development projects
* Contribute to each other's projects using what they learned
* Look into GitHub Issues for organizing future work

## 8. Overarching Goals

* Show that collaboration requires all previous skills working together
* Build confidence with branches, PRs, and code review
* Prove that separation of concerns enables parallel work
* Give students a team-built project they're proud of
* Send students off with a complete workflow for any future project
