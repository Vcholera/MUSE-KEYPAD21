#include "kb.h"

enum layer_names {
    _BASE,
    _GAMEPAD,
    _RGB
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[_BASE] = LAYOUT(
		            RCTL(KC_X),     RCTL(KC_C),     RCTL(KC_V), RCTL(KC_Z),
		            TO(_GAMEPAD),   KC_PSLS,        KC_PAST,    KC_PMNS,
		            KC_P7,          KC_P8,          KC_P9,      KC_PPLS,
		KC_MUTE,    KC_P4,          KC_P5,          KC_P6,
		KC_MPLY,    KC_P1,          KC_P2,          KC_P3,      KC_PENT,
		KC_MNXT,    KC_MPRV,        KC_P0,          KC_PDOT                 ),

	[_GAMEPAD] = LAYOUT(
		            KC_ESC,     RCTL(KC_C),     RCTL(KC_V),     RCTL(KC_Z),
		            TO(_RGB),   KC_PSLS,        KC_PAST,        KC_PMNS,
		KC_Q,       KC_W,       KC_E,           KC_R,
		RGB_TOG,    KC_A,       KC_S,           KC_D,
		KC_MUTE,    KC_Z,       KC_X,           KC_C,           KC_SPACE,
		KC_TRNS,    KC_TRNS,    KC_LCTL,        KC_LALT                     ),

	[_RGB] = LAYOUT(
		            KC_NO,      KC_NO,          KC_NO,          KC_NO,
		            TO(_BASE),  KC_NO,          KC_NO,          RGB_SAI,
		RGB_M_P,    RGB_M_B,    RGB_M_R,        RGB_SAD,
		KC_NO,      RGB_M_SW,   RGB_M_SN,       RGB_M_K,
		RGB_TOG,    RGB_M_X,    RGB_M_G,        RGB_M_T,        RGB_MOD,
		KC_TRNS,    KC_TRNS,      RGB_M_TW,       KC_NO                       ),

};

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}

void led_set_user(uint8_t usb_led) {

	if (usb_led & (1 << USB_LED_NUM_LOCK)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_CAPS_LOCK)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_COMPOSE)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_KANA)) {

	} else {

	}

}

/*
bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    } else if (index == 1) {
        if (clockwise) {
            tap_code(KC_BRIU);
        } else {
            tap_code(KC_BRID);
        }
    }
    return false;
}
*/


const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [_BASE]    =  { ENCODER_CCW_CW(KC_VOLU, KC_VOLD),           ENCODER_CCW_CW(KC_BRIU, KC_BRID)  },
    [_GAMEPAD] =  { ENCODER_CCW_CW(RGB_VAI, RGB_VAD),           ENCODER_CCW_CW(KC_WH_U, KC_WH_D)  },
    [_RGB] =  { ENCODER_CCW_CW(RGB_HUD, RGB_HUI),           ENCODER_CCW_CW(RGB_VAI, RGB_VAD)  },
};


