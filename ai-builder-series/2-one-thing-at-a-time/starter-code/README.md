# One Thing at a Time — Starter Code

## About This Workshop

Students should use their quiz app from Workshop 1. If a student missed Workshop 1
or their app doesn't work, use the `index.html` file in this folder as a starting
point.

## Starter File

- `index.html` — A messy but working quiz app with everything in one file

This is intentionally disorganized. All HTML, CSS, JavaScript, and question data
are crammed into a single file. This is the "before" that students will refactor
during the workshop.

## Solution Reference

The `solution/` folder shows what the quiz app looks like after clean separation:

- `index.html` — HTML structure only
- `styles.css` — All styling
- `questions.js` — Question data as a JavaScript array
- `script.js` — Game logic (scoring, flow, answer checking)

## Your Mission

Refactor the messy starter code into the separated structure, one step at a time:

1. Extract questions into `questions.js`
2. Extract scoring logic into clean functions in `script.js`
3. Move CSS into `styles.css`
4. Test with Playwright after each step
