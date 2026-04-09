---
layout: default
title: Glossary
workshop: AI Builder Series
section: Resources
---

# One Thing at a Time Glossary

Quick definitions for the core terms used in this workshop.

**separation of concerns:** An organizing principle where each part of your code
has one job. Data is separate from display, which is separate from logic, which is
separate from styling.

**concern:** A specific responsibility or job within a project. For example,
"storing the quiz questions" is one concern and "displaying the score" is another.

**data:** The information your app works with. In our quiz app, the questions and
answers are the data.

**display:** The part of your code that controls what the user sees on screen —
the HTML structure and DOM updates.

**logic:** The part of your code that makes decisions and does calculations —
scoring, checking answers, advancing to the next question.

**styling:** The part of your code that controls how things look — colors, fonts,
spacing, and layout (CSS).

**refactor:** To reorganize code without changing what it does. After refactoring,
the app works exactly the same, but the code is cleaner and easier to change.

**extract:** To pull a piece of code out of one place and put it in its own file
or function. "Extract the questions into their own file."

**file structure:** How files and folders are organized in a project. A good file
structure makes it easy to find and change things.

**module:** A self-contained piece of code that does one thing. Each file in our
refactored quiz app is a module.

**side effect:** When changing one part of the code accidentally changes something
else. Separation of concerns reduces side effects.
