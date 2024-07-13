#include <LibArdu_MotorTest.h>

// Motor DC pins
LibArdu_MotorTest dcMotor(3, 4, 5);

// Servo motor pin
LibArdu_MotorTest servoMotor(9);

// Stepper motor pins
LibArdu_MotorTest stepperMotor(6, 7);

void setup() {
    Serial.begin(9600);
    Serial.println("Motor Test Library Example");
}

void loop() {
    // Test DC motor
    dcMotor.dcLibArdu_MotorTest(255);
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
    stepperMotor.stepLibArdu_MotorTest(200, 500);
    delay(1000);
    stepperMotor.stepLibArdu_MotorTest(-200, 500);
    delay(1000);
}
