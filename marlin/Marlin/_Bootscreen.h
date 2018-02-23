/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Custom Bitmap for splashscreen
 *
 * You may use one of the following tools to generate the C++ bitmap array from
 * a black and white image:
 *
 *  - http://www.marlinfw.org/tools/u8glib/converter.html
 *  - http://www.digole.com/tools/PicturetoC_Hex_converter.php
 */
#include <avr/pgmspace.h>

#define CUSTOM_BOOTSCREEN_TIMEOUT   2500
#define CUSTOM_BOOTSCREEN_BMPWIDTH  60
#define CUSTOM_BOOTSCREEN_BMPHEIGHT 64

const unsigned char custom_start_bmp[574] PROGMEM = {
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0xc, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0xc, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x12, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x23, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x21, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x4c, 0x80, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x5e, 0x80, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x92, 0x40, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0xa1, 0x40, 0x0, 0x0, 0x0,
0x0, 0x0, 0x1, 0x21, 0x20, 0x0, 0x0, 0x0,
0x0, 0x0, 0x2, 0x7f, 0x90, 0x0, 0x0, 0x0,
0x0, 0x0, 0x2, 0x0, 0x10, 0x0, 0x0, 0x0,
0x0, 0x0, 0x7, 0xff, 0xf8, 0x0, 0x0, 0x0,
0x0, 0x0, 0x4, 0x0, 0x8, 0x0, 0x0, 0x0,
0x0, 0x0, 0x8, 0x0, 0x4, 0x0, 0x0, 0x0,
0x0, 0x0, 0x8, 0x0, 0x6, 0x0, 0x0, 0x0,
0x0, 0x0, 0x10, 0x0, 0x2, 0x0, 0x0, 0x0,
0x0, 0x0, 0x30, 0x1e, 0x1, 0x0, 0x0, 0x0,
0x0, 0x0, 0x20, 0x7f, 0x81, 0x0, 0x0, 0x0,
0x0, 0x0, 0x41, 0xff, 0xe0, 0x80, 0x0, 0x0,
0x0, 0x0, 0x43, 0xfc, 0xf0, 0x80, 0x0, 0x0,
0x0, 0x0, 0x87, 0x3b, 0x78, 0x40, 0x0, 0x0,
0x0, 0x1, 0x8e, 0xdb, 0xfc, 0x60, 0x0, 0x0,
0x0, 0x1, 0xf, 0xeb, 0xcc, 0x20, 0x0, 0x0,
0x0, 0x2, 0x1f, 0xed, 0xb6, 0x10, 0x0, 0x0,
0x0, 0x2, 0x1f, 0xde, 0xb6, 0x10, 0x0, 0x0,
0x0, 0x4, 0x39, 0xcd, 0x7f, 0x8, 0x0, 0x0,
0x0, 0x4, 0x36, 0xe0, 0xff, 0x8, 0x0, 0x0,
0x0, 0x8, 0x7e, 0xc0, 0xbb, 0x84, 0x0, 0x0,
0x0, 0x18, 0x7f, 0x0, 0x5d, 0x86, 0x0, 0x0,
0x0, 0x10, 0x7f, 0xc0, 0xed, 0x82, 0x0, 0x0,
0x0, 0x20, 0x3c, 0xc0, 0x73, 0x1, 0x0, 0x0,
0x0, 0x20, 0x3b, 0x33, 0x7f, 0x1, 0x0, 0x0,
0x0, 0x70, 0x1b, 0xe7, 0x7e, 0x3, 0x80, 0x0,
0x0, 0xc8, 0x1d, 0xee, 0xde, 0x4, 0xc0, 0x0,
0x0, 0x88, 0xf, 0xde, 0xdc, 0x4, 0x40, 0x0,
0x1, 0x24, 0xf, 0xdf, 0x3c, 0x9, 0x20, 0x0,
0x1, 0x26, 0x7, 0xdb, 0xf8, 0x19, 0x20, 0x0,
0x2, 0x72, 0x3, 0xe7, 0xf0, 0x13, 0x90, 0x0,
0x2, 0x51, 0x1, 0xff, 0xe0, 0x22, 0x90, 0x0,
0x4, 0x89, 0x0, 0x7f, 0x80, 0x24, 0x48, 0x0,
0x9, 0x4, 0x80, 0x1e, 0x0, 0x48, 0x24, 0x0,
0xb, 0xfe, 0x40, 0x0, 0x0, 0xdf, 0xf4, 0x0,
0x10, 0x0, 0x40, 0x0, 0x0, 0x80, 0x2, 0x0,
0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x10, 0x22, 0x10, 0x3c, 0x3c, 0xe, 0x1f, 0x0,
0x10, 0x22, 0x10, 0x4, 0x22, 0x11, 0x4, 0x0,
0x10, 0x22, 0x10, 0x8, 0x22, 0x11, 0x4, 0x0,
0x10, 0x22, 0x10, 0x8, 0x3c, 0x11, 0x4, 0x0,
0x10, 0x22, 0x10, 0x10, 0x22, 0x11, 0x4, 0x0,
0x10, 0x22, 0x10, 0x20, 0x22, 0x11, 0x4, 0x0,
0x1e, 0x1c, 0x1e, 0x3c, 0x3c, 0xe, 0x4, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0
};
