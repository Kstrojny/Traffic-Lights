void setup() {
  // set the LED pins as outputs
  pinMode(3,OUTPUT); //declare pin 3 as output
  pinMode(4,OUTPUT); //declare pin 4 as output
  pinMode(5,OUTPUT); //declare pin 5 as output
  pinMode(2,INPUT); //declare pin 2 as input (button)
}

void loop() {
  if (digitalRead(2) == LOW) {
    digitalWrite(3,HIGH);         // Turn the green LED on pin 3 ON
    digitalWrite(4,LOW);         // Turn the yellow LED on pin 4 OFF
    digitalWrite(5,LOW);        // Turn the red LED on pin 5 OFF
    delay(3000);                  // Keep green LED on for 3 seconds
    digitalWrite(3,LOW);          // Turn the green LED on pin 3 OFF
    digitalWrite(4,HIGH);        // Turn the yellow LED on pin 4 ON
    digitalWrite(5,LOW);        // Turn the red LED on pin 5 OFF
    delay(500);                 // Momentary pause between green LED OFF and yellow LED ON
    digitalWrite(3,LOW);          // Turn the green LED on pin 3 OFF
    digitalWrite(4,LOW);         // Turn the yellow LED on pin 4 OFF
    digitalWrite(5,HIGH);       // Turn the red LED on pin 5 ON
    delay(3000);                 // Keep yellow LED on for 3 seconds
  }
  if (digitalRead(2) == HIGH) {
  digitalWrite(4,LOW);         // Turns yellow LED on pin 4 OFF
  digitalWrite(5,LOW);         // Turns red LED in pin 5 OFF.
  digitalWrite(3,HIGH);        // Turns green LED in pin 3 ON.
  delay(500);                  // Makes green LED flash
  digitalWrite(3,LOW);         // Makes green LED flash on
  delay(500);                  // Makes green LED flash off
  }
}
