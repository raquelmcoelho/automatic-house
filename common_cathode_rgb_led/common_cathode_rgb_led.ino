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
  white();
  red();
  green();
  blue();
  cyan();
  purple();
  yellow();
}

void white() {
  blink(1, 1, 1);
}

void red() {
  blink(1, 0, 0);
}

void green() {
  blink(0, 1, 0);
}


void blue() {
  blink(0, 0, 1);
}

void purple() {
  blink(1, 0, 1);
}

void yellow() {
  blink(1, 1, 0);
}

void cyan() {
  blink(0, 1, 1);
}

void blink(bool red, bool green, bool blue) {
  if (red) digitalWrite(vermelho, HIGH);
  if (green) digitalWrite(verde, HIGH);
  if (blue) digitalWrite(azul, HIGH);
  delay(1000);
  if (red) digitalWrite(vermelho, LOW);
  if (green) digitalWrite(verde, LOW);
  if (blue) digitalWrite(azul, LOW);
  delay(1000);
}