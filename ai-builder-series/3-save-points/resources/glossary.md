---
layout: default
title: Glossary
workshop: AI Builder Series
section: Resources
---

# Save Points Glossary

Quick definitions for the core terms used in this workshop.

**git:** A version control system that tracks every change to your project. It
lets you save versions, go back in time, and eventually work with a team.

**repository (repo):** A project folder tracked by git. It contains your files
and the full history of every change ever made.

**commit:** A save point. A snapshot of your project at a specific moment in time.
Each commit has a message describing what changed.

**commit message:** A short description of what you changed, like "Added question
counter" or "Fixed scoring bug." Good messages help you find specific save points
later.

**git add:** The command that selects which files to include in your next commit.
Think of it as putting files in a box before sealing it.

**git log:** The command that shows all your save points in order. Each entry shows
the commit message and when it was made.

**rollback:** Going back to a previous save point. Undoing changes that didn't work
so you can try again from a known good state.

**git checkout:** The command that restores files to their state at the last commit.
It's the "undo" button for everything since your last save point.

**test case:** A plain-English description of expected behavior. It answers: "When
I do X, what should happen?" Test cases help you verify your app still works after
making changes.

**known good version:** A version of your project that you have tested and confirmed
works correctly. Every commit should ideally be a known good version.

**development loop:** The repeating cycle of save, change, test, and keep-or-rollback.
This is the core workflow for safely adding features.

**bug:** A mistake in code that causes unexpected behavior. Test cases help you
find bugs before they cause bigger problems.
