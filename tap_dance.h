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
#include "quantum.h"

#ifdef TAP_DANCE_ENABLE
#    define ACTION_TAP_DANCE_SHIFTED(kc) \
        { .fn = {NULL, qk_tap_dance_shifted_register, qk_tap_dance_shifted_unregister}, .user_data = (void *)((uint16_t)kc), }

void qk_tap_dance_shifted_register(qk_tap_dance_state_t *state, void *user_data);
void qk_tap_dance_shifted_unregister(qk_tap_dance_state_t *state, void *user_data);
#endif
