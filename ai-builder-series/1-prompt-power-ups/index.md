---
layout: default
title: "AI Builder Series #1: Prompt Power-Ups"
workshop: AI Builder Series
comments: true
---

# Prompt Power-Ups - 2 Hour Workshop

**Audience:** Students ages 10-16 with basic computer familiarity \
**Theme:** _"Say what you mean, check what you get"_ \
**Series:** AI Builder Series (Workshop 1 of 4)

* [Slides]({{ site.baseurl }}/ai-builder-series/1-prompt-power-ups/slides.html)
* Resources:
  * [Glossary]({{ site.baseurl }}/ai-builder-series/1-prompt-power-ups/resources/glossary)
  * [Next Steps]({{ site.baseurl }}/ai-builder-series/1-prompt-power-ups/resources/next-steps)
* Student Handouts:
  * [Vocabulary]({{ site.baseurl }}/ai-builder-series/1-prompt-power-ups/student-handouts/vocabulary)
  * [Worksheet]({{ site.baseurl }}/ai-builder-series/1-prompt-power-ups/student-handouts/worksheet)
* Instructor Notes:
  * [Common Questions]({{ site.baseurl }}/ai-builder-series/1-prompt-power-ups/instructor-notes/common-questions)
  * [Timing Guide]({{ site.baseurl }}/ai-builder-series/1-prompt-power-ups/instructor-notes/timing-guide)

## 1. Workshop Goals

By the end of this workshop, every student should be able to:

* Set up VS Code with GitHub Copilot and Playwright MCP
* Write prompts using the 5-part structure: role, context, task, constraints, examples
* Evaluate AI output against what they actually wanted
* Iterate on prompts to improve results
* Save and reuse system prompts
* Use Playwright MCP to let AI see and refine a web page

This workshop is about learning to communicate clearly with AI and checking its work.

## 2. Success Definition

A student is successful if they can say:

> "I can write a clear prompt, check if the result matches what I wanted, and improve
> my prompt until it does. I can also use Playwright to let AI see and fix what it
> built."

## 3. Environment & Prerequisites

### Required Software

Before the workshop, students should have:

* **VS Code** installed
* **Git** installed and configured
* **GitHub account** created
* **GitHub Copilot** extension installed and signed in
* **Workshop repository forked** (or sync a previous fork)

See the complete [Setup Guide]({{ site.baseurl }}/SETUP) for step-by-step
instructions.

### Workshop-Specific Setup

* **Playwright MCP** configured in VS Code (walked through during the workshop)

### Primary Path

* Local development using VS Code with GitHub Copilot Chat
* Playwright MCP for browser-based AI feedback

### Fallback Path (If Needed)

* GitHub Codespaces (browser-based; be mindful of free quota)

## 4. 2-Hour Agenda (Minute-by-Minute)

### 0:00-0:15 — Welcome and Tool Setup

> Get everyone ready to work

* Quick introductions and series overview
* Verify VS Code, Copilot, and Git are working
* Walk through Playwright MCP setup together
* Test: ask Copilot a simple question to confirm it works

### 0:15-0:30 — What Makes a Good Prompt?

> Learn the recipe for clear AI communication

* Show a bad prompt and its output: "make me a quiz"
* Show a good prompt and its output for the same task
* Students identify what changed between the two
* Introduce the 5 parts: **role, context, task, constraints, examples**
* Analogy: giving directions to someone who has never been to your house

### 0:30-0:55 — Prompt Builder Challenge

> Build the quiz app through iterative prompting

* Students start with a vague prompt and see what Copilot generates
* Round 1: Add **context** — "a trivia quiz for kids about animals"
* Round 2: Add **constraints** — "use HTML, CSS, and JavaScript in a single page"
* Round 3: Add **examples** — "questions should look like: What is the fastest land
  animal? A) Cheetah B) Lion C) Horse D) Eagle"
* Each round: run the code, check the result, improve the prompt
* Goal: a working quiz app in the browser by the end of this section

### 0:55-1:05 — Break

* Encourage movement
* Optional prompt on screen: "Write down one thing that surprised you about AI output"

### 1:05-1:25 — Playwright MCP: AI Sees Your App

> Let AI look at what it built and make it better

* Demo: use Playwright MCP to have Copilot open the quiz in a browser
* AI takes a screenshot, sees the layout, and suggests improvements
* Students use Playwright to refine their quiz's appearance
  * Try: "The buttons are too small" or "The colors are hard to read"
  * AI sees the actual page and makes targeted fixes
* Key lesson: AI can look at the same screen you see

### 1:25-1:45 — Build Your Prompt Checklist

> Create a personal tool for evaluating prompts

* Students create their own Prompt Evaluation Checklist:
  * Did I say what role the AI should play?
  * Did I give enough context about the project?
  * Did I describe the task clearly?
  * Did I set constraints (language, size, style)?
  * Did I give examples of what I want?
  * Did I check the output against what I actually meant?
  * What would I change next time?
* Save a system prompt for "quiz app developer" in Copilot Chat

### 1:45-1:55 — Save Work

> Commit the quiz app to Git

* `git add` the quiz app files
* `git commit -m "Initial quiz app from Workshop 1"`
* Verify the commit with `git log`

### 1:55-2:00 — Wrap-Up and Preview

> Celebrate and look ahead

* Reflection: "What was the biggest difference between your first prompt and your
  last one?"
* Preview Workshop 2: "Your quiz works, but the code is all in one place. Next time
  we'll organize it so we can safely grow it."

## 5. Printed Student Handouts

### Handout 1: Vocabulary (Fill-in-the-Blank)

* Prompt, context, constraint, example, system prompt
* AI, Copilot, MCP, Playwright, iterate

### Handout 2: Mission Worksheet

* Warm-up: what do you know about AI?
* Prompt building rounds
* Prompt Evaluation Checklist (template to fill in)
* Reflection

## 6. Instructor Guardrails

* Resist the urge to make the quiz app "good" — it should be functional but messy,
  because that mess is the motivation for Workshop 2
* Type slowly and narrate your prompts
* Normalize bad AI output: "This is exactly what we expected from a vague prompt"
* Celebrate improvement over perfection
* If younger students struggle with the checklist, pair them with an older student or
  provide a mostly-filled-in version they can customize

## 7. Bridge to Workshop #2 (One Thing at a Time)

End with:

> "Today we learned to talk to AI clearly and check its work. Your quiz app runs, but
> look at the code — everything is jumbled together. Next time, we'll organize it piece
> by piece so we can safely add new features."

## 8. Overarching Goals

* Make AI feel like a tool, not magic
* Build the habit of evaluating AI output critically
* Show that iteration is normal and expected
* Introduce Playwright MCP as a natural part of the workflow
* Give students a working project they'll carry through the series
