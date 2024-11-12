#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_LEDBackpack.h>


Adafruit_7segment display = Adafruit_7segment();

void setup() {
    display.begin(0x70); 
}

void loop() {
    for (int i = 100; i >= 0; i--) {
        display.print(i); 
        display.writeDisplay(); 
        delay(1000); 
    }

    for (int j = 0; j < 3; j++) {
        display.clear(); 
        display.writeDisplay();
        delay(500);

        display.print(0); 
        display.writeDisplay();
        delay(500);
    }

    while (true);
}
