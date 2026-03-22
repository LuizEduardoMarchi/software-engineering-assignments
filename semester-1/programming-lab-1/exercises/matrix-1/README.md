# 📂 Exercises: Matrices (List 01)

This repository contains a specialized set of exercises focused on multi-dimensional array manipulation in C. These problems cover coordinate-based calculations, diagonal operations, and structural transformations like matrix transposition and symmetry verification.

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
This list focuses on fundamental and advanced matrix operations:
* **Scalar Operations:** Multiplying or adding a constant value `x` to all elements or specific columns of a 5x5 matrix.
* **Diagonal Analysis:** Calculating the sum of the main diagonal and comparing it with the secondary diagonal.
* **Structural Logic:** Computing the transpose of a matrix ($A^T$) and verifying if a matrix is symmetric ($a_{ij} = a_{ji}$).
* **Coordinate Mapping:** Accessing and modifying specific elements based on their row and column indices.

> [!IMPORTANT]
> Some files in this directory were recently rewritten or created from scratch. These were originally missing or could not be completed during the regular college term; therefore, they have been updated to ensure the repository's integrity.

---

### 📋 Exercises Description

* **Exercise 01:** Reads a 5x5 integer matrix and a value `x`, then multiplies every element of the matrix by `x`.
* **Exercise 02:** Reads a 5x5 integer matrix and calculates the sum of the elements located on the main diagonal.
* **Exercise 03:** Reads a 5x5 integer matrix and a value `x`, then adds `x` to every element in the matrix.
* **Exercise 04:** Reads a 5x5 integer matrix and a value `x`, then multiplies only the elements of the second column by `x`.
* **Exercise 05:** Reads a 5x5 integer matrix and verifies if the sum of the main diagonal is equal to the sum of the secondary diagonal.
* **Exercise 06:** Reads a 5x5 integer matrix and generates/displays its transpose ($A^T$), where rows become columns.
* **Exercise 07:** Reads a 5x5 integer matrix and determines if it is symmetric (where the element at $i,j$ is equal to the element at $j,i$ for all positions).

---