#include <ResponsiveAnalogRead.h>
const int ANALOG_PIN = A0;
ResponsiveAnalogRead analog(ANALOG_PIN, true)
void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
}

void loop() {
analog.update();

Serial.println(analog.getValue());
delay(1)
}
