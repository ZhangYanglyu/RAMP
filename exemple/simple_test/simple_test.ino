#include <Ramp.h>						              // include library
ramp myRamp;							                // new ramp object (ramp<unsigned char> by default)

void setup() {
  Serial.begin(9600);					            // begin Serial communication 
  
  Serial.print("Value start at: ");		    //
  Serial.println(myRamp.value());			    // accessing start value

  Serial.print("Strating interpolation"); // 
  myRamp.go(255, 1000);	                  // start interpolation (value to go to, duration)
}

void loop() {
  Serial.print("Actual value is: ");      // 
  Serial.println(myRamp.update());        // update() return the actual interpolation value
  delay(100);
}
