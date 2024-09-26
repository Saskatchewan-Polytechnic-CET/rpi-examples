// Simple program to blink LED in C++ on Pi

// Includes
#include <iostream>
#include <wiringPi.h>

using namespace std;

// Defines
#define BLINK_LED 8
#define BLINK_DELAY 500

// Runtime entrypoint
int main()
{
    // Initialize Wiring Pi
    cout << "Initializing Pi GP I/O" << endl;
    if(wiringPiSetup()!=0)
    {
        cout << "Wiring Pi Setup Failed" << endl;
    }

    // Initializing output
    cout << "Running LED blink" << endl;
    pinMode(BLINK_LED, OUTPUT);
    digitalWrite(BLINK_LED, LOW);

    // Main loop; continuously blink LED
    while(1)
    {
        // LED ON
        digitalWrite(BLINK_LED, HIGH);
        delay(BLINK_DELAY);
        // LED OFF
        digitalWrite(BLINK_LED, LOW);
        delay(BLINK_DELAY);
    }
}
