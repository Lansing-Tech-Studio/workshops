---
layout: default
title: Common Questions
workshop: AI Builder Series
section: Instructor Notes
---

# Team Up Common Questions

Keep answers short and friendly. Add detail only if students ask for more.

## "Why can't I just push to the team repo? Why do I need a fork?"

You don't have permission to push to the team repo — and that's on purpose.
Nobody's half-finished change should land in the shared app without a review.
Your fork is your own copy where you can push anything. Your work reaches the
team through a pull request.

*If they want more*: this is exactly how open-source projects work. Thousands
of strangers contribute to projects like VS Code without any of them having
push access — they fork, branch, and open pull requests.

## "How do I get the team's latest changes into my fork?"

Click the **Sync fork** button on your fork's GitHub page, then run `git
checkout main` and `git pull` in your Codespace. Do this after each PR gets
merged so you're building on the latest team code.

## "Why can't I just work on the main branch?"

You can, but then every change you make immediately affects everyone else. If your
change breaks something, the whole team is stuck. Branches let you experiment
safely and only merge when you're ready.

*If they want more*: In professional teams, nobody works directly on main. Every
change goes through a branch and a pull request.

## "What if I accidentally committed to main?"

Don't panic. We can create a branch from where you are and move the commit there.
Ask the instructor for help — this is a common mistake and easy to fix.

## "My push was rejected. What happened?"

Check which repo you're pushing to. `git push` should go to *your fork* — if
you see a permissions error, you may have opened a Codespace on the team repo
instead of your fork. If the error says the remote has changes you don't have,
run `git pull` first, then push again.

*If they want more*: the `--set-upstream` or `-u` flag only needs to be used the
first time you push a new branch.

## "What is a merge conflict?"

When two people changed the same lines in the same file, git doesn't know which
version to keep. It marks both versions in the file and asks you to decide. This
is normal and not a mistake.

## "How do I fix a merge conflict?"

The easiest way: click **Resolve conflicts** on your pull request. GitHub shows
you the `<<<<<<<`, `=======`, and `>>>>>>>` markers — the top section is one
person's changes, the bottom is the other's. Decide what to keep, remove the
markers, and click **Mark as resolved**. The fix is committed to your fork's
branch, so you're allowed to do it yourself.

*If they want more*: VS Code has built-in merge conflict tools that highlight the
sections and let you click to accept one side or the other.

## "Why can't I click the merge button?"

Merging changes the team's shared repo, and only people with write access can
do that — in this workshop, that's the instructor. Your job is the review:
once you approve, the instructor merges it on the projector so everyone sees
it land.

## "What if I don't understand my teammate's code?"

That's exactly what code review is for! Ask questions in the PR comments: "What
does this function do?" or "Why did you change this line?" Good teammates explain
their code.

## "My teammate's PR has a bug. How do I tell them?"

Be specific and constructive. Instead of "this is wrong," try: "I noticed the
score doesn't reset when I tested this. Could you check the restart function?"
Point to the specific issue and suggest where to look.

## "Can I work on the same file as my teammate?"

You can, but it increases the chance of merge conflicts. That's why Workshop 2
taught separation of concerns — if each person works on different files, merging
is much smoother.

## "What if our merged project doesn't work?"

This is what test cases are for! Run through your test cases to find exactly what
broke. Check the git log to see which merge introduced the problem. You can
always roll back the merge and try again.

## Teaching Notes for Instructors

The biggest risk in this workshop is students getting stuck in git. Test the
fork → branch → PR path yourself in advance and have a cheat sheet of commands
ready. If a
student gets into a bad git state, quietly help them rather than debugging in
front of the group. The focus should be on collaboration concepts, not git
troubleshooting.
