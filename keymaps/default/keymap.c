/* Copyright 2020 Juan Pablo Kutianski
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
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

#define ____ KC_TRANSPARENT

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Qwerty
    * ,-----.     ,-----------------------------------.   ,-----------------------.   ,------.       ,-----------------------.
    * | Esc |     |  F1 |  F2 |  F3 |  F4 |  F5 |  F6 |   | Ins | Home| PgUp| Prsc|   | Pause|       | Nlck|  /  |  *  |  -  |
    * '-----'     |-----------------------------------+   |-----------------------+   '------'       |-----------------------+
                  |  F7 |  F8 |  F9 | F10 | F11 | F12 |   | Del | End | PgDn| Scrl|                  |  7  |  8  |  9  |     |
    *             '-----------------------------------'   '-----------------------'                  |-----------------+  +  |
    * ,----------------------------------------------------------------------------------------.     |  4  |  5  |  6  |     |
    * |   ` |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  |  Backsp  |     |-----------------------+
    * |----------------------------------------------------------------------------------------+     |  1  |  2  |  3  |  E  |
    * |  Tab  |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  [  |  ]  |    \   |     |------------------  n  |
    * |----------------------------------------------------------------------------------------+     |      0    |  .  |  t  |
    * |  Caps   |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |  '  |   Enter    |     '-----------------------'
    * |----------------------------------------------------------------------------------------'
    * |   Shift    |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  /  |    Shift  | ,-----.
    * |------------------------------------------------------------------------------------' |  ^  |
    * |  Ctrl  |   Alt  |                  Space                  |   Alt  |  Ctrl  |  ,-----.-----.-----.
    * '-----------------------------------------------------------------------------'  |  <  |  v  |  >  |
    *                                                                                  '-----'-----'-----'
    */

    [0] = LAYOUT(
        KC_ESC,           KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,       KC_INS,  KC_HOME, KC_PGUP, KC_PSCR,      KC_PAUS,                   KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS,
                          KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,      KC_DEL,  KC_END,  KC_PGDN, KC_SLCK,                                 KC_P7,   KC_P8,   KC_P9,   KC_PPLS,
                                                                                                                                                        KC_P4,   KC_P5,   KC_P6,
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,                   KC_P1,   KC_P2,   KC_P3,   KC_PENT,
        KC_TAB,      KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,               KC_P0,            KC_PDOT,
        KC_CAPS,       KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
        KC_LSFT,            KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,            KC_UP,
        KC_LCTL,     KC_LALT,                             KC_SPC,                                 KC_RALT,     KC_RCTL,          KC_LEFT, KC_DOWN, KC_RGHT
    ),

    [1] = LAYOUT(
        ____,             ____,    ____,    ____,    ____,    ____,    ____,        ____,    ____,    ____,    ____,         ____,                      ____, ____, ____, ____,
                          ____,    ____,    ____,    ____,    ____,    ____,        ____,    ____,    ____,    ____,                                    ____, ____, ____, ____,
                                                                                                                                                        ____, ____, ____,
        ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,                      ____, ____, ____, ____,
        ____,        ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,                  ____,       ____,
        ____,          ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,
        ____,               ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,               ____,
        ____,        ____,                                ____,                                   ____,        ____,             ____,    ____,    ____
    ),

    [2] = LAYOUT(
        ____,             ____,    ____,    ____,    ____,    ____,    ____,        ____,    ____,    ____,    ____,         ____,                      ____, ____, ____, ____,
                          ____,    ____,    ____,    ____,    ____,    ____,        ____,    ____,    ____,    ____,                                    ____, ____, ____, ____,
                                                                                                                                                        ____, ____, ____,
        ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,                      ____, ____, ____, ____,
        ____,        ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,                  ____,       ____,
        ____,          ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,
        ____,               ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,               ____,
        ____,        ____,                                ____,                                   ____,        ____,             ____,    ____,    ____
    ),

    [3] = LAYOUT(
        ____,             ____,    ____,    ____,    ____,    ____,    ____,        ____,    ____,    ____,    ____,         ____,                      ____, ____, ____, ____,
                          ____,    ____,    ____,    ____,    ____,    ____,        ____,    ____,    ____,    ____,                                    ____, ____, ____, ____,
                                                                                                                                                        ____, ____, ____,
        ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,                      ____, ____, ____, ____,
        ____,        ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,                  ____,       ____,
        ____,          ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,
        ____,               ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,               ____,
        ____,        ____,                                ____,                                   ____,        ____,             ____,    ____,    ____
    ),

    [4] = LAYOUT(
        ____,             ____,    ____,    ____,    ____,    ____,    ____,        ____,    ____,    ____,    ____,         ____,                      ____, ____, ____, ____,
                          ____,    ____,    ____,    ____,    ____,    ____,        ____,    ____,    ____,    ____,                                    ____, ____, ____, ____,
                                                                                                                                                        ____, ____, ____,
        ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,                      ____, ____, ____, ____,
        ____,        ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,                  ____,       ____,
        ____,          ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,
        ____,               ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,               ____,
        ____,        ____,                                ____,                                   ____,        ____,             ____,    ____,    ____
    ),

    [5] = LAYOUT(
        ____,             ____,    ____,    ____,    ____,    ____,    ____,        ____,    ____,    ____,    ____,         ____,                      ____, ____, ____, ____,
                          ____,    ____,    ____,    ____,    ____,    ____,        ____,    ____,    ____,    ____,                                    ____, ____, ____, ____,
                                                                                                                                                        ____, ____, ____,
        ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,                      ____, ____, ____, ____,
        ____,        ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,                  ____,       ____,
        ____,          ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,
        ____,               ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,               ____,
        ____,        ____,                                ____,                                   ____,        ____,             ____,    ____,    ____
    ),

    [6] = LAYOUT(
        ____,             ____,    ____,    ____,    ____,    ____,    ____,        ____,    ____,    ____,    ____,         ____,                      ____, ____, ____, ____,
                          ____,    ____,    ____,    ____,    ____,    ____,        ____,    ____,    ____,    ____,                                    ____, ____, ____, ____,
                                                                                                                                                        ____, ____, ____,
        ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,                      ____, ____, ____, ____,
        ____,        ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,                  ____,       ____,
        ____,          ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,
        ____,               ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,               ____,
        ____,        ____,                                ____,                                   ____,        ____,             ____,    ____,    ____
    ),

    [7] = LAYOUT(
        ____,             ____,    ____,    ____,    ____,    ____,    ____,        ____,    ____,    ____,    ____,         ____,                      ____, ____, ____, ____,
                          ____,    ____,    ____,    ____,    ____,    ____,        ____,    ____,    ____,    ____,                                    ____, ____, ____, ____,
                                                                                                                                                        ____, ____, ____,
        ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,                      ____, ____, ____, ____,
        ____,        ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,                  ____,       ____,
        ____,          ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,
        ____,               ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,               ____,
        ____,        ____,                                ____,                                   ____,        ____,             ____,    ____,    ____
    ),

    [8] = LAYOUT(
        ____,             ____,    ____,    ____,    ____,    ____,    ____,        ____,    ____,    ____,    ____,         ____,                      ____, ____, ____, ____,
                          ____,    ____,    ____,    ____,    ____,    ____,        ____,    ____,    ____,    ____,                                    ____, ____, ____, ____,
                                                                                                                                                        ____, ____, ____,
        ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,                      ____, ____, ____, ____,
        ____,        ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,                  ____,       ____,
        ____,          ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,
        ____,               ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,               ____,
        ____,        ____,                                ____,                                   ____,        ____,             ____,    ____,    ____
    ),

    [9] = LAYOUT(
        ____,             ____,    ____,    ____,    ____,    ____,    ____,        ____,    ____,    ____,    ____,         ____,                      ____, ____, ____, ____,
                          ____,    ____,    ____,    ____,    ____,    ____,        ____,    ____,    ____,    ____,                                    ____, ____, ____, ____,
                                                                                                                                                        ____, ____, ____,
        ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,                      ____, ____, ____, ____,
        ____,        ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,                  ____,       ____,
        ____,          ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,
        ____,               ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,               ____,
        ____,        ____,                                ____,                                   ____,        ____,             ____,    ____,    ____
    ),

    [10] = LAYOUT(
        ____,             ____,    ____,    ____,    ____,    ____,    ____,        ____,    ____,    ____,    ____,         ____,                      ____, ____, ____, ____,
                          ____,    ____,    ____,    ____,    ____,    ____,        ____,    ____,    ____,    ____,                                    ____, ____, ____, ____,
                                                                                                                                                        ____, ____, ____,
        ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,                      ____, ____, ____, ____,
        ____,        ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,                  ____,       ____,
        ____,          ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,
        ____,               ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,               ____,
        ____,        ____,                                ____,                                   ____,        ____,             ____,    ____,    ____
    ),

    [11] = LAYOUT(
        ____,             ____,    ____,    ____,    ____,    ____,    ____,        ____,    ____,    ____,    ____,         ____,                      ____, ____, ____, ____,
                          ____,    ____,    ____,    ____,    ____,    ____,        ____,    ____,    ____,    ____,                                    ____, ____, ____, ____,
                                                                                                                                                        ____, ____, ____,
        ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,                      ____, ____, ____, ____,
        ____,        ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,                  ____,       ____,
        ____,          ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,
        ____,               ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,               ____,
        ____,        ____,                                ____,                                   ____,        ____,             ____,    ____,    ____
    ),

    [12] = LAYOUT(
        ____,             ____,    ____,    ____,    ____,    ____,    ____,        ____,    ____,    ____,    ____,         ____,                      ____, ____, ____, ____,
                          ____,    ____,    ____,    ____,    ____,    ____,        ____,    ____,    ____,    ____,                                    ____, ____, ____, ____,
                                                                                                                                                        ____, ____, ____,
        ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,                      ____, ____, ____, ____,
        ____,        ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,                  ____,       ____,
        ____,          ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,
        ____,               ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,               ____,
        ____,        ____,                                ____,                                   ____,        ____,             ____,    ____,    ____
    ),

    [13] = LAYOUT(
        ____,             ____,    ____,    ____,    ____,    ____,    ____,        ____,    ____,    ____,    ____,         ____,                      ____, ____, ____, ____,
                          ____,    ____,    ____,    ____,    ____,    ____,        ____,    ____,    ____,    ____,                                    ____, ____, ____, ____,
                                                                                                                                                        ____, ____, ____,
        ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,                      ____, ____, ____, ____,
        ____,        ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,                  ____,       ____,
        ____,          ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,
        ____,               ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,               ____,
        ____,        ____,                                ____,                                   ____,        ____,             ____,    ____,    ____
    ),

    [14] = LAYOUT(
        ____,             ____,    ____,    ____,    ____,    ____,    ____,        ____,    ____,    ____,    ____,         ____,                      ____, ____, ____, ____,
                          ____,    ____,    ____,    ____,    ____,    ____,        ____,    ____,    ____,    ____,                                    ____, ____, ____, ____,
                                                                                                                                                        ____, ____, ____,
        ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,                      ____, ____, ____, ____,
        ____,        ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,                  ____,       ____,
        ____,          ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,
        ____,               ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,               ____,
        ____,        ____,                                ____,                                   ____,        ____,             ____,    ____,    ____
    ),

    [15] = LAYOUT(
        ____,             ____,    ____,    ____,    ____,    ____,    ____,        ____,    ____,    ____,    ____,         ____,                      ____, ____, ____, ____,
                          ____,    ____,    ____,    ____,    ____,    ____,        ____,    ____,    ____,    ____,                                    ____, ____, ____, ____,
                                                                                                                                                        ____, ____, ____,
        ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,                      ____, ____, ____, ____,
        ____,        ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,                  ____,       ____,
        ____,          ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,
        ____,               ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,               ____,
        ____,        ____,                                ____,                                   ____,        ____,             ____,    ____,    ____
    ),
};
// clang-format on

void keyboard_pre_init_user(void) {
    // Call the keyboard pre init code.

    // Set our LED pins as output
    // setPinOutput(B0);
    // setPinOutput(B1);
    // setPinOutput(B2);
    // setPinOutput(B3);
    // setPinOutput(B4);
    // setPinOutput(F6);
    // setPinOutput(F7);
}

void keyboard_post_init_user(void) {
    // Customise these values to desired behaviour
    // debug_enable=true;
    // debug_matrix=true;
    // debug_keyboard=true;
    // debug_mouse=true;
}
