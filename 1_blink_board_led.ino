#define LED_PIN 22
#define BTN_PIN 23

int buttonState = 0;

void setup() {
    //시리얼모니터 통신속도 설정
  Serial.begin(115200);  
  // 푸시버튼 핀을 입력으로 초기화
  pinMode(BTN_PIN, INPUT);
  // 	LED 핀을 출력으로 초기화
  pinMode(LED_PIN, OUTPUT);

}

void loop() {
    // 푸시버튼 값의 상태를 읽습니다.
  buttonState = digitalRead(BTN_PIN);
  Serial.println(buttonState);

  // 만약에 ButtonState는 HIGH라면
  if (buttonState == HIGH) {
    // LED on
    digitalWrite(LED_PIN, HIGH);
  } else {
    // LED off
    digitalWrite(LED_PIN, LOW);
  }


}
