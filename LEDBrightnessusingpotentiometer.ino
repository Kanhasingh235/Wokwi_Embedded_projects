//controlling led brightness using potentiometer

int ledPin=3;
int analogPin =0;
int val =0;
void setup() {
     pinMode(ledPin,OUTPUT);
     Serial.begin(9600);//initialize serial monitor
}
void loop() {
   val = analogRead(analogPin);//read analog value(0-1023)
   Serial.println(val);//print raw potentiometer value
   val=map(val,0,1023,0,255);
   analogWrite(ledPin,val);
}
  
