#include <AFMotor.h>     // подключаем библиотеку для шилда
AF_DCMotor motorBackLeft(1); // подключаем мотор к клеммникам M1
AF_DCMotor motorBackRight(2); // подключаем мотор к клеммникам M2
AF_DCMotor motorFrontLeft(3); // подключаем мотор к клеммникам M3
AF_DCMotor motorFrontRight(4); // подключаем мотор к клеммникам M4


void setup() {
  motorBackLeft.setSpeed(255); // задаем максимальную скорость мотора
  motorBackLeft.run(RELEASE);   // останавливаем мотор
  motorBackRight.setSpeed(255); // задаем максимальную скорость мотора
  motorBackRight.run(RELEASE);   // останавливаем мотор
  motorFrontLeft.setSpeed(255); // задаем максимальную скорость мотора
  motorFrontLeft.run(RELEASE);   // останавливаем мотор
  motorFrontRight.setSpeed(255); // задаем максимальную скорость мотора
  motorFrontRight.run(RELEASE);   // останавливаем мотор
}

void loop() {
  motorBackLeft.run(FORWARD);  // задаем движение вперед
  motorBackRight.run(FORWARD);  // задаем движение вперед
  motorBackLeft.setSpeed(255);   // задаем скорость движения
  motorBackRight.setSpeed(255);   // задаем скорость движения
  motorFrontLeft.run(FORWARD);  // задаем движение вперед
  motorFrontRight.run(FORWARD);  // задаем движение вперед
  motorFrontLeft.setSpeed(255);   // задаем скорость движения
  motorFrontRight.setSpeed(255);   // задаем скорость движения



  delay(2000);          // указываем время движения

  motorBackLeft.run(RELEASE);  // останавливаем мотор M1
  motorBackRight.run(RELEASE);  // останавливаем мотор M2

  motorFrontLeft.run(RELEASE);  // останавливаем мотор M1
  motorFrontRight.run(RELEASE);  // останавливаем мотор M2


  motorBackLeft.run(BACKWARD); // задаем движение назад
  motorBackRight.run(BACKWARD); // задаем движение назад
  motorBackLeft.setSpeed(255);   // задаем скорость движения
  motorBackRight.setSpeed(255);   // задаем скорость движения
  motorFrontLeft.run(BACKWARD); // задаем движение назад
  motorFrontRight.run(BACKWARD); // задаем движение назад
  motorFrontLeft.setSpeed(255);   // задаем скорость движения
  motorFrontRight.setSpeed(255);   // задаем скорость движения


  delay(2000);          // указываем время движения

  motorBackLeft.run(RELEASE);  // останавливаем мотор M1
  motorBackRight.run(RELEASE);  // останавливаем мотор M2
  motorFrontLeft.run(RELEASE);  // останавливаем мотор M1
  motorFrontRight.run(RELEASE);  // останавливаем мотор M2
}
