
#pragma once

#define DYNAMIC_KEYMAP_LAYER_COUNT 4

#ifdef OLED_ENABLE
    #define USE_I2C
    #define OLED_DISPLAY_128X32
    #define OLED_FONT_END 255
    #define OLED_FONT_H "gfxfont.c"
#endif