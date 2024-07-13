#ifndef LibArdu_MotorTest_h
#define LibArdu_MotorTest_h

#include "Arduino.h"
#include <Servo.h>

class LibArdu_MotorTest {
public:
    // Construtor para motor DC
    LibArdu_MotorTest(int pin1, int pin2, int enablePin);
    
    // Construtor para servo
    LibArdu_MotorTest(int servoPin);

    // Construtor para motor de passo
    LibArdu_MotorTest(int stepPin, int dirPin);

    // Métodos para motor DC
    void dcLibArdu_MotorTest(int speed);
    void stopDCMotor();

    // Métodos para servo
    void servoTest(int angle);

    // Métodos para motor de passo
    void stepLibArdu_MotorTest(int steps, int speed);
    
private:
    int _pin1, _pin2, _enablePin; // DC motor pins
    int _servoPin; // Servo pin
    int _stepPin, _dirPin; // Stepper motor pins
    Servo _servo;
};

#endif
