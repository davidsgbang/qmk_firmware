/**
 * Copyright 2022 Charly Delay <charly@codesink.dev> (@0xcharly)
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

#include "keymap.h"

enum dilemma_keymap_layers {
    LAYER_BASE = 0,
    LAYER_NAV,
    LAYER_SYM,
    LAYER_NUM,
};


#define LAYOUT_LAYER_BASE \
KC_Q,              KC_W,              KC_E,              KC_R,              KC_T,                    KC_Y,              KC_U,              KC_I,              KC_O,              KC_P,               \
LGUI_T(KC_A),      LALT_T(KC_S),      LCTL_T(KC_D),      LSFT_T(KC_F),      KC_G,                    KC_H,              LSFT_T(KC_J),      LCTL_T(KC_K),      LALT_T(KC_L),      LGUI_T(KC_QUOT),    \
KC_Z,              KC_X,              KC_C,              KC_V,              KC_B,                    KC_N,              KC_M,              KC_COMM,           KC_DOT,            KC_SLSH,\
                                      KC_ESC,            KC_SPC,            KC_TAB,                  KC_ENT,            LT(NUM,KC_BSPC),   KC_DEL

// Numerals.
#define LAYOUT_LAYER_NUM                                                                        \
    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    \
    KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_F11,    KC_F12,  KC_RGUI, KC_RALT, KC_RCTL, KC_RSFT, \
    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,     KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  \
                      U_NA,    _______, KC_TAB,    KC_ENT,  _______, U_NA

#define LAYOUT_wrapper(...) LAYOUT_split_3x5_3(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [LAYER_BASE] = LAYOUT_wrapper(LAYOUT_LAYER_BASE),
  //[LAYER_MBO] = LAYOUT_wrapper(LAYOUT_LAYER_MBO),
  //[LAYER_MEDIA] = LAYOUT_wrapper(LAYOUT_LAYER_MEDIA),
  //[LAYER_NAV] = LAYOUT_wrapper(LAYOUT_LAYER_NAV),
  //[LAYER_MOUSE] = LAYOUT_wrapper(LAYOUT_LAYER_MOUSE),
  //[LAYER_SYM] = LAYOUT_wrapper(LAYOUT_LAYER_SYM),
  [LAYER_NUM] = LAYOUT_wrapper(LAYOUT_LAYER_NUM),
  //[LAYER_FUN] = LAYOUT_wrapper(LAYOUT_LAYER_FUN),
};
