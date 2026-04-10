---
layout: default
title: Timing Guide
workshop: AI Builder Series
section: Instructor Notes
---

# Save Points Timing Guide (2 Hours)

**Audience**: Ages 10-16, completed Workshops 1-2. \
**Goal**: Use git commits, write test cases, and follow the save-change-test loop.

## 0:00-0:10 — The "Oh No" Moment

- **Objective**: viscerally demonstrate why save points matter.
- **Demo**:
  1. Open a copy of the quiz app (NOT a student's code)
  2. Make a change that breaks the scoring or display
  3. Try to undo it — close the file, reopen, Ctrl+Z doesn't help
  4. React naturally: "This is gone. I have no way back."
- **Watch for**:
  - Students who have lost work before — they'll nod along. Acknowledge them.
  - Students who missed previous workshops — give them the starter code now.
- **Tip**: use a dramatic example. Delete a function, save the file, close VS Code,
  reopen. The loss should feel real.

## 0:10-0:30 — Git: Your Save Point System

- **Objective**: teach the minimum git commands needed for save points.
- **Flow**:
  1. What is git? "A system that remembers every version of your project."
  2. Video game analogy: save before the boss fight
  3. Demo: `git add .`, `git commit -m "message"`, `git log`
  4. Students make their first commit of the Workshop 2 quiz app
  5. Run `git log` together — "You have a save point!"
- **Key commands** (keep it to these only):
  - `git add .` — select what to save
  - `git commit -m "message"` — create save point
  - `git log` (or `git log --oneline`) — see history
  - `git checkout .` — undo everything since last commit
- **Watch for**:
  - Students typing the commands wrong (quotes, spaces, dots)
  - `git commit` without `-m` opening an editor — show them how to exit (`:q!`)
  - Students who already know git — have them help neighbors
- **Tip**: do NOT teach branches, push, pull, or any other commands. Minimum viable
  git is the goal. Branches come in Workshop 4.

## 0:30-0:50 — Writing Test Cases

- **Objective**: students define what "working" means for their quiz app.
- **Flow**:
  1. "How do you know if your quiz still works after a change?"
  2. Introduce test cases: "When I [do this], [this should happen]"
  3. Write 2-3 together as a class
  4. Students write 3-5 on their own (on paper or in a checklist file)
  5. Use Copilot to suggest additional test cases
  6. Run through all test cases manually to confirm they pass now
- **Watch for**:
  - Test cases that are too vague ("the quiz works") — help them be specific
  - Students who write tests for features that don't exist yet — redirect to current
    behavior
  - Students who rush through — quality matters more than quantity
- **Tip**: the best test cases are ones that will actually catch bugs. "When I pick
  the wrong answer, the correct answer is highlighted green" is better than "the quiz
  has questions."

## 0:50-1:00 — Break

- Encourage movement.
- Put a prompt on screen: "What feature would you add if you knew you could undo it?"
- Use the break to verify everyone has at least one commit.

## 1:00-1:20 — Feature 1: Add with the Loop

- **Objective**: practice the full save-change-test-keep/rollback cycle.
- **Flow**:
  1. Walk through the loop together as a group:
     - Save: `git add . && git commit -m "Before adding question counter"`
     - Change: ask Copilot to add a question counter
     - Test: run through test cases
     - Keep: `git add . && git commit -m "Added question counter"`
  2. Students pick their own feature and do the loop independently
- **Feature suggestions**: question counter, progress bar, category labels, score
  percentage
- **Watch for**:
  - Students who skip the save step — remind them BEFORE they change code
  - Students whose feature doesn't require changes to the right file (e.g., they
    change `questions.js` when they should change `script.js`) — this is a good
    teaching moment about separation of concerns
- **Common issues**:
  - Feature works but test cases weren't updated — discuss: should you update tests
    before or after adding a feature?
  - Copilot generates code that doesn't match the existing structure — help them
    refine the prompt

## 1:20-1:40 — Feature 2: The Intentional Rollback

- **Objective**: students experience catching a bug with test cases and rolling back.
- **Setup**: provide a prompt that will subtly break something:
  - Suggested: "Add a timer that counts down from 10 seconds per question. If time
    runs out, automatically skip to the next question."
  - This typically breaks scoring (skipped questions may count as wrong or not count
    at all, and the score display gets confused)
- **Flow**:
  1. Students save (commit)
  2. Students use the provided prompt
  3. Students test — one or more test cases should fail
  4. Walk through the rollback together: `git checkout .`
  5. Verify: run test cases again — everything passes
  6. "Your save point just rescued you."
- **If the feature works perfectly**: the timer might not break anything for some
  students. If so, have them test edge cases: what happens if time runs out on the
  last question? Does the final score count correctly?
- **Watch for**:
  - Students who are upset about rolling back — validate: "You wrote a good prompt.
    The issue was the complexity of the feature. Saving first meant you lost nothing."
  - Students who want to fix the bug instead of rolling back — acknowledge that
    instinct, but keep the focus on rollback for today. Debugging is a separate skill.
- **Tip**: the rollback is the most important learning moment. Give it space.

## 1:40-1:55 — Feature 3: On Your Own

- **Objective**: students apply the full workflow independently.
- **Flow**:
  1. Students choose a feature
  2. Save → Change → Test → Keep or Rollback
  3. Instructor circulates and helps
- **Watch for**:
  - Students who finish quickly — challenge them to add another feature
  - Students who are stuck — help them write a better prompt, not better code
  - Everyone should have at least 3 commits by now
- **Fast finishers**: try turning a plain-English test case into a Playwright script
  with Copilot's help

## 1:55-2:00 — Wrap-Up and Review Git Log

- **Run `git log --oneline`** on the projector from a student's project (ask for a
  volunteer)
- **Prompts**:
  - "What's the story of this project?"
  - "When were you most glad you had a save point?"
- **Bridge**: "You know how to build carefully on your own. Next time, you'll build
  with a team — and save points, test cases, and separated code will be the only
  things keeping you from chaos."
- **Reminder**: push your code to GitHub before Workshop 4!
  ```bash
  git push
  ```

## General Tips Throughout

- **Git intimidation is real**: keep commands to the absolute minimum. If a student
  gets into a weird git state, help them quietly rather than making it a group
  discussion.
- **Test cases before code**: encourage writing test cases for the new feature BEFORE
  asking Copilot to build it. This builds the habit.
- **Rollback is a skill**: frame it as a superpower, not a failure. "Professional
  developers roll back code all the time."
- **Don't teach branches**: it's tempting when talking about git, but branches are
  Workshop 4. Keep today focused on linear history.
