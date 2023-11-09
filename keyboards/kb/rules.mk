# MCU name
MCU = RP2040

BOOTLOADER = rp2040ure (see library "Board Types" documentation).
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


# Build Options
#   comment out to disable the options.
#
BOOTMAGIC_ENABLE = yes	    # Virtual DIP switch configuration
MOUSEKEY_ENABLE = yes	    # Mouse keys
EXTRAKEY_ENABLE = yes	    # Audio control and System control
CONSOLE_ENABLE = no	        # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
NKRO_ENABLE = yes		    # USB Nkey Rollover
BACKLIGHT_ENABLE = no        # Enable keyboard backlight functionality
AUDIO_ENABLE = no           # Audio output

#RP2040 Options
ALLOW_WARNINGS = yes
