#pragma once

#include QMK_KEYBOARD_H

enum custom_keycodes {
    SW_WIN = SAFE_RANGE,
    SW_APP,
    S_QUOTE,
    D_QUOTE,
    PARENS,
    BRCKETS,
    CURLYS,

    CAPS,
    CAMEL,
    SNAKE,
    SNK_SCM,

    REPEAT,

    SE_AO,
    SE_AE,
    SE_OE,
    NEW_SAFE_RANGE,
};

#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)
#define SYSTEM MO(_SYSTEM)
#define NUM MO(_NUM)

#define QUIT RGUI(KC_Q)
#define CLOSE RGUI(KC_W)
#define RELOAD RGUI(KC_R)

#define WIN_LFT C(A(KC_LEFT))
#define WIN_RGT C(A(KC_RGHT))
#define WIN_MAX C(A(KC_ENT))
#define WIN_RES C(A(KC_BSPC))
#define WIN_CEN C(A(KC_C))

#define BACK RGUI(KC_LBRC)
#define FORWARD RGUI(KC_RBRC)

#define ALFRED RGUI(KC_SPC)
#define ITERM RGUI(S(KC_B))
#define BSP_WRD LALT(KC_BSPC)

#define LOW_ENT LT(_LOWER, KC_ENT)
//#define RAI_ENT LT(_RAISE, KC_ENT)
#define RAI_ENT OSM(MOD_RSFT)
#define RAI_ESC LT(_RAISE, KC_ESC)
#define SYS_REP LT(_SYSTEM, KC_ENT)
#define RAI_BSP LT(_RAISE, KC_BSPC)
#define NAV_BSP LT(_NAV, KC_BSPC)
#define LOW_SPC LT(_LOWER, KC_SPC)
#define LOW_TAB LT(_LOWER, KC_TAB)
#define RAI_ESC LT(_RAISE, KC_ESC)
#define CTL_BSP LCTL_T(KC_BSPC)

// Left-hand home row mods
#define HOME_A LCTL_T(KC_A)
#define HOME_R LALT_T(KC_R)
#define HOME_S LGUI_T(KC_S)
#define HOME_T LSFT_T(KC_T)

// Right-hand home row mods
#define HOME_N RSFT_T(KC_N)
#define HOME_E RGUI_T(KC_E)
#define HOME_I LALT_T(KC_I)
#define HOME_O RCTL_T(KC_O)

#define OSM_CTL OSM(MOD_LCTL)
#define OSM_ALT OSM(MOD_LALT)
#define OSM_GUI OSM(MOD_LGUI)
#define OSM_SFT OSM(MOD_LSFT)

// Left-hand home row mods Canary
#define CNRY_C LCTL_T(KC_C)

// Right-hand home row mods Canary
#define CNRY_A RCTL_T(KC_A)

#define DFL_COL DF(_COLEMAK)
#define DFL_QWE DF(_QWERTY)
#define DFL_GAL DF(_GALLIUM)
#define DFL_GA2 DF(_GALLIUM_V2)
#define DFL_GRA DF(_GRAPHITE)

