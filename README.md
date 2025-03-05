# Automation and Monitoring of Smart Kitchen Based on Internet of Things

## Overview
This project implements an IoT-based smart kitchen system that provides two main functionalities:

1. **Temperature Monitoring and Control:**
   - Records the temperature in real time using a DHT11 sensor.
   - Regulates the speed of a fan based on the recorded temperature to ensure energy efficiency.
   
2. **LPG Gas Leakage Detection and Alert:**
   - Detects the presence of LPG (Liquefied Petroleum Gas) using a gas sensor.
   - Triggers a buzzer alarm and alert the user when a gas leak is detected.

This system is designed to optimize power consumption while ensuring safety in the kitchen environment.

## Features
- **Real-time temperature monitoring** with an LCD display.
- **Automatic fan speed regulation** based on temperature using PWM control.
- **LPG gas leakage detection** with an alarm and an SMS alert system.
- **User alert mechanism** for potential hazards.
- **Power-efficient operation** with automatic control.

## Components Used
- **Microcontroller:** Arduino
- **Temperature Sensor:** DHT11
- **Gas Sensor:** MQ-3
- **Fan:** Controlled via PWM (11th pin output)
- **Buzzer:** Alerts upon gas detection (3rd pin output)
- **LCD Display:** I2C-based 16x2 LCD for temperature and fan speed display

## File Structure
- **`Main.ino`** – Contains the complete source code for the system, handling sensor readings, fan speed control, alerts, and GSM messaging.

## Installation & Setup
1. Clone the repository:
   ```sh
   git clone https://github.com/RATHISHMANIVANNAN/Automation-and-Monitoring-of-Smart-Kitchen-Based-on-Internet-of-Things.git
   ```
2. Open `Main.ino` in the Arduino IDE.
3. Install the required libraries:
   - `LiquidCrystal_I2C`
   - `SoftwareSerial`
   - `DHT11`
4. Upload the code to the microcontroller.
5. Connect all the components for the system.
6. Power on the system and monitor the outputs.

## Usage
- The system will automatically monitor the temperature and regulate the fan speed accordingly.
- If an LPG leak is detected, an alarm will sound, and the user will be alerted.
- The setup can be integrated with an IoT platform for remote monitoring and control.

## Future Enhancements
- Integration with a mobile app for remote notifications.
- AI-based predictive maintenance and analytics.
- Voice control for fan speed adjustment.
- Additional sensors for humidity and smoke detection.

## License
This project is open-source and available under the MIT License.


For any queries or contributions, feel free to raise an issue or a pull request in this repository.

---
### 🔗 Repository Link: [GitHub Repo](https://github.com/RATHISHMANIVANNAN/Automation-and-Monitoring-of-Smart-Kitchen-Based-on-Internet-of-Things)

