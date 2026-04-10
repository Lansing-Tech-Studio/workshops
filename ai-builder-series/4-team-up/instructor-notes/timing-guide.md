---
layout: default
title: Timing Guide
workshop: AI Builder Series
section: Instructor Notes
---

# Team Up Timing Guide (2 Hours)

**Audience**: Ages 10-16, completed Workshops 1-3. \
**Goal**: Collaborate using branches, pull requests, code review, and merging.

## Pre-Workshop Setup (Critical!)

Before this workshop, you MUST:

1. **Create a shared GitHub repo** for each team (2-3 students per team)
2. **Add the starter code** (clean separated quiz app) to each repo
3. **Add all team members as collaborators** (Settings → Collaborators → Add people)
4. **Test permissions**: verify each student can clone and push
5. **Plan the merge conflict**: decide which two students will touch the same file
   slightly (e.g., both modify the `<h1>` text or a shared CSS property)

This setup cannot be done during the workshop — there isn't time.

## 0:00-0:10 — Why Teams Need Rules

- **Objective**: show that collaboration without structure leads to chaos.
- **Demo**:
  1. Open a file in VS Code
  2. Narrate: "Developer A adds a new question. Developer B changes the scoring."
  3. Show what happens when both try to save their changes — conflict
  4. "This is why we need branches and pull requests."
- **Flow**:
  1. Demo the conflict scenario
  2. Recap how Workshops 1-3 make teamwork possible:
     - Prompt skills → clear communication about what you're building
     - Separation of concerns → work on different files, fewer conflicts
     - Save points + tests → verify the combined code works
- **Tip**: keep this short and visual. The conflict scenario should be quick and
  memorable.

## 0:10-0:25 — Git Branches: Your Own Workspace

- **Objective**: teach branching as the key to parallel work.
- **Flow**:
  1. What is a branch? "A parallel universe for your project."
  2. Demo: `git checkout -b new-feature`, make a change, switch back to main —
     the change disappears! Switch to the branch — it's back!
  3. Key commands: `git checkout -b`, `git branch`, `git checkout`
  4. Students create their first branch
- **Watch for**:
  - Students who forget to switch branches before making changes
  - Confusion between `git branch` (list) and `git checkout -b` (create + switch)
- **Tip**: the "switch back and the change disappears" demo is the magic moment. Let
  it land.

## 0:25-0:40 — Form Teams and Assign Work

- **Objective**: organize teams and divide work by concern.
- **Flow**:
  1. Assign teams (pre-planned or student choice)
  2. Each team clones the shared repo: `git clone [url]`
  3. Teams discuss and decide who works on what:
     - Person A: New questions (`questions.js`)
     - Person B: Visual redesign (`styles.css`, `index.html`)
     - Person C: New feature (`script.js`)
  4. Each person creates a branch: `git checkout -b feature-name`
  5. Verify everyone is on their own branch: `git branch`
- **Watch for**:
  - Clone URL errors (HTTPS vs SSH — use HTTPS for students)
  - Permission errors (collaborator access not set up)
  - Students who want to work on the same feature — encourage division by concern
- **Tip**: have the team repo URLs written on the board or in a shared document.

## 0:40-0:50 — Break

- Encourage teams to talk about their plans.
- Put a prompt on screen: "What's the hardest part about working on a team project?"
- Verify everyone has cloned the repo and is on their branch.

## 0:50-1:20 — Build on Your Branch

- **Objective**: students build features independently using all series skills.
- **Flow**:
  1. Each student works on their assigned feature on their branch
  2. They use: good prompts (W1), change only their files (W2), commit and test (W3)
  3. Instructor circulates and helps
- **Watch for**:
  - Students who accidentally work on main — help them move to their branch
  - Students who change files outside their assigned concern — redirect
  - Students who don't commit — remind them of the save-change-test loop
  - Engineering the merge conflict: ensure at least one pair of students both
    modify a shared element (e.g., both change the page title or background color)
- **Common issues**:
  - Copilot generates changes to files outside the student's concern — remind them
    to specify which files to change in their prompt
  - Students finish at very different speeds — fast finishers can start writing their
    PR description
- **Tip**: 30 minutes is tight. Keep features small. A few new questions, a color
  change, or one new UI element is enough.

## 1:20-1:40 — Pull Requests and Code Review

- **Objective**: students push, open PRs, and review each other's code.
- **Flow**:
  1. Push: `git push -u origin feature-name`
  2. Open a PR on GitHub (walk through the UI together if this is new)
  3. Use Copilot to help write the PR description
  4. Each student reviews at least one teammate's PR
  5. Model review language: "This works! One suggestion: ..."
  6. Approve or request changes
- **Watch for**:
  - Push errors (need to set upstream, or permissions issues)
  - Students who don't know how to find the PR page on GitHub — walk through it
  - Reviews that are mean or unhelpful — redirect to constructive language
  - Students who approve without reading — encourage at least one specific comment
- **Tip**: the first time students review code is a vulnerable moment. Set the tone
  by doing a live review of a PR yourself, modeling kindness and specificity.

## 1:40-1:55 — Merge and Resolve

- **Objective**: combine all branches into main and verify the result.
- **Flow**:
  1. Merge the first PR (click "Merge pull request" on GitHub)
  2. Everyone pulls: `git checkout main && git pull`
  3. Merge the second PR — this might conflict
  4. If conflict: walk through resolution together
     - Show the conflict markers in the file
     - Decide what to keep
     - Remove markers, save, commit
  5. Merge the third PR (if applicable)
  6. Final: everyone pulls, runs test cases, uses Playwright to verify
- **Watch for**:
  - Merge conflicts that are too complex — help resolve quickly so it doesn't eat
    all the remaining time
  - Students who are confused by conflict markers — show them VS Code's visual merge
    tool
  - Students who think conflicts mean someone did something wrong — normalize it
- **The payoff**: the final Playwright test of the combined app. If possible, show
  it on the projector. When the team's combined quiz works, celebrate it.
- **If something doesn't work**: this is still a win. Use test cases to find the bug,
  roll back the problematic merge, and fix it together.

## 1:55-2:00 — Series Wrap-Up

- **Show the git log**: `git log --oneline --graph` shows branches and merges
- **Review the series**:
  1. Prompt Power-Ups: talked to AI clearly
  2. One Thing at a Time: organized code
  3. Save Points: saved progress and tested
  4. Team Up: built together
- **Mentions**:
  - Claude Code as another AI coding tool
  - Godot MCP for game development
  - GitHub Issues for organizing future work
- **Final prompt**: "What will you build next?"

## General Tips Throughout

- **Git is the hardest part**: most debugging in this workshop will be git-related.
  Have a cheat sheet of commands visible on the board.
- **Keep features small**: this workshop is about the collaboration workflow, not
  building amazing features. A few new questions or a color change is enough.
- **Pre-test everything**: clone the repo, push a branch, open a PR, and merge it
  yourself before the workshop. Find issues before students do.
- **For younger students (10-12)**: the instructor may need to drive the git commands
  while students make the code changes and do the reviews. The concepts (branching,
  reviewing, merging) matter more than memorizing commands.
- **Celebrate the team result**: the whole series builds to this moment. Make it feel
  like an accomplishment.
