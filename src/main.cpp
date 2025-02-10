#include <pigpio.h>
#include <iostream>

int main() {
    // Initialize pigpio
    if (gpioInitialise() < 0) {
        std::cerr << "Failed to initialize pigpio" << std::endl;
        return 1;
    }

    // Set GPIO pin 0 to input mode
    gpioSetMode(0, PI_INPUT);

    while (true) {
        // Read the value of GPIO pin 0
        int value = gpioRead(0);
        std::cout << "GPIO 0 value: " << value << std::endl;

        // Sleep for 1 second
        gpioDelay(1000);
    }

    // Clean up
    gpioTerminate();

    return 0;
}
