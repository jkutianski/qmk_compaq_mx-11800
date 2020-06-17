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
#pragma once

#include <avr/boot.h>
#include <stdio.h>

#define SIGRD 5
#define __BOOT_SIGROW_READ (_BV(__SPM_ENABLE) | _BV(SIGRD))

// clang-format off
#define boot_signature_byte_get(addr) \
(__extension__({                      \
      uint8_t __result;                         \
      __asm__ __volatile__                      \
      (                                         \
        "sts %1, %2\n\t"                        \
        "lpm %0, Z" "\n\t"                      \
        : "=r" (__result)                       \
        : "i" (_SFR_MEM_ADDR(__SPM_REG)),       \
          "r" ((uint8_t)(__BOOT_SIGROW_READ)),  \
          "z" ((uint16_t)(addr))                \
      );                                        \
      __result;                                 \
}))
// clang-format on

/* Read the serial number form signature row */
void read_serial_number(char sn[21]);
