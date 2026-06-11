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

1. **Verify the team repo**:
   [`Lansing-Tech-Studio/team-quiz-app`](https://github.com/Lansing-Tech-Studio/team-quiz-app)
   should contain the current quiz app baseline (`index.html`, `style.css`,
   `questions.js`, `app.js`) plus the devcontainer/MCP config, with GitHub
   Pages enabled (Settings → Pages → `main` / root). Check the **Actions**
   tab: the latest **Tests** run on `main` should be green (unit + e2e suites
   run on every PR and every push to `main`)
2. **Test the full student path yourself**: fork the team repo (with a test
   account, or delete your old fork first), create a branch, push it, and open
   a PR to the upstream. No collaborator setup is needed — students never push
   to the team repo, only to their own forks
3. **Multiple teams?** One repo works for a single team of 2-3. For more
   teams, create one copy per team so teams don't collide on `main`:

   ```bash
   git clone https://github.com/Lansing-Tech-Studio/team-quiz-app.git
   cd team-quiz-app
   gh repo create Lansing-Tech-Studio/team-quiz-app-2 --public
   git remote set-url origin https://github.com/Lansing-Tech-Studio/team-quiz-app-2.git
   git push -u origin main
   gh api -X POST repos/Lansing-Tech-Studio/team-quiz-app-2/pages \
     -f "source[branch]=main" -f "source[path]=/"
   ```

4. **Plan the merge conflict**: decide which two students will touch the same file
   slightly (e.g., both modify the `<h1>` text or a shared CSS property)

This setup cannot be done during the workshop — there isn't time.

**Why forks instead of collaborators?** Students don't have write access to
the team repo, so they can't push branches to it — and granting collaborator
access to every student is slow and error-prone. Forking needs no permissions
at all: anyone can fork a public repo, push to their own fork, and open a PR
to the upstream. It's also the real open-source workflow. The trade-off: only
you can click **Merge**, so plan to drive the merges on the projector.

## 0:00-0:10 — Get Set Up + Why Teams Need Rules

- **Objective**: get every student a fork and a Codespace, then show that
  collaboration without structure leads to chaos.
- **Setup first (5 min)**: students open
  `github.com/Lansing-Tech-Studio/team-quiz-app`, click **Fork** (same as
  Workshop 1), then on their fork: **Code** → **Codespaces** → **Create
  codespace on main**. The Codespace builds in the background during the demo.
- **Explain the why**: "You can't push to the team's repo — it's everyone's.
  Your fork is yours. Your work reaches the team through a pull request."
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
  4. Students create a practice branch in their fork's Codespace terminal
- **Watch for**:
  - Codespaces that haven't finished building — they were started at 0:00, so
    most should be ready
  - Students who forget to switch branches before making changes
  - Confusion between `git branch` (list) and `git checkout -b` (create + switch)
- **Tip**: the "switch back and the change disappears" demo is the magic moment. Let
  it land.

## 0:25-0:40 — Form Teams and Assign Work

- **Objective**: organize teams and divide work by concern.
- **Flow**:
  1. Assign teams (pre-planned or student choice)
  2. Teams discuss and decide who works on what:
     - Person A: New questions (`questions.js`)
     - Person B: Visual redesign (`style.css`, `index.html`)
     - Person C: New feature (`app.js`)
  3. Each person creates a feature branch in their fork's Codespace:
     `git checkout main`, then `git checkout -b feature-name`
  4. Verify everyone is on their own branch: `git branch`
- **Watch for**:
  - Students who accidentally created their feature branch off the practice
    branch instead of `main`
  - Students who forked the team repo but opened a Codespace on their old
    `quiz-game` fork by mistake
  - Students who want to work on the same feature — encourage division by concern
- **Tip**: have the team repo URL written on the board or in a shared document.

## 0:40-0:50 — Break

- Encourage teams to talk about their plans.
- Put a prompt on screen: "What's the hardest part about working on a team project?"
- Verify everyone has forked the team repo, has a Codespace open, and is on
  their feature branch.

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

- **Objective**: students push to their fork, open PRs to the upstream, and
  review each other's code.
- **Flow**:
  1. Push: `git push -u origin feature-name` — this goes to *their fork*,
     which is why it works without any special permissions
  2. Open a PR on GitHub (walk through the UI together if this is new) —
     GitHub shows a **Compare & pull request** banner on the fork
  3. Check the PR direction together: base = `Lansing-Tech-Studio/team-quiz-app`
     `main`, head = their fork's feature branch (GitHub defaults to this for
     fork PRs, but verify)
  4. Use Copilot to help write the PR description
  5. Approve the test checks: GitHub holds Actions runs from first-time fork
     contributors, so click **Approve and run** on each student's first PR
     (needed once per student). The unit and e2e tests then run automatically
  6. Each student reviews at least one teammate's PR — anyone can comment and
     approve on a public repo, no permissions needed. Green checks are part
     of the review: "tests pass" plus a human look at the code
  7. Model review language: "This works! One suggestion: ..."
  8. Approve or request changes
- **Watch for**:
  - PRs opened against the student's own fork (base = their fork) instead of
    the upstream team repo — the changes "merge" but never reach the team
  - Red checks on a PR — click **Details** together; the unit tests name
    exactly which question or element id is broken. A failing check is a
    teaching moment, not a problem
  - Students who don't know how to find the PR page on GitHub — walk through it
  - Reviews that are mean or unhelpful — redirect to constructive language
  - Students who approve without reading — encourage at least one specific comment
- **Tip**: the first time students review code is a vulnerable moment. Set the tone
  by doing a live review of a PR yourself, modeling kindness and specificity.

## 1:40-1:55 — Merge and Resolve

- **Objective**: combine all branches into main and verify the result.
- **Flow**:
  1. *You* merge the first approved PR (click "Merge pull request" on GitHub) —
     students can't, since only you have write access to the team repo. Do it
     on the projector
  2. Everyone syncs: **Sync fork** button on their fork, then `git checkout
     main && git pull` in the Codespace
  3. Merge the second PR — this might conflict
  4. If conflict: walk through resolution together
     - The student clicks **Resolve conflicts** on their PR — it works because
       the fix commits to *their* fork's branch
     - Show the conflict markers in the file
     - Decide what to keep
     - Remove markers, mark as resolved, commit
  5. Merge the third PR (if applicable)
  6. Final: everyone syncs their fork and pulls, runs test cases, uses
     Playwright to verify, and opens the team's live site:
     [lansingtechstudio.org/team-quiz-app](https://lansingtechstudio.org/team-quiz-app/)
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
- **Pre-test everything**: fork the team repo, push a branch to the fork, open
  a PR to the upstream, and merge it yourself before the workshop. Find issues
  before students do.
- **For younger students (10-12)**: the instructor may need to drive the git commands
  while students make the code changes and do the reviews. The concepts (branching,
  reviewing, merging) matter more than memorizing commands.
- **Celebrate the team result**: the whole series builds to this moment. Make it feel
  like an accomplishment.
