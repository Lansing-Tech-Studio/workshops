---
layout: default
title: Common Questions
workshop: AI Builder Series
section: Instructor Notes
---

# Save Points Common Questions

Keep answers short and friendly. Add detail only if students ask for more.

## "Why do I need git? I can just use Ctrl+Z."

Ctrl+Z only works while the file is open, and it only goes back one step at a
time. Git saves the entire project across all files, and you can go back to any
point in history, even days or weeks later.

*If they want more*: Ctrl+Z also doesn't help if you close the file or your
computer restarts. Git saves permanently.

## "What should I write in my commit message?"

Describe what you changed, not how. "Added question counter" is better than
"Changed script.js." Keep it short — one sentence is usually enough.

*If they want more*: imagine reading the message six months from now. Would you
know what this commit did?

## "I forgot to commit before making changes. Can I still go back?"

If you haven't committed the changes yet, `git checkout .` will undo everything
since the last commit. But if you never committed at all, there's nothing to go
back to. That's why we always save first.

## "My test case failed but the quiz looks fine. Is it really broken?"

Maybe! Sometimes bugs are subtle — the quiz might look right but the score could
be wrong, or the restart might not fully reset. Trust your test cases. If a test
says something is wrong, investigate before ignoring it.

## "Do I have to write test cases on paper? Can't the computer test for me?"

Great question! Computers can run automated tests, and that's exactly what
professional developers do. For this workshop, we write tests in plain English so
you focus on thinking about what should happen. In the future, you can turn these
into code that runs automatically.

*If they want more*: Playwright can actually run tests for you. If you're
interested, ask Copilot to turn your plain-English test cases into Playwright
test scripts.

## "Why did git say 'nothing to commit'?"

Either you already committed these changes, or you didn't save your files in VS
Code. Make sure you press Ctrl+S in all changed files, then try `git add .` and
`git commit` again.

## "What's the difference between git add and git commit?"

`git add` selects which files to include (like putting items in a box). `git
commit` seals the box and labels it. You need both steps to create a save point.

## "Can I undo a commit?"

Yes, but for this workshop we keep it simple: we only go back to the last commit
with `git checkout .`. More advanced git commands exist for undoing specific
commits, but we'll keep things straightforward today.

## "Rolling back feels like losing my work."

It can feel that way, but think of it differently: you're protecting your working
version from broken code. The broken code wasn't work you wanted to keep. Your
save point preserved the real work.

## Teaching Notes for Instructors

The most important moment in this workshop is the intentional rollback. If students
never experience needing to roll back, they won't internalize why save points
matter. Make sure the Feature 2 prompt is designed to break something that their
test cases will catch. If every student's code works perfectly, have a backup
scenario ready.
