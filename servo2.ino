
#include <Servo.h>

Servo myservo1;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
  myservo1.attach(9);
  myservo1.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                    // attaches the servo on pin 9 to the servo object
}

void loop() {
                         // waits 15 ms for the servo to reach the position
}
