/*
Copyright 2020 Richard Sutherland

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID 0xFEED
#define PRODUCT_ID 0xC2F0
#define DEVICE_VER 0x0001
#define MANUFACTURER Richard Sutherland
#define PRODUCT ABall
#define DESCRIPTION Buttonless trackball designed for use with a keyboard

/* key matrix size */
#define MATRIX_ROWS 1
#define MATRIX_COLS 3

/* Keyboard Matrix Assignments */
#define DIRECT_PINS { { D1, D0, D4 } }

/* Much more so than a keyboard, speed matters for a mouse. So we'll go for as high
   a polling rate as possible. */
#define USB_POLLING_INTERVAL_MS 1
#define USB_MAX_POWER_CONSUMPTION 100

#define SCROLL_DIVIDER 120

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT
