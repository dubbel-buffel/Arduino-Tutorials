/* 
 *  Blinking LED light

  A simple program that will make blink the onboard LED on the Arduino


  Optional Wiring:
  * LED light
  * 330 ohm resistor
  
    LED negitive leg to GND
    LED positive leg to 330 ohm resistor
    330 ohm resistor to pin 13 power

*/

const int LED = 13;

void setup() {

  pinMode(LED, OUTPUT);
  
}

void loop() {

  digitalWrite(LED, HIGH);
  delay(500);

  digitalWrite(LED, LOW);
  delay(500);
  
}
