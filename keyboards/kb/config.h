#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    nic
#define PRODUCT         keyboard
#define DESCRIPTION     Keyboard

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 15

#define DEBUG_MATRIX_SCAN_RATE
#define DEBUG_ACTION

/* key matrix pins */
#define MATRIX_ROW_PINS { GP24, GP23, GP20, GP6, GP7 }
#define MATRIX_COL_PINS { GP21, GP5, GP4, GP3, GP2, GP1, GP0, GP15, GP14, GP13, GP12, GP11, GP10, GP8, GP9 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

// /* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
// #define LOCKING_SUPPORT_ENABLE

// /* Locking resynchronize hack */
// #define LOCKING_RESYNC_ENABLE

// /* key combination for command */
// #define IS_COMMAND() ( \
//     keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
// )

// /* prevent stuck modifiers */
// #define PREVENT_STUCK_MODIFIERS



#endif
