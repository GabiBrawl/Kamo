#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "esp_log.h"
#include "led_strip.h"

#define LED_PIN GPIO_NUM_37
#define LED_STRIP_LENGTH 1  // Single WS2812C LED

static const char *TAG = "KAMO";

extern "C" void app_main(void) {
    ESP_LOGI(TAG, "Kamo is starting...");

    // Configure LED strip
    led_strip_config_t strip_config = {
        .strip_gpio_num = LED_PIN,
        .max_leds = LED_STRIP_LENGTH,
        .led_pixel_format = LED_PIXEL_FORMAT_GRB,
        .led_model = LED_MODEL_WS2812,
        .flags.invert_out = false,
    };

    led_strip_rmt_config_t rmt_config = {
        .rmt_channel = RMT_CHANNEL_0,
    };

    led_strip_handle_t led_strip;
    ESP_ERROR_CHECK(led_strip_new_rmt_device(&strip_config, &rmt_config, &led_strip));

    // Simple LED blink loop (red on/off)
    while (1) {
        ESP_ERROR_CHECK(led_strip_set_pixel(led_strip, 0, 255, 0, 0));  // Red
        ESP_ERROR_CHECK(led_strip_refresh(led_strip));
        vTaskDelay(1000 / portTICK_PERIOD_MS);
        ESP_ERROR_CHECK(led_strip_clear(led_strip));  // Off
        ESP_ERROR_CHECK(led_strip_refresh(led_strip));
        vTaskDelay(1000 / portTICK_PERIOD_MS);
        ESP_LOGI(TAG, "WS2812C LED blinked");
    }
}
