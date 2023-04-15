
#pragma once

#define DYNAMIC_KEYMAP_LAYER_COUNT 4

#ifdef OLED_ENABLE
    #define USE_I2C
    #define I2C_DRIVER I2CD2
    #define I2C1_SCL_PIN B10
    #define I2C1_SDA_PIN B11
    #define OLED_DISPLAY_128X32
#endif