int buttonPin = 7;
int ledPin = 10;
int ultimoEstadoButton = 0;
int estadoLed = 0;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  if (digitalRead(buttonPin) == HIGH && ultimoEstadoButton != 1) {
    ultimoEstadoButton = 1;
    estadoLed = !estadoLed;
  } else if (digitalRead(buttonPin) == LOW && ultimoEstadoButton != 0) {
    ultimoEstadoButton = 0;
  }

  digitalWrite(ledPin, estadoLed ? HIGH : LOW);
}