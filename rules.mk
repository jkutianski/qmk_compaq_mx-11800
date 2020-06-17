# MCU name
MCU = at90usb1286

# Bootloader selection
BOOTLOADER = halfkay

# Processor frequency.
#     This will define a symbol, F_CPU, in all source code files equal to the
#     processor frequency in Hz. You can then use this symbol in your source code to
#     calculate timings. Do NOT tack on a 'UL' at the end, this will be done
#     automatically to create a 32-bit value in your source code.
#
#     This will be an integer division of F_USB below, as it is sourced by
#     F_USB after it has run through any CPU prescalers. Note that this value
#     does not *change* the processor frequency - it should merely be updated to
#     reflect the processor speed set externally so that the code can use accurate
#     software delays.
F_CPU = 16000000

#
# LUFA specific
#
# Target architecture (see library "Board Types" documentation).
ARCH = AVR8

# Input clock frequency.
#     This will define a symbol, F_USB, in all source code files equal to the
#     input clock frequency (before any prescaling is performed) in Hz. This value may
#     differ from F_CPU if prescaling is used on the latter, and is required as the
#     raw input clock is fed directly to the PLL sections of the AVR for high speed
#     clock generation for the USB and other AVR subsections. Do NOT tack on a 'UL'
#     at the end, this will be done automatically to create a 32-bit value in your
#     source code.
#
#     If no clock division is performed on the input clock inside the AVR (via the
#     CPU clock adjust registers or the clock division fuses), this will be equal to F_CPU.
F_USB = $(F_CPU)

# Interrupt driven control endpoint task(+60)
OPT_DEFS += -DINTERRUPT_CONTROL_ENDPOINT

# Build Options
#   change to "no" to disable the options, or define them in the Makefile in
#   the appropriate keymap folder that will get included automatically
#
BOOTMAGIC_ENABLE = lite		# Virtual DIP switch configuration
MOUSEKEY_ENABLE = no		# Mouse keys
EXTRAKEY_ENABLE = yes		# Audio control and System control
CONSOLE_ENABLE = yes		# Console for debug
COMMAND_ENABLE = no			# Commands for debug and configuration
NKRO_ENABLE = no			# Nkey Rollover - if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
BACKLIGHT_ENABLE = no		# Enable keyboard backlight functionality
MIDI_ENABLE = no			# MIDI controls
AUDIO_ENABLE = no			# Audio output on port C6
UNICODE_ENABLE = no			# Unicode
BLUETOOTH_ENABLE = no		# Enable Bluetooth with the Adafruit EZ-Key HID
RGBLIGHT_ENABLE = no		# Enable WS2812 RGB underlight.

# Do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE
SLEEP_LED_ENABLE = no		# Breathing sleep LED during USB suspend

# PS2 Trackball
PS2_MOUSE_ENABLE = yes	# Ports used D2 & D5
PS2_USE_USART = yes
# PS2_USE_INT = yes

# Firmware format
FIRMWARE_FORMAT = hex

# Optimization
LTO_ENABLE = yes

# AUDIO_ENABLE = yes

# Serial number from command line
OPT_DEFS += -DSERIAL_NUMBER=$(SERIAL_NUMBER)

# Added ACTION_TAP_DANCE_SHIFTED
SRC +=  ../../tap_dance.c

# Added HW Serial Number on AVR
# SRC +=  ../../avr_serial_number.c

# Set development
OPT_DEFS += -DDEVELOPMENT=$(devel)
