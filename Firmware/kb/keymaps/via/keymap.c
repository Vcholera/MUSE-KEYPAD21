#include "kb.h"

enum layer_names {
    _BASE,
    _GAMEPAD,
    _RGBCTRL
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[_BASE] = LAYOUT(
		KC_VOLU, RCTL(KC_X), RCTL(KC_C), RCTL(KC_V), RGUI(KC_L),
		KC_VOLD, TO(_GAMEPAD), KC_PSLS, KC_PAST, KC_PMNS,
		KC_P7, KC_P8, KC_P9, KC_PPLS,
		KC_MUTE, KC_P4, KC_P5, KC_P6, KC_BRIU,
		KC_MPLY, KC_P1, KC_P2, KC_P3, KC_PENT,
		KC_MPRV, KC_MNXT, KC_P0, KC_PDOT, KC_BRID),

	[_GAMEPAD] = LAYOUT(
		KC_WH_U, RCTL(KC_X), RCTL(KC_C), RCTL(KC_V), RGUI(KC_L),
		KC_WH_D, TO(_RGBCTRL), KC_PSLS, KC_PAST, KC_PMNS,
		KC_Q, KC_W, KC_E, KC_R,
		KC_MUTE, KC_A, KC_S, KC_D, KC_WH_L,
		KC_MPLY, KC_Z, KC_X, KC_C, KC_SPACE,
		KC_MPRV, KC_MNXT, KC_LCTL, KC_LALT, KC_WH_R),

	[_RGBCTRL] = LAYOUT(
		RGB_VAI,KC_NO, KC_NO, KC_NO, KC_NO,
		RGB_VAD,TO(_BASE), KC_NO, KC_NO, RGB_SAI,
		RGB_M_P, RGB_M_B, RGB_M_R, RGB_SAD,
		KC_NO, RGB_M_SW, RGB_M_SN, RGB_M_K,RGB_HUI,
		RGB_TOG, RGB_M_X, RGB_M_G, RGB_M_T, RGB_MOD,
		KC_NO, KC_NO, RGB_M_TW, KC_NO, RGB_HUD),

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

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    } else if (index == 1) { /* Second encoder */
        if (clockwise) {
            tap_code(KC_BRIU);
        } else {
            tap_code(KC_BRID);
        }
    }
    return false;
}

