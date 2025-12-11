int redPin1 = 10;
int yellowPin1 = 9;
int greenPin1 = 8;
int redPin2 = 7;
int yellowPin2 = 6;
int greenPin2 = 5;
int redPin3 = 4;
int yellowPin3 = 3;
int greenPin3 = 2;
int redPin4 = 11;
int yellowPin4 = 12;
int greenPin4 = 13;

void setup() {
  pinMode(redPin1, OUTPUT);
  pinMode(yellowPin1, OUTPUT);
  pinMode(greenPin1, OUTPUT);
  pinMode(redPin2, OUTPUT);
  pinMode(yellowPin2, OUTPUT);
  pinMode(greenPin2, OUTPUT);
  pinMode(redPin3, OUTPUT);
  pinMode(yellowPin3, OUTPUT);
  pinMode(greenPin3, OUTPUT);
  pinMode(redPin4, OUTPUT);
  pinMode(yellowPin4, OUTPUT);
  pinMode(greenPin4, OUTPUT);
}

void loop() {
  digitalWrite(redPin1, HIGH);
  digitalWrite(yellowPin1, HIGH);
  digitalWrite(greenPin1, HIGH);
  delay(1000);
  digitalWrite(redPin1, LOW);
  digitalWrite(yellowPin1, LOW);
  digitalWrite(greenPin1, LOW);
  digitalWrite(redPin2, HIGH);
  digitalWrite(yellowPin2, HIGH);
  digitalWrite(greenPin2, HIGH);
  delay(1000);
  digitalWrite(redPin2, LOW);
  digitalWrite(yellowPin2, LOW);
  digitalWrite(greenPin2, LOW);
  digitalWrite(redPin3, HIGH);
  digitalWrite(yellowPin3, HIGH);
  digitalWrite(greenPin3, HIGH);
  delay(1000);
  digitalWrite(redPin3, LOW);
  digitalWrite(yellowPin3, LOW);
  digitalWrite(greenPin3, LOW);
  digitalWrite(redPin4, HIGH);
  digitalWrite(yellowPin4, HIGH);
  digitalWrite(greenPin4, HIGH);
  delay(1000);
  digitalWrite(redPin4, LOW);
  digitalWrite(yellowPin4, LOW);
  digitalWrite(greenPin4, LOW);
}