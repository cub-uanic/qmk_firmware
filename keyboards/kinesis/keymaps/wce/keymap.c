// Copyright 2024 cub@uanic
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layer_names {
    _BASE,
    _UNCONV,
    _FKEYS,
    _MOUSE,
    _NUMPAD,
    _MACRO,
    _GAMES
};

enum custom_keycodes {
    ___CK___ = SAFE_RANGE,
    CK_DSFT,        // Double-Shift key (for IntelliJ IDEA)
    CK_PSW1,
    CK_PSW2,
    CK_PSW3,
    CK_PSW4,
    CK_PSW5,
    CK_PSW6,
    CK_PSW7,
    CK_PSW8,
    CK_PSW9,
};

#define DELAY_SHORT     500
#define DELAY_LONG      1500


// Useful aliases
#define NXT_LYR         _______
#define xxxxxxx         XXXXXXX
#define x_____x         XXXXXXX
#define ___x___         XXXXXXX
#define MACLOCK         LGUI(LCTL(KC_Q))

// Actions on Layer 0
#define A0_FN10         LSFT_T(KC_TAB)
#define A0_FN11         RSFT_T(KC_QUOT)
#define A0_FN12         LALT_T(KC_NO)
#define A0_FN13         RALT_T(KC_PGDN)
#define A0_FN14         LCTL_T(KC_BSPC)
#define A0_FN15         LSFT_T(KC_DEL)
#define A0_FN16         LGUI_T(KC_ESC)
#define A0_FN17         RGUI_T(KC_INS)
#define A0_FN18         RSFT_T(KC_ENT)
#define A0_FN19         RCTL_T(KC_SPC)
#define A0_FN20         CK_DSFT
#define A0_FN21         LT(_UNCONV, KC_A)
#define A0_FN22         LT(_FKEYS,  KC_S)
#define A0_FN23         LT(_MOUSE,  KC_D)
#define A0_FN24         LT(_NUMPAD, KC_F)
#define A0_FN25         LT(_MACRO,  KC_5)
#define A0_FN26         LT(_MACRO,  KC_6)
#define A0_FN27         TO(_GAMES)

#define A0_FN29         MACLOCK
#define A0_FN30         QK_BOOT
#define A0_FN31         TO(_BASE)

// Actions on Layer 1
#define A1_FN01         LSFT(KC_MINS)
#define A1_FN02         LSFT(KC_EQL)
#define A1_FN03         LSFT(KC_P)
#define A1_FN04         LSFT(KC_LBRC)
#define A1_FN05         LSFT(KC_RBRC)
#define A1_FN06         LSFT(KC_COMM)
#define A1_FN07         LSFT(KC_DOT)
#define A1_FN08         LSFT(KC_BSLS)


// Actions on Layer 5
#define A5_FN01         CK_PSW1
#define A5_FN02         CK_PSW2
#define A5_FN03         CK_PSW3
#define A5_FN04         CK_PSW4
#define A5_FN05         TO(_GAMES)


#define LAYOUT_SIMPLE LAYOUT
/*
KC_ESC,KC_F1,KC_F2,KC_F3,KC_F4,KC_F5,KC_F6,KC_F7,KC_F8,                 KC_F9,KC_F10,KC_F11,KC_F12,KC_PSCR,KC_SCRL,KC_PAUS,TO(_KEYPAD),QK_BOOT,
KC_MINS,KC_1,KC_2,KC_3,KC_4,KC_5,                                       KC_6,KC_7,KC_8,KC_9,KC_0,KC_EQL,
KC_TAB,KC_Q,KC_W,KC_E,KC_R,KC_T,                                        KC_Y,KC_U,KC_I,KC_O,KC_P,KC_BSLS,
KC_DEL,KC_A,KC_S,KC_D,KC_F,KC_G,                                        KC_H,KC_J,KC_K,KC_L,KC_SCLN,KC_QUOT,
KC_LSFT,KC_Z,KC_X,KC_C,KC_V,KC_B,                                       KC_N,KC_M,KC_COMM,KC_DOT,KC_SLSH,SC_SENT,
KC_GRV,KC_LGUI,KC_ESC,MO(_NUMPAD),                                      KC_LBRC,KC_RBRC,KC_NO,KC_NO,
                          LALT(KC_TAB),KC_LALT,                   KC_RALT,TO(_NUMPAD),
                          KC_LSFT,                                KC_RSFT,
                          KC_BSPC,MO(_KEYPAD),KC_LCTL,            KC_RCTL,MO(_KEYPAD),KC_SPC
),
*/


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_BASE] = LAYOUT_SIMPLE( // Layer 0 : default, actual on Mac with WCE layout (optimized for Java)
/*
                        ESC  !    @    #    {    }                      [    ]    *    (    )    =+
                        DSFT Q    D    R    W    B                      J    F    U    P    ;:   '"
                        TAB  A    S    H    T    G                      Y    N    E    O    I    -_
                        GRV  Z    X    M    C    V                      K    L    ,<   .>   /?   \|
*/
    KC_ESC , KC_1   , KC_2   , KC_3   , KC_4   , A0_FN25,          A0_FN26, KC_7   , KC_8   , KC_9   , KC_0   , KC_EQL ,
    A0_FN20, KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   ,          KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_LBRC,
    A0_FN10, A0_FN21, A0_FN22, A0_FN23, A0_FN24, KC_G   ,          KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, A0_FN11,
    KC_GRV , KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   ,          KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_RBRC,
             KC_CAPS, KC_SLCK, KC_HOME, KC_END ,                            KC_LEFT, KC_UP  , KC_DOWN, KC_RGHT,
                                           KC_NO  , A0_FN31,    KC_PGUP, KC_NO  ,
                                                    A0_FN12,    A0_FN13,
                                  A0_FN14, A0_FN15, A0_FN16,    A0_FN17, A0_FN18, A0_FN19
  ),


  [_UNCONV] = LAYOUT_SIMPLE( // Layer1: unconvenient keys on right hand, actual on Mac (optimized for Java / IntelliJ IDEA)
/*
                    NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,                  FN4 ,MINS,8   ,9   ,0   ,FN7 ,      //   | ^ * ( ) %
                    NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,                  BSLS,QUOT,FN6 ,4   ,5   ,2   ,      //   & - > { } @
                    NO  ,TRNS,NO  ,NO  ,NO  ,NO  ,                  LBRC,1   ,FN0 ,FN3 ,FN2 ,P   ,      //   ' ! $ " : ;
                    NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,                  3   ,6   ,FN5 ,FN6 ,7   ,RBRC,      //   # [ < > ] \
*/
    ___x___, ___x___, ___x___, ___x___, ___x___, ___x___,          A1_FN05, KC_MINS, KC_8   , KC_9   , KC_0   , A1_FN08,
    ___x___, ___x___, ___x___, ___x___, ___x___, ___x___,          KC_BSLS, KC_QUOT, A1_FN07, KC_4   , KC_5   , KC_2   ,
    ___x___, NXT_LYR, ___x___, ___x___, ___x___, ___x___,          KC_LBRC, KC_1   , A1_FN01, A1_FN04, A1_FN03, KC_P   ,
    ___x___, ___x___, ___x___, ___x___, ___x___, ___x___,          KC_3   , KC_6   , A1_FN06, A1_FN07, KC_7   , KC_RBRC,
             ___x___, ___x___, ___x___, ___x___,                            ___x___, ___x___, ___x___, ___x___,
                                           _______, _______,    _______, _______,
                                                    _______,    _______,
                                  A0_FN29, _______, _______,    _______, _______, _______
  ),


  [_FKEYS] = LAYOUT_SIMPLE( // Layer2: F-keys + PgUp/PgDn on right hand
    A0_FN30, ___x___, ___x___, ___x___, ___x___, ___x___,          ___x___, ___x___, ___x___, ___x___, ___x___, ___x___,
    ___x___, ___x___, ___x___, ___x___, ___x___, ___x___,          ___x___, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_PGUP,
    ___x___, ___x___, NXT_LYR, ___x___, ___x___, ___x___,          ___x___, KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_PGDN,
    ___x___, ___x___, ___x___, ___x___, ___x___, ___x___,          ___x___, KC_F9  , KC_F10 , KC_F11 , KC_F12 , KC_APP ,
             ___x___, ___x___, ___x___, ___x___,                            KC_HOME, KC_END , KC_PGDN, KC_PGUP,
                                           _______, _______,    _______, _______,
                                                    _______,    _______,
                                  _______, _______, _______,    _______, _______, _______
  ),


  [_MOUSE] = LAYOUT_SIMPLE( // Layer3: mouse and navigation
    ___x___, ___x___, ___x___, ___x___, ___x___, ___x___,          KC_MPLY,KC_MPRV,KC_MNXT,KC_VOLD,KC_VOLU,KC_MUTE,
    ___x___, ___x___, ___x___, ___x___, KC_ACL0, ___x___,          KC_BTN2,KC_WH_L,KC_WH_U,KC_WH_D,KC_WH_R,KC_PGUP,
    ___x___, ___x___, ___x___, NXT_LYR, KC_ACL1, ___x___,          KC_BTN1,KC_MS_L,KC_MS_U,KC_MS_D,KC_MS_R,KC_PGDN,
    ___x___, ___x___, ___x___, ___x___, KC_ACL2, ___x___,          KC_BTN3,KC_HOME,KC_END ,KC_DEL ,KC_INS ,KC_NO  ,
             ___x___, ___x___, ___x___, ___x___,                            ___x___, ___x___, ___x___, ___x___,
                                           _______, _______,    _______, _______,
                                                    _______,    _______,
                                  _______, _______, _______,    _______, _______, _______
  ),


  [_NUMPAD] = LAYOUT_SIMPLE( // Layer4: numpad
    ___x___, ___x___, ___x___, ___x___, ___x___, ___x___,          KC_NLCK,KC_PSLS,KC_PAST,KC_PAST,KC_PMNS,KC_BSPC,
    ___x___, ___x___, ___x___, ___x___, ___x___, ___x___,          A1_FN03,KC_P7  ,KC_P8  ,KC_P9  ,KC_PMNS,KC_PGUP,
    ___x___, ___x___, ___x___, ___x___, NXT_LYR, ___x___,          A1_FN03,KC_P4  ,KC_P5  ,KC_P6  ,KC_PPLS,KC_PGDN,
    ___x___, ___x___, ___x___, ___x___, ___x___, ___x___,          ___x___,KC_P1  ,KC_P2  ,KC_P3  ,KC_PPLS,KC_PENT,
             ___x___, ___x___, ___x___, ___x___,                           KC_P0  ,KC_PDOT,KC_SLSH,KC_PENT,
                                           _______, _______,    _______, _______,
                                                    _______,    _______,
                                  _______, _______, _______,    _______, _______, _______
  ),


  [_MACRO] = LAYOUT_SIMPLE( // Layer5: Macros, media and full F-keys
    A5_FN01, A5_FN05, ___x___, ___x___, ___x___, NXT_LYR,          NXT_LYR, KC_MUTE, KC_VOLD, KC_VOLU, ___x___, A5_FN03,
    A5_FN02, KC_F1  , KC_F2  , KC_F3  , KC_F4  , ___x___,          ___x___, KC_F13 , KC_F14 , KC_F15 , KC_F16 , A5_FN04,
    ___x___, KC_F5  , KC_F6  , KC_F7  , KC_F8  , ___x___,          ___x___, KC_F17 , KC_F18 , KC_F19 , KC_F20 , ___x___,
    ___x___, KC_F9  , KC_F10 , KC_F11 , KC_F12 , ___x___,          ___x___, KC_F21 , KC_F22 , KC_F23 , KC_F24 , ___x___,
             ___x___, ___x___, ___x___, ___x___,                            ___x___, ___x___, ___x___, ___x___,
                                           _______, _______,    _______, A0_FN27,
                                                    _______,    _______,
                                  _______, _______, A0_FN29,    _______, _______, A0_FN30
  ),


  [_GAMES] = LAYOUT_SIMPLE( // Layer6: games
    _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______,
             _______, _______, _______, _______,                            _______, _______, _______, _______,
                                           _______, _______,    _______, _______,
                                                    _______,    _______,
                                  _______, _______, _______,    _______, _______, _______
  ),







/*

    KEYMAP(  // Layer6 : games
    //                ;    !    #    {    }                      [    ]    *    (    )    =
                 ESC ,1   ,2   ,3   ,4   ,5   ,                  6   ,7   ,8   ,9   ,0   ,EQL ,
                 TAB ,Q   ,W   ,E   ,R   ,T   ,                  Y   ,U   ,I   ,O   ,P   ,BSPC,
                 LSFT,A   ,S   ,D   ,F   ,G   ,                  H   ,J   ,K   ,L   ,SCLN,RSFT,
                 LSFT,Z   ,X   ,C   ,V   ,B   ,                  N   ,M   ,COMM,DOT ,SLSH,BSLS,
                      CAPS,SLCK,HOME,END ,                            LEFT,UP  ,DOWN,RGHT,
                                          NO  ,FN31,        PGUP,TRNS,
                                               LALT,        RALT,
                                     LCTL,DEL ,ESC ,        RGUI,ENT ,SPC
    ),



*/

};



/*
// see https://github.com/alvicstep/qmk_firmware/blob/master/keyboards/kinesis/keymaps/xyverz/keymap.c


// example of custom keycodes
enum custom_keycodes { DVORAK = SAFE_RANGE, QWERTY, COLEMAK, KEYPAD };

// Aliases to make the keymap more uniform
#define GUI_END GUI_T(KC_END)
#define KPD_ENT LT(_KEYPAD, KC_ENT)
#define MACLOCK LGUI(LCTL(KC_Q))


in layout:

[_DVORAK] = LAYOUT (
           // Left Hand
           ......
           // Right Hand
           KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_PSCR, KC_SCRL, KC_PAUS, TG(_KEYPAD),  QK_BOOT,
           ......

[_KEYPAD] = LAYOUT (
           // Left Hand
           _______, _______, _______, _______, _______, _______, _______, _______, _______,
           KC_PWR,  _______, _______, _______, _______, _______,
           KC_SLEP, _______, _______, _______, _______, _______,
           KC_WAKE, _______, KC_MUTE, KC_VOLD, KC_VOLU, _______,
           _______, KC_MSTP, KC_MPRV, KC_MPLY, KC_MNXT, KC_MSEL,
                    _______, QWERTY,  COLEMAK, DVORAK,
           // Left Thumb
                    _______, _______,
                             _______,
           _______, _______, MACLOCK,


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
            case DVORAK:
                set_single_persistent_default_layer(_DVORAK);
                return false;
            case QWERTY:
                set_single_persistent_default_layer(_QWERTY);
                return false;
            case COLEMAK:
                set_single_persistent_default_layer(_COLEMAK);
                return false;
        }
    }
    return true;
};

*/


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case CK_DSFT:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_LSFT)SS_TAP(X_LSFT));
            }
            return false;

        case CK_PSW1:
            if (record->event.pressed) {
                SEND_STRING("cubicrubic\n");
            }
            return false;

        case CK_PSW2:
            if (record->event.pressed) {
                SEND_STRING("cub_713\n");
            }
            return false;

        case CK_PSW3:
            if (record->event.pressed) {
                SEND_STRING("vit;veit;v\n");
            }
            return false;

        case CK_PSW4:
            if (record->event.pressed) {
                SEND_STRING("vit\"" SS_DOWN(X_LSFT) "713" SS_UP(X_LSFT)"\n");
            }
            return false;

        case MACLOCK:
            if (record->event.pressed) {
                SEND_STRING(
                        SS_DELAY(DELAY_LONG)    SS_LGUI(SS_LCTL("q"))
                        SS_DELAY(DELAY_SHORT)   SS_TAP(X_ESC)
                        SS_DELAY(DELAY_SHORT)   SS_TAP(X_ESC)
                        SS_DELAY(DELAY_SHORT)   SS_TAP(X_ESC));
            }
            return false;

    }
    return true;
};


/****************************************************************************************************
*
* Keymap: Default Layer in Qwerty
*
* ,---------------------------------------------------------------------------------------------------.
* | Esc | F1  | F2  | F3  | F4  | F5  | F6  | F8  | F9  | F10 | F12 | PSCR | SLCK | PAUS | FN0 | BOOT |
* `-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+------+------+------+-----+------'
* ,------------------------------------------.      ,------------------------------------------.
* | =+    |  1!  |  2@  |  3#  |  4$  |  5%  |      |  6^  |  7&  |  8*  |  9(  |  0)  | -_    |
* |-------+------+------+------+------+------|      +------+------+------+------+------+-------|
* | Tab   |   Q  |   W  |   E  |   R  |   T  |      |   Y  |   U  |   I  |   O  |   P  | \|    |
* |-------+------+------+------+------+------|      |------+------+------+------+------+-------|
* | Caps  |   A  |   S  |   D  |   F  |   G  |      |   H  |   J  |   K  |   L  |  ;:  | '"    |
* |-------+------+------+------+------+------|      |------+------+------+------+------+-------|
* | Shift |   Z  |   X  |   C  |   V  |   B  |      |   N  |   M  |  ,.  |  .>  |  /?  | Shift |
* `-------+------+------+------+------+-------      `------+------+------+------+------+-------'
*         | `~   | INS  | Left | Right|                    | Up   | Down |  [{  |  ]}  |
*         `---------------------------'                    `---------------------------'
*                               ,-------------.    ,-------------.
*                               | Ctrl | Alt  |    | Gui  | Ctrl |
*                        ,------|------|------|    |------+------+------.
*                        |      |      | Home |    | PgUp |      |      |
*                        | BkSp | Del  |------|    |------|Return| Space|
*                        |      |      | End  |    | PgDn |      |      |
*                        `--------------------'    `--------------------'
*/

/****************************************************************************************************
*
* Templates to copy from
*

  [_BASE_NO] = LAYOUT( // Layer 0 : default
    KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,          KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,
    KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,          KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,
    KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,          KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,
    KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,          KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,
             KC_NO  , KC_NO  , KC_NO  , KC_NO  ,                            KC_NO  , KC_NO  , KC_NO  , KC_NO  ,
                                           KC_NO  , KC_NO  ,    KC_NO  , KC_NO  ,
                                                    KC_NO  ,    KC_NO  ,
                                  KC_NO  , KC_NO  , KC_NO  ,    KC_NO  , KC_NO  , KC_NO
  ),
  [_BASE_TRNS] = LAYOUT( // Layer 0 : default
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
             KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                           KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS,
                                                    KC_TRNS,    KC_TRNS,
                                  KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS
  ),
  [_BASE________] = LAYOUT( // Layer 0 : default
    _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______,
             _______, _______, _______, _______,                            _______, _______, _______, _______,
                                           _______, _______,    _______, _______,
                                                    _______,    _______,
                                  _______, _______, _______,    _______, _______, _______
  ),

*/

