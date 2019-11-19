/* Copyright 2019 fukayatsu
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */

#define ___ KC_NO
#define LAYOUT( \
    L00, L01, L02, L03, L04, L05,    R00, R01, R02, R03, R04, R05, \
    L10, L11, L12, L13, L14, L15,    R10, R11, R12, R13, R14, R15, \
    L20, L21, L22, L23, L24, L25,    R20, R21, R22, R23, R24, R25, \
              L32, L33,                        R32, R33,           \
                   L43, L44, L45,    R40, R41, R42,                \
                   L53, L54, L55,    R50, R51, R52                 \
) { \
    { L00, L01, L02, L03, L04, L05 }, \
    { L10, L11, L12, L13, L14, L15 }, \
    { L20, L21, L22, L23, L24, L25 }, \
    { ___, ___, L32, L33, ___, ___ }, \
    { ___, ___, ___, L43, L44, L45 }, \
    { ___, ___, ___, L53, L54, L55 }, \
    { R00, R01, R02, R03, R04, R05 }, \
    { R10, R11, R12, R13, R14, R15 }, \
    { R20, R21, R22, R23, R24, R25 }, \
    { ___, ___, R32, R33, ___, ___ }, \
    { R40, R41, R42, ___, ___, ___ }, \
    { R50, R51, R52, ___, ___, ___ }  \
}
