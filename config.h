#pragma once

#include "config_common.h"

// USB Device descriptor parameter
#define VENDOR_ID       0x049F
#define PRODUCT_ID      0x000E
#define DEVICE_VER      0x0001
#define MANUFACTURER    Compaq Computer Comporation
#define PRODUCT         COMPAQ MX-11800 USB K/B
#define DESCRIPTION     Rack Mount keyboard

// Add teensy core
#define CORE_TEENSY

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 16

/* key matrix pins */
#define MATRIX_ROW_PINS \
    { A0, A1, A2, A3, A4, A5, A6, A7 }
#define MATRIX_COL_PINS \
    { F6, F7, E0, E1, C0, C1, C2, C3, C4, C5, C6, C7, F5, F4, F3, F2 }
// LED PINS are B7, D6, D7
#define UNUSED_PINS \
    { B6, B5, B4, B4, B2, B1, B0, D0, D1, D3, D4, E7, E6, E5, E4, F1, F0 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

// Set 0 if debouncing isn't needed
#define DEBOUNCE 5

// Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap
// #define LOCKING_SUPPORT_ENABLE
// Locking resynchronize hack
#define LOCKING_RESYNC_ENABLE

// Disable RGB Backlight
#define RGB_BACKLIGHT_ENABLED 0

// Define layers count
#ifndef DYNAMIC_KEYMAP_LAYER_COUNT
#    define DYNAMIC_KEYMAP_LAYER_COUNT 12
#endif

// Define keymap macro count
#ifndef DYNAMIC_KEYMAP_MACRO_COUNT
#    define DYNAMIC_KEYMAP_MACRO_COUNT 16
#endif

// This is the default EEPROM max address to use for dynamic keymaps.
// The default is the Teensy 2.0++ EEPROM max address.
// Explicitly override it if the keyboard uses a microcontroller with
// more or less EEPROM.
#define DYNAMIC_KEYMAP_EEPROM_MAX_ADDR 4095

// Define bootmagic on ESC
#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 13

// Leds at start bootmagic
#define BOOTMAGIC_LEDSEQ_COUNT 3
#define BOOTMAGIC_LEDSEQ_STEP 200

// Layer led blink time
#define LAYER_BLINK_TIME 200

// Applies a transformation to the movement before sending to the host (see link)
#define PS2_MOUSE_USE_2_1_SCALING

// Define a lower presition for move
#define PS2_MOUSE_X_MULTIPLIER 3
#define PS2_MOUSE_Y_MULTIPLIER 3
#define PS2_MOUSE_V_MULTIPLIER 1

// Define a higher presition on scroll
#define PS2_MOUSE_SCROLL_DIVISOR_H 3
#define PS2_MOUSE_SCROLL_DIVISOR_V 3

// Swap left/rigth mouse buttons
#define REMAP_MOUSE_BTN_LEFT (PS2_MOUSE_BTN_RIGHT)
#define REMAP_MOUSE_BTN_RIGHT (PS2_MOUSE_BTN_LEFT)

// Define Scroll button (this is the button after remap)
#define PS2_MOUSE_SCROLL_BTN_MASK (1 << PS2_MOUSE_BTN_RIGHT)

// Trackball settings
#ifdef PS2_USE_USART
#    define PS2_CLOCK_PORT PORTD
#    define PS2_CLOCK_PIN PIND
#    define PS2_CLOCK_DDR DDRD
#    define PS2_CLOCK_BIT 5
#    define PS2_DATA_PORT PORTD
#    define PS2_DATA_PIN PIND
#    define PS2_DATA_DDR DDRD
#    define PS2_DATA_BIT 2

/* synchronous, odd parity, 1-bit stop, 8-bit data, sample at falling edge */
/* set DDR of CLOCK as input to be slave */
#    define PS2_USART_INIT()                                                                         \
        do {                                                                                         \
            PS2_CLOCK_DDR &= ~(1 << PS2_CLOCK_BIT);                                                  \
            PS2_DATA_DDR &= ~(1 << PS2_DATA_BIT);                                                    \
            UCSR1C = ((1 << UMSEL10) | (3 << UPM10) | (0 << USBS1) | (3 << UCSZ10) | (0 << UCPOL1)); \
            UCSR1A = 0;                                                                              \
            UBRR1H = 0;                                                                              \
            UBRR1L = 0;                                                                              \
        } while (0)
#    define PS2_USART_RX_INT_ON()                    \
        do {                                         \
            UCSR1B = ((1 << RXCIE1) | (1 << RXEN1)); \
        } while (0)
#    define PS2_USART_RX_POLL_ON() \
        do {                       \
            UCSR1B = (1 << RXEN1); \
        } while (0)
#    define PS2_USART_OFF()                           \
        do {                                          \
            UCSR1C = 0;                               \
            UCSR1B &= ~((1 << RXEN1) | (1 << TXEN1)); \
        } while (0)
#    define PS2_USART_RX_READY (UCSR1A & (1 << RXC1))
#    define PS2_USART_RX_DATA UDR1
#    define PS2_USART_ERROR (UCSR1A & ((1 << FE1) | (1 << DOR1) | (1 << UPE1)))
#    define PS2_USART_RX_VECT USART1_RX_vect
#endif

#ifdef PS2_USE_INT
#    define PS2_CLOCK_PORT PORTD
#    define PS2_CLOCK_PIN PIND
#    define PS2_CLOCK_DDR DDRD
#    define PS2_CLOCK_BIT 2
#    define PS2_DATA_PORT PORTD
#    define PS2_DATA_PIN PIND
#    define PS2_DATA_DDR DDRD
#    define PS2_DATA_BIT 5

#    define PS2_INT_INIT()                          \
        do {                                        \
            EICRA |= ((1 << ISC21) | (0 << ISC20)); \
        } while (0)
#    define PS2_INT_ON()          \
        do {                      \
            EIMSK |= (1 << INT2); \
        } while (0)
#    define PS2_INT_OFF()          \
        do {                       \
            EIMSK &= ~(1 << INT2); \
        } while (0)
#    define PS2_INT_VECT INT2_vect
#endif

// Tap Dance settings
#ifdef TAP_DANCE_ENABLE
#    define TAPPING_TERM 170
#endif

/* For production disable dubug and print */
#ifndef DEVELOPMENT
#    define NO_DEBUG
#    define NO_PRINT
#endif

// AUDIO
#define B6_AUDIO
#define STARTUP_SONG SONG(STARTUP_SOUND)
