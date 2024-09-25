#include <Servo.h>

Servo servo1;
Servo servo2;


void setup() {
  servo1.attach(D1, 500, 2400);
  servo1.write(0);
  servo2.attach(D3, 500, 2400);
  servo2.write(0);
}

void move(Servo& servo, int start, int end, int inc) {
 for (int i=start; i <= end; i += inc) { 
    servo.write(i);
  }
}

void short_move(Servo& servo, int count) {
  for (int i=1; i <= count; i++) {
    move(servo, 10, 30, 10);
    delay(122);
    move(servo, 30, 10, 10);
    delay(122);
  }
}

void second_move(Servo& servo, int count) {
  for (int j=1; j <= count; ++j) {
    for (int i=1; i <= 8; i++) {
      move(servo, 10, 50, 10);
      delay(110);
    }
    move(servo, 10, 90, 10);
    delay(120);
    move(servo, 10, 90, 10);
    delay(120);
  }
  servo.write(10); 
}

void long_move(Servo& servo) {
    move(servo, 10, 80, 10);
    delay(100);
}

void slow_move(Servo& servo, int count) {
  for (int i=1; i <=count; ++i) {
    servo.write(130);
    delay(800);
    servo.write(10);
    delay(800);
    servo.write(130);
    delay(200);
    servo.write(10);
    delay(200);
  }
}

void loop() {
  short_move(servo2, 8);
  long_move(servo2);
  short_move(servo2, 14);
  long_move(servo2);
  second_move(servo1, 8);
  long_move(servo2);
  delay(300);
  slow_move(servo1, 9);
}