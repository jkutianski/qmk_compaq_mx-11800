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

#include "avr_serial_number.h"

void read_serial_number(char sn[21]) {
    uint8_t sr[10] = {0};
    sr[0]          = boot_signature_byte_get(0x000E);
    sr[1]          = boot_signature_byte_get(0x000F);
    sr[2]          = boot_signature_byte_get(0x0010);
    sr[3]          = boot_signature_byte_get(0x0011);
    sr[4]          = boot_signature_byte_get(0x0012);
    sr[5]          = boot_signature_byte_get(0x0013);
    sr[6]          = boot_signature_byte_get(0x0014);
    sr[7]          = boot_signature_byte_get(0x0015);
    sr[8]          = boot_signature_byte_get(0x0016);
    sr[9]          = boot_signature_byte_get(0x0017);

    snprintf(sn, 21, "%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X", sr[0], sr[1], sr[2], sr[3], sr[4], sr[5], sr[6], sr[7], sr[8], sr[9]);
}
