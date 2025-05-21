/* Copyright 2022 Patrick Elmquist
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

#include "pket.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_COLEMAK] = LAYOUT_wrapper_eg(
      ________________COLEMAK_L1_5_______________,     ________________COLEMAK_R1_5_______________,
      ________________COLEMAK_L2_5_______________,     ________________COLEMAK_R2_5_______________,
      ________________COLEMAK_L3_5_______________,     ________________COLEMAK_R3_5_______________,
      KC_LSFT,                   ___THUMB_LEFT___,     NAV_BSP, RAI_ENT,                   KC_RSFT
    ),

    [_GALLIUM] = LAYOUT_wrapper_eg(
      ________________GALLIUM_L1_5_______________,     ________________GALLIUM_R1_5_______________,
      ________________GALLIUM_L2_5_______________,     ________________GALLIUM_R2_5_______________,
      ________________GALLIUM_L3_5_______________,     ________________GALLIUM_R3_5_______________,
      KC_LSFT,                   ___THUMB_LEFT___,     NAV_BSP, RAI_ENT,                   KC_RSFT
    ),

    [_GALLIUM_V2] = LAYOUT_wrapper_eg(
      ________________GALLIUM_V2_L1_5____________,     ________________GALLIUM_V2_R1_5____________,
      ________________GALLIUM_V2_L2_5____________,     ________________GALLIUM_V2_R2_5____________,
      ________________GALLIUM_V2_L3_5____________,     ________________GALLIUM_V2_R3_5____________,
      KC_LSFT,                   ___THUMB_LEFT___,     NAV_BSP, RAI_ENT,                   KC_RSFT
    ),

    [_GRAPHITE] = LAYOUT_wrapper_eg(
      ________________GRAPHITE_L1_5______________,     ________________GRAPHITE_R1_5______________,
      ________________GRAPHITE_L2_5______________,     ________________GRAPHITE_R2_5______________,
      ________________GRAPHITE_L3_5______________,     ________________GRAPHITE_R3_5______________,
      KC_LSFT,                   ___THUMB_LEFT___,     NAV_BSP, RAI_ENT,                   KC_RSFT
    ),

    [_QWERTY] = LAYOUT_wrapper_eg(
      ________________QWERTY_L1_5________________,     ________________QWERTY_R1_5________________,
      ________________QWERTY_L2_5________________,     ________________QWERTY_R2_5________________,
      ________________QWERTY_L3_5________________,     ________________QWERTY_R3_5________________,
      KC_LSFT,                   ___THUMB_LEFT___,     NAV_BSP, RAI_ENT,                   KC_RSFT
    ),

    [_LOWER] = LAYOUT_wrapper_eg(
      ________________LOWER__L1_5________________,     ________________LOWER__R1_5________________,
      ________________LOWER__L2_5________________,     ________________LOWER__R2_5________________,
      ________________LOWER__L3_5________________,     ________________LOWER__R3_5________________,
      _______,                   _______, _______,     KC_ENT,  _______,                   _______
    ),

    [_RAISE] = LAYOUT_wrapper_eg(
      ________________RAISE__L1_5________________,     ________________RAISE__R1_5________________,
      ________________RAISE__L2_5________________,     ________________RAISE__R2_5________________,
      ________________RAISE__L3_5________________,     ________________RAISE__R3_5________________,
      _______,                   _______, _______,     _______, _______,                   _______
    ),

    [_NAV] = LAYOUT_wrapper_eg(
      ________________NAV_L1_5___________________,     ________________NAV_R1_5___________________,
      ________________NAV_L2_5___________________,     ________________NAV_R2_5___________________,
      ________________NAV_L3_5___________________,     ________________NAV_R3_5___________________,
      _______,                   _______, _______,     _______, _______,                   _______
    ),

    [_SYSTEM] = LAYOUT_wrapper_eg(
      ________________SYSTEM_L1_5________________,     ________________SYSTEM_R1_5________________,
      ________________SYSTEM_L2_5________________,     ________________SYSTEM_R2_5________________,
      ________________SYSTEM_L3_5________________,     ________________SYSTEM_R3_5________________,
      _______,                   _______, _______,     KC_ENT,  _______,                   _______
    ),

    [_ADJUST] = LAYOUT_wrapper_eg(
      ________________ADJUST_L1_5________________,     ________________ADJUST_R1_5________________,
      ________________ADJUST_L2_5________________,     ________________ADJUST_R2_5________________,
      ________________ADJUST_L3_5________________,     ________________ADJUST_R3_5________________,
      _______,                   _______, _______,     _______, _______,                   _______
    )
};

