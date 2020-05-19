#include QMK_KEYBOARD_H
#include <print.h>

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	// Default layer
	[0] = LAYOUT_all(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_PDOT, KC_P0, KC_TRNS, KC_UP, KC_LALT, KC_F5, KC_F6, KC_QUOT, KC_TRNS, KC_H, KC_ESC, KC_F4, KC_G,
        KC_X, KC_RCTL, KC_RSFT, KC_PAST, KC_PSLS, KC_NLCK, KC_PAUS, KC_TRNS, KC_ENT, KC_COMM, KC_TRNS, KC_DOT, KC_M, KC_Z, KC_C, KC_V,
        KC_2, KC_TRNS, KC_TRNS, KC_PGDN, KC_F12, KC_F11, KC_END, KC_PSCR, KC_F10, KC_8, KC_0, KC_9, KC_7, KC_1, KC_3, KC_4,
        KC_F1, KC_LCTL, KC_TRNS, KC_PGUP, KC_INS, KC_DEL, KC_HOME, KC_TRNS, KC_F9, KC_EQL, KC_MINS, KC_F8, KC_6, KC_GRV, KC_F2, KC_5,
        KC_W, KC_TRNS, KC_TRNS, KC_P9, KC_P8, KC_P7, KC_PPLS, KC_SLCK, KC_TRNS, KC_I, KC_P, KC_O, KC_U, KC_Q, KC_E, KC_R,
        KC_CAPS, KC_TRNS, KC_LSFT, KC_P6, KC_P5, KC_P4, KC_TRNS, KC_TRNS, KC_BSPC, KC_RBRC, KC_LBRC, KC_F7, KC_Y, KC_TAB, KC_F3, KC_T,
        KC_S, KC_TRNS, KC_TRNS, KC_P3, KC_P2, KC_P1, KC_PENT, KC_TRNS, KC_BSLS, KC_K, KC_SCLN, KC_L, KC_J, KC_A, KC_D, KC_F,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_PMNS, KC_RGHT, KC_DOWN, KC_LEFT, KC_RALT, KC_SPC, KC_TRNS, KC_SLSH, KC_TRNS, KC_N, KC_TRNS, KC_TRNS, KC_B),

	// Fn1 Layer
	[1] = LAYOUT_all(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

	// Fn2 Layer
	[2] = LAYOUT_all(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),


	// Fn3 Layer
	[3] = LAYOUT_all(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

};

void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  debug_enable=true;
  // debug_matrix=true;
  // debug_keyboard=true;
  // debug_mouse=true;
}

#define LAYER_BLINK_TIME 200

static uint16_t led_timer;
bool led_layer_state = 0;

// Runs constantly in the background, in a loop.
void matrix_scan_user(void) {
    uint8_t layer = biton32(layer_state);
    uint8_t usb_led = host_keyboard_leds();

    if (timer_elapsed(led_timer) > LAYER_BLINK_TIME) {
        switch (layer) {
            case 0:
                led_set_user(usb_led);
                led_layer_state = 0;
                break;
            case 1:
                if (!led_layer_state) {
                    DDRD &= ~(1 << 6); PORTD &= ~(1 << 6);
                } else {
                    DDRD |= (1 << 6); PORTD &= ~(1 << 6);
                }

                DDRD &= ~(1 << 7); PORTD &= ~(1 << 7);
                DDRB &= ~(1 << 7); PORTB &= ~(1 << 7);

                led_layer_state = !led_layer_state;
                break;
            case 2:
                DDRD &= ~(1 << 6); PORTD &= ~(1 << 6);

                if (!led_layer_state) {
                    DDRD &= ~(1 << 7); PORTD &= ~(1 << 7);
                } else {
                    DDRD |= (1 << 7); PORTD &= ~(1 << 7);
                }

                DDRB &= ~(1 << 7); PORTB &= ~(1 << 7);

                led_layer_state = !led_layer_state;
                break;
            case 3:
                DDRD &= ~(1 << 6); PORTD &= ~(1 << 6);
                DDRD &= ~(1 << 7); PORTD &= ~(1 << 7);

                if (!led_layer_state) {
                    DDRB &= ~(1 << 7); PORTB &= ~(1 << 7);
                } else {
                    DDRB |= (1 << 7); PORTB &= ~(1 << 7);
                }

                led_layer_state = !led_layer_state;
                break;
        }

        led_timer = timer_read();
    }
};
