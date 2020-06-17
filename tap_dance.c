/*
Copyright 2020 Juan Pablo Kutianski <jkutianski@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include "tap_dance.h"

#ifdef TAP_DANCE_ENABLE
void qk_tap_dance_shifted_register(qk_tap_dance_state_t *state, void *user_data) {
    uint16_t kc = (uint16_t)user_data;
    if (state->count == 1) {
        register_code(kc);
    } else {
        register_code(KC_RSFT);
        register_code(kc);
    }
}

void qk_tap_dance_shifted_unregister(qk_tap_dance_state_t *state, void *user_data) {
    uint16_t kc = (uint16_t)user_data;
    if (state->count == 1) {
        unregister_code(kc);
    } else {
        unregister_code(KC_RSFT);
        unregister_code(kc);
    }
}
#endif
