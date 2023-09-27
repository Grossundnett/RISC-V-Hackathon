# RISC-V-Hackathon


# RVPdH Stage 1- Product Idea Submission Form

Welcome to the RISC-V Product Development Hackathon's product idea submission platform. This form is crafted to capture the essence and innovation behind your product idea. As you navigate through the questions, envision them as a structured blueprint to help articulate and streamline your concept. For example, if you're designing a toy car that uses sensor-based technology to follow a light source, clearly describe its functionality, the sensors it necessitates, and how the VSDSquadron board integrates within its framework.

Whether you're on a quest to revolutionize the domain of educational toys or poised to usher in a groundbreaking IoT-based marvel, this is your platform to manifest your vision. So, roll up your sleeves, and together, let's champion the cause of Made-in-India products that resonate on a global scale!

## Understanding the Judging Criteria:

- **Logic Clarity:** Judges will assess the straightforwardness of the product's underlying logic. For example, if designing a light-responsive toy, how directly does it react to light changes?
- **Working Block Diagram:** A Block diagram should visually depict how different product elements function together. A toy car, should show the flow from light detection to motion.
- **Clarity on Sensor and Interfaces Usage on VSDSquadron:** Clearly define how you're using the VSDSquadron board's features, detailing sensor connections and interface utilization.
- **Product Innovation:** What makes your product unique? Judges will look for innovative features that differentiate your creation in the market. Consider how your product offers something new or distinct.



Components:

- **Infrared sensor:** Detects motion and triggers the gun to point and shoot.
- **Ultrasonic sensor:** Measures distance and sends data to the radar system.
- **Laser:** Provides a visual indicator of the target location.
- **Servo motors:** Control the orientation, trigger, and latch of the gun, as well as the magazine unloading mechanism.
- **Spring:** Assists in ejecting the magazine when empty.
- **Radar system:** Uses IoT to display the obstacle's position and distance on a screen and alert the user.

*Note: We have used Arduino as the microcontroller for explanation purposes. During the hardware execution, we will adjust it to the VSD Squadron board.


Automated RADAR-Guided Targeting System

Introduction

This project aims to create a smart and automated targeting system that can detect and shoot at moving targets using a radar display and a gun mechanism. The system uses Arduino, servo motors, sensors, and IoT concepts to achieve precision and automation.

The project has the following objectives:

● To design and implement a radar display that can show the position and distance of the targets in real time using ultrasonic sensor, Arduino, and Processing.

● To design and implement a gun mechanism that can aim and fire at the targets using servo motors, laser, infrared sensor, and Arduino.

● To integrate the radar display and the gun mechanism using Arduino and IoT concepts, enabling communication and coordination between the components.

● To demonstrate the functionality and performance of the system by testing it on different scenarios and targets.

The project has the following benefits:

● It showcases the application of Arduino, servo motors, sensors, and IoT concepts in creating a smart and automated system.

● It enhances the skills and knowledge of the project team in electronics, programming, and engineering.

● It provides a fun and interactive way of learning and experimenting with different technologies and concepts.

● It has the potential to be further developed or modified for different purposes or applications, such as security, entertainment, or education.

This project aims to create a smart and automated targeting system that can detect and shoot at moving targets using a radar display and a gun mechanism. The system uses Arduino, servo motors, sensors, and IoT concepts to achieve precision and automation.


# Radar Display

The radar display is a graphical interface that shows the position and distance of the targets in real time. It uses the following components and concepts:

- **Ultrasonic Sensor:** This sensor emits ultrasonic waves and measures the time it takes for them to bounce back from an object. It calculates the distance of the object based on the speed of sound and the time of flight. It also detects the angle of the object by rotating on a servo motor.
- **Arduino Integration:** The Arduino board acts as the intermediary between the radar system and the mobile device. It manages the communication protocol, ensuring smooth and reliable data transmission. Additionally, it processes data from sensors to generate real-time updates on the radar display.
- **IoT:** This concept enables the communication between the Arduino and the mobile device, such as a computer or a smartphone. It uses a wireless module, such as Wi-Fi or Bluetooth, to transmit the data over the internet. The mobile device then receives the data and shows it on a graphical interface using a web browser or an app.
- **Processing:** This is a software platform that allows creating and running graphical applications. It is used to create the radar display interface that shows the data from the Arduino in a visual and interactive way.

The radar display uses the concept of IoT to display on our screen and give an alert when an obstacle is close. It uses ultrasonic sensor, Arduino, and Processing to achieve real-time data visualization.

# Gun Mechanism

The gun mechanism in our project is engineered to deliver precision and automation in targeting. Unlike traditional manual potentiometers, we employ servo motors for aiming control. This strategic choice ensures swift and precise adjustments, leading to accurate targeting. The gun mechanism uses the following components and functions:

- **Servo Motors for Aiming and Triggering:** The heart of our targeting system lies in the deployment of two servo motors, each serving a distinct purpose:

  - Aiming Control: One servo motor is dedicated to the aiming mechanism. This motor allows controlled movement along the horizontal and vertical axes, facilitating precise targeting adjustments. It receives the position and distance data from the Arduino and adjusts the angle of the gun accordingly.
  - Trigger Mechanism: The second servo motor is employed for the trigger mechanism. It is responsible for pulling the string back, preparing the gun for firing. Additionally, this servo motor acts as a latch, releasing upon command to initiate firing.

- **Laser:** This component is attached to the gun barrel and emits a laser beam that indicates the direction of the gun. It helps to align the gun with the target and provides visual feedback.
- **Infra Red Sensor:** This sensor detects the presence of motion in front of the gun. It sends a signal to the Arduino when it senses a moving target. It also acts as a safety feature, preventing the gun from firing when there is no motion detected.
- **Spring for Magazine Unloading:** This component is attached to the magazine of the gun and pushes the bullets forward. It ensures that the gun is always loaded and ready to fire.

The gun mechanism is designed to shoot at the targets detected by the radar display. It uses servo motors, sensors, and a laser to achieve automation and precision.


# Arduino Integration

The Arduino board is the central control hub for our targeting system. It coordinates communication and operation between the components. Here’s how it works:

- **Motor Control:** The Arduino board sends signals to the servo motors, controlling their positions and movements. This enables precise aiming and firing.
- **Sensor Feedback:** The Arduino interprets the sensor readings and adjusts motor positions accordingly. It uses the data from the ultrasonic sensor to determine the position and distance of the target. It also uses the data from the infrared sensor to detect motion and trigger the firing sequence.
- **Triggering Logic:** The Arduino processes input commands for triggering. When the command to fire is received, it instructs the trigger servo motor to release, initiating the firing sequence.
- **Communication Protocol:** The Arduino board manages the communication protocol to ensure seamless data transmission to the display device. It uses a wireless module, such as Wi-Fi or Bluetooth, to send the data over the internet. The display device then receives the data and shows it on the radar display interface.

By leveraging the capabilities of the Arduino board, we create a cohesive and responsive targeting system that combines automation with precision.

# Triggering System

The triggering system is a critical component designed for seamless and reliable firing. It employs a two-step process facilitated by servo motors and a robust mechanical design:

- **String Retraction Servo:** This servo motor pulls the string back, preparing the gun for firing. The Arduino board controls the servo, ensuring consistent and reliable string retraction.
- **Firing Latch Servo:** This servo motor acts as a latch mechanism that can be triggered on command. Once activated, it releases the primed mechanism, initiating the firing process. The Arduino coordinates the timing and execution of this crucial step.
- **Arduino Integration:** The Arduino board serves as the central nervous system of the triggering system. It provides the necessary signals and timing to the servo motors, ensuring synchronized operation. Additionally, it processes input commands for triggering, facilitating a seamless and responsive firing mechanism.

The triggering system is designed to shoot at the targets detected by the radar display. It uses servo motors and Arduino to achieve automation and precision.


# Laser Guidance

The laser guidance system enhances the accuracy and precision of the targeting system. It uses a laser module and Arduino to achieve this goal. The system has the following components and functions:

- **Laser Module:** This component is attached to the gun barrel and emits a laser beam that indicates the direction of the gun. It helps to align the gun with the target and provides visual feedback.
- **Arduino Integration:** The Arduino board controls the activation and alignment of the laser module. It interprets data from sensors and servo motors to ensure accurate laser targeting. This integration guarantees that the laser guidance system operates in sync with the overall targeting system.

# Additional Facts

Here are some additional facts about the project that you may find interesting:

- **Sensors Used:** Infrared and ultrasonic sensors play a crucial role in determining motion and distance. The Arduino processes data from these sensors, enabling the system to respond dynamically to detected motion.
- **Servo Motors for Orientation:** Two servo motors are employed to accurately orient the gun. The Arduino coordinates their movements, ensuring precise alignment with the target.
- **Additional Components:** In addition to the mentioned servo motors and sensors, our project includes an ultrasonic sensor, an extra servo motor, and a spring mechanism for magazine unloading.
- **IoT-Enabled Radar:** Our radar system leverages IoT technology for data display and obstacle detection. The Arduino facilitates communication with the radar system and processes data for display on the mobile device.

# Control System

The control system is seamlessly integrated with the Arduino board, which acts as the central control hub for the project. The Arduino board provides the necessary signals and timing to the servo motors for gun aiming and triggering, ensuring synchronized and precise operation. The control system also processes input commands and sensor feedback, facilitating a cohesive and responsive user experience.
