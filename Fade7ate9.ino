int led9 = 9;
int led8 = 8;
int led7 = 7;
int brightness = 0;
int fadeAmount = 15;

void setup() {
  pinMode(led9, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led7, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  analogWrite(led9, brightness);
  analogWrite(led8, brightness);
  analogWrite(led7, brightness);
  brightness = brightness + fadeAmount;
  
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }

  Serial.println(brightness);
  
  delay(60);
}
