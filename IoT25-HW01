#define LED_PIN 22
#define BTN_PIN 23

int buttonState = 0;

void setup() {

  Serial.begin(115200);  

  pinMode(BTN_PIN, INPUT);

  pinMode(LED_PIN, OUTPUT);

}

void loop() {

  buttonState = digitalRead(BTN_PIN);
  Serial.println(buttonState);


  if (buttonState == HIGH) {
    // LED on
    digitalWrite(LED_PIN, HIGH);
  } else {
    // LED off
    digitalWrite(LED_PIN, LOW);
  }


}
