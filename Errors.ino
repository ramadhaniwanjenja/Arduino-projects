// the setup function runs once when you power on or reset
void setup() {
  pinMode(13, OUTPUT);  // set pin 13 as an output
}

// the loop function runs over and over again forever
void loop) {
  digitalWrite(13, HIGH);  // turn the LED on (HIGH is voltage)
  delay(1000);             // wait for 1 second
  digitalWrite(13, LOW);   // turn the LED off (LOW is no voltage)
  delay(1000);             // wait for 1 second
