// Simple program to blink LED in C++ on Pi

// Includes
#include <iostream>
#include <wiringPi.h>

using namespace std;

// Defines
#define LED_SIZE 4
#define UNIT_DELAY 500
unsigned int LEDS[] = {25,24,23,22};
unsigned int DELAYS[] = {500,250,100,50};

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
    cout << "Running LED loop" << endl;
    for(int i = 0; i < LED_SIZE; i++)
    {
        pinMode(LEDS[i], OUTPUT);
        digitalWrite(LEDS[i], LOW);
    }

    // Main loop; continuously blink LED
    while(1)
    {
        for(int i = 0; i < LED_SIZE; i++)
        {
            for(int j = 0; j <= i+1; j++)
            {
                // LED ON
                digitalWrite(LEDS[i], HIGH);
                delay(DELAYS[i]);
                // LED OFF
                digitalWrite(LEDS[i], LOW);
                delay(DELAYS[i]);
            }
            delay(UNIT_DELAY);
        }
    }
}
