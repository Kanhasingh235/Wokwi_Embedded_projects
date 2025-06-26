int ledPin =13;
int buttonPin =2;
int buttonState =0;

void setup() {
  pinMode(ledPin,OUTPUT);//ledpin output hai
  pinMode(buttonPin,INPUT);//buttonpin input hai 
}
void loop() {
  buttonState= digitalRead(buttonPin);
   if(buttonState==HIGH){
    digitalWrite(ledPin,HIGH);//button press led on 
   }
   else {
    digitalWrite(ledPin,LOW);//button off led off 
   }
}
