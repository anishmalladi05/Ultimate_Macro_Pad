#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        LCMD(KC_SPC), LCMD(KC_S), LCMD(S(KC_Z)), LCMD(KC_Z)
    )
};

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = { ENCODER_CCW_CW(S(KC_UP), S(KC_DOWN)) }
};
#endif

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code16(S(KC_DOWN));
        } else {
            tap_code16(S(KC_UP));
        }
    }
    return false;
}
