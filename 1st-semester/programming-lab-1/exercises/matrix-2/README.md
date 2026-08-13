# 📂 Exercises: Matrices (List 02)

This repository contains a specialized set of exercises focused on advanced matrix properties and real-world data mapping using C. The problems cover pattern recognition, mathematical validation of matrix types, and data counting within multi-dimensional structures.

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
This list addresses complex matrix logic and classification:
* **Matrix Classification:** Identifying "Permutation Matrices" (where each row and column has exactly one '1' and $n-1$ zeros) and "Magic Squares" (where rows, columns, and diagonals sum to the same value).
* **Null Element Analysis:** Counting and reporting the number of entirely null rows and columns within a matrix.
* **Data Mapping & Counting:** Using matrices to represent physical layouts, such as a chessboard or a construction warehouse, and counting occurrences of specific items or materials.
* **Composite Values:** Processing matrix entries where digits represent different pieces of information (e.g., the first two digits representing quantity and the last digit representing a material code).

> [!IMPORTANT]
> Some files in this directory were recently rewritten or created from scratch. These were originally missing or could not be completed during the regular college term; therefore, they have been updated to ensure the repository's integrity.

---

### 📋 Exercises Description

* **Exercise 01:** Checks if an integer matrix $A_{n \times n}$ is a permutation matrix (exactly one '1' per row/column, others are '0').
* **Exercise 02:** Verifies if a square matrix is a "Magic Square" by comparing the sums of all rows, columns, and both diagonals.
* **Exercise 03:** Analyzes a matrix $A_{m \times n}$ to identify and count how many rows and columns are completely null (all elements are zero).
* **Exercise 04:** Simulates a chessboard where specific integers represent different pieces (Pawn, Rook, King, etc.). The program counts the frequency of each piece type on the board.
* **Exercise 05:** Processes a construction yard inventory represented by a matrix. Each element contains a composite code (Quantity + Material Code). The program decodes these values to count the total units of each material present.

---