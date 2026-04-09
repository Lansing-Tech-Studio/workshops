---
layout: default
title: Common Questions
workshop: AI Builder Series
section: Instructor Notes
---

# Prompt Power-Ups Common Questions

Keep answers short and friendly. Add detail only if students ask for more.

## "Is AI actually thinking?"

No. AI predicts the most likely next word based on patterns it learned from
training data. It does not understand what it writes.

*If they want more*: It's like autocomplete on your phone, but much more powerful.
It's very good at patterns, but it doesn't "know" things the way you do.

## "Why did AI give me something different than my neighbor?"

AI has some randomness built in, so the same prompt can produce different results
each time. That's normal. It's also why checking the output matters — you can't
just assume it will be the same every time.

## "My prompt was good but the code doesn't work. What happened?"

AI output is a starting point, not a guarantee. Even with a great prompt, the
code might have bugs. This is normal. Read the output, try running it, and if
something is broken, tell AI what went wrong and ask it to fix that specific thing.

*If they want more*: Being specific about the error helps. "Fix the quiz" is a
bad follow-up prompt. "The score doesn't increase when I click the correct answer"
is a good one.

## "What is Playwright MCP?"

It's a tool that lets AI open a real web browser and see your page. Without it,
AI can only read your code as text. With Playwright, AI can see what the page
actually looks like, click buttons, and take screenshots.

*If they want more*: MCP stands for Model Context Protocol. It's a way to give AI
extra abilities by connecting it to tools. Playwright is one specific tool — there
are others for different tasks.

## "Can I use AI for my homework?"

This is a great conversation to have. AI can help you learn, but copying AI
output without understanding it doesn't help you grow. The skills we're learning
today — writing clear prompts, checking output, and iterating — are skills that
make YOU smarter, not just your homework faster.

## "What if AI gives me wrong information?"

It will! AI makes mistakes and sometimes states wrong things confidently. That's
why evaluation is the most important skill. Always check AI output against what
you know and what you can test.

## "How do I set up the Playwright MCP?"

Walk through the setup steps in VS Code settings. The key steps are:
1. Open VS Code Settings (Ctrl+Comma)
2. Search for "MCP" in the settings search bar
3. Add the Playwright MCP server configuration
4. Restart VS Code if prompted

If students have trouble, check that their VS Code and Copilot are up to date.

## "What's a system prompt?"

A system prompt is like a set of instructions you give AI before starting a
conversation. It tells AI how to behave for your whole project — like saying
"You are a web developer building a kids' quiz app" so you don't have to repeat
that context every time.

## Teaching Notes for Instructors

The most common issue in this workshop is students writing one prompt, getting
imperfect output, and feeling stuck. Normalize iteration early and often. Show
your own failed prompts. The goal isn't perfect output on the first try — it's
building the habit of evaluate-and-improve.
