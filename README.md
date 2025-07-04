# adas-level1-stm32
ADAS Level 1 implementation using STM32 and Arduino IDE with sensor integration
# ADAS Level 1 Using STM32 (Arduino IDE)

This project implements an *Advanced Driver Assistance System (ADAS) Level 1* using an STM32 microcontroller programmed via the Arduino IDE. It demonstrates basic collision avoidance using ultrasonic sensing, buzzer alerts, and LED indicators.

## 👥 Project Group

*Group Lead:* Dileep Kumar M  
*Team Members:*  
- Gururaj V  
- Harsha R Gowda  
- Jeethan M K  

Department of Electronics and Communication Engineering  
Cambridge Institute of Technology, Bengaluru (VTU)  
Academic Year: 2024–2025

## 🚘 Features
- Real-time obstacle detection using ultrasonic sensor (HC-SR04)
- Buzzer alert when distance is below threshold
- LED indicators showing system status (safe or alert)
- STM32F103C8T6 (Blue Pill) microcontroller programmed using Arduino IDE

## 🔧 Hardware Used
- STM32F103C8T6 (Blue Pill)
- HC-SR04 Ultrasonic Sensor
- Buzzer
- LEDs (Green for safe, Red for alert)
- Jumper wires and breadboard
- USB to Serial Converter


## 🛠 Software & Libraries
- Arduino IDE with STM32 board support
- STM32duino Core (installed via Boards Manager)
- NewPing library for ultrasonic sensing


## 🧠 System Logic
1. Ultrasonic sensor measures distance in real time.
2. If distance < 20 cm:
   - Buzzer turns on
   - Alert LED (Red) turns on
3. If distance ≥ 20 cm:
   - Buzzer stays off
   - Safe LED (Green) remains on


## 📁 Files Included
- adas_level1_stm32.ino – Arduino code
- README.md – Project documentation

## 📊 Output & Behavior
- Serial Monitor displays distance in centimeters.
- System gives a real-time audio-visual warning for nearby obstacles.
- Ensures basic safety mechanism using a cost-effective embedded setup.

## 🚀 Future Enhancements
- Integrate IR-based lane detection
- Display system status on OLED screen
- Add vibration motor for driver feedback
- Adaptive alert thresholds using real-time tuning

> Project by Dileep Kumar M and team, ECE Dept, Cambridge Institute of Technology
