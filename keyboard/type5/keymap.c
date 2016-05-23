#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = KEYMAP(
                                                                                                                             POWER, \
                           TAB,           Q,          I,    W,    F,    G,    Y,    P, SCLN, RBRC,    ENT,  END, PGDN, PENT,        \
                           GRV,           1,         F7,    2,    4,   F3,   F5,   F9,  EQL, BSPC,    INS, SLCK, PAUS, PMNS,        \
                          HELP,         ESC,         F8,   F1,   F2,   F4,   F6,  F10,  F11,  F12,   PSCR, MUTE, VOLD, VOLU,        \
                          STOP,       AGAIN,          8,    3,    5,    6,    7,    9, MINS,         NLCK, PSLS, PAST,   P9,        \
                           APP,        UNDO,          O,    E,    R,    T,    U,    0, LBRC, BSLS, DELETE, HOME, PGUP, PPLS,        \
                           F13,        COPY,          J,    A,    S,    D,    H,    K,    L, QUOT,     P4,   P7,   P8,   P1,        \
        RALT,  FN0,        F14, CAPS, PASTE, LSFT, COMM,    Z,    X,    N,    M,  DOT, SLSH, DOWN,     UP,   P5,   P6,   P0,        \
        LALT,  FN1, RCTL, FIND,         CUT, RSFT,  SPC,          C,    V,    B, PCMM,       LEFT,   RGHT,   P2,   P3, PDOT         \
    ),
    /*[1] = KEYMAP(
                                                                                                                             POWER, \
                           TAB,           Q,          I,    W,    F,    G,    Y,    P, SCLN, RBRC,    ENT,  END, PGDN, PENT,        \
                           GRV,           1,         F7,    2,    4,   F3,   F5,   F9,  EQL, BSPC,    INS, SLCK, PAUS, PMNS,        \
                          HELP,         ESC,         F8,   F1,   F2,   F4,   F6,  F10,  F11,  F12,   PSCR, MUTE, VOLD, VOLU,        \
                          STOP,       AGAIN,          8,    3,    5,    6,    7,    9, MINS,         NLCK, PSLS, PAST, ACL2,        \
                           APP,        UNDO,          O,    E,    R,    T,    U,    0, LBRC, BSLS, DELETE, HOME, PGUP, PPLS,        \
                           F13,        COPY,          J,    A,    S,    D,    H,    K,    L, QUOT,   BTN1, ACL0, ACL1, MS_L,        \
        RALT, LGUI,        F14, CAPS, PASTE, LSFT, COMM,    Z,    X,    N,    M,  DOT, SLSH, DOWN,     UP, MS_U, BTN2,   P0,        \
        LALT, RGUI, RCTL, FIND,         CUT, RSFT,  SPC,          C,    V,    B, PCMM,       LEFT,   RGHT, MS_D, MS_R, PDOT         \
    ),*/
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
    [1] = KEYMAP(
                                                                                                                              TRNS, \
                          TRNS,        TRNS,       TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,    TRNS, TRNS, TRNS, WH_D,       \
                          TRNS,        TRNS,       TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,    TRNS, TRNS, TRNS, TRNS,       \
                          TRNS,        TRNS,       TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,    TRNS, TRNS, TRNS, TRNS,       \
                          TRNS,        TRNS,       TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,          TRNS, TRNS, TRNS, ACL0,       \
                          TRNS,        TRNS,       TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,    TRNS, ACL0, ACL1, WH_U,       \
                          TRNS,        TRNS,       TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,    BTN1, TRNS, TRNS, MS_L,       \
        TRNS, TRNS,       TRNS, TRNS,  TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,    TRNS, MS_U, BTN2, TRNS,       \
        TRNS, TRNS, TRNS, TRNS,        TRNS, TRNS, TRNS,       TRNS, TRNS, TRNS, TRNS,       TRNS,    TRNS, MS_D, MS_R, TRNS        \
    ),
};
const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_TOGGLE(1),
};
