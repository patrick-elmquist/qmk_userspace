#include "pket.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_COLEMAK] = LAYOUT_wrapper( \
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        _____________________COLEMAK_L1_____________________,                    _____________________COLEMAK_R1_____________________,
        _____________________COLEMAK_L2_____________________,                    _____________________COLEMAK_R2_____________________,
        _____________________COLEMAK_L3_____________________, KC_LBRC,  KC_RBRC, _____________________COLEMAK_R3_____________________,
                                   XXXXXXX, _______,  SYSTEM, LOW_SPC,  RAI_ENT, NAV_BSP, _______, XXXXXXX
        ),

    [_LOWER] = LAYOUT_wrapper( \
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        _____________________LOWER__L1______________________,                    _____________________LOWER__R1______________________,
        _____________________LOWER__L2______________________,                    _____________________LOWER__R2______________________,
        _____________________LOWER__L3______________________, _______,  _______, _____________________LOWER__R3______________________,
                                   _______, _______, _______, _______,  _______, _______, _______, _______
        ),

    [_RAISE] = LAYOUT_wrapper( \
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        _____________________RAISE__L1______________________,                    _____________________RAISE__R1______________________,
        _____________________RAISE__L2______________________,                    _____________________RAISE__R2______________________,
        _____________________RAISE__L3______________________, _______,  _______, _____________________RAISE__R3______________________,
                                   _______, _______, _______, _______,  _______, _______, _______, _______
        ),

    [_ADJUST] = LAYOUT_wrapper( \
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        _____________________ADJUST_L1______________________,                    _____________________ADJUST_R1______________________,
        _____________________ADJUST_L2______________________,                    _____________________ADJUST_R2______________________,
        _____________________ADJUST_L3______________________, _______,  _______, _____________________ADJUST_R3______________________,
                                   _______, _______, _______, _______,  _______, _______, _______, _______
        ),

    [_NAV] = LAYOUT_wrapper( \
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        _____________________NAV_L1_________________________,                    _____________________NAV_R1_________________________,
        _____________________NAV_L2_________________________,                    _____________________NAV_R2_________________________,
        _____________________NAV_L3_________________________, _______,  _______, _____________________NAV_R3_________________________,
                                   _______, _______, _______, _______,  _______, _______, _______, _______
        ),

    [_SYSTEM] = LAYOUT_wrapper( \
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        _____________________SYSTEM_L1______________________,                    _____________________SYSTEM_R1______________________,
        _____________________SYSTEM_L2______________________,                    _____________________SYSTEM_R2______________________,
        _____________________SYSTEM_L3______________________, _______,  _______, _____________________SYSTEM_R3______________________,
                                   _______, _______, _______, _______,  _______, _______, _______, _______
        )
};

#ifdef OLED_ENABLE

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        render_empty_line();
        render_default_layer_state();
        render_empty_line();
        render_case_mode_status(get_xcase_delimiter(), caps_word_enabled());
        render_empty_line();
        render_keylogger_status();
        render_empty_line();
        render_combo_status();
    } else {
        render_empty_line();
        render_modifier_status();
    }

    return false;
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (is_keyboard_master()) {
        return OLED_ROTATION_270;
    } else {
        return OLED_ROTATION_180;
    }
}

#endif
