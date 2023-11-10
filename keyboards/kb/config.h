#ifndef CONFIG_H
#define CONFIG_H
// #include "analog.h"
#pragma once


/* USB Device descriptor parameter */
// #define VENDOR_ID       0x0827
// #define PRODUCT_ID      0x0001
// #define DEVICE_VER      0x0001
// #define MANUFACTURER    ojthetiny_revisedbyNicholasUng
// #define PRODUCT         sst60he

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 15

#define DEBUG_MATRIX_SCAN_RATE
#define DEBUG_ACTION

/* key matrix pins */
#define MATRIX_ROW_PINS { GP24, GP23, GP20, GP6, GP7 }
#define MATRIX_COL_PINS { GP21, GP5, GP4, GP3, GP2, GP1, GP0, GP15, GP14, GP13, GP12, GP11, GP10, GP8, GP9 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

#endif
