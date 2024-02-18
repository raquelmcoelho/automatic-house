int buzzer = 8;
const int octave = 32;
const int interval = 100;

enum tom {
  _do = 260,
  _re = 293,
  _mi = 329,
  _fa = 349,
  _sol = 392,
  _la = 440,
  _si = 495
};

enum tempo {
  whole = 4000,
  semi = 2000,
  quarter = 1000,
  eighth = 500,
  sixteenth = 250,
  thirtysecond = 125
};

void setup() {
  pinMode(buzzer, OUTPUT);
}

void loop() {
  play(_do, sixteenth);
  play(_re, sixteenth);
  play(_mi, sixteenth);
  play(_fa, eighth);
  play(_fa, sixteenth);
  play(_fa, eighth);
  play(_do, sixteenth);
  play(_re, sixteenth);
  play(_do, sixteenth);
  play(_re, eighth);
  play(_re, sixteenth);
  play(_re, eighth);
  play(_do, sixteenth);
  play(_sol, sixteenth);
  play(_fa, sixteenth);
  play(_mi, eighth);
  play(_mi, sixteenth);
  play(_mi, eighth);
  play(_do, sixteenth);
  play(_re, sixteenth);
  play(_mi, sixteenth);
  play(_fa, eighth);
  play(_fa, sixteenth);
  play(_fa, eighth);
}

void play(enum tom note, enum tempo tempo) {
  tone(buzzer, octave * note, tempo);
  delay(tempo);
  delay(interval);
}
