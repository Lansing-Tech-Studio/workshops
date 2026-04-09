var currentQuestion = 0;
var score = 0;

var questionEl = document.querySelector("#question");
var answersEl = document.querySelector("#answers");
var scoreEl = document.querySelector("#score");
var quizEl = document.querySelector("#quiz");
var resultEl = document.querySelector("#result");
var finalScoreEl = document.querySelector("#finalScore");
var restartBtn = document.querySelector("#restartBtn");
var progressEl = document.querySelector("#progress");
var progressFill = document.querySelector("#progressFill");
var categoryEl = document.querySelector("#category");

function updateScore() {
    scoreEl.textContent = "Score: " + score + " / " + questions.length;
}

function updateProgress() {
    progressEl.textContent = "Question " + (currentQuestion + 1) + " of " + questions.length;
    var percent = ((currentQuestion) / questions.length) * 100;
    progressFill.style.width = percent + "%";
}

function updateCategory() {
    var q = questions[currentQuestion];
    categoryEl.textContent = q.category || "";
}

function isCorrectAnswer(selectedIndex, questionIndex) {
    return selectedIndex === questions[questionIndex].correct;
}

function showQuestion() {
    var q = questions[currentQuestion];
    questionEl.textContent = q.question;
    updateScore();
    updateProgress();
    updateCategory();
    answersEl.innerHTML = "";

    for (var i = 0; i < q.answers.length; i++) {
        var btn = document.createElement("button");
        btn.textContent = q.answers[i];
        btn.addEventListener("click", checkAnswer);
        answersEl.appendChild(btn);
    }
}

function checkAnswer(event) {
    var q = questions[currentQuestion];
    var buttons = answersEl.querySelectorAll("button");
    var selectedIndex = Array.from(buttons).indexOf(event.target);

    for (var i = 0; i < buttons.length; i++) {
        buttons[i].disabled = true;
        if (i === q.correct) {
            buttons[i].classList.add("correct");
        }
    }

    if (isCorrectAnswer(selectedIndex, currentQuestion)) {
        score++;
    } else {
        event.target.classList.add("wrong");
    }

    updateScore();

    setTimeout(function () {
        currentQuestion++;
        if (currentQuestion < questions.length) {
            showQuestion();
        } else {
            showResult();
        }
    }, 1200);
}

function showResult() {
    quizEl.classList.add("hidden");
    resultEl.classList.remove("hidden");
    progressFill.style.width = "100%";
    finalScoreEl.textContent = "You scored " + score + " out of " + questions.length + "!";
}

function restartQuiz() {
    currentQuestion = 0;
    score = 0;
    quizEl.classList.remove("hidden");
    resultEl.classList.add("hidden");
    showQuestion();
}

restartBtn.addEventListener("click", restartQuiz);

showQuestion();
