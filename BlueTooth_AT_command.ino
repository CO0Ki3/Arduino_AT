#include <SoftwareSerial.h>

SoftwareSerial BTSerial(2, 3);

void setup() {
  Serial.begin(9600);
  BTSerial.begin(9600);
  //if module is HC-05, board rate speed is 38400
}

void loop() {
  if(BTSerial.available()) {
    Serial.write(BTSerial.read());
  }
  if(Serial.available()) {
    BTSerial.write(Serial.read());
  }
}
