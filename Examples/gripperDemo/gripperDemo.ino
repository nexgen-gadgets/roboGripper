/* gripperDemo- Example code for robotic gripper
 by NexgenGadgets <http://www.nexgengadgets.com>
 This example code is in the public domain.

 https://github.com/nexgen-gadgets/roboGripper
*/

#include <Servo.h>

Servo gripper;  // create servo object to control the Robot Gripper
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the gripper servo position

void setup() {
  gripper.attach(11);  // attaches the gripper servo on pin 11 
}

void loop() {
  //Close Gripper
  for (pos = 90; pos <= 178; pos += 1) { // goes from 90 degrees to 178 degrees,
    // 90 is wide open, 178 is gripper fully closed 
    // in steps of 1 degree
    gripper.write(pos);              // tell gripper servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the gripper servo to reach the position
  }

  //Open Gripper
  for (pos = 178; pos >= 90; pos -= 1) { // goes back from 178 degrees to 90 degrees
    // 178 is gripper fully closed, 90 is wide open
    gripper.write(pos);              // tell gripper servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
}

