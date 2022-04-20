#include QMK_KEYBOARD_H

#define GRAVE_MODS  (MOD_BIT(KC_LSFT)|MOD_BIT(KC_RSFT)|MOD_BIT(KC_LGUI)|MOD_BIT(KC_RGUI)|MOD_BIT(KC_LALT)|MOD_BIT(KC_RALT))


enum yggdrasil_keymap_layers = {
 BASE_LAYER = 0,
 SECOND_LAYER,
 SYM_LAYER,
 MEDIA_LAYER,
 NAV_LAYER,
 BTN_LAYER,
 FN_LAYER,
}

#define KC_NUM_LAYER LT(NUM_LAYER, KC_QUOTE)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE_LAYER] = LAYOUT_split_3x5_3(
        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
        KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SEMICOLON,
        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                               KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_NUM_LAYER,
                          TT(SYM_LAYER), KC_LCTL, KC_LSFT,           KC_ENT,  KC_SPC,  KC_BSPC
    ),
    
    [SECOND_LAYER] = LAYOUT_split_3x5_3(
        KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
        KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SEMICOLON,
        KC_F11,    KC_F12,    KC_C,    KC_V,    KC_B,                               KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_NUM_LAYER,
                          TT(SYM_LAYER), KC_LCTL, KC_LSFT,           KC_ENT,  KC_SPC,  KC_BSPC
    ),

    [SYM_LAYER] = LAYOUT_split_3x5_3(
        KC_EXLM,    KC_AT,    KC_HASH,    KC_DLR,    KC_LEFT_BRACKET,                               KC_RIGHT_BRACKET,    KC_PERC,    KC_AMPR,    KC_PEQL,    KC_PLUS,
        KC_ASTR,    KC_PIPE,    KC_UNDS,    KC_F,    KC_LPRN,                                          KC_RPRN,    KC_RALT,    KC_RSFT,   KC_RCTL,    KC_PMNS,
        KC_GRV,    KC_TILD,    KC_CIRC,    KC_V,    KC_B,                                          KC_PSLS,    KC_QUES,    KC_BSLS, XXXXXXX,  XXXXXXX,
                                  KC_TRNS, TODO-LAYER-SWITCH, KC_TAB,                     KC_ESC,  KC_RGUI,  KC_DEL
    ),


};
