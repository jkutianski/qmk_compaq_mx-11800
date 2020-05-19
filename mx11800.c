#include "mx11800.h"

void led_sequence_trail(int count, int wait) {
    int i;

    for (i = 0; i < count; ++i) {
        DDRD |= (1 << 6); PORTD &= ~(1 << 6);
        wait_ms(wait);
        DDRD |= (1 << 7); PORTD &= ~(1 << 7);
        wait_ms(wait);
        DDRB |= (1 << 7); PORTB &= ~(1 << 7);
        wait_ms(wait);
        DDRD &= ~(1 << 6); PORTD &= ~(1 << 6);
        wait_ms(wait);
        DDRD &= ~(1 << 7); PORTD &= ~(1 << 7);
        wait_ms(wait);
        DDRB &= ~(1 << 7); PORTB &= ~(1 << 7);
        wait_ms(wait);
    }
}

void led_init_ports(void) {
    DDRD &= ~(1 << 6); PORTD &= ~(1 << 6);
    DDRD &= ~(1 << 7); PORTD &= ~(1 << 7);
    DDRB &= ~(1 << 7); PORTB &= ~(1 << 7);
}

void keyboard_pre_init_user(void) {
    // Call the keyboard pre init code.
    led_init_ports();
}

// Set led state
void led_set_user(uint8_t usb_led) {
    if (usb_led & (1 << USB_LED_NUM_LOCK)) {
        DDRD |= (1 << 6); PORTD &= ~(1 << 6);
    } else {
        DDRD &= ~(1 << 6); PORTD &= ~(1 << 6);
    }

    if (usb_led & (1 << USB_LED_CAPS_LOCK)) {
        DDRD |= (1 << 7); PORTD &= ~(1 << 7);
    } else {
        DDRD &= ~(1 << 7); PORTD &= ~(1 << 7);
    }

    if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {
        DDRB |= (1 << 7); PORTB &= ~(1 << 7);
    } else {
        DDRB &= ~(1 << 7); PORTB &= ~(1 << 7);
    }
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
        led_sequence_trail(BOOTMAGIC_BLINK, BOOTMAGIC_BLINK_WAIT);

        // Jump to bootloader.
        bootloader_jump();
    }
}

