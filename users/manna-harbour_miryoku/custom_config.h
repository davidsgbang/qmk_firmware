// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once

/**
 * Configure the global tapping term (default: 200ms).
 * If you have a lot of accidental mod activations, crank up the tapping term.
 */
#ifndef TAPPING_TERM
#    define TAPPING_TERM 500
#endif // TAPPING_TERM


// Numerals.
#define LAYOUT_LAYER_NUM                                                                        \
    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    \
    KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_F11,    KC_F12,  KC_RGUI, KC_RALT, KC_RCTL, KC_RSFT, \
    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,     KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  \
    U_NA,    U_NA,    U_NA,    _______, KC_TAB,    KC_ENT,  _______, U_NA,    U_NA,    U_NA
