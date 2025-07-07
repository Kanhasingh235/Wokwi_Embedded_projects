int pirPin = 2;
int ledPin = 13;
void setup(){
   pinMode(pirPin,INPUT);
   pinMode(ledPin,OUTPUT);
} 
void loop(){
   int motionDetected = digitalRead(pirPin);
   if(motionDetected == HIGH){
    digitalWrite(ledPin,HIGH);
   }else{
    digitalWrite(ledPin,LOW);
   }
}