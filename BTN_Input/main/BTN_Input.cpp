#include <stdio.h>
#include "driver/gpio.h"
#include "freeRTOS/tasks.h"

#define LED_PIN GPIO_NUM_18 // LED pin name
#define BTN_PIN GPIO_NUM_17 // Button pin name

int button_state = 0;

extern "C" void app_main(void) // allows function to be compatible with C
{
    gpio_set_direction(BTN_PIN, GPIO_MODE_INPUT);
    gpio_set_direction(LED_PIN, GPIO_MODE_OUTPUT);
    while (1)
    {
        button_state = gpio_get_level(BTN_PIN);

        if (button_state == 0){
            gpio_set_level(LED_PIN, 1);
        }
        else {
            gpio_set_level(LED_PIN, 0);
        }
    }
}
