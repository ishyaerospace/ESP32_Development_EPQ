#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"

#define LED_GPIO_LED GPIO_NUM_18   // pin for LED

extern "C" void app_main(void)// tells compiler to keep this function compatible with C
{
    // Configure the GPIO pin as output
    gpio_set_direction(LED_GPIO_LED, GPIO_MODE_OUTPUT);

    while (1)
    {
        gpio_set_level(LED_GPIO_LED, 1);  // Turn LED ON
        vTaskDelay(pdMS_TO_TICKS(500));  // 500 ms delay

        gpio_set_level(LED_GPIO_LED, 0);  // Turn LED OFF
        vTaskDelay(pdMS_TO_TICKS(500));  // 500 ms delay
    }
}