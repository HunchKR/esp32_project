const int potPin = 34;
#define LED_PIN 22

// variable for storing the potentiometer value
int potValue = 0;

void setup() {
  Serial.begin(115200);
  delay(1000);
    pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // Reading potentiometer value
  potValue = analogRead(potPin);
  Serial.println(potValue);
    digitalWrite(LED_PIN, HIGH);
    if(potValue>1000){
        digitalWrite(LED_PIN, HIGH);
       delay(1000);
digitalWrite(LED_PIN, LOW);
    }else if(potValue<=1000){
    digitalWrite(LED_PIN, HIGH);
       delay(50);
  digitalWrite(LED_PIN, LOW);
    }
  delay(potValue/2);
    
}