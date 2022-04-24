#include QMK_KEYBOARD_H


enum yggdrasil_keymap_layers {
 BASE_LAYER,
 NUM_NAV_LAYER,
 SYM_LAYER,
 FN_LAYER,
 MEDIA_LAYER,
 NAV_LAYER,
 GAME_LAYER
};

#define KC_NUM_NAV_LAYER LT(NUM_NAV_LAYER, KC_QUOTE)
#define KC_SYM_LAYER LT(SYM_LAYER, KC_DOT)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE_LAYER] = LAYOUT(
        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
        KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SEMICOLON,
        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                               KC_N,    KC_M,    KC_COMM, KC_SYM_LAYER,  KC_NUM_NAV_LAYER,
                          TT(GAME_LAYER), KC_LCTL, KC_LSFT,                  KC_ENT,  KC_SPC,  KC_BSPC
    ),
    [SYM_LAYER] = LAYOUT(
        KC_EXLM,    KC_AT,    KC_HASH,    KC_DLR,    KC_LEFT_BRACKET,                               KC_RIGHT_BRACKET,    KC_PERC,    KC_AMPR,    KC_PEQL,    KC_PLUS,
        KC_ASTR,    KC_PIPE,    KC_UNDS,    KC_F,    KC_LPRN,                                       KC_RPRN,    KC_RALT,    KC_RSFT,   KC_RCTL,    KC_PMNS,
        KC_GRV,    KC_TILD,    KC_CIRC,    KC_PRINT_SCREEN,    XXXXXXX,                             KC_PSLS,    KC_QUES,    KC_BSLS, XXXXXXX,  TT(MEDIA_LAYER),
                                      KC_LGUI, KC_TRNS, KC_TAB,                           KC_ESC,   KC_RGUI,    KC_DEL                 
    ),
    [NUM_NAV_LAYER] = LAYOUT(
        KC_HOME,    KC_PAGE_UP,    KC_PAGE_DOWN,    KC_PAGE_DOWN,    KC_TRNS,                               KC_TRNS, KC_1,    KC_2,    KC_3,    KC_TRNS,
        KC_TRNS,    KC_LEFT,    KC_UP,    KC_RIGHT,    KC_TRNS,                                             KC_TRNS,    KC_4,    KC_5,    KC_6,    KC_TRNS,
        KC_TRNS,    KC_TRNS,    KC_DOWN,    KC_TRNS,    KC_TRNS,                                            KC_TRNS,     KC_7,    KC_8, KC_9,  XXXXXXX,
                                TO(BASE_LAYER), KC_LCTL, KC_LSFT,                          MO(FN_LAYER),  KC_SPC,  KC_BSPC
    ),
    [FN_LAYER] = LAYOUT(
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                               KC_F1,    KC_F2,    KC_F3,   KC_F4,   KC_F5, 
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                               KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                               KC_F11,    KC_F12,    XXXXXXX, XXXXXXX,  XXXXXXX,
                          TO(BASE_LAYER), KC_LCTL, KC_LSFT,                           KC_ENT,  KC_SPC,  KC_BSPC
    ),
    [MEDIA_LAYER] = LAYOUT(
        XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,                               XXXXXXX,    KC_MEDIA_PLAY_PAUSE,    KC_MEDIA_STOP,   KC_MEDIA_PREV_TRACK,   KC_MEDIA_NEXT_TRACK, 
        XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,                               XXXXXXX,    KC_AUDIO_VOL_UP,    KC_AUDIO_VOL_DOWN,    KC_AUDIO_MUTE,    XXXXXXX,
        XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,                               XXXXXXX,    XXXXXXX,            XXXXXXX,              XXXXXXX,          XXXXXXX, 
                          TO(BASE_LAYER), KC_LCTL, KC_LSFT,                           KC_ENT,  KC_SPC,  KC_BSPC
    ),
    [GAME_LAYER] = LAYOUT(
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                               KC_1,    KC_2,   KC_3, KC_4,  KC_5, 
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                               KC_7,    KC_LEFT,  KC_UP, KC_RIGHT,  KC_8,
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                               KC_9,    KC_0,   KC_DOWN, XXXXXXX,  XXXXXXX,
                                            KC_LCTL, KC_SPC, KC_LSFT,                 TO(BASE_LAYER),  XXXXXXX,  XXXXXXX
    ),
};