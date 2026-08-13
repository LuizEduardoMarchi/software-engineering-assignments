# 📂 Exercises: Switch Case (Conditional Selection)

This repository contains a series of exercises focused on multi-way selection structures using `switch` and `case` in C. These problems simulate real-world systems like point-of-sale terminals, payroll adjustments, and inventory management.

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
This list focuses on efficient menu-driven logic and table-based calculations:
* **Dynamic Menu Systems:** Processing snack bar orders and product sales based on specific numeric codes.
* **Salary Management:** Calculating salary raises based on job titles (Manager, Engineer, Technician) with a default fallback for unspecified roles.
* **Inventory & Sales:** Applying variable discount rates to construction materials based on their classification.
* **Input Validation:** Managing "default" cases for codes that do not exist in the provided tables.

> [!IMPORTANT]
> Some files in this directory were recently rewritten or created from scratch. These were originally missing or could not be completed during the regular college term; therefore, they have been updated to ensure the repository's integrity.

---

### 📋 Exercises Description

* **Exercise 01:** A snack bar ordering system that reads a product code and quantity to calculate the total price (e.g., Hot Dog, Bauru, Burger).
* **Exercise 02:** A sales tool for a vendor that calculates total order values based on specific product IDs (from 1001 to 7623).
* **Exercise 03:** A payroll adjustment program that applies different percentage raises based on employee codes. It displays the old salary, new salary, and the calculated difference.
* **Exercise 04:** An inventory liquidation tool for a construction store that identifies product codes and applies the corresponding percentage discount to the final price.

---