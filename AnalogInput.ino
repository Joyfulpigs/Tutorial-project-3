int sensorPin = A2;   // input pin for the potentiometer
int ledPin = 6;       // output pin for the LED
int sensorValue = 0;  // variable to store sensor value

void setup() {
  pinMode(ledPin, OUTPUT); //sets the LED as the output pin
  Serial.begin(9600); // starts serial communication at 9600 baud rate
}

void loop() {
  sensorValue = analogRead(sensorPin);// analog reads the potentiometer

  // Send the potentiometer value to Unity
  Serial.println(sensorValue); //what Unity reads

  // LED Blink 
  digitalWrite(ledPin, HIGH);// turning the LED on
  delay(sensorValue); // speed of delay depends on the sensor value
  digitalWrite(ledPin, LOW); //turning the LED off
  delay(sensorValue);// speed of delay depends on the sensor value
}
