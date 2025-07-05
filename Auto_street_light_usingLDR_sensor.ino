#define LDR_PIN A0 
#define LED_PIN 2

void setup(){
  pinMode(LED_PIN,OUTPUT);
  Serial.begin(9600);
}
void loop(){
  int lightvalue =analogRead(LDR_PIN);
  Serial.begin(lightvalue);
  if(lightvalue<500){
    digitalWrite(LED_PIN,HIGH);
  }else{
    digitalWrite(LED_PIN,LOW);
  }
  delay(500);
}