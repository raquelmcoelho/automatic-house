//Projeto - Acender um LED batendo palma utilizando o sensor KY - 037
int led = 13;
int ky = 9;
int valorky = 0;
bool statusLed = false;
void setup() {
  pinMode(led, OUTPUT);
  pinMode(ky, INPUT);
  Serial.begin(9600);
}
void loop() {
  valorky = digitalRead(ky);
  Serial.println(valorky);
  if (valorky == HIGH) {
    delay(10);
    digitalWrite(led, statusLed ? LOW : HIGH);
    statusLed = !statusLed;
  }
}
