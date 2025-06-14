#pragma once

#include "keycodes.h"

// 5 column
#define ________________COLEMAK_L1_5_______________ KC_Q,    KC_W,    KC_F,    KC_P,    KC_B
#define ________________COLEMAK_L2_5_______________ HOME_A,  HOME_R,  HOME_S,  HOME_T,  KC_G
#define ________________COLEMAK_L3_5_______________ KC_Z,    KC_X,    KC_C,    KC_D,    KC_V

#define ________________COLEMAK_R1_5_______________ KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN
#define ________________COLEMAK_R2_5_______________ KC_M,    HOME_N,  HOME_E,  HOME_I,  HOME_O
#define ________________COLEMAK_R3_5_______________ KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH

#define ________________GALLIUM_L1_5_______________ KC_B,    KC_L,    KC_D,    KC_C,    KC_V
#define ________________GALLIUM_L2_5_______________ KC_N,    KC_R,    KC_T,    KC_S,    KC_G
#define ________________GALLIUM_L3_5_______________ KC_Q,    KC_X,    KC_M,    KC_W,    KC_Z

#define ________________GALLIUM_R1_5_______________ KC_J,    KC_Y,    KC_O,    KC_U,    KC_SCLN
#define ________________GALLIUM_R2_5_______________ KC_P,    KC_H,    KC_A,    KC_E,    KC_I
#define ________________GALLIUM_R3_5_______________ KC_K,    KC_F,    KC_COMM, KC_DOT,  KC_SLSH

#define ________________GALLIUM_V2_L1_5____________ KC_B,    KC_L,    KC_D,    KC_C,    KC_V
#define ________________GALLIUM_V2_L2_5____________ KC_N,    KC_R,    KC_T,    KC_S,    KC_G
#define ________________GALLIUM_V2_L3_5____________ KC_X,    KC_Q,    KC_M,    KC_W,    KC_Z

#define ________________GALLIUM_V2_R1_5____________ KC_J,    KC_F,    KC_O,    KC_U,    KC_SCLN
#define ________________GALLIUM_V2_R2_5____________ KC_Y,    KC_H,    KC_A,    KC_E,    KC_I
#define ________________GALLIUM_V2_R3_5____________ KC_K,    KC_P,    KC_COMM, KC_DOT,  KC_SLSH

#define ________________GRAPHITE_L1_5______________ KC_B,    KC_L,    KC_D,    KC_W,    KC_Z
#define ________________GRAPHITE_L2_5______________ KC_N,    KC_R,    KC_T,    KC_S,    KC_G
#define ________________GRAPHITE_L3_5______________ KC_Q,    KC_X,    KC_M,    KC_C,    KC_V

#define ________________GRAPHITE_R1_5______________ KC_SCLN, KC_F,    KC_O,    KC_U,    KC_J
#define ________________GRAPHITE_R2_5______________ KC_Y,    KC_H,    KC_A,    KC_E,    KC_I
#define ________________GRAPHITE_R3_5______________ KC_K,    KC_P,    KC_COMM, KC_DOT,  KC_SLSH

#define ________________QWERTY_L1_5________________ KC_Q,    KC_W,    KC_E,    KC_R,    KC_T
#define ________________QWERTY_L2_5________________ KC_A,    KC_S,    KC_D,    KC_F,    KC_G
#define ________________QWERTY_L3_5________________ KC_Z,    KC_X,    KC_C,    KC_V,    KC_B

#define ________________QWERTY_R1_5________________ KC_Y,    KC_U,    KC_I,    KC_O,    KC_P
#define ________________QWERTY_R2_5________________ KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN
#define ________________QWERTY_R3_5________________ KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH

#define ________________LOWER__L1_5________________ KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC
#define ________________LOWER__L2_5________________ OSM_CTL, OSM_ALT, OSM_GUI, OSM_SFT, KC_GRV
#define ________________LOWER__L3_5________________ _______, _______, _______, _______, KC_TILD

#define ________________LOWER__R1_5________________ KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN
#define ________________LOWER__R2_5________________ KC_PLUS, KC_MINS, _______, _______, KC_SCLN
#define ________________LOWER__R3_5________________ _______, KC_UNDS, _______, _______, _______

#define ________________RAISE__L1_5________________ KC_1,    KC_2,    KC_3,    KC_4,    KC_5
#define ________________RAISE__L2_5________________ KC_LT,   KC_PERC, KC_LPRN, KC_LCBR, KC_LBRC
#define ________________RAISE__L3_5________________ KC_GT,   KC_DLR,  KC_RPRN, KC_RCBR, KC_RBRC

#define ________________RAISE__R1_5________________ KC_6,    KC_7,    KC_8,    KC_9,    KC_0
#define ________________RAISE__R2_5________________ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_BSPC
#define ________________RAISE__R3_5________________ XXXXXXX, KC_UNDS, _______, _______, _______

#define ________________NAV_L1_5___________________ KC_1,    KC_2,    KC_3,    KC_4,    KC_5
#define ________________NAV_L2_5___________________ KC_LT,   KC_LCBR, KC_LPRN, KC_SCLN, KC_LBRC
#define ________________NAV_L3_5___________________ KC_GT,   KC_RCBR, KC_RPRN, KC_COMM, KC_RBRC

#define ________________NAV_R1_5___________________ KC_6,    KC_7,    KC_8,    KC_9,    KC_0
#define ________________NAV_R2_5___________________ KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_BSPC
#define ________________NAV_R3_5___________________ XXXXXXX, KC_UNDS, XXXXXXX, XXXXXXX, XXXXXXX

#define ________________SYSTEM_L1_5________________ QUIT,    CLOSE,   SW_WIN,  SW_APP,  ITERM
#define ________________SYSTEM_L2_5________________ _______, _______, _______, _______, ALFRED
#define ________________SYSTEM_L3_5________________ _______, _______, _______, _______, _______

#define ________________SYSTEM_R1_5________________ KC_LSFT, _______, WIN_MAX, BACK,    FORWARD
#define ________________SYSTEM_R2_5________________ _______, WIN_LFT, WIN_CEN, WIN_RGT, _______
#define ________________SYSTEM_R3_5________________ _______, WIN_RES, _______, _______, _______

#define ________________ADJUST_L1_5________________ KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5
#define ________________ADJUST_L2_5________________ _______, KC_MPRV, KC_MPLY, KC_MNXT, KC_VOLU
#define ________________ADJUST_L3_5________________ QK_BOOT, _______, _______, KC_MUTE, KC_VOLD

#define ________________ADJUST_R1_5________________ KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10
#define ________________ADJUST_R2_5________________ DFL_COL, CK_UP,   CK_TOGG, CK_DOWN, KC_F11
#define ________________ADJUST_R3_5________________ DFL_GRA, DFL_GA2, DFL_GAL, DFL_QWE, KC_F12

#define ___THUMB_LEFT___ SYSTEM, LOW_SPC
#define ___THUMB_RIGHT__ RAI_ESC, NAV_BSP

#define _______THUMB_LEFT________ _______, SYSTEM, LOW_SPC
#define _______THUMB_RIGHT_______ RAI_ENT, NAV_BSP, KC_COLN

#define _______THUMB_LEFT_2______ SYS_REP, LOW_SPC, KC_ESC
#define _______THUMB_RIGHT_2_____ RAI_ENT, NAV_BSP, KC_COLN








// 6 column
#define _____________________COLEMAK_L1_____________________ KC_TAB,  ________________COLEMAK_L1_5_______________
#define _____________________COLEMAK_L2_____________________ CTL_BSP, ________________COLEMAK_L2_5_______________
#define _____________________COLEMAK_L3_____________________ KC_LSFT, ________________COLEMAK_L3_5_______________

#define _____________________COLEMAK_R1_____________________ ________________COLEMAK_R1_5_______________, KC_BSLS
#define _____________________COLEMAK_R2_____________________ ________________COLEMAK_R2_5_______________, KC_QUOT
#define _____________________COLEMAK_R3_____________________ ________________COLEMAK_R3_5_______________, KC_MINS

#define _____________________LOWER__L1______________________ _______, ________________LOWER__L1_5________________
#define _____________________LOWER__L2______________________ BSP_WRD, ________________LOWER__L2_5________________
#define _____________________LOWER__L3______________________ _______, ________________LOWER__L3_5________________

#define _____________________LOWER__R1______________________ ________________LOWER__R1_5________________, _______
#define _____________________LOWER__R2______________________ ________________LOWER__R2_5________________, _______
#define _____________________LOWER__R3______________________ ________________LOWER__R3_5________________, _______

#define _____________________RAISE__L1______________________ _______, ________________RAISE__L1_5________________
#define _____________________RAISE__L2______________________ _______, ________________RAISE__L2_5________________
#define _____________________RAISE__L3______________________ _______, ________________RAISE__L3_5________________

#define _____________________RAISE__R1______________________ ________________RAISE__R1_5________________, _______
#define _____________________RAISE__R2______________________ ________________RAISE__R2_5________________, D_QUOTE
#define _____________________RAISE__R3______________________ ________________RAISE__R3_5________________, _______

#define _____________________SYSTEM_L1______________________ _______, ________________SYSTEM_L1_5________________
#define _____________________SYSTEM_L2______________________ _______, ________________SYSTEM_L2_5________________
#define _____________________SYSTEM_L3______________________ _______, ________________SYSTEM_L3_5________________

#define _____________________SYSTEM_R1______________________ ________________SYSTEM_R1_5________________, _______
#define _____________________SYSTEM_R2______________________ ________________SYSTEM_R2_5________________, _______
#define _____________________SYSTEM_R3______________________ ________________SYSTEM_R3_5________________, _______

#define _____________________ADJUST_L1______________________ _______, ________________ADJUST_L1_5________________
#define _____________________ADJUST_L2______________________ _______, ________________ADJUST_L2_5________________
#define _____________________ADJUST_L3______________________ _______, ________________ADJUST_L3_5________________

#define _____________________ADJUST_R1______________________ ________________ADJUST_R1_5________________, _______
#define _____________________ADJUST_R2______________________ ________________ADJUST_R2_5________________, _______
#define _____________________ADJUST_R3______________________ ________________ADJUST_R3_5________________, _______

#define _________MOD_LEFT________ RAISE,   SYSTEM,  KC_SPC
#define _________MOD_RIGHT_______ RAISE,   LOWER,   KC_LGUI


#define LAYOUT_wrapper(...) LAYOUT(__VA_ARGS__)
#define LAYOUT_wrapper_eg(...) LAYOUT_eg(__VA_ARGS__)
#define LAYOUT_wrapper_3x5_3(...) LAYOUT_split_3x5_3(__VA_ARGS__)
