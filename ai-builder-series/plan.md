---
layout: default
title: AI Builder Series — Workshop Plan
---

# AI Builder Series — Workshop Plan

**Audience:** Students ages 10–16 with basic computer familiarity
**Format:** 4 sequential workshops, 2 hours each
**Series Theme:** _"Build real projects with AI — from first prompt to team collaboration"_
**Prerequisite:** AI Playground for Kids (recommended, not required)

## Series Overview

Students build a quiz/trivia web app across all 4 workshops. Each session adds new
skills and new features to the same project. By the end, students have a polished,
team-built app and a toolkit of practices they can apply to any future project.

| Workshop | Title | Core Skill | One-Liner |
|----------|-------|------------|-----------|
| 1 | Prompt Power-Ups | Communicating with AI | "Say what you mean, check what you get" |
| 2 | One Thing at a Time | Separation of concerns | "Change one piece, test one piece" |
| 3 | Save Points | Version control and testing | "Save before you experiment" |
| 4 | Team Up | Collaboration | "Build together without breaking each other's work" |

## Shared Sample Project: Quiz App

A web-based quiz/trivia app built with HTML, CSS, and JavaScript.

**Why this project:**

- Simple enough for 10-year-olds, extensible enough for 16-year-olds
- Web-based, so Playwright MCP can interact with it throughout
- Has natural separable concerns (question data, display logic, scoring, styling)
- Produces a satisfying, shareable result at every stage
- Easy to split work across a team in Workshop 4

**Project evolution across the series:**

- After Workshop 1: Working quiz with a few hardcoded questions, basic styling
- After Workshop 2: Clean structure — questions in their own data file, display logic
  separated from scoring, CSS in its own stylesheet
- After Workshop 3: New features (categories, score tracking, timer) added with git
  history and test cases
- After Workshop 4: Team-enhanced version with contributions from multiple students
  merged together

## Tools and Environment

**Primary AI tool:** GitHub Copilot in VS Code (inline suggestions + Copilot Chat)
**Bonus/alternate:** Claude Code (demonstrated by instructor, available for students to
explore)
**MCP:** Playwright MCP — configured in Workshop 1, used throughout the series
**Version control:** Git + GitHub
**Other mentions:** Godot MCP server (mentioned for game-dev students, not a focus)

---

## Workshop 1: Prompt Power-Ups

**Duration:** 2 hours
**Theme:** _"Say what you mean, check what you get"_

### Success Definition

A student is successful if they can say:

> "I can write a clear prompt, check if the result matches what I wanted, and improve
> my prompt until it does. I can also use Playwright to let AI see and fix what it
> built."

### What Students Will Learn

- How to set up VS Code with GitHub Copilot and Playwright MCP
- The anatomy of a good prompt: role, context, task, constraints, examples
- How to evaluate AI output — does it match what you actually wanted?
- How to iterate on prompts: what to change when output is wrong, vague, or too big
- What a system prompt is and how to save reusable prompts
- How Playwright MCP lets AI see and interact with your app in a real browser

### Agenda

| Time | Activity | Details |
|------|----------|---------|
| 0:00–0:25 | Environment Setup | Install/verify VS Code, GitHub Copilot, Playwright MCP. Instructor walks through setup live. Students follow along. Troubleshoot as a group. |
| 0:25–0:40 | What Makes a Good Prompt? | Interactive discussion. Show a bad prompt and its output, then a good prompt and its output. Students identify what changed. Introduce the 5 parts: role, context, task, constraints, examples. |
| 0:40–1:00 | Prompt Builder Challenge | Students write prompts to generate the quiz app's HTML shell. Start with a vague prompt ("make me a quiz"), see what happens, then improve it step by step. Each revision should get closer to a usable app. |
| 1:00–1:10 | Break | |
| 1:10–1:30 | Playwright MCP: AI Sees Your App | Show how to use Playwright MCP to have the AI open the quiz app in a browser, look at it, and suggest UI fixes. Students use it to refine their quiz's appearance — colors, layout, readability. This is the "wow" moment: AI can see what it built. |
| 1:30–1:50 | Build Your Prompt Checklist | Students create their own prompt evaluation checklist based on what they learned. Template provided, but they fill in their own wording and examples. Save a system prompt for "quiz app developer" in Copilot. |
| 1:50–2:00 | Wrap-Up and Save | Students save their work. Preview of Workshop 2: "Your quiz works, but the code is a mess — next time we'll clean it up so we can grow it." |

### Takeaway Artifacts

- A working (basic) quiz app
- Personal prompt evaluation checklist (printed or digital)
- A saved system prompt for their project

### Instructor Notes

- The setup phase will vary in length. Have a few students who finished early help
  others. Budget extra time here if this is the students' first time in VS Code.
- Playwright MCP setup may need pre-configuration on lab machines. Test this before
  the workshop.
- Resist the urge to make the quiz app "good" in this session. It should be functional
  but messy — that mess is the motivation for Workshop 2.
- If younger students struggle with the checklist, pair them with an older student or
  provide a mostly-filled-in version they can customize.

---

## Workshop 2: One Thing at a Time

**Duration:** 2 hours
**Theme:** _"Change one piece, test one piece"_

### Success Definition

A student is successful if they can say:

> "I can break my project into separate parts, change one part at a time, and check
> that everything still works after each change."

### What Students Will Learn

- What "separation of concerns" means and why it matters
- How to identify the different concerns in a project (data, display, logic, styling)
- How to ask AI to refactor one piece without touching the rest
- How to verify each change didn't break something (manual testing + Playwright)
- Why changing everything at once makes bugs impossible to find

### Agenda

| Time | Activity | Details |
|------|----------|---------|
| 0:00–0:10 | Review and Reconnect | Open the quiz app from Workshop 1. Quick recap: "This works, but everything is tangled together. What happens when we want to add features?" |
| 0:10–0:30 | The Spaghetti Problem | Interactive demo. Instructor tries to add a new feature to the messy code. It breaks something else. Discuss: why did this happen? Introduce separation of concerns with an analogy (LEGO bricks — each brick does one thing, you can swap them without rebuilding everything). |
| 0:30–0:50 | Identify the Concerns | As a group, label the parts of the quiz app: question data, display/HTML, game logic/scoring, and styling/CSS. Students use colored highlighters or comments to mark which lines belong to which concern. |
| 0:50–1:00 | Break | |
| 1:00–1:25 | Refactor Round 1: Extract Question Data | Use Copilot to move hardcoded questions into a separate data file (JSON or JS array). Prompt AI to do only this change. Test with Playwright: does the quiz still work? Same questions? Same behavior? |
| 1:25–1:45 | Refactor Round 2: Separate Logic from Display | Use Copilot to pull scoring logic into its own function/file. Then separate CSS into its own stylesheet. Each step: change one thing, test one thing. Playwright verifies the app still looks and works the same. |
| 1:45–1:55 | The Contrast Demo | Instructor shows what happens when you ask AI to "refactor everything at once." Compare the chaos to what students just did methodically. Drive the point home. |
| 1:55–2:00 | Wrap-Up and Save | Students save their cleanly separated project. Preview of Workshop 3: "Now that your code is organized, we can safely add features — but first, we need save points." |

### Takeaway Artifacts

- A cleanly refactored quiz app with separated concerns
- "Change One Thing" reference card

### Instructor Notes

- The before/after contrast is the key teaching moment. Make sure the "before" code
  is genuinely messy (Workshop 1 should produce this naturally).
- If students finished Workshop 1 with already-clean code, have a standard messy
  starter available as a fallback.
- Younger students may need help identifying which lines are "data" vs. "logic." Use
  the color-coding activity to make it visual.
- Playwright verification after each refactor step is important — it shows students
  that refactoring shouldn't change behavior, only structure.

---

## Workshop 3: Save Points

**Duration:** 2 hours
**Theme:** _"Save before you experiment"_

### Success Definition

A student is successful if they can say:

> "I can save a working version of my project, try adding something new, test it, and
> go back to my save point if it broke."

### What Students Will Learn

- What a "known good version" is (video game save points analogy)
- Git basics: init, add, commit, log, and how to revert to a previous commit
- What test cases are: plain-language descriptions of expected behavior
- How to ask AI to generate test cases for your project
- The development loop: save → change → test → keep or rollback
- How to add features safely using this loop

### Agenda

| Time | Activity | Details |
|------|----------|---------|
| 0:00–0:10 | The "Oh No" Moment | Instructor demo: make a change to the quiz app that breaks everything, with no way to undo. "Has this ever happened to you?" Introduce the idea of save points. |
| 0:10–0:30 | Git: Your Save Point System | Walk through git init, add, commit. Explain it like a save file — you're freezing a working version in time. Students make their first commit of the Workshop 2 quiz app. Show git log: "Look, you have a save point now." |
| 0:30–0:50 | Writing Test Cases | What should the quiz app do? Students write 3–5 test cases in plain English on paper or in a checklist file: "When I click Start, the first question appears." "When I pick the right answer, my score goes up by 1." Use Copilot to help generate additional test cases. |
| 0:50–1:00 | Break | |
| 1:00–1:20 | Feature 1: Add with the Loop | Students pick a feature to add (e.g., a score display, a question counter, or a category selector). They follow the loop: commit (save) → prompt AI to add the feature → run test cases → commit if passing, revert if not. Walk through a revert together. |
| 1:20–1:40 | Feature 2: The Intentional Rollback | Students add a second feature. This time, the instructor provides a prompt that will subtly break something (e.g., scoring becomes incorrect). Students catch it with their test cases and practice rolling back. This is the key learning moment. |
| 1:40–1:55 | Feature 3: On Your Own | Students add a feature of their choice using the full loop independently. Instructor circulates and helps. |
| 1:55–2:00 | Wrap-Up and Review Git Log | Students look at their git log — they can see the history of their project. Preview of Workshop 4: "You know how to build carefully on your own. Next time, you'll build with a team." |

### Takeaway Artifacts

- A quiz app with new features and a clean git history
- A test case checklist for their project
- Printed "Save Point Loop" reference card (Save → Change → Test → Keep/Rollback)

### Instructor Notes

- Git can be intimidating. Keep it to the minimum commands needed (init, add, commit,
  log, revert/checkout). Do not introduce branches yet — that's Workshop 4.
- The intentional rollback in Feature 2 is critical. If students never need to roll
  back, they won't internalize why save points matter. Engineer a failure.
- Test cases should stay in plain English for younger students. Older students (14+)
  can optionally write them as Playwright scripts if they want to explore.
- Some students may resist reverting ("but I want to keep the broken version and fix
  it"). That's a valid instinct — acknowledge it, but emphasize that for now, a clean
  rollback is the safest move. Fixing broken code is an advanced skill.

---

## Workshop 4: Team Up

**Duration:** 2 hours
**Theme:** _"Build together without breaking each other's work"_

### Success Definition

A student is successful if they can say:

> "I can work on a project with other people using branches, pull requests, and merge
> — and use tests to make sure our combined work still works."

### What Students Will Learn

- Why collaboration is hard without the skills from Workshops 1–3
- Git branches: working on your own copy without affecting others
- Pull requests: proposing changes and reviewing each other's work
- Merge conflicts: what they are, why they happen, how to resolve them
- How AI can help write PR descriptions, review code, and resolve conflicts
- How Playwright and test cases catch integration bugs after merging

### Agenda

| Time | Activity | Details |
|------|----------|---------|
| 0:00–0:10 | Why Teams Need Rules | Quick demo: two people edit the same file differently. What happens? Introduce the problem that branches and PRs solve. Show how Workshops 1–3 skills (clear prompts, separated concerns, save points, tests) make teamwork possible. |
| 0:10–0:25 | Git Branches: Your Own Workspace | Teach branching: create a branch, make changes, switch between branches. Analogy: branches are like parallel universes for your project — you can experiment without affecting the main version. Students create their first branch. |
| 0:25–0:40 | Form Teams and Assign Work | Students form teams of 2–3. Each team starts from the same quiz app baseline (pushed to a shared GitHub repo). Each team member claims one area to improve: new question categories, UI redesign, scoring improvements, timer feature, etc. Each area maps to a separated concern from Workshop 2. |
| 0:40–0:50 | Break | |
| 0:50–1:20 | Build on Your Branch | Each student works on their assigned feature on their own branch. They use the full workflow: good prompts (W1), change only their concern (W2), commit save points and test (W3). Instructor circulates, helps, and ensures at least one pair will have a merge conflict. |
| 1:20–1:40 | Pull Requests and Code Review | Students push their branches and open pull requests. Teams review each other's PRs — use Copilot to help write PR descriptions and review comments. At least one PR per team gets reviewed before merging. |
| 1:40–1:55 | Merge and Resolve | Teams merge their PRs into main. At least one team will hit a merge conflict — walk through resolving it together. After all merges, run test cases and use Playwright to verify the combined app works. Celebrate when it does. Troubleshoot together when it doesn't. |
| 1:55–2:00 | Series Wrap-Up | Review the full journey: from a first prompt to a team-built app. Show the git log: every commit, branch, and merge tells the story of what they built. Encourage students to apply these skills to their own projects. Mention Claude Code as an alternate tool to explore. Mention Godot MCP for students interested in game development. |

### Takeaway Artifacts

- A team-built quiz app with merged contributions from multiple students
- Experience with branches, PRs, and code review
- The full series toolkit: prompt checklist, change-one-thing card, save-point loop
  card, and now a collaboration workflow

### Instructor Notes

- Pre-create a shared GitHub repo for each team before the workshop. Students should
  be added as collaborators in advance to avoid burning setup time on permissions.
- Engineer at least one merge conflict. The easiest way: have two students both modify
  the CSS or the question data file slightly. This feels organic and is easy to
  resolve.
- If a team finishes early, challenge them to add another round of features using the
  full branch-PR-merge cycle.
- Keep PR reviews encouraging and constructive. Model good review comments: "This
  works! One suggestion: ..." rather than "This is wrong."
- The final Playwright test of the merged app is the series payoff. If possible, show
  it on a projector so everyone sees the combined result.
- For younger students (10–12), the instructor may need to drive the git commands
  while students make the code changes. That's fine — the concept matters more than
  memorizing commands.

---

## Series-Wide Notes

### Recurring Elements

- **Playwright MCP** is used in every workshop, not just one. It evolves from "AI sees
  your app" (W1) to "verify refactors didn't break anything" (W2) to "run test
  scenarios" (W3) to "test the merged team app" (W4).
- **Prompt Checklist** from Workshop 1 should be referenced in later workshops.
  Prompting doesn't stop being relevant — students should keep improving their prompts
  throughout.
- **"AI Lies Confidently"** — in each workshop, include at least one moment where AI
  output is wrong and students catch it. Build critical evaluation as a habit, not a
  one-time lesson.

### Differentiation by Age

| Concept | Ages 10–12 | Ages 13–16 |
|---------|------------|------------|
| Prompting | Focus on clear, simple prompts | Introduce system prompts, multi-step prompts |
| Separation of concerns | Color-coding, visual identification | File-level separation, module thinking |
| Git | Instructor-assisted commands, focus on concepts | Hands-on with commands, explore git log and diff |
| Testing | Plain-English checklists | Optional: Playwright test scripts |
| Collaboration | Pair with older student or instructor for git | Independent branch/PR workflow |

### Materials to Prepare

- [ ] VS Code + Copilot setup guide (printed, step-by-step with screenshots)
- [ ] Playwright MCP configuration instructions
- [ ] Prompt Evaluation Checklist template
- [ ] "Change One Thing" reference card
- [ ] "Save Point Loop" reference card
- [ ] Messy quiz app starter code (for Workshop 2 fallback)
- [ ] Shared GitHub repo template for Workshop 4 teams
- [ ] Intentionally-broken prompt for Workshop 3 Feature 2 exercise
- [ ] Series overview handout for parents/guardians

### What Comes Next

After completing the series, students can:
- Apply the same 4-skill toolkit to build their own project from scratch
- Explore Claude Code as an alternate AI coding tool
- Try the Godot MCP server for game development projects
- Contribute to each other's projects using the collaboration workflow they learned
