---
layout: default
title: Starter Repo Setup (Instructor)
workshop: AI Builder Series
section: Instructor Notes
---

# AI Builder Starter Repo — Instructor Setup

The AI Builder series uses a **separate GitHub repository** as the starter
template. Students fork it once at the beginning of the series and grow the same
quiz app across all four workshops.

**Canonical repo:** [`Lansing-Tech-Studio/quiz-game`](https://github.com/Lansing-Tech-Studio/quiz-game) \
**Live site (canonical):** [https://lansingtechstudio.org/quiz-game/](https://lansingtechstudio.org/quiz-game/) \
**Live site (student forks):** `https://<their-username>.github.io/quiz-game/`

The canonical repo is the single source of truth — edit it directly, not from
this workshops repo.

## Updating the starter template

Clone the canonical repo and commit changes there:

```bash
git clone git@github.com:Lansing-Tech-Studio/quiz-game.git
cd quiz-game
# ...make changes to devcontainer.json, mcp.json, README.md, index.html...
git add -A
git commit -m "Describe the change"
git push
```

Students who have already forked won't automatically get the update. Tell them
to use GitHub's **Sync fork** button if they need it.

## Branch convention (instructor's personal copy)

- `main` — base template; mirror of the canonical starter repo's `main`. Don't
  edit during workshops.
- `current` — your live-demo branch. Create it fresh from `main` at the start of
  each cohort:

  ```bash
  git checkout main
  git pull
  git branch -D current 2>/dev/null || true
  git checkout -b current
  git push -u origin current --force-with-lease   # only on your fork
  ```

- During each workshop, demo on `current`. Commit live so students see the
  history grow.

Students should be told to work on `main` (or any branch they want) in their
own fork. They don't need to know about `current` — that's just your demo
workspace.

## Walking students through the fork + Pages flow (Workshop 1, 0:00–0:15)

1. **Fork**: open [`https://github.com/Lansing-Tech-Studio/quiz-game`](https://github.com/Lansing-Tech-Studio/quiz-game)
   → **Fork** → **Create fork**
2. **Codespace**: from their fork, **Code** → **Codespaces** → **Create
   codespace on main**
3. **Enable Pages**: on their fork (in a separate browser tab), **Settings** →
   **Pages** → Source = `main` / root → **Save**

The Codespace finishes building while they enable Pages, so the two waits
overlap. By the time both finish (~2 min), each student has:

- A live published page at `https://<their-username>.github.io/quiz-game/`
- A Codespace with Copilot, Copilot Chat, Live Preview, and Playwright MCP
  already running

## Troubleshooting

**A student's Pages site shows 404 even after a push.**
First push to a brand-new Pages site can take up to 5 minutes. After that, give
it ~1 minute per push. If it's still 404 after 5 minutes, check that:

- Pages source is `main` / root (Settings → Pages)
- `index.html` actually exists in `main` (not a different branch)
- The repo is public (Pages on private repos requires a Pro account)

**Copilot Chat doesn't see the Playwright MCP server.**
After the Codespace finishes, run **Developer: Reload Window** from the command
palette. The server should appear under Copilot Chat's tools list. If not,
check the **Codespaces** output panel for `postCreateCommand` errors.

**Student doesn't have Copilot access.**
GitHub Copilot is free for verified students via GitHub Education
([education.github.com](https://education.github.com/)). Verification can take
a few days. For day-of fallback, pair them with a student who has Copilot, or
have a small pool of instructor-funded seats available.
