/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
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
#pragma once

// R25 = 100 kOhm, beta25 = 4267 K, 4.7 kOhm pull-up
// 100k ParCan thermistor (104GT-2)
// ATC Semitec 104GT-2/104NT-4-R025H42G (Used in ParCan)
// Verified by linagee. Source: http://shop.arcol.hu/static/datasheets/thermistors.pdf
// Calculated using 4.7kohm pullup, voltage divider math, and manufacturer provided temp/resistance
const short temptable_5[][2] PROGMEM = {
  { OV(   1), 713 },
  { OV(  17), 300 }, // top rating 300C
  { OV(  20), 290 },
  { OV(  23), 280 },
  { OV(  27), 270 },
  { OV(  31), 260 },
  { OV(  37), 250 },
  { OV(  43), 240 },
  { OV(  51), 230 },
  { OV(  61), 220 },
  { OV(  73), 210 },
  { OV(  87), 200 },
  { OV( 106), 190 },
  { OV( 128), 180 },
  { OV( 155), 170 },
  { OV( 184), 160 },
  { OV( 225), 150 },
  { OV( 190), 140 },
  { OV( 230), 130 },
  { OV( 278), 120 },
  { OV( 316), 110 },
  { OV( 450), 100 },
  { OV( 550),  90 },
  { OV( 612),  80 },
  { OV( 660),  70 },
  { OV( 770),  60 },
  { OV( 821),  50 },
  { OV( 875),  40 },
  { OV( 925),  30 },
  { OV( 956),  20 },
  { OV(1000),  10 },
  { OV(1010),   0 }
};
