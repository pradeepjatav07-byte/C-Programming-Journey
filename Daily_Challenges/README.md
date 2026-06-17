# 🎯 Daily C Logic Challenges

<div align="center">

[![Challenge-Status](https://img.shields.io/badge/Challenge-Day--01--Complete-success?style=for-the-badge&logo=github)](https://github.com/pradeepjatav07-byte/C-Programming-Journey)
[![Problems-Solved](https://img.shields.io/badge/Problems--Solved-02-blue?style=for-the-badge)](https://github.com/pradeepjatav07-byte/C-Programming-Journey)
[![Language](https://img.shields.io/badge/Language-C-orange?style=for-the-badge&logo=c)](https://en.wikipedia.org/wiki/C_(programming_language))

**"Consistency is the key to mastery."** *A dedicated space for my daily 2-problem challenge to sharpen my logical thinking in C.*

</div>

---

## 📌 Project Overview
This repository is a structured 10-day challenge dedicated to mastering basic to advanced programming logic using the **C Language**. Each day focuses on a core concept, moving from fundamental conditional statements to advanced matrix manipulations and algorithms.

### 🌟 Key Highlights
* 💻 Pure C implementations with clean code principles.
* 🧠 Focus on optimizing conditional logic and algorithmic thinking.
* 📊 Real-time daily progress tracking.

---

## 📊 10-Day Challenge Roadmap

| Day | Topic | Problems | Status |
| :--- | :--- | :--- | :--- |
| **Day 01** | Basic Conditional Logic | Result Analyzer & Digit Classifier | ✅ Done |
| **Day 02** | Decision Making & Loops | TV Discount & Palindrome | ✅ Done |
| **Day 03** | While Loop & Limits | Prime Check & Armstrong Range | ✅ Done |
| **Day 04** | Advanced Loops | Armstrong & Diamond Pattern | ⏳ Pending |
| **Day 05** | Number Systems | Decimal to Binary & Series | ⏳ Pending |
| **Day 06** | Array Basics | Array Max Finder & Linear Search | ⏳ Pending |
| **Day 07** | Array Operations | Array Insertion & Unique Primes | ⏳ Pending |
| **Day 08** | Sorting Algorithms | Bubble & Selection Sort | ⏳ Pending |
| **Day 09** | Matrix Intro | Row Sum & Column Sum | ⏳ Pending |
| **Day 10** | Advanced Matrix | Matrix Multiplication & String Patterns | ⏳ Pending |

---
 📂 Directory Structure
```text
├── Daily_Challenges/
│   ├── Day_01/
│   │   ├── Student_Result_Analyzer.c
│   │   └── Number_Digit_Classifier.c
│   └── README.md  <-- You are here
```

## 🚀 Day 01: Basic Conditional Logic

Today, I focused on mastering the `else-if` ladder and basic range-based conditions.

### 1. 📋 Student Result Analyzer
* **Description:** Calculates total marks and percentage for three subjects and assigns a division (First, Second, Third, or Fail).
* **Key Concept:** `else-if` ladder for multi-range score checking.
* **Source Code:** [`Student_Result_Analyzer.c`](./Day_01/Student_Result_Analyzer.c)

### 2. 🔢 Number Digit Classifier
* **Description:** Identifies whether an input number is a 1-digit, 2-digit, or 3-digit number.
* **Key Concept:** Logical AND (`&&`) operators for precise boundary checking.
* **Source Code:** [`Number_Digit_Classifier.c`](./Day_01/Number_Digit_Classifier.c)

---

## 🚀 Day 02: Decision Making & Loops

Today, I worked on nested conditions for business logic and implemented loops for mathematical number checks.

### 1. 📺 TV Discount Calculator
* **Description:** Calculates the net price of a television based on its type (Color/B&W) and size specifications using conditional choices.
* **Key Concept:** Nested `if-else` and choice-based branching.
* **Source Code:** [`TV_Discount_Calc.c`](./Day_02/TV_Discount_Calc.c)

### 🔄 2. Palindrome Number Checker
* **Description:** Reverses an integer using a `while` loop to check if it reads the same backward as forward.
* **Key Concept:** Number reversal logic (`% 10` and `/ 10`) inside a loop structure.
* **Source Code:** [`Palindrome_Check.c`](./Day_02/Palindrome_Check.c)
---

## 🚀 Day 03: While Loop & Range Limits

Today, I worked on tracking prime conditions using loops and generating mathematical number series within user-defined ranges.

### 1. 🔢 Prime Number Checker
* **Description:** Determines whether a user-inputted number is prime or not using a conditional tracking loop.
* **Key Concept:** Loop boundaries and factors evaluation.
* **Source Code:** [`Prime_Check.c`](./Day_03/Prime_Check.c)

### 🦾 2. Armstrong Numbers in Range Generator
* **Description:** Finds and prints all Armstrong numbers up to a specific limit specified by the user.
* **Key Concept:** Count digits dynamically and calculate powers across a generated range using loops.
* **Source Code:** [`Armstrong_Range.c`](./Day_03/Armstrong_Range.c)


🛠️ How to Run & Execute
Make sure you have a C compiler (like gcc) installed on your system.

1. Compilation
To compile a specific challenge file, open your terminal and run:
gcc Student_Result_Analyzer.c -o output

2. Execution
Run the compiled binary file:
./output
💡 Shortcut: You can also compile and run in a single command line:
gcc Student_Result_Analyzer.c -o output && ./output
🤝 Connect with Me
If you like this challenge or have suggestions for optimization, feel free to star ⭐ this repository and connect!
GitHub: @pradeepjatav07-byte
