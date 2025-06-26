// Traffic light controller using 3 LEDs (red ,yellow ,green)
#define RED_LED  2 
#define YELLOW_LED  3 
#define GREEN_LED  4 
 void setup() {
     pinMode(RED_LED, OUTPUT);
     pinMode(YELLOW-LED,OUTPUT);
     pinMode(GEEN_LED,OUTPUT);

}

void loop() {
  // Green light On for 5 seconds 
   
   digitalWrite(GREEN_LED,HIGH);
   digitalWrite(YELLOW_LED,LOW);
   digitalWrite(RED_LED,LOW); 
   delay(5000); 
 // yellow light ON for 2 seconds 
   digitalWrite(GREEN_LED,HIGH);
   digitalWrite(YELLOW_LED,LOW);
   digitalWrite(RED_LED,LOW);
   delay(2000);  
 // Red light ON for 5 seconds 
   digitalWrite(GREEN_LED,HIGH);
   digitalWrite(YELLOW_LED,LOW);
   digitalWrite(RED_LED,LOW);  
   delay(5000);
}
