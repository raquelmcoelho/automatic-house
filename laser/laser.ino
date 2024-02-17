//Projeto – Alarme simples com módulo laser, ldr e buzzer
const int laserPin = 8;
const int ldrPin = A0;
int valorLDR = 0;
const int buzzerPin = 12;

void setup() {
  Serial.begin(9600);
  pinMode(laserPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(ldrPin, INPUT);
}

void loop() {
  digitalWrite(laserPin, HIGH);
  valorLDR = analogRead(ldrPin);
  Serial.println(valorLDR);
  delay(50);
  if ((valorLDR) > 300) {
    digitalWrite(buzzerPin, HIGH);
  } else {
    digitalWrite(buzzerPin, LOW);
  }
}