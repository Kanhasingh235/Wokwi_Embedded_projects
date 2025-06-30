void setup() {
  pinMode(4, INPUT);     // Button input
  pinMode(8, OUTPUT);    // Buzzer output
}

void loop() {
  if (digitalRead(4) == HIGH) {
    digitalWrite(8, HIGH);  // Turn buzzer ON
  } else {
    digitalWrite(8, LOW);   // Turn buzzer OFF
  }
}


