/*
Copyright 2012,2013 Jun Wako <wakojun@gmail.com>

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
#ifndef KEYMAP_COMMON_H
#define KEYMAP_COMMON_H

#include <stdint.h>
#include <stdbool.h>
#include <avr/pgmspace.h>
#include "keycode.h"
#include "action.h"
#include "action_macro.h"
#include "report.h"
#include "host.h"
#include "print.h"
#include "debug.h"
#include "keymap.h"


extern const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS];
extern const uint16_t fn_actions[];


#define KEYMAP( \
                                                                                                 K0J, \
                 K13,      K15,      K17, K18, K19, K1A, K1B, K1C, K1D, K1E, K1F, K1G, K1H, K1I,      \
                 K23,      K25,      K27, K28, K29, K2A, K2B, K2C, K2D, K2E, K2F, K2G, K2H, K2I,      \
                 K33,      K35,      K37, K38, K39, K3A, K3B, K3C, K3D, K3E, K3F, K3G, K3H, K3I,      \
                 K43,      K45,      K47, K48, K49, K4A, K4B, K4C, K4D,      K4F, K4G, K4H, K4I,      \
                 K53,      K55,      K57, K58, K59, K5A, K5B, K5C, K5D, K5E, K5F, K5G, K5H, K5I,      \
                 K63,      K65,      K67, K68, K69, K6A, K6B, K6C, K6D, K6E, K6F, K6G, K6H, K6I,      \
  K70, K71,      K73, K74, K75, K76, K77, K78, K79, K7A, K7B, K7C, K7D, K7E, K7F, K7G, K7H, K7I,      \
  K80, K81, K82, K83,      K85, K86, K87,      K89, K8A, K8B, K8C,      K8E, K8F, K8G, K8H, K8I       \
  ) { \
      {    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO, KC_##K0J },  \
      {    KC_NO,    KC_NO,    KC_NO, KC_##K13,    KC_NO, KC_##K15,    KC_NO, KC_##K17, KC_##K18, KC_##K19, KC_##K1A, KC_##K1B, KC_##K1C, KC_##K1D, KC_##K1E, KC_##K1F, KC_##K1G, KC_##K1H, KC_##K1I,    KC_NO }, \
      {    KC_NO,    KC_NO,    KC_NO, KC_##K23,    KC_NO, KC_##K25,    KC_NO, KC_##K27, KC_##K28, KC_##K29, KC_##K2A, KC_##K2B, KC_##K2C, KC_##K2D, KC_##K2E, KC_##K2F, KC_##K2G, KC_##K2H, KC_##K2I,    KC_NO }, \
      {    KC_NO,    KC_NO,    KC_NO, KC_##K33,    KC_NO, KC_##K35,    KC_NO, KC_##K37, KC_##K38, KC_##K39, KC_##K3A, KC_##K3B, KC_##K3C, KC_##K3D, KC_##K3E, KC_##K3F, KC_##K3G, KC_##K3H, KC_##K3I,    KC_NO }, \
      {    KC_NO,    KC_NO,    KC_NO, KC_##K43,    KC_NO, KC_##K45,    KC_NO, KC_##K47, KC_##K48, KC_##K49, KC_##K4A, KC_##K4B, KC_##K4C, KC_##K4D,    KC_NO, KC_##K4F, KC_##K4G, KC_##K4H, KC_##K4I,    KC_NO }, \
      {    KC_NO,    KC_NO,    KC_NO, KC_##K53,    KC_NO, KC_##K55,    KC_NO, KC_##K57, KC_##K58, KC_##K59, KC_##K5A, KC_##K5B, KC_##K5C, KC_##K5D, KC_##K5E, KC_##K5F, KC_##K5G, KC_##K5H, KC_##K5I,    KC_NO }, \
      {    KC_NO,    KC_NO,    KC_NO, KC_##K63,    KC_NO, KC_##K65,    KC_NO, KC_##K67, KC_##K68, KC_##K69, KC_##K6A, KC_##K6B, KC_##K6C, KC_##K6D, KC_##K6E, KC_##K6F, KC_##K6G, KC_##K6H, KC_##K6I,    KC_NO }, \
      { KC_##K70, KC_##K71,    KC_NO, KC_##K73, KC_##K74, KC_##K75, KC_##K76, KC_##K77, KC_##K78, KC_##K79, KC_##K7A, KC_##K7B, KC_##K7C, KC_##K7D, KC_##K7E, KC_##K7F, KC_##K7G, KC_##K7H, KC_##K7I,    KC_NO }, \
      { KC_##K80, KC_##K81, KC_##K82, KC_##K83,    KC_NO, KC_##K85, KC_##K86, KC_##K87,    KC_NO, KC_##K89, KC_##K8A, KC_##K8B, KC_##K8C,    KC_NO, KC_##K8E, KC_##K8F, KC_##K8G, KC_##K8H, KC_##K8I,    KC_NO } \
}


/* GH60 keymap definition macro
 * K2C, K31 and  K3C are extra keys for ISO
 */
/*#define KEYMAP( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, \
    K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, \
    K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, \
    K40, K41, K42,           K45,                K49, K4A, K4B, K4C, K4D  \
) { \
    { KC_##K00, KC_##K01, KC_##K02, KC_##K03, KC_##K04, KC_##K05, KC_##K06, KC_##K07, KC_##K08, KC_##K09, KC_##K0A, KC_##K0B, KC_##K0C, KC_##K0D }, \
    { KC_##K10, KC_##K11, KC_##K12, KC_##K13, KC_##K14, KC_##K15, KC_##K16, KC_##K17, KC_##K18, KC_##K19, KC_##K1A, KC_##K1B, KC_##K1C, KC_##K1D }, \
    { KC_##K20, KC_##K21, KC_##K22, KC_##K23, KC_##K24, KC_##K25, KC_##K26, KC_##K27, KC_##K28, KC_##K29, KC_##K2A, KC_##K2B, KC_##K2C, KC_##K2D }, \
    { KC_##K30, KC_##K31, KC_##K32, KC_##K33, KC_##K34, KC_##K35, KC_##K36, KC_##K37, KC_##K38, KC_##K39, KC_##K3A, KC_##K3B, KC_##K3C, KC_##K3D }, \
    { KC_##K40, KC_##K41, KC_##K42, KC_NO,    KC_NO,    KC_##K45, KC_NO,    KC_NO,    KC_NO,    KC_##K49, KC_##K4A, KC_##K4B, KC_##K4C, KC_##K4D }  \
}*/
#endif
