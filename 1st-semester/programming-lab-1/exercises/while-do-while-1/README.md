# 📂 Exercises: Iteration Structures (While / Do-While - List 01)

This repository contains laboratory exercises focused on indeterminate and determinate repetition loops using `while` and `do-while` in C. These problems cover sequence generation, data accumulation, and basic mathematical simulations.

---

### 💻 Environment and Setup
The exercises in this folder were developed and tested using the following configuration:
* **Compiler:** gcc (Rev8, Built by MSYS2 project) 15.2.0
* **Language:** C
* **Documentation:** English (README)
* **Source Code:** Portuguese (Variables, printf strings, and comments use Portuguese)
* **IDE:** Visual Studio Code (VS Code)

#### How to Run in VS Code:
1. **Open the Folder:** Open the specific exercise folder in VS Code.
2. **Terminal:** Open the integrated terminal (`Ctrl + '`).
3. **Compile:** Replace the `n` in `exn.c` with the exercise number you wish to compile (e.g., `ex1.c`):  
   `gcc exn.c -o program.exe`
4. **Execute:** Run the generated file:  
   `./program.exe`

---

### 📝 Overview
This list addresses several iteration logic scenarios:
* **Controlled Loops:** Generating specific sequences, such as even numbers or arithmetic progressions (e.g., 1, 3, 6, 10...).
* **Sentinel Values:** Processing lists of random numbers until a specific stop-signal (like -99) is detected.
* **Successive Operations:** Implementing multiplication through successive additions and division through successive subtractions.
* **Predictive Modeling:** Calculating the time (years) required for one value to exceed another based on different annual growth rates.

> [!IMPORTANT]
> Some files in this directory were recently rewritten or created from scratch. These were originally missing or could not be completed during the regular college term; therefore, they have been updated to ensure the repository's integrity.

---

### 📋 Exercises Description

* **Exercise 01:** Prints all even numbers from 0 to 10.
* **Exercise 02:** Reads a number and performs successive divisions by 2 until the result is less than 1, displaying the entire sequence.
* **Exercise 03:** Reads a list of random numbers until -99 is entered, then calculates the arithmetic mean of all positive numbers provided.
* **Exercise 04:** Reads ten random integers and displays only those that are divisible by 3.
* **Exercise 05:** Reads an integer $N$ and calculates the first $N$ terms of the sequence (1, 3, 6, 10, 15...).
* **Exercise 06:** Calculates the product of two numbers ($n1 \times n2$) using the successive addition method.
* **Exercise 07:** A growth simulation that calculates how many years it will take for Pedro to become taller than José, given their respective heights and annual growth rates.

---