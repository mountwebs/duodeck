#include QMK_KEYBOARD_H

enum layer_names {
    _BASE,
    _NUM,
    _SYM,
    _MOU
};

#define NUM MO(_NUM)
#define SYM MO(_SYM)
#define MOU MO(_MOU)

// [BASE] Layout (Ortho 4x12)
// ┌──────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬──────┐
// │ Esc  │ Q  │ W  │ E  │ R  │ T  │ Y  │ U  │ I  │ O  │ P  │  Å   │
// ├──────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼──────┤
// │ Tab  │ A  │ S  │ D  │ F  │ G  │ H  │ J  │ K  │ L  │ Ø  │  Æ   │
// ├──────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼──────┤
// │ Shift│ Z  │ X  │ C  │ V  │ B  │ N  │ M  │ ,  │ .  │ ↑  │ Enter│
// ├──────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼──────┤
// │ MOU  │Ctrl│Alt │Gui │Sp_ │NUM │SYM │Re_ │ –  │ ←  │ ↓  │  →   │
// └──────┴────┴────┴────┴────┴────┴────┴────┴────┴────┴────┴──────┘

// [NUM] Layout (Ortho 4x12)
// ┌──────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬──────┐
// | §    | !  | "  | #  | $  | %  | &  | /  | (  | )  | =  | ?    |
// | '    │ 1  │ 2  │ 3  │ 4  │ 5  │ 6  │ 7  │ 8  │ 9  │ 0  │ +    │
// ├──────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼──────┤
// |      |    |    |    |    |    |    |    |    │    │    │      │
// │      │    │    │    │    │    │    │    │    │    │    │      │
// ├──────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼──────┤
// │      │    │    │    │    │    │    │ >  | *  | ~  | `  |      │
// │      │    │    │    │    │    │    │ <  │ @  │ ¨  │ ´  │      |
// ├──────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼──────┤
// │      │    │    │    │    │    │    │    │    │    │    │      │
// └──────┴────┴────┴────┴────┴────┴────┴────┴────┴────┴────┴──────┘

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_ortho_4x12(
		KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LEFT_BRACKET, 
		KC_TAB, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, 
		KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_UP, KC_ENT, 
		MOU, KC_LCTL, KC_LALT, KC_LGUI, KC_SPC, NUM, SYM, KC_BACKSPACE, KC_SLSH, KC_LEFT, KC_DOWN, KC_RGHT
    ),
    
    [_NUM] = LAYOUT_ortho_4x12(
		KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MINS, KC_EQL, KC_LBRC, KC_RBRC, KC_SCLN, KC_QUOT, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_GRV, KC_BACKSLASH, KC_RIGHT_BRACKET, KC_EQUAL, KC_TRNS,
		KC_TRNS, KC_LCTL, KC_LALT, KC_LGUI, KC_TRNS, KC_SPC, KC_SPC, SYM, KC_SLSH, KC_TRNS, KC_TRNS, KC_TRNS
    ),
    
    [_SYM] = LAYOUT_ortho_4x12(
		KC_TILD, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC, 
		KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_COLN, KC_DQUO, 
		KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_TRNS, KC_PIPE, KC_LT, KC_GT, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_LCTL, KC_LALT, KC_LGUI, NUM, KC_TRNS, KC_TRNS, KC_TRNS, KC_QUES, KC_TRNS, KC_TRNS, KC_TRNS
    ),

    [_MOU] = LAYOUT_ortho_4x12(
		KC_TRNS, KC_TRNS, KC_MS_U, KC_TRNS, KC_TRNS, KC_TRNS, KC_WH_U, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_BACKSPACE, 
		KC_TRNS, KC_MS_L, KC_MS_D, KC_MS_R, KC_TRNS, KC_WH_L, KC_WH_D, KC_WH_R, KC_BTN1, KC_BTN2, KC_BTN3, KC_TRNS, 
		KC_LSFT, KC_TRNS, KC_TRNS, KC_TRNS, KC_ACL0, KC_ACL1, KC_ACL2, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_LCTL, KC_LALT, KC_LGUI, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    )
};