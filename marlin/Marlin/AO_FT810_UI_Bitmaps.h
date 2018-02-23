/***************************
 * AO_FT810_Menu_Bitmaps.h *
 ***************************/

/****************************************************************************
 *   Written By Mark Pelletier 2017 - Aleph Objects, Inc.                   *
 *                                                                          *
 *   This program is free software: you can redistribute it and/or modify   *
 *   it under the terms of the GNU General Public License as published by   *
 *   the Free Software Foundation, either version 3 of the License, or      *
 *   (at your option) any later version.                                    *
 *                                                                          *
 *   This program is distributed in the hope that it will be useful,        *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of         *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the          *
 *   GNU General Public License for more details.                           *
 *                                                                          *
 *   To view a copy of the GNU General Public License, go to the following  *
 *   location: <http://www.gnu.org/licenses/>.                              *
 ****************************************************************************/

// L1 Font Data for Widgets

const PROGMEM CLCD::bitmap_info_t Extruder_Icon_Info = {
  .format     = L1,
  .linestride = 3,
  .filter     = BILINEAR,
  .wrapx      = BORDER,
  .wrapy      = BORDER,
  .RAMG_addr  = RAM_G + 8000,
  .width      = 24,
  .height     = 23,
};

const PROGMEM unsigned char Extruder_Icon[] =   {0x3F, 0xFF, 0xFC,
                                                   0x7F, 0xFF, 0xFE,
                                                   0xC0, 0x00, 0x03,
                                                   0xC0, 0x00, 0x03,
                                                   0xC0, 0x00, 0x03,
                                                   0xC0, 0x00, 0x03,
                                                   0x7F, 0xFF, 0xFE,
                                                   0x3F, 0xFF, 0xFC,
                                                   0x3F, 0xFF, 0xFC,
                                                   0x7F, 0xFF, 0xFE,
                                                   0xC0, 0x00, 0x03,
                                                   0xC0, 0x00, 0x03,
                                                   0xC0, 0x00, 0x03,
                                                   0xC0, 0x00, 0x03,
                                                   0x7F, 0xFF, 0xFE,
                                                   0x7F, 0xFF, 0xFE,
                                                   0x07, 0xFF, 0xE0,
                                                   0x03, 0xFF, 0xC0,
                                                   0x01, 0x81, 0x80,
                                                   0x00, 0xC3, 0x00,
                                                   0x00, 0x66, 0x00,
                                                   0x00, 0x3C, 0x00,
                                                   0x00, 0x3C, 0x00};

const PROGMEM CLCD::bitmap_info_t Bed_Heat_Icon_Info = {
  .format     = L1,
  .linestride = 4,
  .filter     = BILINEAR,
  .wrapx      = BORDER,
  .wrapy      = BORDER,
  .RAMG_addr  = RAM_G + 8100,
  .width      = 32,
  .height     = 23,
};

const PROGMEM unsigned char Bed_Heat_Icon[] = {0x01, 0x81, 0x81, 0x80,
                                                   0x01, 0x81, 0x81, 0x80,
                                                   0x00, 0xC0, 0xC0, 0xC0,
                                                   0x00, 0xC0, 0xC0, 0xC0,
                                                   0x00, 0x60, 0x60, 0x60,
                                                   0x00, 0x60, 0x60, 0x60,
                                                   0x00, 0xC0, 0xC0, 0xC0,
                                                   0x00, 0xC0, 0xC0, 0xC0,
                                                   0x01, 0x81, 0x81, 0x80,
                                                   0x01, 0x81, 0x81, 0x80,
                                                   0x03, 0x03, 0x03, 0x00,
                                                   0x03, 0x03, 0x03, 0x00,
                                                   0x06, 0x06, 0x06, 0x00,
                                                   0x06, 0x06, 0x06, 0x00,
                                                   0x03, 0x03, 0x03, 0x00,
                                                   0x03, 0x03, 0x03, 0x00,
                                                   0x01, 0x81, 0x81, 0x80,
                                                   0x01, 0x81, 0x81, 0x80,
                                                   0x00, 0x00, 0x00, 0x00,
                                                   0xFF, 0xFF, 0xFF, 0xFF,
                                                   0xFF, 0xFF, 0xFF, 0xFF,
                                                   0xC0, 0x00, 0x00, 0x03,
                                                   0xFF, 0xFF, 0xFF, 0xFF};

const PROGMEM CLCD::bitmap_info_t Fan_Icon_Info = {
  .format     = L1,
  .linestride = 4,
  .filter     = BILINEAR,
  .wrapx      = BORDER,
  .wrapy      = BORDER,
  .RAMG_addr  = RAM_G + 8300,
  .width      = 32,
  .height     = 32,
};

const PROGMEM unsigned char Fan_Icon[] =     {0xFF, 0xFF, 0xFF, 0xFF,
                                                   0xFF, 0xFF, 0xFF, 0xFF,
                                                   0xF8, 0x00, 0x00, 0x1F,
                                                   0xF0, 0x03, 0xF8, 0x0F,
                                                   0xE0, 0x07, 0xF0, 0x07,
                                                   0xC0, 0x0F, 0xE0, 0x03,
                                                   0xC0, 0x1F, 0xE0, 0x03,
                                                   0xC0, 0x1F, 0xE0, 0x03,
                                                   0xC0, 0x0F, 0xE0, 0x03,
                                                   0xC0, 0x07, 0xE0, 0x03,
                                                   0xC0, 0x03, 0xC0, 0x03,
                                                   0xD0, 0x00, 0x00, 0xC3,
                                                   0xD8, 0x03, 0xC1, 0xE3,
                                                   0xDF, 0xC7, 0xE3, 0xF3,
                                                   0xDF, 0xEF, 0xF7, 0xFB,
                                                   0xDF, 0xEF, 0xF7, 0xFB,
                                                   0xDF, 0xEF, 0xF7, 0xFB,
                                                   0xDF, 0xEF, 0xF7, 0xFB,
                                                   0xCF, 0xC7, 0xE3, 0xFB,
                                                   0xC7, 0x83, 0xC0, 0x1B,
                                                   0xC3, 0x00, 0x00, 0x0B,
                                                   0xC0, 0x03, 0xC0, 0x03,
                                                   0xC0, 0x07, 0xE0, 0x03,
                                                   0xC0, 0x07, 0xF0, 0x03,
                                                   0xC0, 0x07, 0xF8, 0x03,
                                                   0xC0, 0x07, 0xF8, 0x03,
                                                   0xC0, 0x07, 0xF0, 0x03,
                                                   0xE0, 0x0F, 0xE0, 0x07,
                                                   0xF0, 0x1F, 0xC0, 0x0F,
                                                   0xF8, 0x00, 0x00, 0x1F,
                                                   0xFF, 0xFF, 0xFF, 0xFF,
                                                   0xFF, 0xFF, 0xFF, 0xFF};


const PROGMEM CLCD::bitmap_info_t TD_Icon_Info = {
  .format     = L1,
  .linestride = 7,
  .filter     = BILINEAR,
  .wrapx      = BORDER,
  .wrapy      = BORDER,
  .RAMG_addr  = RAM_G + 9000,
  .width      = 50,
  .height     = 20,
};

const PROGMEM unsigned char TD_Icon[] =    {0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xFC, 0x00,                    // Thumb Drive Widget
                                              0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0x00,
                                              0x00, 0x60, 0x00, 0x00, 0x00, 0x03, 0x80,
                                              0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0xC0,
                                              0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0xC0,
                                              0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0xC0,
                                              0xC0, 0x60, 0x00, 0x00, 0x00, 0x00, 0xC0,
                                              0xC0, 0x60, 0x00, 0x00, 0x00, 0x00, 0xC0,
                                              0xC0, 0x60, 0x00, 0x00, 0x00, 0x00, 0xC0,
                                              0xC0, 0x60, 0x00, 0x00, 0x00, 0x00, 0xC0,
                                              0xC0, 0x60, 0x00, 0x00, 0x00, 0x00, 0xC0,
                                              0xC0, 0x60, 0x00, 0x00, 0x00, 0x00, 0xC0,
                                              0xC0, 0x60, 0x00, 0x00, 0x00, 0x00, 0xC0,
                                              0xC0, 0x60, 0x00, 0x00, 0x00, 0x00, 0xC0,
                                              0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0xC0,
                                              0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0xC0,
                                              0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0xC0,
                                              0x00, 0x60, 0x00, 0x00, 0x00, 0x03, 0x80,
                                              0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0x00,
                                              0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xFC, 0x00};
