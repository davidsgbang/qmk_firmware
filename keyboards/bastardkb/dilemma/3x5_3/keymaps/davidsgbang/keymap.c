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
 * GNU General Public License for more detail.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "keymap.h"

enum dilemma_keymap_layers {
    LAYER_BASE = 0,
    LAYER_SYM,
    LAYER_NUM,
    LAYER_NAV
    };


#define LAYOUT_LAYER_BASE \
KC_Q,              KC_W,              KC_E,              KC_R,                  KC_T,                    KC_Y,                  KC_U,                    KC_I,              KC_O,              KC_P,               \
LSFT_T(KC_A),      LCTL_T(KC_S),      LGUI_T(KC_D),      LALT_T(KC_F),          KC_G,                    KC_H,                  LALT_T(KC_J),            LGUI_T(KC_K),      LCTL_T(KC_L),      LSFT_T(KC_SCLN),    \
KC_Z,              KC_X,              KC_C,              KC_V,                  KC_B,                    KC_N,                  KC_M,                    KC_COMM,           KC_DOT,            KC_SLSH,\
                                      KC_ESC,            LT(NAV, KC_TAB),       LT(SYM, KC_SPC),         LT(NUM,KC_ENT),        LT(NAV,KC_BSPC),        KC_DEL

// Numerals.
#define LAYOUT_LAYER_NUM                                                                        \
KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,    \
KC_LSFT,        KC_LCTL,        KC_LGUI,        KC_LALT,        KC_CAPS,        KC_QUOT,        KC_MINS,        KC_EQL,         KC_LBRC,        KC_RBRC, \
U_NA,           U_NA,           U_NA,           U_NA,           U_NA,           U_NA,           KC_BSLS,        U_NA,           U_NA,           U_NA,  \
                                U_NA,           _______,        KC_TAB,         KC_ENT,         _______,        U_NA

// SYM.
#define LAYOUT_LAYER_SYM                                                                        \
KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,    \
KC_LSFT,        KC_LCTL,        KC_LGUI,        KC_LALT,        KC_CAPS,        KC_QUOT,        KC_MINS,        KC_EQL,         KC_LBRC,        KC_RBRC, \
U_NA,           U_NA,           U_NA,           U_NA,           U_NA,           U_NA,           KC_BSLS,        U_NA,           U_NA,           U_NA,  \
                                U_NA,           _______,        KC_TAB,         KC_ENT,         _______,        U_NA

// NAV.
#define LAYOUT_LAYER_NAV                                                                        \
KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,    \
KC_LSFT,        KC_LCTL,        KC_LGUI,        KC_LALT,        KC_CAPS,        KC_QUOT,        KC_MINS,        KC_EQL,         KC_LBRC,        KC_RBRC, \
U_NA,           U_NA,           U_NA,           U_NA,           U_NA,           U_NA,           KC_BSLS,        U_NA,           U_NA,           U_NA,  \
                                U_NA,           _______,        KC_TAB,         KC_ENT,         _______,        U_NA


#define LAYOUT_wrapper(...) LAYOUT_split_3x5_3(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [LAYER_BASE] = LAYOUT_wrapper(LAYOUT_LAYER_BASE),
  [LAYER_SYM] = LAYOUT_wrapper(LAYOUT_LAYER_SYM),
  [LAYER_NUM] = LAYOUT_wrapper(LAYOUT_LAYER_NUM),
  [LAYER_NAV] = LAYOUT_wrapper(LAYOUT_LAYER_NAV),
  //[LAYER_MBO] = LAYOUT_wrapper(LAYOUT_LAYER_MBO),
  //[LAYER_MEDIA] = LAYOUT_wrapper(LAYOUT_LAYER_MEDIA),
  //[LAYER_MOUSE] = LAYOUT_wrapper(LAYOUT_LAYER_MOUSE),
  //[LAYER_FUN] = LAYOUT_wrapper(LAYOUT_LAYER_FUN),
};

#ifdef ENCODER_MAP_ENABLE
// clang-format off
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [LAYER_BASE]       = {ENCODER_CCW_CW(KC_WH_U, KC_WH_D), ENCODER_CCW_CW(KC_VOLU, KC_VOLD)},
    [LAYER_SYM]      = {ENCODER_CCW_CW(KC_UP, KC_DOWN), ENCODER_CCW_CW(KC_LEFT, KC_RGHT)},
    [LAYER_NUM]      = {ENCODER_CCW_CW(KC_PGUP, KC_PGDN), ENCODER_CCW_CW(KC_VOLU, KC_VOLD)},
    [LAYER_NAV]    = {ENCODER_CCW_CW(RGB_HUD, RGB_HUI), ENCODER_CCW_CW(RGB_SAD, RGB_SAI)},
};
// clang-format on
#endif // ENCODER_MAP_ENABLE
