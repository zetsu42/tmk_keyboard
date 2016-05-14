#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    KEYMAP(
                                                                                                                             POWER, \
                           TAB,           Q,          I,    W,    F,    G,    Y,    P, SCLN, RBRC,    ENT,  END, PGDN, PENT,        \
                           GRV,           1,         F7,    2,    4,   F3,   F5,   F9,  EQL, BSPC,    INS, SLCK, PAUS, PMNS,        \
                          HELP,         ESC,         F8,   F1,   F2,   F4,   F6,  F10,  F11,  F12,   PSCR, MUTE, VOLD, VOLU,        \
                          STOP,       AGAIN,          8,    3,    5,    6,    7,    9, MINS,         LNUM, PSLS, PAST,   P9,        \
                           APP,        UNDO,          O,    E,    R,    T,    U,    0, LBRC, BSLS, DELETE, HOME, PGUP, PPLS,        \
                           F13,        COPY,          J,    A,    S,    D,    H,    K,    L, QUOT,     P4,   P7,   P8,   P1,        \
        RALT, LGUI,        F14, CAPS, PASTE, LSFT, COMM,    Z,    X,    N,    M,  DOT, SLSH, DOWN,     UP,   P5,   P6,   P0,        \
        LALT, RGUI, RCTL, FIND,         CUT, RSFT,  SPC,          C,    V,    B, PCMM,       LEFT,   RGHT,   P2,   P3, PDOT         \
    ),
    /*KEYMAP(
                                                                                                                              TRNS, \
                          TRNS,        TRNS,       TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,    TRNS, TRNS, TRNS, TRNS,       \
                          TRNS,        TRNS,       TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,    TRNS, TRNS, TRNS, TRNS,       \
                          TRNS,        TRNS,       TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,    TRNS, TRNS, TRNS, TRNS,       \
                          TRNS,        TRNS,       TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,          TRNS, TRNS, TRNS, TRNS,       \
                          TRNS,        TRNS,       TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,    TRNS, TRNS, TRNS, TRNS,       \
                          TRNS,        TRNS,       TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,    TRNS, TRNS, TRNS, TRNS,       \
        TRNS, TRNS,       TRNS, TRNS,  TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,    TRNS, TRNS, TRNS, TRNS,       \
        TRNS, TRNS, TRNS, TRNS,        TRNS, TRNS, TRNS,       TRNS, TRNS, TRNS, TRNS,       TRNS,    TRNS, TRNS, TRNS, TRNS        \
    ),*/
    /*KEYMAP(
                                                                                                                              TRNS, \
                          TRNS,        TRNS,       TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,    TRNS, TRNS, TRNS, KC_WH_D,       \
                          TRNS,        TRNS,       TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,    TRNS, TRNS, TRNS, TRNS,       \
                          TRNS,        TRNS,       TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,    TRNS, TRNS, TRNS, TRNS,       \
                          TRNS,        TRNS,       TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,          TRNS, TRNS, TRNS, KC_ACL0,       \
                          TRNS,        TRNS,       TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,    TRNS, KC_ACL0, KC_ACL1, KC_WH_U,       \
                          TRNS,        TRNS,       TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,    KC_BTN1, TRNS, TRNS, KC_MS_L,       \
        TRNS, TRNS,       TRNS, TRNS,  TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,    TRNS, KC_MS_U, KC_BTN2, TRNS,       \
        TRNS, TRNS, TRNS, TRNS,        TRNS, TRNS, TRNS,       TRNS, TRNS, TRNS, TRNS,       TRNS,    TRNS, KC_MS_D, KC_MS_R, TRNS        \
    ),*/
};
const uint16_t PROGMEM fn_actions[] = {

};
