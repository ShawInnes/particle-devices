#include "InternetButton/InternetButton.h"

InternetButton b = InternetButton();

bool rainbow_mode = false;

void setup() {
    b.begin();
}

void loop() {
    if (b.buttonOn(1)) {
        Particle.publish("slackbutton", "The internet just got smarter!", 60, PRIVATE);
        
        b.ledOn(12, 255, 0, 0); // Red
        delay(500);
    }
    else {
        b.ledOn(12, 0, 0, 0);
    }

    if(b.allButtonsOff()) {
        // Do something here when all buttons are off
    }
}
