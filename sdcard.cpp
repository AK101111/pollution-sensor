#include "sdcard.h"

int sdcard_init(){
  Serial.begin(9600);
  while (!Serial) {;}
  Serial.print("Loading SD card...");
  
  if (!SD.begin(CS)) {
    Serial.println("SD card bad");
    return SD_ERROR;
  }
  Serial.println("Sd okay");
  return SD_SUCCESS;
}  

int sdcard_write(char *filepath, char *message){
  if((fd = SD.open(filepath, FILE_WRITE))==0){
    Serial.println("error opening file");
     return SD_ERROR;
  }
  Serial.print("Writing to");
  Serial.print(filepath);
  fd.println(message);
  fd.close();
  Serial.println("done.");
  return SD_SUCCESS;
}  

int sdcard_read(char *filepath){
  // re-open the file for reading:
  if((fd = SD.open(filepath))==0){
     Serial.println("error opening");
     Serial.println(filepath);
     return SD_ERROR;
  }
  Serial.println(filepath);
  while (fd.available()) {
      Serial.write(fd.read());
  }
  fd.close();
  return SD_SUCCESS;
}
