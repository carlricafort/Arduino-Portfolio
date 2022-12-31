// Program used for the ultrasonic sensor

const int trigPin = 3; // D3 Arduino to UltraSonic Sensor
const int echoPin = 4; // D4 Arduino to Ultrasonic Sensor

// Defining all the variables
long duration; // The duration for the travel of sound waves 
int distance; // The measured distance in terms of integer value 


void setup() {
  // ultrasonic sensor pinModes
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 
  Serial.begin(9600); 
  
  
}

void loop() {
  // This code clears the trigger Pin 
  digitalWrite(trigPin, LOW); 
  delay(2); 

  // It sets the trigPin to HIGH 
 digitalWrite(trigPin, HIGH); 
 delay(10); 
 digitalWrite(trigPin, LOW); 


 duration = pulseIn(echoPin, HIGH); 
 distance = duration * (0.034 / 2); // The value that I have used is the speed of sound wave all over 2

 // Displaying the distance on the Serial Monitor
 Serial.println("Distance Measured: "); 
 Serial.println(distance); 
 Serial.println("cm");  // The unit used is in terms of centimeter
  

}
