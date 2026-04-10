---
layout: default
title: Timing Guide
workshop: AI Builder Series
section: Instructor Notes
---

# One Thing at a Time Timing Guide (2 Hours)

**Audience**: Ages 10-16, completed Workshop 1 (Prompt Power-Ups). \
**Goal**: Separate concerns in the quiz app, one piece at a time, verifying after each.

## 0:00-0:10 — Review and Reconnect

- **Objective**: reconnect with the quiz app and motivate the need for organization.
- **Flow**:
  1. Students open their quiz app from Workshop 1
  2. Quick recap: "Last time we built this with good prompts. It works!"
  3. Now look at the code: "What happens if we want to add 20 more questions?"
  4. "What if we want to change the colors without accidentally breaking the scoring?"
- **Watch for**:
  - Students who missed Workshop 1 — give them the fallback starter code immediately
  - Students whose Workshop 1 code is already somewhat clean — have them use the
    fallback starter code instead, so they get the full messy-to-clean experience
- **Tip**: don't spend time debugging Workshop 1 issues. If a student's app doesn't
  work, hand them the starter code and move on.

## 0:10-0:30 — The Spaghetti Problem

- **Objective**: show (not just tell) why tangled code causes problems.
- **Demo**:
  1. Open the messy quiz code on the projector
  2. Try to add a feature live (e.g., a question counter or category label)
  3. Accidentally break the scoring or display in the process
  4. React naturally: "See how changing one thing broke something else?"
- **Flow**:
  1. Demo the breakage
  2. Ask: "Why did this happen?"
  3. Introduce separation of concerns
  4. LEGO analogy: each brick = one job, swappable without rebuilding
  5. Introduce the 4 concerns: data, display, logic, styling
- **Watch for**:
  - Students who think this is just about being "neat" — emphasize it's about being
    able to change things safely
- **Tip**: make the demo failure genuine. Don't just talk about what could go wrong —
  actually break it.

## 0:30-0:50 — Identify the Concerns

- **Objective**: students see the 4 concerns in their own code.
- **Flow**:
  1. Hand out colored markers or set up comment conventions
  2. Walk through the first few lines together as a group
  3. Students color-code their own quiz app code
  4. Group discussion: which concern has the most code? Where are things tangled?
- **Watch for**:
  - Students who can't tell the difference between display and logic (help them:
    "Does this line put something on screen, or does it make a decision?")
  - Students who finish quickly — ask them to count how many lines each concern has
- **Tip**: for younger students (10-12), project the code on screen and do the
  color-coding as a group activity.

## 0:50-1:00 — Break

- Encourage movement.
- Put a prompt on screen: "If you could only change one part of your quiz, what
  would it be?"
- Use the break to check in with anyone who is behind.

## 1:00-1:25 — Refactor Round 1: Extract Question Data

- **Objective**: move questions into their own file using AI.
- **Flow**:
  1. Model the prompt: "Move the questions array into a separate file called
     questions.js. Don't change anything else."
  2. Students do this on their own code
  3. Add `<script src="questions.js"></script>` to the HTML (before script.js)
  4. Test with Playwright: does the quiz still work?
  5. If it works: commit mentally (or actually, if time). If not: debug the file
     connection.
- **Common issues**:
  - `questions is not defined` — script loading order is wrong
  - AI moved more than just the questions — tell students to be more specific
  - AI renamed the variable — specify "keep the same variable name"
- **Watch for**:
  - Students who let AI refactor multiple things at once — redirect to one change only
- **Tip**: this is the most important refactor step. Give it plenty of time. If
  students get this right, the next steps go faster.

## 1:25-1:45 — Refactor Round 2: Separate Logic and Styling

- **Objective**: extract scoring logic and CSS into their own homes.
- **Flow**:
  1. Step 1: Extract scoring functions
     - Prompt: "Extract the score tracking and answer checking into their own
       functions. Don't change the questions or the HTML."
     - Test with Playwright
  2. Step 2: Extract CSS
     - Prompt: "Move all the CSS from the style tag into a separate styles.css
       file and link it in the HTML. Don't change any functionality."
     - Test with Playwright
- **Watch for**:
  - Students who try to do both steps at once — enforce one at a time
  - CSS link issues (wrong path, missing file)
  - Students who think "it still looks the same" is bad — reinforce: same behavior
    is the goal of refactoring
- **Fast finishers**: extract the restart logic into its own function

## 1:45-1:55 — The Contrast Demo

- **Objective**: viscerally demonstrate why one-at-a-time matters.
- **Demo**:
  1. Take a fresh copy of the messy starter code
  2. Ask AI to "refactor everything at once — separate data, logic, display, and CSS"
  3. Show the result: probably works, but if something is wrong, where do you look?
  4. Compare to what students just did: clear steps, tested at each point
- **Key question**: "Which approach would you trust? Which would you rather debug?"
- **Tip**: even if AI's all-at-once refactor works perfectly, the point stands:
  you can't verify it step by step.

## 1:55-2:00 — Wrap-Up and Preview

- **Show**: the clean file structure on the projector
  ```
  quiz-app/
    index.html      ← display
    styles.css      ← styling
    questions.js    ← data
    script.js       ← logic
  ```
- **Prompts**:
  - "Which file would you open to add a new question?"
  - "Which file would you open to change the colors?"
- **Bridge**: "Now that your code is organized, we can safely add features. But
  first, we need save points so we can undo mistakes."
- **Reminder**: bring your prompt checklist to Workshop 3!

## General Tips Throughout

- **One change, one test**: this is the mantra. Repeat it often.
- **Playwright is the proof**: every refactor step should end with "does Playwright
  show the same thing?" If yes, you succeeded.
- **Don't over-refactor**: 3-4 clean separations is enough. Don't pursue perfect
  architecture — that's not the lesson.
- **The LEGO analogy works**: come back to it whenever students ask "why?" about
  separation.
