/*
 * ESP32-CAM - LED Blink
 * Based on the tutorial:
 * https://www.geekering.com/categories/embedded-sytems/esp32/ricardocarreira/esp32-cam-board-how-to-begin-and-blink-a-led/
 * 
 * MJRovai @2Jan22
 */

#define LED_BUILT_IN 33 

void setup() {
  pinMode(LED_BUILT_IN, OUTPUT); // Set the pin as output
}

// Remember that the pin work with inverted logic
// LOW to Turn on and HIGH to turn off
void loop() {
  digitalWrite(LED_BUILT_IN, LOW); //Turn on
  delay (1000); //Wait 1 sec
  digitalWrite(LED_BUILT_IN, HIGH); //Turn off
  delay (1000); //Wait 1 sec
}
