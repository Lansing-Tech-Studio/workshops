---
layout: default
title: Vocabulary
workshop: Interactive HTML + JavaScript
section: Student Handouts
print_friendly: true
---

# Interactive HTML + JavaScript Vocabulary

## Word Bank

|---|---|---|
| HTML | CSS | JavaScript |
| element | tag | attribute |
| DOM | event | event listener |
| input | textarea | select |
| class | id | |

## Fill In the Blanks

1. <span class="blank-line-short"></span> is the structure of a web page.
2. <span class="blank-line-short"></span> controls how a web page looks.
3. <span class="blank-line-short"></span> makes a web page interactive.
4. A <span class="blank-line-short"></span> is a single piece of HTML, like a `p` or `div`.
5. A <span class="blank-line-short"></span> is the name of an HTML element, like `p` or `h1`.
6. An <span class="blank-line-short"></span> gives extra information, like `id="title"`.
7. The <span class="blank-line-short"></span> is the browser's model of the page.
8. An <span class="blank-line-short"></span> is something that happens, like a click.
9. An <span class="blank-line-short"></span> is code that runs when an event happens.
10. An <span class="blank-line-short"></span> collects short text from a user.

<div class="page-break-after"></div>

## Quick Checks

- Circle the HTML input types we used: <br>`input` / `textarea` / `select` / `img`
- Match the role (left side) to the language (right side):

<div>
  <div style="float: left; width: 50%;">
    <ul>
      <ul>
        <li>Structure</li>
        <li>Style</li>
        <li>Behavior</li>
      </ul>
    </ul>
  </div>
  <div style="float: left; width: 50%;">
    <ul>
      <ul>
        <li>HTML</li>
        <li>CSS</li>
        <li>JavaScript</li>
      </ul>
    </ul>
  </div>
</div>

## Stretch: DOM Detective

Find and circle the mistake in this code:

```html
<label for="message">Message</label>
<input id="messageText">

<script>
  const message = document.querySelector("message");
</script>
```

Hint: Check the input type and the selector.
