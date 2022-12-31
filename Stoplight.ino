// This is the program used for the simple stoplight project
// Note that the assigned value for the delay is in milliseconds


void setup() {
  pinMode(7, OUTPUT); // Red LED connected to the pin 7 of the Arduino
  pinMode(6, OUTPUT); // Yellow LED connected to the pin 6 of the Ardunino
  pinMode(5, OUTPUT); // Greed LED connected to the pin 5 of the Arduino


}

void loop() {
  digitalWrite(7, HIGH); // Red LED turning on
  delay(7500); // Waiting for 7.5 seconds
  digitalWrite(7, LOW); // Red LED turning off

  digitalWrite(6, HIGH); // Yellow LED turning on
  delay(2000); // Waiting for 5 seconds
  digitalWrite(6, LOW); // Yellow LED Truning off

  digitalWrite(5, HIGH); // Green LED turning on
  delay(5000); // Duration after the trigger
  digitalWrite(5, LOW); // Green LED turning off


 

}
