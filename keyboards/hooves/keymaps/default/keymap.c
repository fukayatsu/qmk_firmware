/* Copyright 2019 fukayatsu
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _RAISE,
    _LOWER
};

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_BASE] = LAYOUT( \
/**/  KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,        KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_MINS, \
/**/  KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,        KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, \
/**/  KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,        KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, \
/**/                    KC_GRV,  KC_BSLS,                                         KC_LBRC, KC_RBRC,                   \
/**/                             RAISE,   KC_LCTL, KC_LALT,     KC_RALT, KC_BSPC, LOWER,                              \
/**/                             KC_LGUI, KC_SPC,  KC_LSFT,     KC_RSFT, KC_ENT,  KC_RGUI                             \
),
[_RAISE] = LAYOUT( \
/**/  KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,     KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_UNDS, \
/**/  KC_LCTL, ___,     ___,     ___,     ___,     ___,         ___,     ___,     KC_LCBR, KC_RCBR, KC_COLN, KC_DQUO, \
/**/  KC_LSFT, ___,     ___,     ___,     ___,     RESET,       ___,     ___,     KC_LT,   KC_GT,   KC_QUES, KC_BSLS, \
/**/                    KC_GRV,  KC_BSLS,                                         KC_LBRC, KC_RBRC,                   \
/**/                             KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,                            \
/**/                             KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS                             \
),
[_LOWER] = LAYOUT( \
/**/  KC_ESC,  ___,     ___,     ___,     ___,     ___,         ___,     ___,     ___,     ___,     ___,     KC_BSPC, \
/**/  KC_LCTL, KC_P1,   KC_P2,   KC_P3,   KC_P4,   KC_P5,       KC_P6,   KC_P7,   KC_P8,   KC_P9,   KC_P0,   ___,     \
/**/  KC_LSFT, ___,     ___,     ___,     ___,     ___,         KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, ___,     KC_RSFT,  \
/**/                    ___,     ___,                                             ___,     ___,                       \
/**/                             KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS,                            \
/**/                             KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS                             \
)
};
