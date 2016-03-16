

#ifndef REALTIMECLOCK_H
#define REALTIMECLOCK_H
#include <TimeLib.h>
#include <Time.h>
#include <DS1302RTC.h>

DS3231  rtc(SDA, SCL);
int rtc_init();
  
#endif
