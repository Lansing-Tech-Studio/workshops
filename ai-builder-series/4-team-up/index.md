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
* Fork a shared repository and explain why forks are needed when you don't
  have push access
* Create a git branch for their own feature work
* Push a branch to their fork and open a pull request to the upstream repo
* Review another student's pull request and leave constructive feedback
* Watch pull requests get merged and resolve merge conflicts on their own PR
* Use test cases to verify the combined project still works after merging

This workshop is about building together — using everything from Workshops 1-3
so that a team can work on the same project without breaking each other's work.

## 2. Success Definition

A student is successful if they can say:

> "I can work on a project with other people using branches, pull requests, and
> merge — and use tests to make sure our combined work still works."

## 3. Environment & Prerequisites

### Required Before the Workshop

* **GitHub account** signed in, with **GitHub Copilot access** enabled
* Your **fork of the `quiz-game` starter repo** from Workshop 1, with your
  **quiz app from Workshop 3** committed and pushed

No local installs required — VS Code, Node.js, Git, Playwright, and the Playwright
MCP server are all pre-installed in the Codespace you'll open.

### Workshop-Specific Setup (Instructor Prep)

* **Team repository** ready at
  [`Lansing-Tech-Studio/team-quiz-app`](https://github.com/Lansing-Tech-Studio/team-quiz-app)
  with the quiz app baseline and GitHub Pages enabled
* No collaborator/permission setup needed — students **fork** the team repo
  and contribute through pull requests
* Running more than one team? Create one copy of the repo per team (see the
  [Timing Guide]({{ site.baseurl }}/ai-builder-series/4-team-up/instructor-notes/timing-guide))

### Primary Path: GitHub Codespaces

* Students **fork** the team repo, then on their fork: **Code** →
  **Codespaces** → **Create codespace on main**
* GitHub Copilot Chat for building
* Git branches, GitHub pull requests (fork → upstream), and code review
* Playwright MCP for post-merge verification

### Fallback Path (If Needed)

* Prefer a local setup? Follow the [Setup Guide]({{ site.baseurl }}/SETUP) — Copilot
  Chat and the Playwright MCP server are pre-configured in the repo
* Students who missed Workshops 1-3 can be paired with experienced students
  and follow along

## 4. 2-Hour Agenda (Minute-by-Minute)

### 0:00-0:10 — Get Set Up + Why Teams Need Rules

> Fork the team repo, then experience what happens when two people change the
> same thing

* Students open `Lansing-Tech-Studio/team-quiz-app`, **fork it** (just like
  Workshop 1), and create a Codespace on their fork — it builds in the
  background during the demo
* Why fork again? The team repo belongs to everyone, so nobody can push to it
  directly. Your fork is yours — your work reaches the team through a pull
  request
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
* Students create a practice branch in their fork's Codespace

### 0:25-0:40 — Form Teams and Assign Work

> Split the work by concern

* Students form teams of 2-3
* Teams decide who works on what:
  * **Person A**: New question categories (data concern — `questions.js`)
  * **Person B**: UI redesign or new visual theme (styling concern — `style.css`,
    `index.html`)
  * **Person C** (if 3-person team): New feature like a timer, difficulty selector,
    or score animations (logic concern — `app.js`)
* Each person creates a branch on their fork, named after their feature
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

* Students push their branches to their fork:
  * `git push -u origin feature-name` (this works because the fork is theirs —
    no special permissions needed)
* Open a pull request on GitHub — check the direction: base is
  `Lansing-Tech-Studio/team-quiz-app` `main`, head is their fork's branch
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

* The instructor merges approved PRs into main, one at a time (students don't
  have write access to the team repo — show the merges on the projector)
* After each merge, everyone clicks **Sync fork** on their fork
* At least one PR will hit a merge conflict:
  * Walk through resolving it together using the **Resolve conflicts** button
    on the PR (the student can do this — it commits to their fork's branch)
  * Show that the conflict markers tell you exactly what's different
  * Resolve, test, commit
* After all merges:
  * **Sync fork**, then pull the latest main in the Codespace: `git checkout
    main && git pull`
  * Run test cases
  * Use Playwright to verify the combined app works
  * Open the team's live site:
    [lansingtechstudio.org/team-quiz-app](https://lansingtechstudio.org/team-quiz-app/)
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
* Fork, upstream, main branch, push

### Handout 2: Mission Worksheet

* Team planning (who works on what)
* Branch tracking
* PR and review checklist
* Post-merge testing
* Series reflection

## 6. Instructor Guardrails

* **Verify the team repo before the workshop**: `Lansing-Tech-Studio/team-quiz-app`
  should have the current quiz app baseline and GitHub Pages enabled. Test the
  full student path in advance: fork → branch → push → PR. No collaborator
  setup is needed — students never push to the team repo, only to their forks.
* **Students can't merge**: only the instructor has write access to the team
  repo, so the instructor clicks the merge button. Do it on the projector so
  everyone sees each merge land.
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
