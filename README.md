# Line-Follower-Robot-using-AVR-Microcontroller-ATmega16
This project demonstrates a basic **line follower robot** built using the **ATmega16 microcontroller**, designed to follow a black line using two infrared sensors. It reads sensor input from `PA0` and `PA1`, then controls the motors through `PORTC` to steer accordingly.

---

## 📁 Project Structure

- `main.c`: Contains the main AVR C code logic for the robot.
- `README.md`: Documentation file (you’re reading it!).
- `Circuit.png`: Circuit schematic or Proteus simulation screenshot.

---

## 🧠 How It Works

- Two IR sensors are mounted underneath the robot:  
  - `leftSen` → connected to `PA0`  
  - `rightSen` → connected to `PA1`
- Sensor logic:  
  - If both sensors detect no line → robot stops  
  - If only right sensor detects the line → robot turns left  
  - If only left sensor detects the line → robot turns right  
  - If both detect line → robot moves forward
---
