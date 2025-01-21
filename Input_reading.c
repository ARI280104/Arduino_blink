

#include <stdbool.h>
#include <stdint.h>

#include <nrf_gpio.h>
#define LED 17
#define Button 13

int main(void)
{
   nrf_gpio_cfg_output(LED);
   nrf_gpio_cfg_input(Button, NRF_GPIO_PIN_PULLUP);
   nrf_gpio_pin_set(LED);
   
    while (true){
        if(nrf_gpio_pin_read(Button == 0)){
            nrf_gpio_pin_clear(LED);
            while(nrf_gpio_pin_read(Button == 0));
             nrf_gpio_pin_set(LED);
        }

    }
}

