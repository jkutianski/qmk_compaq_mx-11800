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

#pragma once

#include "quantum.h"
#include "via.h"
#ifdef TAP_DANCE_ENABLE
#    include "tap_dance.h"
#endif

// clang-format off
#define LAYOUT( \
    K0D,      K30, K3E, K5E, K0E, K08, K09,   K34, K36, K33, K27,    K16,           K15, K14, K13, K73,   \
              K5B, K3B, K38, K28, K25, K24,   K35, K26, K23, K47,                   K45, K44, K43, K46,   \
                                                                                    K55, K54, K53,        \
    K3D, K2D, K20, K2E, K2F, K3F, K3C, K2C, K29, K2B, K2A, K3A, K39, K58,           K65, K64, K63, K66,   \
    K5D,   K4D, K40, K4E, K4F, K5F, K5C, K4C, K49, K4B, K4A, K5A, K59, K68,         K04,      K03,        \
    K50,    K6D, K60, K6E, K6F, K0F, K0C, K6C, K69, K6B, K6A, K0A, K18,                                   \
    K52,       K1D, K10, K1E, K1F, K7F, K7C, K1C, K19, K1B, K7A, K12,       K06,                          \
    K31,   K07,                  K78,                 K77,   K11,      K76, K75, K74                      \
) { \
    { KC_NO, KC_NO, KC_NO, K03,   K04,   KC_NO, K06,   K07,   K08,   K09,   K0A,   KC_NO, K0C,   K0D,   K0E,   K0F }, \
    { K10,   K11,   K12,   K13,   K14,   K15,   K16,   KC_NO, K18,   K19,   KC_NO, K1B,   K1C,   K1D,   K1E,   K1F }, \
    { K20,   KC_NO, KC_NO, K23,   K24,   K25,   K26,   K27,   K28,   K29,   K2A,   K2B,   K2C,   K2D,   K2E,   K2F }, \
    { K30,   K31,   KC_NO, K33,   K34,   K35,   K36,   KC_NO, K38,   K39,   K3A,   K3B,   K3C,   K3D,   K3E,   K3F }, \
    { K40,   KC_NO, KC_NO, K43,   K44,   K45,   K46,   K47,   KC_NO, K49,   K4A,   K4B,   K4C,   K4D,   K4E,   K4F }, \
    { K50,   KC_NO, K52,   K53,   K54,   K55,   KC_NO, KC_NO, K58,   K59,   K5A,   K5B,   K5C,   K5D,   K5E,   K5F }, \
    { K60,   KC_NO, KC_NO, K63,   K64,   K65,   K66,   KC_NO, K68,   K69,   K6A,   K6B,   K6C,   K6D,   K6E,   K6F }, \
    { KC_NO, KC_NO, KC_NO, K73,   K74,   K75,   K76,   K77,   K78,   KC_NO, K7A,   KC_NO, K7C,   KC_NO, KC_NO, K7F } \
}
// clang-format on
