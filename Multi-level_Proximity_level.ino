#define trigPin 9
#define echoPin 10
#define buzzerPin 3

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // Trigger the ultrasonic pulse
  digitalWrite(trigPin, LOW); delayMicroseconds(2);
  digitalWrite(trigPin, HIGH); delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Measure echo duration
  long duration = pulseIn(echoPin, HIGH);
  float distance = (duration * 0.034) / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (distance < 10) {
    tone(buzzerPin, 1000);  // Fast beep
    delay(100);
    noTone(buzzerPin);
    delay(100);
  }
  else if (distance < 20) {
    tone(buzzerPin, 1000);  // Slow beep
    delay(300);
    noTone(buzzerPin);
    delay(300);
  }