void setup() {
    Serial.begin(9600);
    Serial.println("Type your grade (3, 4, or 5):");
  }
  
  void loop() {
    if (Serial.available() > 0) {
      int grade = Serial.parseInt();  // read the number typed
  
      if (grade == 3) {
        Serial.println("Welcome Grade 3! You are learning the basics of Arduino!");
      } 
      else if (grade == 4) {
        Serial.println("Hello Grade 4! Let's explore sensors and wiring!");
      } 
      else if (grade == 5) {
        Serial.println("Great job Grade 5! You're almost becoming young engineers!");
      }
      else {
        Serial.println("Invalid grade. Please type 3, 4, or 5.");
      }
    }
  }
  