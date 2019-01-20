#include QMK_KEYBOARD_H

#define _DEFAULT 0
#define _FN 1
#define _LIGHTS 2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_DEFAULT] = LAYOUT_true_hhkb(
        KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSLS, KC_GRV,
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSPC, 
        KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
		KC_LSFT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, MO(_FN),
		KC_LALT, KC_LGUI, KC_SPC, KC_RGUI, KC_RALT),
    [_FN] = LAYOUT_true_hhkb(
		_______, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_INS, _______,
        KC_CAPS, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_UP, KC_PSCR, KC_DEL,
        _______, KC_VOLD, KC_VOLU, KC_MUTE, _______, _______, _______, _______, KC_HOME, KC_PGUP, KC_LEFT, KC_RIGHT, _______,
		_______, _______, KC_MRWD, KC_MFFD, KC_MPLY, _______, _______, _______, _______, KC_END, KC_PGDN, KC_DOWN, _______, _______,
		_______, _______, _______, MO(_LIGHTS), _______),
    [_LIGHTS] = LAYOUT_true_hhkb(
		RESET, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, RGB_TOG, RGB_MOD, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, RGB_HUI, RGB_SAI, RGB_VAI, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, RGB_HUD, RGB_SAD, RGB_VAD, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______),
};