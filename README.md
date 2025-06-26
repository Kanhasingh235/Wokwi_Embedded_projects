# 🚀 Embedded Systems Project Series – From Basics to Major Project

This repository contains a structured series of embedded systems projects . It follows a day-wise learning approach
starting from LED blinking and button controls, leading up to a full **Home Automation System** as the major project.

### 🎯 Objective
To build practical hands-on skills in embedded systems using Arduino UNO, starting from the basics and progressing to intermediate-level applications.

### 🧰 Tools & Platforms
- **Arduino UNO (Simulated)**
- **Wokwi Simulator**
- **GitHub for version control and documentation**

### 📚 Learning Journey
- ✅ Day 01–05: Basic LED and button handling  
- ✅ Day 06–07: Sequencing, analog input (PWM)  
- ✅ Day 08–12: Sensor-based inputs, buzzer, LCD, multi-device control  
- 🚧 Final Project: Home Automation using multiple inputs and outputs  

Each project includes:
-  Clear README documentation  
-  Learning concept  
-  Verified Arduino code  
-  Wokwi simulation link 

# day 01-Blinking LED
platform : Wokwi simulator 
component: Arduino UNO , LED 

##Description :
 This project blinks the built-in LED on Arduino UNO with a delay pf 1 second .
 It helps to understand basic digital output and delay functions in Arduino.

 ## Skills Used:
  - pinMode()
  - digitalWrite()
  - delay()
    ## ciruit diagram
    Here is the link (https://wokwi.com/projects/433730590277051393)

    # 🚦 Day 02 – Traffic Light Controller using LEDs

## 📅 Project Overview
This project simulates a basic traffic light controller using three LEDs
(Red, Yellow, Green). The lights turn on in a timed sequence just like a
real-world traffic signal. This is part of a 30-day embedded systems self-internship.
## 🛠 Components Used
| Component      | Quantity |
|----------------|----------|
| Arduino UNO    | 1        |
| Red LED        | 1        |
| Yellow LED     | 1        |
| Green LED      | 1        |
| 220Ω Resistors | 3        |
| Jumper Wires   | As needed |
| Breadboard     | 1        |

---
Each LED is connected in series with a 220Ω resistor to ground.

## circuit diagram 
   Here is the link(https://wokwi.com/projects/433907754529703937)
  ---

## 💡 Working Principle
The Arduino runs a continuous loop:
1. Green light turns ON for 5 seconds (vehicles can go)
2. Yellow light turns ON for 2 seconds (prepare to stop)
3. Red light turns ON for 5 seconds (vehicles stop)

## 🔘 Day 03 – LED Controlled by Push Button

### 📌 Overview  
This project turns an LED ON when the push button is pressed, and OFF when released. It helps understand digital input handling using `digitalRead()`.

### 🧰 Components  
- Arduino UNO  
- 1 x LED  
- 1 x Push Button  
- 1 x 220Ω Resistor (LED)  
- 1 x 10kΩ Resistor (pull-down)  
- Breadboard, jumper wires

### 🧠 Concepts Used  
- `pinMode()`  
- `digitalRead()`  
- `digitalWrite()`  
- Pull-down resistor logic
## circuit diagram 
Here is the link(https://wokwi.com/projects/434182444161851393)
## 🔁 Day 05 – Alternate LED Blinking (Even & Odd Pins)

### 📌 Overview  
This project alternately blinks two LEDs connected to even and odd digital pins (e.g., D2 and D3) on the Arduino UNO. It helps understand basic pin control and toggling logic.

### 🧰 Components  
- Arduino UNO  
- 2 x LEDs  
- 2 x 220Ω Resistors  
- Breadboard and jumper wires

### 🧠 Concepts Used  
- `pinMode()`  
- `digitalWrite()`  
- `delay()`
## circuit diagram 
Here is the link (https://wokwi.com/projects/434715368815618049)

## 🔁 Day 05 – LED Chaser

### 📌 Overview  
This project creates a simple LED chaser effect using 8 LEDs connected from digital pins 2 to 9 on an Arduino UNO. LEDs turn ON and OFF in sequence from left to right, then right to left — without using arrays, making it ideal for beginners.

### 🧰 Components  
- Arduino UNO  
- 8 x LEDs  
- 8 x 220Ω Resistors  
- without Breadboard, Jumper Wires

### 🧠 Concepts Used  
-  pinMode()  
-  digitalWrite() 
-  for  loop  
-  delay()
## ciruit diagram 
 Here you can see wokwi circuit diagram (https://wokwi.com/projects/434814402148524033)
