#include "delay.h"
#include "gpio.h"
#include "rcc.h"
#include "timer.h"

#define LED_PIN PA0

int main(void) {
    rcc_init();
    pinMode_output(PC13);
    pinMode_output(LED_PIN);
    // pinMode_output(PA15); // enables tim2?
    // tim2_init();

    while(1) {
        led_on(LED_PIN);
        delay(1000000U);
        led_off(LED_PIN);
        delay(1000000U);
    }
}
