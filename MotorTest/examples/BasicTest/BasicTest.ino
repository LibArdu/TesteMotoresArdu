#include <MotorTest.h>

// Motor DC pins
MotorTest dcMotor(3, 4, 5);

// Servo motor pin
MotorTest servoMotor(9);

// Stepper motor pins
MotorTest stepperMotor(6, 7);

void setup() {
    Serial.begin(9600);
    Serial.println("Motor Test Library Example");
}

void loop() {
    // Test DC motor
    dcMotor.dcMotorTest(255);
    delay(2000);
    dcMotor.stopDCMotor();
    delay(1000);

    // Test Servo motor
    for (int angle = 0; angle <= 180; angle += 10) {
        servoMotor.servoTest(angle);
        delay(500);
    }
    for (int angle = 180; angle >= 0; angle -= 10) {
        servoMotor.servoTest(angle);
        delay(500);
    }

    // Test Stepper motor
    stepperMotor.stepMotorTest(200, 500);
    delay(1000);
    stepperMotor.stepMotorTest(-200, 500);
    delay(1000);
}
