#define trigPin 9
#define echoPin 10
#define buzzercontrol  3
void setup(){
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzercontrol, OUTPUT);
  Serial.begin(9600);
}
void loop(){
  float distance ;
  long duration ;
   digitalWrite(trigPin, LOW);
   delayMicroseconds(2);
   digitalWrite(trigPin, HIGH);
   delayMicroseconds(10);
   digitalWrite(trigPin , LOW);

   duration =pulseIn(echoPin,HIGH);
    distance = duration * .034/2;

    Serial.print("distance  ");
    Serial.print(distance);
    Serial.println("cm");

    if(distance<10){
             digitalWrite(buzzercontrol, HIGH);
    } else {
       digitalWrite(buzzercontrol, LOW);
    }

    delay(500);
}
