# 📂 Activity: Matrices (Multi-dimensional Arrays)

This repository contains advanced laboratory exercises focused on multi-dimensional array manipulation, linear algebra operations, and path-cost analysis using C.

---

### 💻 Environment and Setup
The exercises in this folder were developed and tested using the following configuration:
* **Compiler:** gcc (Rev8, Built by MSYS2 project) 15.2.0
* **Language:** C
* **Documentation:** English (README)
* **Source Code:** Portuguese (Variables, printf strings, and comments use Portuguese)
* **IDE:** Visual Studio Code (VS Code)

#### How to Run in VS Code:
1. **Open the Folder:** Open the specific activity folder in VS Code.
2. **Terminal:** Open the integrated terminal (`Ctrl + '`).
3. **Compile:** Replace the `n` in `exn.c` with the exercise number you wish to compile (e.g., `ex1.c`):  
   `gcc exn.c -o program.exe`
4. **Execute:** Run the generated file:  
   `./program.exe`

---

### 📝 Overview
This activity covers complex matrix operations and real-world computational logic, including:
* **Linear Algebra:** Implementing matrix-vector and matrix-matrix multiplication.
* **Data Structures:** Managing rows ($m$), columns ($n$), and dimensions for calculation compatibility.
* **Weighted Graphs/Costs:** Calculating total itinerary costs based on a transport cost matrix ($A_{ij}$).

> [!IMPORTANT]
> Some files in this directory were recently rewritten or created from scratch. These were originally missing or could not be completed during the regular college term; therefore, they have been updated to ensure the repository's integrity.

---

### 📋 Exercises Description

* **Question 01:** Given a real matrix $A$ (m lines by n columns) and a real vector $V$ (n elements), calculate the product of $A$ by $V$.
* **Question 02:** Given two real matrices $A_{m \times n}$ and $B_{n \times p}$, calculate the product of $A$ by $B$.
* **Question 03:** Implementation of a cost calculation system where matrix $A_{n \times n}$ represents transport costs between cities. [cite_start]Given $n$ itineraries with $k$ cities, the program calculates the total cost for each path. 

---