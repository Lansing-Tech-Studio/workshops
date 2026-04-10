---
layout: default
title: Timing Guide
workshop: AI Builder Series
section: Instructor Notes
---

# Prompt Power-Ups Timing Guide (2 Hours)

**Audience**: Ages 10-16, basic computer familiarity. \
**Goal**: Write clear prompts, evaluate AI output, iterate, and use Playwright MCP.

## 0:00-0:15 — Welcome and Tool Setup

- **Objective**: get everyone ready to work with Copilot and Playwright MCP.
- **Flow**:
  1. Quick introductions and series overview (what are we building over 4 workshops?)
  2. Verify VS Code, Copilot, and Git are working
  3. Walk through Playwright MCP setup step by step
  4. Test: everyone asks Copilot a simple question to confirm it works
- **Watch for**:
  - Students who didn't complete the pre-workshop setup guide
  - Copilot sign-in issues (have backup accounts ready if possible)
  - Playwright MCP configuration errors (test on lab machines beforehand)
- **Tip**: have early finishers help neighbors. This is a good bonding moment.

## 0:15-0:30 — What Makes a Good Prompt?

- **Objective**: show that prompt quality directly affects output quality.
- **Demo**:
  1. Type "make me a quiz" into Copilot Chat — show the output
  2. Type a detailed prompt with role, context, task, constraints, and example
  3. Compare the two outputs side by side
- **Flow**:
  1. Show the bad prompt and ask: "What's wrong with this?"
  2. Show the good prompt and ask: "What changed?"
  3. Introduce the 5 parts: role, context, task, constraints, examples
  4. Analogy: "Giving directions to someone who has never been to your house"
- **Watch for**:
  - Students who think one word is enough ("it should just know what I want")
  - Reinforce: AI has no context unless you give it context
- **Tip**: keep the bad prompt output on screen during the good prompt demo so
  students can see the contrast.

## 0:30-0:55 — Prompt Builder Challenge

- **Objective**: students build a working quiz app through iterative prompting.
- **Flow**:
  1. Round 1: vague prompt — "make me a quiz" — run the code, see what happens
  2. Round 2: add context and constraints — run the code, compare
  3. Round 3: add examples — run the code, compare
  4. Students continue refining until they have a working quiz
- **Your role**: circulate, ask "What did you change in your prompt?" and "Did the
  output match what you wanted?"
- **Watch for**:
  - Students who copy the exact prompt from the slides instead of writing their own
  - Students who get a working quiz early (encourage them to add more questions or
    change the topic)
  - Students whose code doesn't run (help them paste the error back to Copilot)
- **Common issues**:
  - AI generates code with syntax errors — tell AI the exact error message
  - Quiz doesn't display correctly — this is what Playwright will help with later
  - Students want to make it "perfect" — remind them we'll improve it over 4 workshops
- **Tip**: the quiz app should be functional but messy by design. Don't help students
  clean up the code structure — that's Workshop 2's job.

## 0:55-1:05 — Break

- Encourage movement and rest.
- Put a prompt on screen: "Write down one thing that surprised you about AI output."
- Use the break to check in with anyone who is behind.

## 1:05-1:25 — Playwright MCP: AI Sees Your App

- **Objective**: show students that AI can see and interact with their web page.
- **Demo**:
  1. Ask Copilot to open the quiz in a browser using Playwright
  2. AI takes a screenshot and describes what it sees
  3. Ask AI to suggest improvements based on what it sees
  4. Apply one improvement, then have AI check again
- **Flow**:
  1. Instructor demos the full cycle: prompt → Playwright → screenshot → fix
  2. Students try it on their own quiz apps
  3. Encourage specific prompts: "The buttons are too small" not "make it better"
- **Watch for**:
  - Playwright not connecting (check MCP config)
  - Students asking for too many changes at once (remind: one thing at a time)
  - The "wow moment" when AI describes their actual page — let it land
- **Tip**: this section is the highlight. Give students time to experiment. If they're
  engaged, let this section run a few minutes longer and shorten the checklist section.

## 1:25-1:45 — Build Your Prompt Checklist

- **Objective**: students create a personal tool they'll carry through the series.
- **Flow**:
  1. Hand out the worksheet template with blank checklist
  2. Discuss as a group: "What questions should you ask yourself after writing a prompt?"
  3. Students fill in their own wording and examples
  4. Introduce system prompts and have students save one for "quiz app developer"
- **Watch for**:
  - Younger students (10-12) may need a mostly-filled-in template to customize
  - Students who rush through — encourage them to use their own words, not copy
- **Tip**: the checklist is more valuable if students own the language. "Did I give
  examples?" in their own words is better than a pre-printed checklist.

## 1:45-1:55 — Save Work

- **Objective**: introduce the git save workflow they'll use throughout the series.
- **Git flow**:
  ```bash
  git add .
  git commit -m "Initial quiz app from Workshop 1"
  ```
- **Watch for**:
  - Students who haven't used git before (pair with someone experienced)
  - Merge conflicts from forking (shouldn't happen in Workshop 1, but check)
- **Tip**: keep this brief. Git basics are covered in depth in Workshop 3.

## 1:55-2:00 — Wrap-Up and Preview

- **Prompts**:
  - "What was the biggest difference between your first prompt and your last?"
  - "When did AI surprise you today?"
- **Bridge**: "Your quiz works, but look at the code — everything is in one big pile.
  Next time, we'll organize it piece by piece so we can safely add features."
- **Reminder**: bring your prompt checklist to Workshop 2!

## General Tips Throughout

- **Normalize bad output**: "This is exactly what happens with a vague prompt."
- **Celebrate iteration**: "You improved the prompt 3 times — that's the skill."
- **Resist cleaning up**: the messy code is Workshop 2's motivation. Do not help
  students refactor or organize their files today.
- **AI lies confidently**: when you spot AI giving wrong information, point it out
  casually. Build the habit of skepticism without making it scary.
