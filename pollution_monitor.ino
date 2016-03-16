

#include "sdcard.h"
#include "realtc.h"

#define ANALOG_IN A0
#define THRESHOLD  rd  (1<<9)
#define ALARM 13

void setup(){
  if(sdcard_init()==SD_ERROR){
     exit(0); 
  }
  rtc_init();
  pinMode(ALARM, OUTPUT);
}

void loop(){
  int sensorValue = analogRead(ANALOG_IN);
  Serial.println(sensorValue);
  if(sensorValue> THRESHOLD){
        digitalWrite(ALARM, HIGH);
        delay(50);
        digitalWrite(ALARM, LOW);
        delay(50);
  }
}
