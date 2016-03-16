#include "realtc.h"

rtc_init(){
    rtc.begin();
    rtc.setDOW(WEDNESDAY);     // Set Day-of-Week 
    rtc.setTime(15, 0, 0);     // Set the time to 12:00:00 (24hr format)
    rtc.setDate(3, 9, 2016);   // Set the date to January 1st, 2014
}


  /*
	  //Send Day-of-Week
	  Serial.print(rtc.getDOWStr());
	  Serial.print(" ");
  
	  // Send date
	  Serial.print(rtc.getDateStr());
	  Serial.print(" -- ");

	  // Send time
	  Serial.println(rtc.getTimeStr());
	  
	  // Wait one second before repeating :)
	  delay (1000);
*/
