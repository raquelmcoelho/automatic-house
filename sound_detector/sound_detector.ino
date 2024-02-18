//Projeto - Acender um LED batendo palma utilizando o sensor KY - 037
int led = 13;
bool statusLed = false;

int ky_digital = 9;
int valorky_digital = 0;

int ky_analogic = A1;
int valorky_analogic = 0;
int referencia = 545;
int valorabs = 0;
int pwm = 0;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(ky_analogic, INPUT);
  pinMode(ky_digital, INPUT);
  Serial.begin(9600);
}
void loop() {
  analogic_loop();
  // digital_loop();
}

void analogic_loop() {
  valorky_analogic = analogRead(ky_analogic);
  valorabs = abs(valorky_analogic - referencia);
  pwm = map(valorabs, 0, (1023 - referencia), 0, 255); 
  Serial.println(pwm); 
  analogWrite(led, pwm); 
}


void digital_loop() {
  valorky_digital = digitalRead(ky_digital);
  Serial.println(valorky_analogic);
  if (valorky_digital == HIGH) {
    delay(10);
    digitalWrite(led, statusLed ? LOW : HIGH);
    statusLed = !statusLed;
  }
}
