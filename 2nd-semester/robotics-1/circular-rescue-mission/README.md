# 📂 Practical Activity 06: LEGO EV3 Challenge – "Rescue in the Circle"

This directory contains the project developed for the **"Rescue in the Circle" LEGO EV3 Challenge**, focusing on programming an autonomous robot to detect and clear an obstacle positioned inside a black-bordered circular arena by pushing it completely out of bounds.

---

## 📋 Activity Description (Translated)

Below is the translated prompt and rules for the challenge implemented in this folder:

* **Challenge Objective:** Program a LEGO EV3 robot equipped with color/light sensors and ultrasonic or touch sensors to detect and remove a cylindrical or cubic obstacle placed inside a black-lined circle on a white surface.
* **Rules & Mission Guidelines:**
  1. **Starting Position:** The robot must start entirely outside the circle.
  2. **Boundary Compliance:** Enter the circle without allowing more than 50% of the base to cross the black line during initial entry/search.
  3. **Obstacle Clearing:** Locate the target obstacle and push it until it is completely outside the black border.
  4. **Completion:** Exit the circle or remain stationary inside upon successful removal.
* **Evaluation Criteria (10 Points Total):**
  * **Execution Time (4 pts):** 0–1 min = 4 pts; 1–2 min = 3 pts; 2–3 min = 2 pts; >3 min = 1 pt.
  * **Precision (2 pts):** Avoid damaging or improperly crossing the black boundary line.
  * **Autonomy (2 pts):** Zero human intervention; 100% autonomous sensor-based decisions.
  * **Code Efficiency (2 pts):** Logical utilization of sensors, search algorithms, and trajectory correction routines.

---

## 📌 Project Context & Methodology
* **Course:** Robotics 1
* **Platform:** LEGO MINDSTORMS EV3 / EV3 Classroom.
* **Language & Interface:** While this documentation is written in English, block names, program comments, display text, and variable labels within the software environment are maintained in **Portuguese**.

---

## 🚀 How to Run

To open and execute this project, you will need **EV3 Classroom** (version **1.5.3** or higher).

1. Launch **EV3 Classroom** (v1.5.3+).
2. Go to `File` > `Open` (or `Arquivo` > `Abrir`) and select the project file (`.lmsp` or `.ev3p`).
3. Connect your EV3 Intelligent Brick via USB or Bluetooth.
4. Download and run the program on the EV3 Brick.