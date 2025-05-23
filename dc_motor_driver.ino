#include <AFMotor.h>
#define MAX_SPEED 255
#define MIN_SPEED 100

AF_DCMotor motorBackLeft(1); // connect motor to connector M1
AF_DCMotor motorBackRight(2); // connect motor to connector M2
AF_DCMotor motorFrontLeft(4); // connect motor to connector M4
AF_DCMotor motorFrontRight(3); // connect motor to connector M3

int speed = MIN_SPEED;
float startTime = 0.0;
float deltaSpeed = 0.0;

void runMotor(AF_DCMotor motor, int speed, int direction) {
  motor.setSpeed(speed);
  motor.run(direction);
}

void runCar(int speed, int direction, int angle) {
  // angle will change from -100 to 100, negative means turn left
  runMotor(motorBackLeft, speed, direction);
  runMotor(motorBackRight, speed, direction);
  runMotor(motorFrontLeft, speed, direction);
  runMotor(motorFrontRight, speed, direction);
}

void setup() {
  Serial.begin(9600);
  startTime = micros();
  runCar(speed, RELEASE, 0);
}

void loop() {
  Serial.println(speed);
  // Serial.println((micros() - startTime) / 10000.0, 2);
  speed += deltaSpeed; if (speed == MAX_SPEED) speed = MIN_SPEED;
  runCar(speed, FORWARD, 0);

  delay(100);
}
