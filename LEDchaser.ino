void setup() {
    for(int i=2;i<=9;i++){
      pinMode(i,OUTPUT);
    }

}
void loop() {
  //move forward
  for(int i=2;i<=9;i++){
    digitalWrite(i,HIGH);
    delay(1000);
    digitalWrite(i,LOW);
  }
  for(int i=9;i>=2;i--){
    digitalWrite(i,OUTPUT);
    delay(1000);
    digitalWrite(i,LOW);
  }
}
