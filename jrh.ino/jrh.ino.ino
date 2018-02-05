/*
 * Police lights with ultrasonic sensor
 * Written by Bryan Hernandez
 */

int i[] = {4,7,8};
int x[] = {0,0,0};
int len[] = {2,1,2};

long duration, cm, inches;
int trig = 9;
int echo = 10;

void setup() {
  pinMode(i[0], OUTPUT);
  pinMode(i[1], OUTPUT);
  pinMode(i[2], OUTPUT);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
}

int iter = 0;

void loop() {
  digitalWrite(trig, LOW);
  delayMicroseconds(5);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  
  pinMode(echo, INPUT);
  duration = pulseIn(echo, HIGH);
  cm = (duration/2) / 29.1;

  if (cm < 100) {
    while (x[iter] <= len[iter]) {
      x[iter]++;
      digitalWrite(i[iter], HIGH);
      delay(cm * 2);
    
      digitalWrite(i[iter], LOW);
      delay(cm * 2);
    }
    memset(x, 0, sizeof(x));
    iter++;
    iter %= 3;
  }
  else {
    iter = 0;
  }
}

