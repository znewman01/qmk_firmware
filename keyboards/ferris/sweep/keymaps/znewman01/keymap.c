// this is the style you want to emulate.
// This is the canonical layout file for the Quantum project. If you want to add another keyboard,

#include QMK_KEYBOARD_H

// COMBO MODS: use combos on the home row for ctrl/alt/gui.
const uint16_t PROGMEM lh_as__[] = {KC_A, KC_S, COMBO_END};
const uint16_t PROGMEM lh__sd_[] = {KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM lh___df[] = {KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM lh_asd_[] = {KC_A, KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM lh_a__f[] = {KC_A, KC_F, COMBO_END};
const uint16_t PROGMEM lh__sdf[] = {KC_S, KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM lh_asdf[] = {KC_A, KC_S, KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM rh_jk__[] = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM rh__kl_[] = {KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM rh___ls[] = {KC_L, KC_SEMICOLON, COMBO_END};
const uint16_t PROGMEM rh_jkl_[] = {KC_J, KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM rh_j__s[] = {KC_J, KC_SEMICOLON, COMBO_END};
const uint16_t PROGMEM rh__kls[] = {KC_K, KC_L, KC_SEMICOLON, COMBO_END};
const uint16_t PROGMEM rh_jkls[] = {KC_J, KC_K, KC_L, KC_SEMICOLON, COMBO_END};
// Boot magic combo
const uint16_t PROGMEM lh_qwer[] = {KC_Q, KC_W, KC_E, KC_R, COMBO_END};

// clang-format off
combo_t key_combos[] = {
    COMBO(lh_as__, KC_LGUI),
    COMBO(lh__sd_, KC_LALT),
    COMBO(lh___df, KC_LCTL),
    COMBO(lh_asd_, G(KC_LALT)),
    COMBO(lh_a__f, G(KC_LCTL)),
    COMBO(lh__sdf, C(KC_LALT)),
    COMBO(lh_asdf, G(A(KC_LCTL))),
    COMBO(rh_jk__, KC_LCTL),
    COMBO(rh__kl_, KC_LALT),
    COMBO(rh___ls, KC_LGUI),
    COMBO(rh_jkl_, C(KC_LALT)),
    COMBO(rh_j__s, G(KC_LCTL)),
    COMBO(rh__kls, G(KC_LALT)),
    COMBO(rh_jkls, G(A(KC_LCTL))),
    COMBO(lh_qwer, QK_BOOT),
};
uint16_t COMBO_LEN = 15;
// clang-format on

////////////////////////////////////////////////////////////////////////////////
// Main keymap
////////////////////////////////////////////////////////////////////////////////
#define L1_ESC LT(1, KC_ESC)
#define L2_BSPC LT(2, KC_BSPC)
#define ALT_TAB A(KC_TAB)
#define CTL_TAB C(KC_TAB)
#define SFT_TAB S(KC_TAB)
#define CS_TAB C(S(KC_TAB))

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // Base layer
  [0] = LAYOUT(
    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,            KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,            KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,
    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,            KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,
                                L1_ESC, KC_LSFT,       KC_SPC, L2_BSPC
  ),
  // Numbers and nav
  [1] = LAYOUT(
    KC_TAB,  KC_1,    KC_2,    KC_3,    SFT_TAB,         KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_DEL,
    ALT_TAB, KC_4,    KC_5,    KC_6,    KC_0,            KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______,
    CTL_TAB, KC_7,    KC_8,    KC_9,    CS_TAB,          KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_ENT,
                                 XXXXXXX, _______,     _______, MO(3)
  ),
  // Symbols
  [2] = LAYOUT(
    KC_TILD, KC_EXLM, KC_AT,   KC_HASH, _______,         KC_EQL,  KC_LCBR, KC_LBRC, KC_RBRC, KC_BSLS,
     KC_GRV, KC_DLR,  KC_PERC, KC_CIRC, _______,         KC_MINS, KC_RCBR, KC_LPRN, KC_RPRN, KC_DQUO,
    _______, KC_AMPR, KC_ASTR, _______, _______,         KC_PIPE, _______, KC_LT,   KC_GT,   KC_QUOT,
                                   MO(3), _______,     _______, XXXXXXX
  ),
  [3] = LAYOUT(
    _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______,
                                 XXXXXXX, _______,    _______, XXXXXXX
  ),
  // Blank
  [4] = LAYOUT(
    _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______,
                                 _______, _______,    _______, _______
  ),
  // To incorporate:
  // - macOS printscreen shortcuts GUI+SHIFT+4
};
// clang-format on
