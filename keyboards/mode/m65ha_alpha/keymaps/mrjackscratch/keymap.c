#include QMK_KEYBOARD_H

#define ANS 0

#define WIN 1
#define MAC 2
#define GAM 3

#define FNC 4
#define SYM 5
#define NAV 6

#define SYS 7

#define TAB_NAV LT(NAV, KC_TAB)

#define MACNEXT LCMD(KC_G)
#define MACPREV SCMD(KC_G)
#define MACHOME LCTL(KC_A)
#define MACEND LCTL(KC_E)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [ANS] = LAYOUT_65_ansi_blocker(
        KC_ESC , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_MINS, KC_EQL , KC_BSPC, KC_DEL ,
        KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_LBRC, KC_RBRC, KC_BSLS, KC_PGUP,
        KC_CAPS, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT,          KC_ENT , KC_PGDN,
        KC_LSFT,          KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_RSFT, KC_UP  , KC_END ,
        KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC ,                            KC_RALT, MO(FNC), KC_LEFT, KC_DOWN, KC_RGHT
    ),

    // Modifier Layers

    [WIN] = LAYOUT_65_ansi_blocker(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        MO(SYM), _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______,
        KC_LSFT,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        KC_LGUI, KC_LALT, KC_LCTL,                            _______,                            KC_RCTL, _______, _______, _______, _______
    ),
    [MAC] = LAYOUT_65_ansi_blocker(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        TAB_NAV, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        MO(SYM), _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______,
        KC_LSFT,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        KC_LCTL, KC_LALT, KC_LGUI,                            _______,                            KC_RGUI, _______, _______, _______, _______
    ),
    [GAM] = LAYOUT_65_ansi_blocker(
       KC_GRAVE, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        MO(FNC), _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        KC_LALT, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______,
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        KC_TAB , XXXXXXX, KC_LCTL,                            _______,                            KC_RGUI, _______, _______, _______, _______
    ),


    [FNC] = LAYOUT_65_ansi_blocker(
        KC_ESC,  KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12 , XXXXXXX, KC_MUTE,
        XXXXXXX, KC_F5  , KC_F6  , KC_F7  , KC_F8  , XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_VOLU,
        KC_CAPS, KC_F9  , KC_F10 , KC_F11 , KC_F12 , XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX, KC_VOLD,
        _______,          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, MO(SYS), XXXXXXX, KC_HOME,
        _______, _______, _______,                            KC_ENT,                             _______, _______, XXXXXXX, XXXXXXX, XXXXXXX
    ),
    [SYM] = LAYOUT_65_ansi_blocker(
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, KC_EXLM, KC_TILD, KC_CIRC, KC_AMPR, KC_PIPE, XXXXXXX, KC_PLUS, KC_MINS, KC_EQL,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        _______, KC_AT,   KC_LCBR, KC_LBRC, KC_LPRN, KC_LT,   KC_GT,   KC_RPRN, KC_RBRC, KC_RCBR, XXXXXXX, KC_GRAVE,         XXXXXXX, XXXXXXX,
        _______,          KC_HASH, KC_DLR,  KC_PERC, KC_ASTR, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, XXXXXXX, XXXXXXX,
        _______, _______, _______,                            KC_UNDS,                            _______, _______, XXXXXXX, XXXXXXX, XXXXXXX
    ),
    [NAV] = LAYOUT_65_ansi_blocker(
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_PGUP, XXXXXXX, XXXXXXX, MACPREV, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, XXXXXXX, XXXXXXX,          XXXXXXX, XXXXXXX,
        _______,          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, MACNEXT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, XXXXXXX, XXXXXXX,
        _______, _______, _______,                            KC_ENT,                             _______, _______, XXXXXXX, XXXXXXX, XXXXXXX
    ),

    [SYS] = LAYOUT_65_ansi_blocker(
        QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX, XXXXXXX,
        XXXXXXX,          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, XXXXXXX, XXXXXXX,
        TO(GAM), TO(WIN), TO(MAC),                            XXXXXXX,                            XXXXXXX, _______, XXXXXXX, XXXXXXX, XXXXXXX
    )
};
