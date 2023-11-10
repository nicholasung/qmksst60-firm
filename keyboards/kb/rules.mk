# MCU name
MCU = RP2040
BOOTLOADER = rp2040
FIRMWARE_FORMAT = uf2
# SRC += analog.c

#User Options
LAYOUTS = default #its tsangan or ansi with split mods

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
