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

#include QMK_KEYBOARD_H
#include <print.h>

void led_sequence_trail(int count, int wait) {
    int i;

    for (i = 0; i < count; ++i) {
        DDRD |= (1 << 6);
        PORTD &= ~(1 << 6);
        wait_ms(wait);
        DDRD |= (1 << 7);
        PORTD &= ~(1 << 7);
        wait_ms(wait);
        DDRB |= (1 << 7);
        PORTB &= ~(1 << 7);
        wait_ms(wait);
        DDRD &= ~(1 << 6);
        PORTD &= ~(1 << 6);
        wait_ms(wait);
        DDRD &= ~(1 << 7);
        PORTD &= ~(1 << 7);
        wait_ms(wait);
        DDRB &= ~(1 << 7);
        PORTB &= ~(1 << 7);
        wait_ms(wait);
    }
}

void led_init_ports(void) {
    DDRD &= ~(1 << 6);
    PORTD &= ~(1 << 6);
    DDRD &= ~(1 << 7);
    PORTD &= ~(1 << 7);
    DDRB &= ~(1 << 7);
    PORTB &= ~(1 << 7);
}

void keyboard_pre_init_kb(void) {
    // Call the keyboard pre init code.
    led_init_ports();

    keyboard_pre_init_user();
}

void keyboard_post_init_kb(void) {
    // Customise these values to desired behaviour
    // debug_enable=true;
    // debug_matrix=true;
    // debug_keyboard=true;
    // debug_mouse=true;

    // Call the keyboard post init code.
    keyboard_post_init_user();

    // Print the Product
    print("Product: " STR(PRODUCT) "\n");
#ifdef SERIAL_NUMBER
    // Print the serial number
    print("Serial number: " STR(SERIAL_NUMBER) "\n");
#endif

    dprint("Debug: Enabled\n");
}

// Set led state
void led_set_kb(uint8_t usb_led) {
    if (usb_led & (1 << USB_LED_NUM_LOCK)) {
        DDRD |= (1 << 6);
        PORTD &= ~(1 << 6);
    } else {
        DDRD &= ~(1 << 6);
        PORTD &= ~(1 << 6);
    }

    if (usb_led & (1 << USB_LED_CAPS_LOCK)) {
        DDRD |= (1 << 7);
        PORTD &= ~(1 << 7);
    } else {
        DDRD &= ~(1 << 7);
        PORTD &= ~(1 << 7);
    }

    if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {
        DDRB |= (1 << 7);
        PORTB &= ~(1 << 7);
    } else {
        DDRB &= ~(1 << 7);
        PORTB &= ~(1 << 7);
    }

    led_set_user(usb_led);
}

void bootmagic_lite(void) {
    matrix_scan();
    wait_ms(DEBOUNCE * 2);
    matrix_scan();

    if (matrix_get_row(BOOTMAGIC_LITE_ROW) & (1 << BOOTMAGIC_LITE_COLUMN)) {
        // Init Leds
        led_init_ports();

        // Wait for start
        wait_ms(200);

        // Blink lights on bootmagic.
        led_sequence_trail(BOOTMAGIC_LEDSEQ_COUNT, BOOTMAGIC_LEDSEQ_STEP);

#if defined(VIA_ENABLE)
        via_eeprom_reset();
#else
        eeconfig_disable();
#endif

        // Jump to bootloader.
        bootloader_jump();
    }
}
