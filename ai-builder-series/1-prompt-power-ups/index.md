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

### Required Before the Workshop

* **GitHub account** created (and signed in)
* **GitHub Copilot access** enabled (free for verified students via GitHub
  Education — apply at [education.github.com](https://education.github.com/))

That's it — no local installs required. VS Code, Node.js, Git, Playwright, and
the Playwright MCP server are all pre-installed in the Codespace you'll open.

### The AI Builder Starter Repo

Across all four workshops, you'll grow a single quiz app. We use a dedicated
starter repo for this — fork it once, and use the same fork for every workshop
in the series.

**Starter repo:** `https://github.com/Lansing-Tech-Studio/quiz-game`

### Primary Path: GitHub Codespaces + GitHub Pages

In the first 15 minutes of Workshop 1 you will:

1. **Fork** the starter repo above into your own GitHub account
2. **Open a Codespace** on your fork (**Code** → **Codespaces** → **Create
   codespace on main**) — the dev container auto-installs Copilot, Copilot
   Chat, Live Preview, and the Playwright MCP server
3. **Enable GitHub Pages** on your fork: **Settings** → **Pages** →
   Source = "Deploy from a branch", Branch = `main`, Folder = `/ (root)` →
   **Save**. Your published site will appear at
   `https://<your-username>.github.io/quiz-game/`

After this, you'll work entirely in the Codespace. Pushes to `main` will
auto-publish to your Pages site within a minute or two.

Be mindful of the [Codespaces free quota](https://docs.github.com/en/billing/concepts/product-billing/github-codespaces#free-quota)
(~120 core-hours/month — plenty for the series).

### Fallback Path: Local VS Code

* Follow the full [Setup Guide]({{ site.baseurl }}/SETUP) before the workshop
* Install Copilot + Copilot Chat extensions and sign in
* Clone your fork of the starter repo locally
* The Playwright MCP server is pre-configured in `.vscode/mcp.json`; install the
  Playwright browser binaries locally with `npx playwright install chromium`

## 4. 2-Hour Agenda (Minute-by-Minute)

### 0:00-0:15 — Welcome, Fork, Codespace, Pages

> Get everyone forked, building a Codespace, and publishing to the web

* Quick introductions and series overview
* **Fork** the starter repo
  `Lansing-Tech-Studio/quiz-game` → **Create fork**
* In the new fork: **Code** → **Codespaces** → **Create codespace on main**
  (this runs in the background for ~2 min)
* In a separate browser tab on the same fork: **Settings** → **Pages** →
  Source = `main` / root → **Save**. Your live URL appears within a minute
* When the Codespace opens, confirm Copilot Chat is signed in (Copilot icon in
  the sidebar) and the Playwright MCP server appears in its tools list
* Test: ask Copilot Chat "What can you do?" — confirm it responds

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

* Start the Live Preview server on the quiz HTML file (right-click → **Show
  Preview**); note the forwarded URL
* Demo: in Copilot Chat, prompt "Open the quiz at the forwarded preview URL with
  Playwright and tell me what you see"
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

### 1:45-1:55 — Save Work and Publish

> Commit the quiz app to Git, then push to update the live Pages site

* `git add` the quiz app files
* `git commit -m "Initial quiz app from Workshop 1"`
* `git push` — within a minute, your Pages site updates with the new quiz
* Verify the commit with `git log` and open your live URL to confirm it works

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
