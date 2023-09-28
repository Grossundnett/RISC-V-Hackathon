#include <Servo.h>
#include <SoftwareSerial.h>

// Define pins
#define trigPin 9
#define echoPin 10
const int motorPin = 8;  // Assuming this is the pin for the motor
const int buttonPin = 2;

// Create objects
Servo myServo;
Servo triggerServo;
SoftwareSerial bluetoothSerial(2, 3); // RX, TX pins

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(motorPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);

  myServo.attach(8); // Attach the servo to pin 8
  triggerServo.attach(9); 
  bluetoothSerial.begin(9600); 
}

void loop() {
  long duration, distance;

  // Ultrasonic sensor measurements
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = (duration * 0.0343) / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  delay(1000);

  // Rotate the servo
  for(int angle = 0; angle <= 180; angle += 5) {
    myServo.write(angle);
    delay(100);
  }

  // Bluetooth communication
  if (bluetoothSerial.available()) {
    char receivedChar = bluetoothSerial.read();
    Serial.print("Received: ");
    Serial.println(receivedChar);

    if (receivedChar == 'A') {
      digitalWrite(13, HIGH); 
    } else if (receivedChar == 'B') {
      digitalWrite(13, LOW);
    }
  }

  if (Serial.available()) {
    char sendChar = Serial.read();
    Serial.print("Sending: ");
    Serial.println(sendChar);
    bluetoothSerial.write(sendChar); 
  }

  // Trigger mechanism
  if (digitalRead(buttonPin) == LOW) {
    pullTrigger();
  }
}

void pullTrigger() {
  digitalWrite(motorPin, HIGH); 
  delay(1000);                
  digitalWrite(motorPin, LOW);  
  delay(1000);                  
}













Copy of the same code,


// Code for ultrasonic sensor to detect target’s position
#define trigPin 9 // Define the pin for the trigger of the ultrasonic sensor
#define echoPin 10 // Define the pin for the echo of the ultrasonic sensor

void setup() {
  Serial.begin(9600); // Start the serial communication
  pinMode(trigPin, OUTPUT); // Set the trigger pin as output
  pinMode(echoPin, INPUT); // Set the echo pin as input
}

void loop() {
  long duration, distance; // Declare variables for the duration and distance

  digitalWrite(trigPin, LOW); // Set the trigger pin to low
  delayMicroseconds(2); // Wait for 2 microseconds
  digitalWrite(trigPin, HIGH); // Set the trigger pin to high
  delayMicroseconds(10); // Wait for 10 microseconds
  digitalWrite(trigPin, LOW); // Set the trigger pin to low

  duration = pulseIn(echoPin, HIGH); // Measure the duration of the echo pulse

  distance = (duration * 0.0343) / 2; // Calculate the distance based on the speed of sound (0.0343 cm/μs) and the time of flight

  Serial.print("Distance: "); // Print the distance to the serial monitor
  Serial.print(distance);
  Serial.println(" cm");

  delay(1000); // Wait for 1 second before taking the next measurement
}

// Code to change the rotational position of the main cannon 
#define trigPin 9 // Define the pin for the trigger of the ultrasonic sensor
#define echoPin 10 // Define the pin for the echo of the ultrasonic sensor
#include <Servo.h> // Include the servo library

Servo myServo;  // Create a servo object

void setup() {
  Serial.begin(9600); // Start the serial communication
  pinMode(trigPin, OUTPUT); // Set the trigger pin as output
  pinMode(echoPin, INPUT); // Set the echo pin as input
  myServo.attach(8); // Attach the servo to pin 8
}

void loop() {
  // Rotate the servo at a regular frequency
  for(int angle = 0; angle <= 180; angle += 5) { // Loop from 0 to 180 degrees with 5 degrees increment
    myServo.write(angle); // Set the servo angle
    delay(100); // Adjust this delay to control the rotation speed
  }

  // Ultrasonic sensor measurements can be taken independently here
  long duration, distance; // Declare variables for the duration and distance

  digitalWrite(trigPin, LOW); // Set the trigger pin to low
  delayMicroseconds(2); // Wait for 2 microseconds
  digitalWrite(trigPin, HIGH); // Set the trigger pin to high
  delayMicroseconds(10); // Wait for 10 microseconds
  digitalWrite(trigPin, LOW); // Set the trigger pin to low

  duration = pulseIn(echoPin, HIGH); // Measure the duration of the echo pulse
  distance = (duration * 0.0343) / 2; // Calculate the distance based on the speed of sound (0.0343 cm/μs) and the time of flight

  Serial.print("Distance: "); // Print the distance to the serial monitor
  Serial.print(distance);
  Serial.println(" cm");

  delay(1000); // Wait for 1 second before taking the next ultrasonic measurement
}

// Code to implement the bluetooth T/R
#include <SoftwareSerial.h> // Include the software serial library

SoftwareSerial bluetoothSerial(2, 3); // Create a software serial object on pins 2 and 3

void setup() {
  Serial.begin(9600); // Start the serial communication     
  bluetoothSerial.begin(9600); // Start the bluetooth communication
}

void loop() {
  if (bluetoothSerial.available()) { // Check if there is any data from the bluetooth
    char receivedChar = bluetoothSerial.read(); // Read the received character
    Serial.print("Received: "); // Print the received character to the serial monitor
    Serial.println(receivedChar);

    if (receivedChar == 'A') { // If the received character is A
      digitalWrite(13, HIGH); // Turn on the LED on pin 13
    } else if (receivedChar == 'B') { // If the received character is B
      digitalWrite(13, LOW); // Turn off the LED on pin 13
    }
  }

  if (Serial.available()) { // Check if there is any data from the serial
    char sendChar = Serial.read(); // Read the sent character
    Serial.print("Sending: "); // Print the sent character to the serial monitor
    Serial.println(sendChar);
    bluetoothSerial.write(sendChar); // Send the character to the bluetooth
  }
}

// Code for trigger and reload mechanism for both DC motor or Servo as the reloading motors
#include <Servo.h> // Include the servo library

const int motorPin = 9; // Define the pin for the DC motor
const int buttonPin = 2; // Define the pin for the button

void setup() {
  pinMode(motorPin, OUTPUT); // Set the motor pin as output
  pinMode(buttonPin, INPUT_PULLUP); // Set the button pin as input with internal pull-up resistor
}

void loop() {
  if (digitalRead(buttonPin) == LOW) { // Check if the button is pressed
    pullTrigger(); // Call the function to pull the trigger
  }
}

void pullTrigger() {
  digitalWrite(motorPin, HIGH); // Turn on the motor
  delay(1000); // Wait for 1 second
  digitalWrite(motorPin, LOW); // Turn off the motor
  delay(1000); // Wait for 1 second
}

#include <Servo.h> // Include the servo library

Servo triggerServo; // Create a servo object
const int buttonPin = 2; // Define the pin for the button
int servoAngle = 0; // Define the initial angle for the servo

void setup() {
  triggerServo.attach(9); // Attach the servo to pin 9
  pinMode(buttonPin, INPUT_PULLUP); // Set the button pin as input with internal pull-up resistor
  triggerServo.write(servoAngle); // Set the servo angle to the initial value
}

void loop() {
  if (digitalRead(buttonPin) == LOW) { // Check if the button is pressed
    pullTrigger(); // Call the function to pull the trigger
  }
}

void pullTrigger() {
  servoAngle = 90; // Set the servo angle to 90 degrees
  triggerServo.write(servoAngle); // Move the servo to 90 degrees
  delay(1000); // Wait for 1 second
  servoAngle = 0; // Set the servo angle back to 0 degrees
  triggerServo.write(servoAngle); // Move the servo back to 0 degrees
  delay(1000); // Wait for 1 second
}
