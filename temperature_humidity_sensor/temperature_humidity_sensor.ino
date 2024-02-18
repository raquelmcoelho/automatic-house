//Projeto medir a temperatura e a umidade com DHT11
#include <DHT.h>
#define DHTPIN 2
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);
void setup() {
  Serial.begin(9600);
  dht.begin();
}
void loop() {
  delay(500);

  float h = dht.readHumidity();
  float t = dht.readTemperature();
  if (isnan(h) || isnan(t)) {
    return;
  }
  Serial.print("Umidade: ");
  Serial.print(h);
  Serial.println("%");
  Serial.print("Temperatura: ");
  Serial.print(t);
  Serial.println("°C ");
}
