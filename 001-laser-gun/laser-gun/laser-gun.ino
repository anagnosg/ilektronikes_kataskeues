
#define BUTTON_PIN 16
#define LASER_PIN 5

void setup() {
  pinMode(BUTTON_PIN,INPUT);
  pinMode(LASER_PIN,OUTPUT);
}

void loop() {
  int buttonValue = digitalRead(BUTTON_PIN);
  if(buttonValue==HIGH)
  {
      digitalWrite(LASER_PIN,HIGH);
  }
  else
  {
    digitalWrite(LASER_PIN,LOW);
  }
  delay(200);
}
