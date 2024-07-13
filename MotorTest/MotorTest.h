#ifndef MotorTest_h
#define MotorTest_h

#include "Arduino.h"
#include <Servo.h>

class MotorTest {
public:
    // Construtor para motor DC
    MotorTest(int pin1, int pin2, int enablePin);
    
    // Construtor para servo
    MotorTest(int servoPin);

    // Construtor para motor de passo
    MotorTest(int stepPin, int dirPin);

    // Métodos para motor DC
    void dcMotorTest(int speed);
    void stopDCMotor();

    // Métodos para servo
    void servoTest(int angle);

    // Métodos para motor de passo
    void stepMotorTest(int steps, int speed);
    
private:
    int _pin1, _pin2, _enablePin; // DC motor pins
    int _servoPin; // Servo pin
    int _stepPin, _dirPin; // Stepper motor pins
    Servo _servo;
};

#endif
