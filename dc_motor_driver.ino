#include <AFMotor.h>     // подключаем библиотеку для шилда
#define MAX_SPEED 255

AF_DCMotor motorBackLeft(1); // подключаем мотор к клеммникам M1
AF_DCMotor motorBackRight(2); // подключаем мотор к клеммникам M2
AF_DCMotor motorFrontLeft(3); // подключаем мотор к клеммникам M3
AF_DCMotor motorFrontRight(4); // подключаем мотор к клеммникам M4

void runMotor(AF_DCMotor motor, int speed, int direction) {
  motor.setSpeed(speed); // задаем максимальную скорость мотора
  motor.run(direction);   // останавливаем мотор
}

void setup() {
  runMotor(motorBackLeft, MAX_SPEED, RELEASE);
  runMotor(motorBackRight, MAX_SPEED, RELEASE);
  runMotor(motorFrontLeft, MAX_SPEED, RELEASE);
  runMotor(motorFrontRight, MAX_SPEED, RELEASE);
}

void loop() {
  runMotor(motorBackLeft, MAX_SPEED, FORWARD);
  runMotor(motorBackRight, MAX_SPEED, FORWARD);
  runMotor(motorFrontLeft, MAX_SPEED, FORWARD);
  runMotor(motorFrontRight, MAX_SPEED, FORWARD);



  delay(2000);          // указываем время движения

  motorBackLeft.run(RELEASE);  // останавливаем мотор M1
  motorBackRight.run(RELEASE);  // останавливаем мотор M2
  motorFrontLeft.run(RELEASE);  // останавливаем мотор M1
  motorFrontRight.run(RELEASE);  // останавливаем мотор M2

  motorBackLeft.run(BACKWARD); // задаем движение назад
  motorBackLeft.setSpeed(MAX_SPEED);   // задаем скорость движения

  motorBackRight.run(BACKWARD); // задаем движение назад
  motorBackRight.setSpeed(MAX_SPEED);   // задаем скорость движения

  motorFrontLeft.run(BACKWARD); // задаем движение назад
  motorFrontLeft.setSpeed(MAX_SPEED);   // задаем скорость движения

  motorFrontRight.run(BACKWARD); // задаем движение назад
  motorFrontRight.setSpeed(MAX_SPEED);   // задаем скорость движения

  delay(2000);          // указываем время движения

  motorBackLeft.run(RELEASE);  // останавливаем мотор M1
  motorBackRight.run(RELEASE);  // останавливаем мотор M2
  motorFrontLeft.run(RELEASE);  // останавливаем мотор M1
  motorFrontRight.run(RELEASE);  // останавливаем мотор M2
}
