# 📂 Final Exam (P2): Sumo Robot with LEGO EV3

This directory contains the project developed for **Final Exam P2**, focusing on designing and programming an autonomous LEGO EV3 Sumo Robot capable of detecting, attacking, and pushing an opponent out of a circular arena while retaining inside bounds using sensor control logic.

---

## 📋 Activity Description (Translated)

Below is the translated prompt and logical workflow for the final exam project implemented in this folder:

* **Sumo Robot Challenge:** Construct and program an autonomous LEGO EV3 robot designed to compete in a Sumo match. The robot must continuously scan for an opponent, initiate attacks, and avoid stepped arena boundaries using color and distance sensors.
* **Recommended Hardware / Sensors:**
  * **Color/Light Sensor:** Used to detect the boundary line of the arena to avoid self-disqualification.
  * **Ultrasonic / Infrared Sensor:** Used to scan and locate the opponent in front of the robot.
* **Suggested Control Flow:**
  1. **Start:** Activate motors for a brief duration to enter the arena.
  2. **Scan / Search:** Rotate on its own axis until the ultrasonic sensor detects the opponent within target range ($< 30\text{ cm}$).
  3. **Attack:** Drive forward at maximum speed directly toward the detected opponent.
  4. **Defense / Boundary Avoidance:** If the color sensor detects the border (e.g., white line), immediately reverse and turn back toward the center of the arena.
  5. **Looping:** Return to the scanning phase and repeat the cycle until the match concludes.
* **Match Rules:**
  * Two robots compete inside the circular arena per match.
  * Victory is awarded to the robot that pushes the opponent completely outside the boundary line.
  * Matches follow a Best of 3 rounds format, with a maximum limit of 2 minutes per round.

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