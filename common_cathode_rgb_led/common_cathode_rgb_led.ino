int azul = 10;
int verde = 9;
int vermelho = 8;
const int interval = 1000;

#define red 1
#define green 2
#define blue 4
#define purple red | blue
#define yellow red | green
#define cyan green | blue
#define white red | green | blue


void setup() {
  pinMode(azul, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(vermelho, OUTPUT);

  digitalWrite(azul, LOW);
  digitalWrite(verde, LOW);
  digitalWrite(vermelho, LOW);
}
void loop() {
  blink(red);
  blink(green);
  blink(blue);
  blink(purple);
  blink(yellow);
  blink(cyan);
  blink(white);
}

void blink(int mask) {
  if (mask & red) digitalWrite(vermelho, HIGH);
  if (mask & green) digitalWrite(verde, HIGH);
  if (mask & blue) digitalWrite(azul, HIGH);
  delay(interval);
  if (mask & red) digitalWrite(vermelho, LOW);
  if (mask & green) digitalWrite(verde, LOW);
  if (mask & blue) digitalWrite(azul, LOW);
  delay(interval);
}