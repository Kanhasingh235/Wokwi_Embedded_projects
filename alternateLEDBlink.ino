#define evenLED 2
#define  oddLED 3

void setup() {

  pinMode(evenLED,OUTPUT);
  pinMode(oddLED,OUTPUT);
}
void loop() {
     digitalWrite(evenLED, HIGH);
     digitalWrite(oddLED, LOW);
     delay(1000);

     digitalWrite(evenLED, LOW);
     digitalWrite(oddLED, HIGH);
     delay(1000);

}

