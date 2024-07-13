#include "MotorTest.h"

MotorTest::MotorTest(int pin1, int pin2, int enablePin) {
    _pin1 = pin1;
    _pin2 = pin2;
    _enablePin = enablePin;
    pinMode(_pin1, OUTPUT);
    pinMode(_pin2, OUTPUT);
    pinMode(_enablePin, OUTPUT);
}

MotorTest::MotorTest(int servoPin) {
    _servoPin = servoPin;
    _servo.attach(_servoPin);
}

MotorTest::MotorTest(int stepPin, int dirPin) {
    _stepPin = stepPin;
    _dirPin = dirPin;
    pinMode(_stepPin, OUTPUT);
    pinMode(_dirPin, OUTPUT);
}

void MotorTest::dcMotorTest(int speed) {
    analogWrite(_enablePin, speed);
    digitalWrite(_pin1, HIGH);
    digitalWrite(_pin2, LOW);
}

void MotorTest::stopDCMotor() {
    analogWrite(_enablePin, 0);
    digitalWrite(_pin1, LOW);
    digitalWrite(_pin2, LOW);
}

void MotorTest::servoTest(int angle) {
    _servo.write(angle);
}

void MotorTest::stepMotorTest(int steps, int speed) {
    digitalWrite(_dirPin, steps > 0 ? HIGH : LOW);
    for (int i = 0; i < abs(steps); i++) {
        digitalWrite(_stepPin, HIGH);
        delayMicroseconds(speed);
        digitalWrite(_stepPin, LOW);
        delayMicroseconds(speed);
    }
}
