/*  -*-  eval: (turn-on-orgtbl); -*-
 * naut's HHKB Layout
 */
#include QMK_KEYBOARD_H

#define _BASE 0
#define _HHKB 1
#define _MAC 2
#define _NUM 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* Layer 0: Default Layer
     ,---------------------------------------------------------------------------.
     |Esc  |1   |2   |3   |4   |5   |6   |7   |8   |9   |0   |-   |=   |\   |`   |
     |---------------------------------------------------------------------------|
     |Tab   |Q   |W   |E   |R   |T   |Y   |U   |I   |O   |P   |[   |]   |Backs   |
     |---------------------------------------------------------------------------|
     |Ctrl    |A   |S   |D   |F   |G   |H   |J   |K   |L   |;   |'   |Enter      |
     |---------------------------------------------------------------------------|
     |LShft     |Z   |X   |C   |V   |B   |N   |M   |,   |.   |/   |RShft    |HHKB|
     `---------------------------------------------------------------------------'
             |LAlt|LGui |             Space             |RGui |RAlt|
             `-----------------------------------------------------'
    */

    [_BASE] = LAYOUT(
        KC_ESC, KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS,KC_EQL, KC_BSLS, KC_GRV,
        KC_TAB, KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC,KC_RBRC,KC_BSPC,
        KC_LCTL,KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT,KC_ENT,
        KC_LSFT,KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,KC_RSFT,MO(_HHKB),
                KC_LALT,KC_LGUI,                KC_SPC,                         KC_RGUI,KC_RALT
    ),

    /* Layer 1: HHKB mode (HHKB Fn)
     ,---------------------------------------------------------------------------.
     |Pwr  |F1  |F2  |F3  |F4  |F5  |F6  |F7  |F8  |F9  |F10 |F11 |F12 |Ins |Del |
     |---------------------------------------------------------------------------|
     |Caps  |    |    |    |    |    |    |    |Psc |Slk |Pus |Up  |    |Backs   |
     |---------------------------------------------------------------------------|
     |        |VoD |VoU |Mut |    |    |*   |/   |Hom |PgU |Lef |Rig |Enter      |
     |---------------------------------------------------------------------------|
     |NUM       |    |    |    |    |    |+   |-   |End |PgD |Dow |MAC      |HHKB|
     `---------------------------------------------------------------------------'
             |    |     |                               |     |    |
             `-----------------------------------------------------'
    */

    [_HHKB] = LAYOUT(
        KC_PWR,  KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12, KC_INS, KC_DEL,
        KC_CAPS, KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_PSCR,KC_SCRL,KC_PAUS,KC_UP,  KC_TRNS,KC_BSPC,
        KC_TRNS, KC_VOLD,KC_VOLU,KC_MUTE,KC_TRNS,KC_TRNS,KC_PAST,KC_PSLS,KC_HOME,KC_PGUP,KC_LEFT,KC_RGHT,KC_PENT,
        TG(_NUM),KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_PPLS,KC_PMNS,KC_END, KC_PGDN,KC_DOWN,KC_TRNS,MO(_MAC),
                 KC_TRNS,KC_TRNS,                KC_TRNS,                        KC_TRNS,KC_TRNS
    ),

    /* Layer 2: Mac Media
     ,---------------------------------------------------------------------------.
     |     |Dim |Brt |MCtl|AppW|Des |Dsh |Rew |Ply |Fwd |Mut |VoD |VoU |    |    |
     |---------------------------------------------------------------------------|
     |      |PrSc|PrAr|    |    |    |    |    |    |    |    |    |    |        |
     |---------------------------------------------------------------------------|
     |        |    |    |    |    |    |    |    |    |    |    |    |           |
     |---------------------------------------------------------------------------|
     |          |    |    |    |    |    |    |    |    |    |    |BASE     |    |
     `---------------------------------------------------------------------------'
             |    |     |                               |     |    |
             `-----------------------------------------------------'
    */

    [_MAC] = LAYOUT(
        KC_TRNS,KC_F14, KC_F15, KC_MCTL,APPW,   KC_F11, KC_F12, KC_MRWD,KC_MPLY,KC_MFFD,KC_MUTE,KC_VOLD,KC_VOLU,KC_TRNS,KC_TRNS,
        KC_TRNS,PSCR,   PAREA,  KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,DF(_BASE),KC_TRNS,
                KC_TRNS,KC_TRNS,                KC_TRNS,                        KC_TRNS,KC_TRNS
    ),

    /* Layer 3: Numpad
     ,---------------------------------------------------------------------------.
     |     |    |    |    |    |    |    |    |    |    |/   |*   |-   |    |    |
     |---------------------------------------------------------------------------|
     |NLck  |    |    |    |    |    |    |    |Psc |Slk |Pus |Up  |+   |        |
     |---------------------------------------------------------------------------|
     |        |    |    |    |    |    |    |    |    |4   |5   |6   |Enter      |
     |---------------------------------------------------------------------------|
     |          |    |    |    |    |    |    |    |1   |2   |3   |         |    |
     `---------------------------------------------------------------------------'
             |    |     |                               |0    |.   |
             `-----------------------------------------------------'
    */

    [_NUM] = LAYOUT(
        KC_TRNS, KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_PSLS,KC_PAST,KC_PMNS,KC_TRNS,KC_TRNS,
        KC_NUM,  KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_P7,  KC_P8,  KC_P9,  KC_PPLS,KC_TRNS,
        KC_TRNS, KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_P4,  KC_P5,  KC_P6,  KC_PENT,
        KC_TRNS, KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_P1,  KC_P2,  KC_P3,  KC_TRNS,KC_TRNS,
                 KC_TRNS,KC_TRNS,                KC_TRNS,                        KC_P0,  KC_PDOT
    )};

    /*
        Keycode for user defined macros
    */
    enum custom_keycodes {
        MAC_APP_WIN = SAFE_RANGE,
        MAC_PRNT_SCR,
        MAC_PRNT_AREA,
    };

    /*
        Key aliases for user defined macros. These are the keycodes that will be
        used in the keymap to refer to the user defined macros.
    */
    #define APPW MAC_APP_WIN
    #define PSCR MAC_PRNT_SCR
    #define PAREA MAC_PRNT_AREA

    /*
        User defined macro definitions
    */
    bool process_record_user(uint16_t keycode, keyrecord_t *record) {
        if (record->event.pressed) {
            switch (keycode) {
                case MAC_APP_WIN:
                    tap_code16(C(KC_DOWN));  // Ctrl + Down
                    return false;
                case MAC_PRNT_SCR: // Captures screen on macOS
                    tap_code16(C(S(KC_3))); // ⌘ + ⇧ + 3
                    return false;
                case MAC_PRNT_AREA: // Captures selected area on macOS
                    tap_code16(C(S(KC_4))); // ⌘ + ⇧ + 4
                    return false;
            }
        }
        return true;
    }
