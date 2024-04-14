# HomeBody

This project aims to create a versatile security motion detection system using Arduino and various sensors. By combining Arduino hardware with sensors such as ultrasonic, temperature, and LCD display, this system can detect motion, measure distance, and indicate temperature changes, making it suitable for security and environmental monitoring applications.

## Hardware Components
- Arduino UNO R3
- Ultrasonic Sensor
- Temperature/Humidity Sensor
- Servo Motor
- Liquid Crystal Display (LCD)
- Breadboard

## Software 
- Programming Languages: C/C++, HTML/CSS, JavaScript
- Tools/Technologies: Arduino IDE, LiquidCrystal Library, Servo Library, Tempertare Library

## How it Works

The Arduino board serves as the central control unit, powering the servo motor and connecting to various sensors. Here's how the system functions:

1. **Motion Detection**: The servo motor rotates the ultrasonic sensor, which emits ultrasonic waves. These waves bounce off objects and return to the sensor. By measuring the time it takes for the waves to return, the system can detect motion and calculate the distance of the object.

2. **Temperature Monitoring**: The temperature sensor continuously measures the ambient temperature. If a significant change in temperature is detected, it indicates a potential fire hazard.

3. **Display Interface**: The LCD display provides real-time feedback on the distance of detected objects, motion detection status, and temperature readings. 

## Software Integration

The Arduino code is responsible for reading sensor data, controlling the servo motor, and displaying information on the LCD display. Additionally, a web application can be developed to remotely monitor the system's status and receive alerts. Here's how the software components are integrated:

1. **Arduino Code**: The Arduino code utilizes libraries to interface with sensors, control the servo motor, and display information on the LCD display. It includes logic for motion detection, distance calculation, and temperature monitoring.

2. **Web Application**: A web application connected to the Arduino board can receive sensor data using serial communication. Users can access the web interface to view real-time sensor readings, motion detection status, and temperature information. Provided functionality for logging into user accounts to access personalized device configurations. While some features may still be under development, the web app remains fully functional. 

## Installation and Setup

1. **Hardware Setup**: Connect the Arduino board to a computer via a usb port. 

2. **Arduino IDE**: Upload the Arduino code ('security.ino') to the Arduino board using the Arduino IDE.

2. **Web Application**: Clone the project repository from GitHub and start a local server to host the web application. Open a web browser and navigate to the localhost address where the server is running to access the web application. 


## Usage

1. Power on the Arduino board and ensure all connections are secure.

2. Access the web application to monitor the system's status and receive alerts.

3. Interact with the system by observing the LCD display for real-time sensor readings and motion detection status.

## Future Development

- **Customizable Motion Detection Range**: Implement a feature that allows users to adjust the range of motion detection based on their specific needs or environment. 

- **SMS Notifications for Motion Detection**: Integrate SMS notifications or alerts to notify users instantly when motion is detected, providing an additional layer of security and awareness.

- **WebApp Integration**: Enhance user experience by integrating the data displayed on the LCD display into a web application. This would enable users to monitor and control the system remotely from any device with internet access.

- **Machine Learning for Enhanced Detection**:  Explore the use of machine learning algorithms to improve the accuracy and reliability of motion detection, potentially reducing false positives and enhancing overall performance.






