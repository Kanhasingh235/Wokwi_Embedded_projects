#include <DHT.h>
#define DHTPIN 2
#define DHTTYPE DHT22

DHT dht(DHTPIN,DHTTYPE);
void setup(){
  Serial.begin(9600);
  dht.begin();
}
void loop(){
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();
  if(isnan(humidity) || isnan(temperature)){
  Serial.println("failed to read from DHT sensor ");
  return ;
}
 Serial.print("Temp:");
 Serial.print(temperature);
 Serial.print(" C | Humidity :");
 Serial.print(humidity);
 Serial.print(" % ");

 delay(2000);
  
  }
