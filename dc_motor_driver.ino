#include <AFMotor.h>     // подключаем библиотеку для шилда
#define MAX_SPEED 255
#define MIN_SPEED 100

AF_DCMotor motorBackLeft(1); // подключаем мотор к клеммникам M1
AF_DCMotor motorBackRight(2); // подключаем мотор к клеммникам M2
AF_DCMotor motorFrontLeft(4); // подключаем мотор к клеммникам M4
AF_DCMotor motorFrontRight(3); // подключаем мотор к клеммникам M3

int speed = MIN_SPEED;
float startTime = 0.0;
float deltaSpeed = 0.0;

void runMotor(AF_DCMotor motor, int speed, int direction) {
  motor.setSpeed(speed); // задаем максимальную скорость мотора
  motor.run(direction);   // останавливаем мотор
}

void setup() {
  Serial.begin(9600);
  startTime = micros();
  runMotor(motorBackLeft, speed, RELEASE);
  runMotor(motorBackRight, speed, RELEASE);
  runMotor(motorFrontLeft, speed, RELEASE);
  runMotor(motorFrontRight, speed, RELEASE);
}

void loop() {
  Serial.println(speed);
  // Serial.println((micros() - startTime) / 10000.0, 2);
  speed += deltaSpeed; if (speed == MAX_SPEED) speed = MIN_SPEED;
  runMotor(motorBackLeft, speed, FORWARD);
  runMotor(motorBackRight, speed, FORWARD);
  runMotor(motorFrontLeft, speed, FORWARD);
  runMotor(motorFrontRight, speed, FORWARD);

  delay(100);          // указываем время движения
}
