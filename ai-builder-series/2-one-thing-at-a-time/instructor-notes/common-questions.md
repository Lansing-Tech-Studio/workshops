---
layout: default
title: Common Questions
workshop: AI Builder Series
section: Instructor Notes
---

# One Thing at a Time Common Questions

Keep answers short and friendly. Add detail only if students ask for more.

## "Why can't I just keep everything in one file?"

You can, and for tiny projects it's fine. But as soon as you want to add features,
fix bugs, or work with other people, having everything in one file makes it really
hard to find things and really easy to break things by accident.

*If they want more*: Imagine a kitchen where all your utensils, food, and cleaning
supplies are in one big drawer. You could find things eventually, but separate
drawers make life much easier.

## "Why did my quiz break after I moved the questions?"

Most likely the new file isn't loaded in the HTML, or it's loaded in the wrong
order. Check that `<script src="questions.js"></script>` comes before
`<script src="script.js"></script>` in your HTML.

*If they want more*: JavaScript runs scripts in order. If `script.js` tries to use
`questions` before `questions.js` has loaded, it won't exist yet.

## "Isn't refactoring a waste of time? The app already works."

Refactoring is an investment. It takes time now but saves much more time later.
Right now, adding a new question means hunting through a big file. After
refactoring, you just open `questions.js` and add a line.

## "AI changed more than I asked it to. What do I do?"

This is common. Tell AI to undo the extra changes, or be more specific in your
prompt. "Move ONLY the questions array. Do not change any other code." The word
"only" is powerful in prompts.

*If they want more*: This is exactly why we test after every change. If AI changed
something extra and it broke, you can catch it right away.

## "What if my concerns don't fit neatly into 4 categories?"

That's normal in real projects. The 4 categories (data, display, logic, styling)
are a starting point. As projects grow, you might have more categories. The
principle is the same: each part should have one job.

## "Do I have to use separate files?"

Separate files are one way to separate concerns, but not the only way. You can also
use separate functions or separate sections within a file. For this workshop, files
make the separation visible and clear.

## "Playwright says it looks the same. Is that good?"

Yes! That's exactly the point. Refactoring changes structure, not behavior. If
Playwright shows the quiz looks and works the same after your change, you
refactored correctly.

## Teaching Notes for Instructors

The color-coding exercise is the most important activity for understanding. If
students skip it or rush through it, the refactoring steps will feel arbitrary.
Give this activity enough time, especially for younger students. Use actual
colored markers or highlighters if you're working on printed code.
