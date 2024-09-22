#include <Servo.h>
Servo servo_1;
Servo servo_2;

void setup() {
  servo_1.attach(D1,500,2400);
  servo_2.attach(D3,500,2400);
}

void turn_clockwise(Servo& servo_x, Servo& servo_y) {
  for(int i=0; i<=180; ++i) {
    servo_x.write(i);
    servo_y.write(i);
    delay(10);
  }
}
void turn_anticlockwise(Servo& servo_x, Servo& servo_y) {
  for(int i=180; i>=0; --i) {
    servo_x.write(i);
    servo_y.write(i);
    delay(10);
  }
}

void loop() {
  turn_clockwise(servo_1, servo_2);
  turn_anticlockwise(servo_1, servo_2);

}
