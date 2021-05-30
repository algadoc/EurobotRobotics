
#include <Wire.h>
#include <SPI.h>
#include <math.h>       /* round, floor, ceil, trunc */
#include <Servo.h>
#include <AccelStepper.h>
#define motorInterfaceType 1

#include "pin_map.h"

AccelStepper stepper0 = AccelStepper(1, E0_STEP_PIN, E0_DIR_PIN);  // 1 = Driver
AccelStepper stepper1 = AccelStepper(1, E1_STEP_PIN, E1_DIR_PIN);  // 1 = Driver
AccelStepper stepper2 = AccelStepper(1, X_STEP_PIN, X_DIR_PIN);  // 1 = Driver
AccelStepper stepper3 = AccelStepper(1, Y_STEP_PIN, Y_DIR_PIN);  // 1 = Driver

void setup() {
stepper0.setMaxSpeed(400);
stepper1.setMaxSpeed(400);
stepper2.setMaxSpeed(400);
stepper3.setMaxSpeed(400);

pinMode(E0_ENABLE_PIN, OUTPUT);
digitalWrite(E0_ENABLE_PIN, LOW);
pinMode(E1_ENABLE_PIN, OUTPUT);
digitalWrite(E1_ENABLE_PIN, LOW);
pinMode(X_ENABLE_PIN, OUTPUT);
digitalWrite(X_ENABLE_PIN, LOW);
pinMode(Y_ENABLE_PIN, OUTPUT);
digitalWrite(Y_ENABLE_PIN, LOW);
stepper0.setSpeed(300);
stepper1.setSpeed(300);
stepper2.setSpeed(300);
stepper3.setSpeed(300);

}

void loop() {
stepper0.runSpeed();
stepper1.runSpeed();
stepper2.runSpeed();
stepper3.runSpeed();

}
