---
layout: default
title: AI Builder Series
workshop: AI Builder Series
comments: true
---

# AI Builder Series

**Audience:** Students ages 10-16 with basic computer familiarity \
**Format:** 4 sequential workshops, 2 hours each \
**Theme:** _"Build real projects with AI — from first prompt to team collaboration"_ \
**Recommended prerequisite:** [AI Playground for Kids]({{ site.baseurl }}/ai-playground-for-kids/)

## Series Overview

Students build a quiz/trivia web app across all 4 workshops. Each session adds new
skills and new features to the same project. By the end, students have a polished,
team-built app published live on the web — and a toolkit of practices they can
apply to any future project.

## Starter Repository

The series uses a dedicated starter repo separate from this workshops site.
Students fork it once at the start of Workshop 1 and grow the same quiz app
across all four sessions.

* **Starter repo:**
  [Lansing-Tech-Studio/quiz-game](https://github.com/Lansing-Tech-Studio/quiz-game)
* **What's inside:** dev container (Copilot + Playwright MCP), placeholder
  `index.html`, and a README guiding students through fork → Codespace → Pages
* **Live publishing:** every student's fork auto-deploys to
  `https://<their-username>.github.io/quiz-game/` via GitHub
  Pages

> Instructors: see [Starter Repo Setup]({{ site.baseurl }}/ai-builder-series/instructor-notes/starter-repo-setup)
> for the one-time repo creation and the `main` / `current` branch convention.

## Tools

* **GitHub Codespaces** — recommended environment; nothing to install locally.
  The dev container pre-installs Copilot, Copilot Chat, the Playwright MCP
  server, and a Chromium browser
* **GitHub Copilot** in VS Code (primary AI tool — free for verified students
  via GitHub Education)
* **Playwright MCP** for AI-powered browser interaction (pre-configured in
  `.vscode/mcp.json`)
* **Git + GitHub** for version control and collaboration

## Workshops

| # | Title | Core Skill | What Students Can Say After |
|---|-------|------------|----------------------------|
| 1 | [Prompt Power-Ups]({{ site.baseurl }}/ai-builder-series/1-prompt-power-ups/) | Communicate clearly with AI | "I can write a clear prompt, check the result, and improve it." |
| 2 | [One Thing at a Time]({{ site.baseurl }}/ai-builder-series/2-one-thing-at-a-time/) | Organize your work | "I can change one part at a time and test each change." |
| 3 | [Save Points]({{ site.baseurl }}/ai-builder-series/3-save-points/) | Protect your progress | "I can save my work, try something new, and roll back if it breaks." |
| 4 | [Team Up]({{ site.baseurl }}/ai-builder-series/4-team-up/) | Build together | "I can work on a project with others using branches and pull requests." |

## Keep Learning

Curious to go further after the series? The
[Learn More]({{ site.baseurl }}/ai-builder-series/resources/learn-more) page
collects links for git training, other AI coding tools, web development, and the
rest of the topics covered here.

## Project Journey

* **After Workshop 1:** Working quiz with a few hardcoded questions and basic styling
* **After Workshop 2:** Clean structure with questions, display, scoring, and styling separated
* **After Workshop 3:** New features added with git history and test cases
* **After Workshop 4:** Team-enhanced version with contributions from multiple students merged together
