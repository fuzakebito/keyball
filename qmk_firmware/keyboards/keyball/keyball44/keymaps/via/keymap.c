/*
Copyright 2022 @Yowkees
Copyright 2022 MURAOKA Taro (aka KoRoN, @kaoriya)

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

#include QMK_KEYBOARD_H

#include "quantum.h"

// clang-format off
// Compiled defaults from keymap_cheatsheet_keyball44.pdf (Remap, English US).
// VIA loads these defaults when its EEPROM keymap is initialized or reset.
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // Base: hold Esc for navigation; hold either Enter for symbols.
  [0] = LAYOUT_universal(
    KC_TAB             , KC_Q               , KC_W               , KC_E               , KC_R               , KC_T               ,    KC_Y               , KC_U               , KC_I               , KC_O               , KC_P               , KC_MINS            ,
    LT(3, KC_ESC)      , KC_A               , KC_S               , KC_D               , KC_F               , KC_G               ,    KC_H               , KC_J               , KC_K               , KC_L               , LGUI_T(KC_SCLN)    , KC_QUOT            ,
    KC_LSFT            , KC_Z               , KC_X               , KC_C               , KC_V               , KC_B               ,    KC_N               , KC_M               , KC_COMM            , KC_DOT             , KC_SLSH            , KC_INT1            ,
    KC_LGUI            , KC_LALT            , LCTL_T(KC_INT5)    , KC_SPC             , LT(2, KC_ENT)      ,    LT(2, KC_ENT)      , RSFT_T(KC_INT4)    , KC_NO              , KC_NO              , MO(1)
  ),

  // Mouse: blank keys are disabled, thumb keys pass through.
  [1] = LAYOUT_universal(
    KC_NO              , KC_NO              , KC_NO              , KC_NO              , KC_NO              , KC_NO              ,    KC_NO              , KC_NO              , KC_NO              , KC_NO              , KC_NO              , KC_NO              ,
    KC_NO              , KC_NO              , KC_NO              , KC_NO              , KC_NO              , KC_NO              ,    KC_NO              , KC_BTN1            , KC_BTN2            , KC_BTN3            , MO(3)              , KC_NO              ,
    KC_NO              , KC_NO              , KC_NO              , KC_NO              , KC_NO              , KC_NO              ,    KC_NO              , KC_BTN4            , KC_BTN5            , KC_NO              , KC_NO              , KC_NO              ,
    _______            , _______            , _______            , _______            , _______            ,    _______            , _______            , KC_NO              , KC_NO              , _______
  ),

  // Numbers, symbols and function keys.
  [2] = LAYOUT_universal(
    KC_GRV             , KC_1               , KC_2               , KC_3               , KC_4               , KC_5               ,    KC_6               , KC_7               , KC_8               , KC_9               , KC_0               , KC_RBRC            ,
    KC_ESC             , KC_F1              , KC_F2              , KC_F3              , KC_F4              , KC_F5              ,    KC_F11             , KC_MINS            , KC_EQL             , KC_INT3            , KC_LBRC            , KC_BSLS            ,
    KC_NO              , KC_F6              , KC_F7              , KC_F8              , KC_F9              , KC_F10             ,    KC_F12             , KC_NO              , KC_COMM            , KC_DOT             , KC_SLSH            , KC_INT1            ,
    _______            , _______            , _______            , _______            , _______            ,    _______            , _______            , KC_NO              , KC_NO              , _______
  ),

  // Navigation (also enables the existing scroll mode).
  [3] = LAYOUT_universal(
    KC_NO              , KC_NO              , KC_NO              , KC_NO              , KC_NO              , KC_NO              ,    KC_NO              , KC_NO              , KC_NO              , KC_NO              , KC_NO              , KC_NO              ,
    KC_NO              , KC_HOME            , KC_END             , KC_BSPC            , KC_DEL             , KC_NO              ,    KC_LEFT            , KC_DOWN            , KC_UP              , KC_RGHT            , KC_NO              , KC_NO              ,
    KC_NO              , KC_NO              , KC_NO              , KC_NO              , KC_NO              , KC_NO              ,    KC_NO              , KC_NO              , KC_NO              , KC_NO              , KC_NO              , KC_NO              ,
    _______            , _______            , _______            , _______            , _______            ,    _______            , _______            , KC_NO              , KC_NO              , _______
  ),

  // Transparent spare layer.
  [4] = LAYOUT_universal(
    _______            , _______            , _______            , _______            , _______            , _______            ,    _______            , _______            , _______            , _______            , _______            , _______            ,
    _______            , _______            , _______            , _______            , _______            , _______            ,    _______            , _______            , _______            , _______            , _______            , _______            ,
    _______            , _______            , _______            , _______            , _______            , _______            ,    _______            , _______            , _______            , _______            , _______            , _______            ,
    _______            , _______            , _______            , _______            , _______            ,    _______            , _______            , _______            , _______            , _______
  ),

  // Transparent spare layer.
  [5] = LAYOUT_universal(
    _______            , _______            , _______            , _______            , _______            , _______            ,    _______            , _______            , _______            , _______            , _______            , _______            ,
    _______            , _______            , _______            , _______            , _______            , _______            ,    _______            , _______            , _______            , _______            , _______            , _______            ,
    _______            , _______            , _______            , _______            , _______            , _______            ,    _______            , _______            , _______            , _______            , _______            , _______            ,
    _______            , _______            , _______            , _______            , _______            ,    _______            , _______            , _______            , _______            , _______
  ),

  // Transparent spare layer.
  [6] = LAYOUT_universal(
    _______            , _______            , _______            , _______            , _______            , _______            ,    _______            , _______            , _______            , _______            , _______            , _______            ,
    _______            , _______            , _______            , _______            , _______            , _______            ,    _______            , _______            , _______            , _______            , _______            , _______            ,
    _______            , _______            , _______            , _______            , _______            , _______            ,    _______            , _______            , _______            , _______            , _______            , _______            ,
    _______            , _______            , _______            , _______            , _______            ,    _______            , _______            , _______            , _______            , _______
  ),

  // Transparent spare layer.
  [7] = LAYOUT_universal(
    _______            , _______            , _______            , _______            , _______            , _______            ,    _______            , _______            , _______            , _______            , _______            , _______            ,
    _______            , _______            , _______            , _______            , _______            , _______            ,    _______            , _______            , _______            , _______            , _______            , _______            ,
    _______            , _______            , _______            , _______            , _______            , _______            ,    _______            , _______            , _______            , _______            , _______            , _______            ,
    _______            , _______            , _______            , _______            , _______            ,    _______            , _______            , _______            , _______            , _______
  ),

};
// clang-format on

layer_state_t layer_state_set_user(layer_state_t state) {
    // Auto enable scroll mode when the highest layer is 3
    keyball_set_scroll_mode(get_highest_layer(state) == 3);
    return state;
}

#ifdef OLED_ENABLE

#    include "lib/oledkit/oledkit.h"

void oledkit_render_info_user(void) {
    keyball_oled_render_keyinfo();
    keyball_oled_render_ballinfo();
    keyball_oled_render_layerinfo();
}
#endif
