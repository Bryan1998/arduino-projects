int del = 60;
int i[] = {9,10,11};
int x[] = {0,0,0};
void setup() {
  pinMode(i[0], OUTPUT);
  pinMode(i[1], OUTPUT);
  pinMode(i[2], OUTPUT);
}

void loop() {
  while (x[0] <= 4) {
    x[0]++;
    digitalWrite(i[0], HIGH);
    delay(del);
  
    digitalWrite(i[0], LOW);
    delay(del);
  }

  while (x[1] <= 2) {
    x[1]++;
    digitalWrite(i[1], HIGH);
    delay(del);
  
    digitalWrite(i[1], LOW);
    delay(del);
  }
  while (x[2] <= 4) {
    x[2]++;
    digitalWrite(i[2], HIGH);
    delay(del);
  
    digitalWrite(i[2], LOW);
    delay(del);
  }
  memset(x, 0, sizeof(x));
}

