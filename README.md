
---

🎮 Rock Paper Scissors – C++ Console Game

📌 Overview

This is a console-based Rock Paper Scissors game implemented using C++.
The project was built as a practice application to strengthen my understanding of:

Enums

Structs

Functions

Game logic

Control flow

Random number generation


The game allows a player to play multiple rounds against the computer, tracks results, and displays a final summary.


---

🧠 Game Rules

Stone beats Scissors

Scissors beats Paper

Paper beats Stone

Same choice results in a Draw



---

⚙️ Features

🎯 Choose number of rounds (1–10)

🤖 Computer makes random choices

🧮 Tracks:

Player wins

Computer wins

Draws


🎨 Console color changes based on round result

📊 Displays final game summary



---

🛠 Technologies Used

Language: C++

Paradigm: Procedural Programming

Concepts Used:

enum

struct

Functions

rand() for randomness

Console input/output




---

📂 Code Structure

enum enChoise
Represents the possible game choices (Stone, Paper, Scissors)

struct stinfogame
Stores game statistics such as wins, losses, draws, and final winner

Core Functions

RandomNumber() → Generates computer choice

resultRound() → Determines round winner

resultFinal() → Determines final game winner

showResult() → Displays round result

game() → Main game controller




---

▶️ How to Run

1. Clone the repository


2. Compile using any C++ compiler (e.g. g++)


3. Run the executable


4. Follow on-screen instructions



g++ main.cpp -o rps
./rps


---

📈 Learning Outcome

Through this project, I practiced:

Writing cleaner functions

Separating logic into small reusable units

Handling user input safely

Building a complete mini-game from scratch


This project reflects my learning journey in C++ fundamentals.


---

🔮 Possible Improvements

Input validation for invalid choices

Refactor logic using OOP (classes)

Add replay option without restarting program

Improve UI formatting



---

👤 Author

Mostafa Mahmoud Hussein
Computer Science Student
Learning C++ and Software Development 🚀


---

