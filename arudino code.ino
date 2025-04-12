int micPin = A0;
int ledPin = 2;
int threshold = 500;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int soundLevel = 600; // Simulating loud sound
  Serial.println(soundLevel); // Now it's defined before printing

  if (soundLevel > threshold) {
    digitalWrite(ledPin, HIGH); // Turn ON LED
  } else {
    digitalWrite(ledPin, LOW);  // Turn OFF LED
  }

  delay(100);
}
