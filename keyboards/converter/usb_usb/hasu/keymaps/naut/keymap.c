// Copyright 2022 naut
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {

    // Base layer
    [0] = LAYOUT_all(
                       KC_F13,  KC_F14,  KC_F15,  KC_F16, KC_F17, KC_F18, KC_F19,  KC_F20,  KC_F21,  KC_F22,  KC_F23,  KC_F24,
     KC_ESC,           KC_F1,   KC_F2,   KC_F3,   KC_F4,  KC_F5,  KC_F6,  KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,               KC_PSCR, KC_SLCK, KC_PAUS,    KC_VOLD, KC_VOLU, KC_MUTE, KC_PWR,     KC_HELP,
     KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,   KC_6,   KC_7,   KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_JYEN, KC_BSLS,     KC_INS,  KC_HOME, KC_PGUP,    KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS,    KC_STOP, KC_AGIN,
     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,   KC_Y,   KC_U,   KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,          KC_BSPC,     KC_DEL,  KC_END,  KC_PGDN,    KC_P7,   KC_P8,   KC_P9,   KC_PPLS,    KC_MENU, KC_UNDO,
     KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,   KC_H,   KC_J,   KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_NUHS, KC_ENT,                                    KC_P4,   KC_P5,   KC_P6,   KC_PCMM,    KC_SLCT, KC_COPY,
     KC_LSFT, KC_NUBS, KC_Z,    KC_X,    KC_C,    KC_V,   KC_B,   KC_N,   KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RO,   KC_RSFT,              KC_UP,               KC_P1,   KC_P2,   KC_P3,   KC_PEQL,    KC_EXEC, KC_PSTE,
     MO(1),   KC_LALT, KC_LGUI, KC_MHEN, KC_HANJ,         KC_SPC,         KC_HAEN, KC_HENK, KC_KANA, KC_RGUI, KC_RALT, MO(1),   KC_RCTL,     KC_LEFT, KC_DOWN, KC_RGHT,    KC_P0,            KC_PDOT, KC_PENT,    KC_FIND, KC_CUT),

    // Fn1 layer
    [1] = LAYOUT_all(
                       ______,  ______,  ______, ______, ______,  ______,  ______, ______,  ______,  ______,  ______, ______,
     ______,           ______,  ______,  ______, ______, ______,  ______,  ______, ______,  ______,  ______,  ______, ______,                ______,  ______,  ______,     ______,  ______,  ______,  ______,     ______,
     ______,  ______,  ______,  ______,  ______, ______, ______,  ______,  ______, ______,  ______,  ______,  ______, ______, ______,        ______,  ______,  ______,     ______,  ______,  ______,  ______,     ______,  ______,
     KC_CAPS, ______,  ______,  ______,  ______, ______, ______,  ______,  ______, ______,  ______,  ______,  ______,         ______,        ______,  ______,  ______,     ______,  ______,  ______,  ______,     ______,  ______,
     ______,  ______,  ______,  ______,  ______, ______, ______,  ______,  ______, ______,  ______,  ______,          ______, ______,                                      ______,  ______,  ______,  ______,     ______,  ______,
     ______,  ______,  ______,  ______,  ______, ______, ______,  ______,  ______, ______,  ______,  ______,          ______, ______,                 KC_VOLU,             ______,  ______,  ______,  ______,     ______,  ______,
     ______,  ______,  ______,  ______,  ______,         TG(2),            ______, ______,  ______,  ______,  ______, ______, ______,        KC_MRWD, KC_VOLD, KC_MFFD,    ______,           ______,  ______,     ______,  ______),

    // Fn2 button mash layer
    [2] = LAYOUT_all(
                       KC_NO,   KC_NO,   KC_NO,  KC_NO,  KC_NO,   KC_NO,   KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_NO,
     TO(0),            KC_NO,   KC_NO,   KC_NO,  KC_NO,  KC_NO,   KC_NO,   KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_NO,                KC_NO,    KC_NO,   KC_NO,      KC_NO,   KC_NO,   KC_NO,   KC_NO,      KC_NO,
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_NO,  KC_NO,   KC_NO,   KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_NO,  KC_NO,        KC_NO,    KC_NO,   KC_NO,      KC_NO,   KC_NO,   KC_NO,   KC_NO,      KC_NO,   KC_NO,
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_NO,  KC_NO,   KC_NO,   KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,          KC_NO,        KC_NO,    KC_NO,   KC_NO,      KC_NO,   KC_NO,   KC_NO,   KC_NO,      KC_NO,   KC_NO,
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_NO,  KC_NO,   KC_NO,   KC_NO,  KC_NO,   KC_NO,   KC_NO,           KC_NO,  KC_NO,                                       KC_NO,   KC_NO,   KC_NO,   KC_NO,      KC_NO,   KC_NO,
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_NO,  KC_NO,   KC_NO,   KC_NO,  KC_NO,   KC_NO,   KC_NO,           KC_NO,  KC_NO,                  KC_NO,               KC_NO,   KC_NO,   KC_NO,   KC_NO,      KC_NO,   KC_NO,
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,          KC_NO,            KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_NO,  KC_NO,        KC_NO,    KC_NO,   KC_NO,      KC_NO,            KC_NO,   KC_NO,      KC_NO,   KC_NO),
};
