int soilmoisturePin = A0;
int ledPin = 13;

void setup() {
  pinMode(soilmoisturePin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int soilmoistureValue = analogRead(soilmoisturePin);
  Serial.println(soilmoistureValue);
  if (soilmoistureValue < 500) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
}