/* Copyright 2015-2022 Espressif Systems (Shanghai) PTE LTD */
/* */
/* Licensed under the Apache License, Version 2.0 (the "License"); */
/* you may not use this file except in compliance with the License. */
/* You may obtain a copy of the License at */
/*     http://www.apache.org/licenses/LICENSE-2.0 */
/* */
/* Unless required by applicable law or agreed to in writing, software */
/* distributed under the License is distributed on an "AS IS" BASIS, */
/* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. */
/* See the License for the specific language governing permissions and */
/* limitations under the License. */

#ifndef APP_DRIVER_H_
    #define APP_DRIVER_H_

    #ifdef __cplusplus
    extern "C" {
    #endif

    #include "driver/temp_sensor.h"
    #include "driver/gpio.h"
    #include "led_strip.h"

    esp_err_t app_driver_init();

    float app_driver_temp_sensor_read_celsius();

    esp_err_t app_driver_led_on();

    esp_err_t app_driver_led_off();

    #ifdef __cplusplus
}
    #endif

#endif /* APP_DRIVER_H_ */
