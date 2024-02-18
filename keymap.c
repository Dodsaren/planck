#include QMK_KEYBOARD_H

enum planck_layers { _DEFAULT, _LAYER_1, _LAYER_2, _LAYER_3 };

#define LAYER_1 MO(_LAYER_1)
#define LAYER_2 MO(_LAYER_2)

/* clang-format off */
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* DEFAULT
 * ┌──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┐
 * │ Tab  │ Q    │ W    │ E    │ R    │ T    │ Y    │ U    │ I    │ O    │ P    │ Å    │
 * │      │      │      │      │      │      │      │      │      │      │      │      │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │ Esc  │ A    │ S    │ D    │ F    │ G    │ H    │ J    │ K    │ L    │ Ö    │ Ä    │
 * │      │      │      │      │      │      │      │      │      │      │      │      │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │ Shift│ Z    │ X    │ C    │ V    │ B    │ N    │ M    │ ;    │ :    │ -    │ Enter│
 * │      │      │      │      │      │      │      │      │ ,    │ .    │ _    │      │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │ Ctrl │      │ GUI  │ Alt  │Layer1│ Space│ Shift│Layer2│Alt Gr│ GUI  │ Caps │ Ctrl │
 * │      │      │      │      │      │      │      │      │      │      │      │      │
 * └──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┘
 */
[_DEFAULT] = LAYOUT_planck_grid(
    KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC,
    KC_ESC, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,
    KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_ENT,
    KC_LCTL, _______, KC_LGUI, KC_LALT, LAYER_1, KC_SPC, KC_RSFT, LAYER_2, KC_RALT, KC_RGUI, KC_CAPS, KC_RCTL
),

/* LAYER 1
 * ┌──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┐
 * │ ½    │ !    │ "    │ #    │ ¤    │ %    │ &    │ /    │ (    │ )    │ =    │ ?    │
 * │ §    │ 1    │ 2  @ │ 3  £ │ 4  $ │ 5  € │ 6    │ 7  { │ 8  [ │ 9  ] │ 0  } │ +  \ │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │ Esc  │      │      │      │      │Delete│ Left │ Down │ Up   │ Right│Bckspc│      │
 * │      │      │      │      │      │      │      │      │      │      │      │      │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │ Shift│      │      │      │      │      │      │      │      │      │      │ Enter│
 * │      │      │      │      │      │      │      │      │      │      │      │      │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │ Ctrl │      │ GUI  │ Alt  │ ▒▒▒▒ │ Space│ Shift│      │Alt Gr│ GUI  │ Caps │ Ctrl │
 * │      │      │      │      │ ▒▒▒▒ │      │      │      │      │      │      │      │
 * └──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┘
 */
[_LAYER_1] = LAYOUT_planck_grid(
    KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS,
    KC_ESC, _______, _______, _______, _______, KC_DEL, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_BSPC, _______,
    KC_LSFT, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_ENT,
    KC_LCTL, _______, KC_LGUI, KC_LALT, _______, KC_SPC, KC_RSFT, _______, KC_RALT, KC_RGUI, KC_CAPS, KC_RCTL
),

/* LAYER 2
 * ┌──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┐
 * │ Tab  │      │ *    │ =    │ /    │ `    │ ^    │ '    │ !    │ "    │      │Bckspc│
 * │      │      │      │      │      │      │      │      │      │      │      │      │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │ Esc  │ \    │ (    │ @    │ )    │ +    │ %    │ {    │ |    │ }    │ ?    │      │
 * │      │      │      │      │      │      │      │      │      │      │      │      │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │ Shift│      │ <    │ $    │ >    │ ´    │ ~    │ [    │ &    │ ]    │      │ Enter│
 * │      │      │      │      │      │      │      │      │      │      │      │      │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │ Ctrl │      │ GUI  │ Alt  │      │ Space│ Shift│ ▒▒▒▒ │Alt Gr│ GUI  │ Caps │ Ctrl │
 * │      │      │      │      │      │      │      │ ▒▒▒▒ │      │      │      │      │
 * └──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┘
 */
[_LAYER_2] = LAYOUT_planck_grid(
    KC_TAB, _______, LSFT(KC_NUHS), LSFT(KC_0), LSFT(KC_7), LSFT(KC_EQL), LSFT(KC_RBRC), KC_NUHS, KC_EXLM, LSFT(KC_2), _______, KC_BSPC,
    KC_ESC, RALT(KC_MINS), LSFT(KC_8), RALT(KC_2), LSFT(KC_9), KC_MINS, KC_PERC, RALT(KC_7), RALT(KC_NUBS), RALT(KC_0), LSFT(KC_MINS), _______,
    KC_LSFT, _______, KC_NUBS, RALT(KC_4), LSFT(KC_NUBS), KC_EQL, RALT(KC_EQL), RALT(KC_8), LSFT(KC_6), RALT(KC_9), _______, KC_ENT,
    KC_LCTL, _______, KC_LGUI, KC_LALT, _______, KC_SPC, KC_RSFT, _______, KC_RALT, KC_RGUI, KC_CAPS, KC_RCTL
),

/* LAYER 3
 * ┌──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┬──────┐
 * │ Tab  │ F1   │ F2   │ F3   │ F4   │      │      │ Bri -│ Bri +│      │      │      │
 * │      │      │      │      │      │      │      │      │      │      │      │      │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │ Esc  │ F5   │ F6   │ F7   │ F8   │      │ Mute │ Vol -│ Vol +│ RGB  │ RGB  │      │
 * │      │      │      │      │      │      │      │      │      │ Sat +│ Sat -│      │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │ Shift│ F9   │ F10  │ F11  │ F12  │      │ RGB  │ RGB  │ RGB  │ RGB  │ RGB  │ Enter│
 * │      │      │      │      │      │      │ Togg │ Bri -│ Bri +│ Hue +│ Hue -│      │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │ Ctrl │      │ GUI  │ Alt  │ ▒▒▒▒ │ Space│ Shift│ ▒▒▒▒ │Alt Gr│ GUI  │ Caps │ Ctrl │
 * │      │      │      │      │ ▒▒▒▒ │      │      │ ▒▒▒▒ │      │      │      │      │
 * └──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┴──────┘
 */
[_LAYER_3] = LAYOUT_planck_grid(
    KC_TAB, KC_F1, KC_F2, KC_F3, KC_F4, _______, _______, KC_BRID, KC_BRIU, _______, _______, _______,
    KC_ESC, KC_F5, KC_F6, KC_F7, KC_F8, _______, KC_MUTE, KC_VOLD, KC_VOLU, RGB_SAI, RGB_SAD, _______,
    KC_LSFT, KC_F9, KC_F10, KC_F11, KC_F12, _______, RGB_TOG, RGB_VAD, RGB_VAI, RGB_HUI, RGB_HUD, KC_ENT,
    KC_LCTL, _______, KC_LGUI, KC_LALT, _______, KC_SPC, KC_RSFT, _______, KC_RALT, KC_RGUI, KC_CAPS, KC_RCTL
),

};
/* clang-format on */

layer_state_t layer_state_set_user(layer_state_t state) {
    return update_tri_layer_state(state, _LAYER_1, _LAYER_2, _LAYER_3);
}
