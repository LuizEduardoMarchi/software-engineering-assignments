# 📂 Practical Activity 04: Explorer Robot with Sensors and Line Following

This directory contains the project developed for **Practical Activity 04**, focusing on programming an autonomous robot that navigates within a rectangular space, reacts to physical obstacles, and executes a line-following routine upon detecting colored indicators on the floor.

---

## 📋 Activity Description (Translated)

Below is the translated prompt for the activity implemented in this folder:

* **Sensor Explorer with Line Following:** Program a robot equipped with an **Infrared / Color Sensor** and a **Touch Sensor** to perform autonomous navigation and line tracking. The robot must:
  1. Start at a designated starting point inside a bounded rectangular area.
  2. Move forward in a straight line until making contact with an obstacle.
  3. When the **Touch Sensor** is triggered, reverse direction and continue its trajectory within the rectangle.
  4. Continuously monitor the **Infrared / Color Sensor**. Upon detecting a red color mark on the floor, initiate a **line-following routine** tracking the red path until a black mark is detected, at which point the robot must come to a complete stop.
  5. Display dynamic status messages on the screen (or console), indicating:
     * Current movement state / position.
     * Touch sensor activation events.
     * Detection of the red line and the start of the line-following routine.
     * Detection of the black line and final system shutdown.

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