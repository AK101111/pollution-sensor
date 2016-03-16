
#ifndef SD_CAR_H
#define SD_CAR_H

#include <SPI.h>
#include <SD.h>

#define CS 4
#define SD_ERROR -1
#define SD_SUCCESS 0

File fd;

int sdcard_init();
int sdcard_write();
int sdcard_read();

#endif
