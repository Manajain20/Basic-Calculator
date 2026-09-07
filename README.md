# 🧮 Basic Calculator

A command-line calculator built in **C++** that performs all fundamental arithmetic operations with clean input validation. Built as a personal project to strengthen C++ fundamentals including functions, loops, and error handling.

---

## ✨ Features

- ➕ **Addition** — Sum of two numbers
- ➖ **Subtraction** — Difference of two numbers
- ✖️ **Multiplication** — Product of two numbers
- ➗ **Division** — Quotient with division-by-zero protection
- **%** **Modulus** — Remainder with zero-check (integer operation)
- ✅ **Input Validation** — Handles letters, symbols and invalid input without crashing
- 🔁 **Continuous Loop** — Keep calculating until you choose to exit

---

## 🛠️ How to Run

### Requirements
- A C++ compiler (g++ recommended)
- Windows / Linux / Mac terminal

### Steps

**1. Clone the repository**
```bash
git clone https://github.com/Manajain20/Basic-Calculator.git
cd Basic-Calculator
```

**2. Compile the code**
```bash
g++ -o calculator calculator.cpp
```

**3. Run the program**
```bash
./calculator
```
> On Windows use: `Calculator` instead of `./calculator`

---

## 💻 Sample Output

```
       BASIC CALCULATOR
 1. Addition       (+)
 2. Subtraction    (-)
 3. Multiplication (*)
 4. Division       (/)
 5. Modulus        (%)
 6. Exit
 Enter your choice: 1

 Enter first number  : 25
 Enter second number : 17
 Result: 25 + 17 = 42
```

```
 Enter your choice: 4

 Enter first number  : 10
 Enter second number : 0
 Error: Division by zero is not allowed!
```

```
 Enter your choice: 6

 Thank you for using the calculator. Goodbye!
```

---

## 📁 Project Structure

```
Basic-Calculator/
│
└── calculator.cpp    # Main source file
```

---

## 🧠 Concepts Used

- Functions & Return Types
- Do-While Loop
- Switch-Case
- Input Validation with `cin.fail()`
- Type Casting (`int` cast for modulus)
- Double precision arithmetic

---

## 👨‍💻 Author

**Manan Jain**
First Year B.Tech — Information Technology
Bhagwan Parshuram Institute of Technology, Delhi
GGSIPU

[![LinkedIn](https://img.shields.io/badge/LinkedIn-Connect-blue)](https://www.linkedin.com/in/manan-jain-89a12937b)
[![GitHub](https://img.shields.io/badge/GitHub-Follow-black)](https://github.com/Manajain20)
