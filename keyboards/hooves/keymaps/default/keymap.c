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
#define T__ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_BASE] = LAYOUT( \
/**/  KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,        KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_MINS, \
/**/  KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,        KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, \
/**/  KC_GRV,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,        KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_BSLS, \
/**/                    KC_PLUS, KC_PEQL,                                         KC_LBRC, KC_RBRC,                   \
/**/                             KC_BSPC, KC_LCTL, KC_LALT,     KC_RALT, KC_ENT,  KC_SPC,                             \
/**/                             RAISE,   KC_LGUI, KC_LSFT,     KC_RSFT, KC_RGUI, LOWER                               \
),
[_RAISE] = LAYOUT( \
/**/  T__,     KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,     KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_UNDS, \
/**/  T__,     ___,     ___,     ___,     ___,     ___,         KC_PLUS, KC_PEQL, KC_LCBR, KC_RCBR, KC_COLN, KC_DQUO, \
/**/  T__,     ___,     ___,     ___,     ___,     RESET,       KC_PIPE, KC_GRV,  KC_LT,   KC_GT,   KC_QUES, T__,     \
/**/                    T__,     T__,                                             KC_LBRC, KC_RBRC,                   \
/**/                             T__,     T__,     T__,         T__,     T__,     T__,                                \
/**/                             T__,     T__,     T__,         T__,     T__,     T__                                 \
),
[_LOWER] = LAYOUT( \
/**/  T__,     ___,     ___,     ___,     ___,     ___,         ___,     ___,     ___,     ___,     ___,     ___,     \
/**/  T__,     KC_P1,   KC_P2,   KC_P3,   KC_P4,   KC_P5,       KC_P6,   KC_P7,   KC_P8,   KC_P9,   KC_P0,   ___,     \
/**/  T__,     ___,     ___,     ___,     ___,     ___,         KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, ___,     ___,     \
/**/                    ___,     ___,                                             ___,     ___,                       \
/**/                             T__,     T__,     T__,         T__,     T__,     T__,                                \
/**/                             T__,     T__,     T__,         T__,     T__,     T__                                 \
)
};
