#include "nrf.h"  // NRF SDK header for nRF52840 (can be replaced for other platforms)

#define LED_PIN 17  // Define the GPIO pin number for the LED

void delay(void) {
    for (volatile int i = 0; i < 1000000; i++);  // Simple delay loop
}

int main(void) {
    // Set LED_PIN as an output
    NRF_GPIO->DIRSET = (1 << LED_PIN);

    while (1) {
        NRF_GPIO->OUTSET = (1 << LED_PIN);  // Turn LED on
        delay();
        NRF_GPIO->OUTCLR = (1 << LED_PIN);  // Turn LED off
        delay();
    }
}
