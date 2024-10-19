#define key1 digitalRead(A0)

void setup() {
  pinMode(A0, INPUT);
  for (int i = 0; i < 4; i++) {
    pinMode(i, OUTPUT);
  }
}
void loop() {
  int i, a;
  int dancingLight[4][4] = {
    {0, 0, 0, 1},
    {0, 0, 1, 0},
    {0, 1, 0, 0},
    {1, 0, 0, 0},
  };

  for (i = 0; i < 4; i++) {
    digitalWrite(i, 0);
  }

  if (key1 == 0) {
    for (a = 0; a < 4; a++) {
      for (i = 0; i < 4; i++) {
        digitalWrite(i, dancingLight[a][i]);
      }
      delay(200);
    }
  }
};