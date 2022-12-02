#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x5948  //YH IN ASCII
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    MUSE KEYBOARD
#define PRODUCT         MUSE KEYPAD

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 5

/* key matrix pins */
#define MATRIX_ROW_PINS { B0, B1, B2, B3, B4, B5 }
#define MATRIX_COL_PINS { D4, D5, D6, D7, E6 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* number of backlight levels */
#define BACKLIGHT_PIN B6
#ifdef BACKLIGHT_PIN
#define BACKLIGHT_LEVELS 3
#endif

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

/* prevent stuck modifiers */

#define RGB_DI_PIN B7
#ifdef RGB_DI_PIN

#define RGBLIGHT_EFFECT_ALTERNATING
#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_CHRISTMAS
#define RGBLIGHT_EFFECT_KNIGHT
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#define RGBLIGHT_EFFECT_RGB_TEST
#define RGBLIGHT_EFFECT_SNAKE
#define RGBLIGHT_EFFECT_STATIC_GRADIENT
#define RGBLIGHT_EFFECT_TWINKLE

/* RGB LED Conversion macro from physical array to electric array */
#define LED_LAYOUT( \

  	     L01, L02, L03, L04, \
	     L11, L12, L13, L14, \
	     L21, L22, L23, L24, \
	L30, L31, L32, L33,      \
	L40, L41, L42, L43, L44, \
	L50, L51, L52, L53       \
) { \
	{        L01,   L02,   L03,   L04 }, \
	{        L11,   L12,   L13,   L14 }, \
	{        L21,   L22,   L23,   L24 }, \
	{ L30,   L31,   L32,   L33,       }, \
	{ L40,   L41,   L42,   L43,   L44 }, \
	{ L50,   L51,   L52,   L53,       }  \
}

/* RGB LED logical order map */
/* Top->Bottom, Right->Left */
#define RGBLIGHT_LED_MAP LED_LAYOUT( \
        0,  1,  2,  3,      \
        7,  6,  5,  4,      \
        8,  9,  10, 11,     \
    24, 14, 13, 12,         \
    23, 15, 16, 17, 18,     \
    22, 21, 20, 19          )


#define RGBLIGHT_SLEEP

#define RGBLED_NUM 24
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8

#endif

/*ENCODER*/

//#define ENCODERS 2
//#define ENCODERS_CW_KEY  { { 0, 0 }, { 0, 1 } }
//#define ENCODERS_CCW_KEY { { 4, 3 }, { 4, 5 } }

#define ENCODER_RESOLUTION 4
#define ENCODERS_PAD_A {F5, F1}
#define ENCODERS_PAD_B {F4, F0}



#endif
