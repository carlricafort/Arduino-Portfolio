#include <Servo.h> //importing the servo library 
#define threshold 250
#define unpress_angle 70
#define press_angle 36

Servo myservo; // it makes the servo object control a servo
bool trig=true; 

void setup() {
  myservo.attach(9); //attaches the servo on pin 9 to the servo object
myservo.write(unpress_angle); 
}

void loop() {
  // put your main code here, to run repeatedly:

  myservo.write(unpress_angle); //unpress the button (spacebar)
  delay(1); 

  // now creating the logic
  if (analogRead(A0)< threshold) 
  {
    
      myservo.write(press_angle); //this is for pressing the button (spacebar)
    delay(95); // waits 10 milliseconds for the servo to reach the position 
  }
}
