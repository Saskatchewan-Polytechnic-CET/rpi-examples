# Simple program to blink LED in python on Pi

# Imports
import wiringpi as wp

# Defines
BLINK_LED = 8
BLINK_DELAY = 500

# Runtime entrypoint
def main():
    # Initialize Wiring Pi
    print("Initializing Pi GP I/O")
    if wp.wiringPiSetup()!=0:
        print("Wiring Pi Setup Failed")

    # Initializing output
    print("Running LED blink")
    wp.pinMode(BLINK_LED, wp.OUTPUT)
    wp.digitalWrite(BLINK_LED, wp.LOW)

    # Main loop; continuously blink LED
    while True:
        # LED ON
        wp.digitalWrite(BLINK_LED, wp.HIGH)
        wp.delay(BLINK_DELAY)
        # LED OFF
        wp.digitalWrite(BLINK_LED, wp.LOW)
        wp.delay(BLINK_DELAY)

# Call main
main()
