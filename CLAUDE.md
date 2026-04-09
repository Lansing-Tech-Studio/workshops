# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Project Purpose

This is the **Lansing Tech Studio Youth Tech Workshops** site — a Jekyll-based educational platform delivering 2-hour hands-on tech workshops for students ages 12-14. Hosted at https://lansingtechstudio.org/workshops.

## Development Commands

```bash
# Install dependencies (first time)
bundle install

# Serve locally for development (auto-rebuilds on changes)
bundle exec jekyll serve

# Build the site to _site/
bundle exec jekyll build
```

Lint Markdown with `markdownlint` (config in `.markdownlint.json`).

## Architecture

**Stack:** Jekyll static site generator, Ruby 3.2.8, deployed via GitHub Pages.

**Key configs:**
- `_config.yml` — site URL, navigation structure, plugins (jekyll-relative-links)
- `Gemfile` — depends on `github-pages` gem for compatibility
- `.github/codespaces/devcontainer/devcontainer.json` — Codespaces dev environment (Node 24 + Python)

**Presentations:** Reveal.js slide decks are static HTML files (`slides.html`) stored per workshop. The framework lives in `assets/revealjs/`; update it via `assets/update-revealjs.sh`.

## Workshop Structure

Each workshop follows this standardized layout:

```
workshop-name/
├── index.md                  # Overview, goals, agenda
├── slides.html               # Reveal.js presentation
├── starter-code/
│   ├── README.md
│   ├── [editable files]
│   └── solution/             # Instructor reference only
├── resources/
│   ├── glossary.md
│   └── next-steps.md
├── student-handouts/
│   ├── vocabulary.md
│   └── worksheet.md
└── instructor-notes/
    ├── common-questions.md
    └── timing-guide.md
```

**Multi-workshop series** (e.g. `ai-builder-series/`) use a parent folder with its own `index.md` and `plan.md`, containing numbered sub-workshops (`1-prompt-power-ups/`, `2-one-thing-at-a-time/`, etc.) that each follow the standard layout above.

**Other top-level content:** `learning-checks/` contains quiz/review material that spans multiple workshops.

Navigation for all workshops is defined in `_config.yml` under the `navigation` key. New workshops also need a `defaults` entry in `_config.yml` to set the `workshop` front-matter value.

## Markdown Formatting

When consecutive lines should each render on their own line (not merge into one paragraph), use a trailing backslash (`\`) at the end of each line (except the last). This is common for metadata blocks at the top of workshop pages (Audience, Format, Theme, etc.) and fill-in-the-blank items. Kramdown converts `\` into `<br>` tags.

## Content Guidelines (from README.md)

- Workshops must work independently — students can join mid-series
- Robot persona "Lansing Techster" is used as a peer-learner guide
- Hands-on time: 60-80%; instruction: 20-40%
- Printed materials: max 6 sheets, 14pt+ font, OpenDyslexic preferred, grayscale-friendly
- Tone: "Cut scope before cutting confidence," "Momentum over perfection"

## Scripts

`scripts/` contains admin/helper scripts:
- `student-account-creator.sh` / `student-account-destroyer.sh` — bulk GitHub account management
- `create-godot-shortcut.sh` — Linux desktop launcher for Godot
- `make-thumbnail.sh` — captures workshop opening slide as a YouTube thumbnail
- `arduino-build.sh` / `arduino-upload.sh` — Arduino CLI build and upload helpers (untracked)
- `accounts.json` and `eff_large_wordlist.txt` are gitignored
