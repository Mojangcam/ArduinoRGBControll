#define RGB_RED_PIN_NUM   9
#define RGB_GREEN_PIN_NUM 10
#define RGB_BLUE_PIN_NUM  11

void setup() {
  pinMode(RGB_RED_PIN_NUM, OUTPUT);
  pinMode(RGB_GREEN_PIN_NUM, OUTPUT);
  pinMode(RGB_BLUE_PIN_NUM, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  for(int i = 0; i < 255; i++){
    analogWrite(RGB_RED_PIN_NUM, i);
    analogWrite(RGB_GREEN_PIN_NUM, (255-i));
    analogWrite(RGB_BLUE_PIN_NUM, i);
    Serial.println(String() + 
                  F("Red : ") + 
                  i +
                  F("\tGreen : ")+
                  (255 - i) +
                  F("\tBlue : ")+
                  i);
  }
  for(int i = 255; i > 0; i--){
    analogWrite(RGB_RED_PIN_NUM, i);
    analogWrite(RGB_GREEN_PIN_NUM, (255-i));
    analogWrite(RGB_BLUE_PIN_NUM, i);
    Serial.println(String() + 
                  F("Red : ") + 
                  i +
                  F("\tGreen : ")+
                  (255-i) +
                  F("\tBlue : ")+
                  i);
  }
}
