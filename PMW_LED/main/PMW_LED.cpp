#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/ledc.h"
#include "driver/gpio.h"

#define SPEED_MODE LEDC_LOW_SPEED_MODE
#define RES LEDC_TIMER_1_BIT
#define CHANNEL LEDC_CHANNEL_8
#define TIMER_SELECT LEDC_TIMER_3
#define CLOCK_CONF LEDC_AUTO_CLK

extern "C" void app_main(void)
{
    // configure timer

    ledc_timer_config_t timer_config = {
        .speed_mode = SPEED_MODE
        .duty_resolution = RES,
        .timer_num = TIMER_SELECT,
        .freq_hz = 1000,
        .clk_cfg = CLOCK_CONF

    };
    ledc_channel_config_t channel_config = {
        .gpio_num = 18 // accepts int rather than GPIO_NUM_18
        .speed_mode = SPEED_MODE
        .channel = CHANNEL
        .timer_sel = TIMER_SELECT
        .freq_hz = 1000

    };
    ledc_timer_config(&timer_config); //accepts pointer to the timer config struct
    ledc_channel_config(&channel_config);


    



}
