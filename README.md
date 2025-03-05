Automation and Monitoring of Smart Kitchen Based on Internet of Things

Overview

This project implements an IoT-based smart kitchen system that provides two main functionalities:

Temperature Monitoring and Control:

Records the temperature in real time.

Regulates the speed of a fan based on the recorded temperature to ensure energy efficiency.

LPG Gas Leakage Detection and Alert:

Detects the presence of LPG (Liquefied Petroleum Gas) using a gas sensor.

Triggers a buzzer alarm and alerts the user when a gas leak is detected.

This system is designed to optimize power consumption while ensuring safety in the kitchen environment.

Features

Real-time temperature monitoring

Automatic fan speed regulation based on temperature

LPG gas leakage detection with an alarm system

User alert mechanism for potential hazards

Power-efficient operation

Components Used

Microcontroller: ESP8266 / Arduino

Temperature Sensor: DHT11 / DHT22

Gas Sensor: MQ-2 / MQ-5

Fan: Controlled via PWM

Buzzer: Alerts upon gas detection

LCD Display (Optional): To show temperature and status

File Structure

Main.ino – Contains the complete source code for the system, handling sensor readings, fan speed control, and alerts.

Installation & Setup

Clone the repository:

git clone https://github.com/yourusername/Automation-and-Monitoring-of-Smart-Kitchen-Based-on-Internet-of-Things.git

Open Main.ino in the Arduino IDE.

Install the required libraries (if any, e.g., DHT, MQ sensor libraries).

Upload the code to the microcontroller.

Connect the components as per the circuit diagram.

Power on the system and monitor the outputs.

Usage

The system will automatically monitor the temperature and regulate the fan speed accordingly.

If an LPG leak is detected, an alarm will sound, and the user will be notified.

The setup can be integrated with an IoT platform for remote monitoring and control.

Future Enhancements

Integration with a mobile app for remote notifications.

AI-based predictive maintenance and analytics.

Voice control for fan speed adjustment.

Additional sensors for humidity and smoke detection.

License

This project is open-source and available under the MIT License.

Contributors

[Your Name]

[Other Contributors]

For any queries or contributions, feel free to raise an issue or a pull request in this repository.

🔗 Repository Link: GitHub Repo
