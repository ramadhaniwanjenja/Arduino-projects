#include <DHT.h>

int dhtPin = 2;
int dhtType = DHT11;
DHT dht(dhtPin, dhtType);

void setup() {
  dht.begin();
  Serial.begin(9600);
  Serial.println("DHT11 Test");
}

void loop() {
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  delay(1000);
  if (isnan(h) || isnan(t)) {
    Serial.println("Failed to read from DHT sensor!");
  } else {
    Serial.print("Humidity: ");
    Serial.print(h);
    Serial.print(" %\t");
    Serial.print("Temperature: ");
    Serial.print(t);
    Serial.println(" *C");
  }
}