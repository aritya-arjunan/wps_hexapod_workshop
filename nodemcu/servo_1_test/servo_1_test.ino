#include <Servo.h>
Servo servo;

void setup() {
servo.attach(D1,500,2400);  // put your setup code here, to run once:
delay(2000);
}
void wipe() {
  servo.write(1);
  delay(2000);
  servo.write(180);
  delay(2000);
}

void loop() {
  wipe();
}