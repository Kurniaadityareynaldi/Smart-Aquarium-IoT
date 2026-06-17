# 🐠 Smart Aquarium Prototype for Freshwater Ornamental Fish Using NodeMCU and IoT

An IoT-based smart aquarium system designed to automate and simplify the maintenance of freshwater ornamental fish.

This project was developed as a final undergraduate project in the Department of Electrical Engineering, Faculty of Industrial Technology, Universitas Gunadarma (2021).

## 📖 Overview

Maintaining an aquarium requires regular monitoring of water conditions, lighting, and feeding schedules. This project integrates Internet of Things (IoT) technology to create an intelligent aquarium capable of:

* 🌡️ Monitoring and controlling water temperature
* 💡 Managing aquarium lighting remotely
* 🍽️ Automating fish feeding schedules
* 📱 Providing remote monitoring and control via Blynk

The system is built around the **NodeMCU (ESP8266)** platform and communicates with the cloud using IoT technology.

---

## ✨ Features

### 🌡️ Temperature Monitoring & Control

* Uses the **DS18B20** waterproof temperature sensor.
* Achieves an average measurement error of **0.37 °C**.
* Relative error of only **1.46%**.
* Automatically controls the heater to maintain optimal water temperature.

### 💡 Smart Lighting System

* Uses **WS2812B RGB LED Strip**.
* Adjustable brightness and color through the **Blynk** application.
* Automatic lighting mode with:

  * Average ON delay: **1.53 s**
  * Average OFF delay: **1.61 s**

### 🍽️ Automatic Fish Feeder

* Uses a **180° Servo Motor** to dispense fish feed.
* Average feed dispensed: **5.56 g** per operation.
* Automatic mode response delay: **1.56 s**.

### 🔥 Heater Control

* Relay-based heater switching.
* Maintains stable water temperature automatically.

---

## 🛠 Hardware Components

| Component          | Function                 |
| ------------------ | ------------------------ |
| NodeMCU (ESP8266)  | Main controller          |
| DS18B20            | Water temperature sensor |
| Relay Module       | Heater switching         |
| 220 V AC Heater    | Water heating            |
| WS2812B LED Strip  | Aquarium lighting        |
| Servo Motor (180°) | Automatic feeding        |

---

## 📱 IoT Platform

This project uses **Blynk** for remote monitoring and control.

> ⚠️ **Important:**
> This project was originally developed using an **older version of Blynk**. You may need to migrate the code to the latest Blynk platform before uploading it to your microcontroller.

---

## 📂 Repository Contents

* Source code
* Circuit schematics
* Documentation
* Experimental results

Feel free to replicate, modify, and improve this project for educational or research purposes.

---

## 📊 Keywords

`IoT` · `ESP8266` · `NodeMCU` · `DS18B20` · `WS2812B` · `Relay` · `Heater` · `Servo Motor` · `Blynk` · `Smart Aquarium`

---

## 🎓 Academic Information

**Department of Electrical Engineering**
Faculty of Industrial Technology
Universitas Gunadarma
Bachelor's Degree Final Project — 2021

---

## 📜 License

This project is licensed under the terms specified in the LICENSE file.
