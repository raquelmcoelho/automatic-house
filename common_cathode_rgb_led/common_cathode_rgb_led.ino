int azul = 10;
int verde = 9;
int vermelho = 8;
void setup() {
  pinMode(azul, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(vermelho, OUTPUT);

  digitalWrite(azul, LOW);
  digitalWrite(verde, LOW);
  digitalWrite(vermelho, LOW);
}
void loop() {
  digitalWrite(verde, HIGH);
  digitalWrite(azul, HIGH);
  digitalWrite(vermelho, HIGH);
  delay(1000);
  digitalWrite(verde, LOW);
  digitalWrite(azul, LOW);
  digitalWrite(vermelho, LOW);
  delay(1000);
  
  digitalWrite(vermelho, HIGH);
  delay(1000);
  digitalWrite(vermelho, LOW);
  delay(1000);

  digitalWrite(verde, HIGH);
  delay(1000);
  digitalWrite(verde, LOW);
  delay(1000);

  digitalWrite(azul, HIGH);
  delay(1000);
  digitalWrite(azul, LOW);
  delay(1000);
}