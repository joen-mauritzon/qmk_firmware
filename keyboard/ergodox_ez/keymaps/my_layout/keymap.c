#include "ergodox_ez.h"
#include "debug.h"
#include "action_layer.h"
#include "keymap_extras/keymap_french.h"
#include "keymap_extras/keymap_neo2.h"
#include "keymap_extras/keymap_uk.h"
#include "keymap_extras/keymap_colemak.h"
#include "keymap_extras/keymap_french_osx.h"
#include "keymap_extras/keymap_nordic.h"
#include "keymap_extras/keymap_dvorak.h"
#include "keymap_extras/keymap_german.h"
#include "keymap_extras/keymap_norwegian.c"
#include "keymap_extras/keymap_fr_ch.h"
#include "keymap_extras/keymap_german_osx.h"
#include "keymap_extras/keymap_spanish.h"
#include "keymap_extras/keymap_bepo.h"


/**
* This layout was generated using the ErgodoxLayoutGenerator (ELG). You can download it from https://github.com/sboesebeck/ErgodoxLayoutGenerator/releases
* documentation about it can be found here https://boesebeck.name/2016/04/16/ergodoxlayoutgenerator-documentation/
* Thanks to the team of Erez Zukerman for building the great Ergodox-EZ!
*
* use at own risk!
**/

#define BASE 0
#define SYMB 1
#define MDIA 2

    //macro name is number 0
#define M_MOD_KC_NO 1


//Layout keymap.c generated with ErgodoxLayoutGenerator V1.0BETA1
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/**
* Layer: BASE
* /------//------//------//------//------//------//------/           /------//------//------//------//------//------//------/          
* | =     | 1     | 2     | 3     | 4     | 5     | 6     |          | 7     | 8     | 9     | 0     | -     | \     | `     |         
* |       |       |       |       |       |       |       |          |       |       |       |       |       |       |       |         
* /------//------//------//------//------//------//------/           /------//------//------//------//------//------//------/          
* | TAB   | Q     | W     | E     | R     | T     | 1     |          | 1     | Y     | U     | I     | O     | P     | [     |         
* |       |       |       |       |       |       |       |          |       |       |       |       |       |       |       |         
* /------//------//------//------//------//------/\------\           \------\/------//------//------//------//------//------/          
* | ESC   | A     | S     | D     | F     | G     |                          | H     | J     | K     | L     | ;     | '     |         
* | Ctrl  |       |       |       |       |       |                          |       |       |       |       |       |       |         
* /------//------//------//------//------//------//------/           /------//------//------//------//------//------//------/          
* | Shift | Z     | X     | C     | V     | B     | NO    |          | Ctrl+B| N     | M     | ,     | .     | /     | Shift |         
* |       |       |       |       |       |       | Meh   |          |       |       |       |       |       | Ctrl  |       |         
* \------\\------\\------\\------\\------\\------\\------\           \------\\------\\------\\------\\------\\------\\------\          
*                                                                                                                                      
*                                                                                                                                      
*                 /------//------//------//------//------/                                   /------//------//------//------//------/  
*                 | `     | '     | LEFT  | RIGHT | Alt   |                                  | MDIA  | DOWN  | [     | ]     | MDIA  | 
*                 | SYMB  |       |       |       |       |                                  |       |       |       |       |       | 
*                 \------\\------\\------\\------\/------//------/   /------//------/        \------\\------\\------\\------\\------\  
*                                                 | CMD+C | CMD+V |  | Alt   | ESC   |                                                 
*                                                 |       |       |  |       | Ctrl  |                                                 
*                                                 \------\/------/   /------/\------\                                                  
*                                                         | HOME  |  | PGUP  |                                                         
*                                                         |       |  |       |                                                         
*                                         /------//------//------/   /------//------//------/                                          
*                                         | SPC   | BSPC  | END   |  | PGDN  | Cmd   | ENT   |                                         
*                                         |       |       | CMD   |  |       |       | MDIA  |                                         
*                                         \------\\------\\------\   \------\\------\\------\                                          
*                                                                                                                                      
* 
**/
[BASE]=KEYMAP(
//left half
    KC_EQL, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, 
    KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, TG(1), 
    CTL_T(KC_ESC), KC_A, KC_S, KC_D, KC_F, KC_G, 
    KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, MEH_T(KC_NO), 
                  LT(SYMB,KC_GRV), KC_QUOT, KC_LEFT, KC_RIGHT, KC_LALT, 
                                              LGUI(DV_C), LGUI(DV_V), 
                                                     KC_HOME, 
                                       KC_SPC, KC_BSPC, GUI_T(KC_END), 
    //right half
    KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_BSLS, KC_GRV, 
    TG(1), KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, 
           KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, 
    LCTL(DV_B), KC_N, KC_M, KC_COMM, KC_DOT, CTL_T(KC_SLSH), KC_RSFT, 
                         MO(MDIA), KC_DOWN, KC_LBRC, KC_RBRC, MO(MDIA), 
    KC_LALT, CTL_T(KC_ESC), 
    KC_PGUP, 
    KC_PGDN, KC_LGUI, LT(MDIA,KC_ENT)),
/**
* Layer: SYMB
* /----//----//----//----//----//----//----/         /----//----//----//----//----//----//----/        
* |     | F1  | F2  | F3  | F4  | F5  |     |        |     | F6  | F7  | F8  | F9  | F10 | F11 |       
* |     |     |     |     |     |     |     |        |     |     |     |     |     |     |     |       
* /----//----//----//----//----//----//----/         /----//----//----//----//----//----//----/        
* |     | !   | @   | {   | }   | |   |     |        |     | UP  | 7   | 8   | 9   | *   | F12 |       
* |     |     |     |     |     |     |     |        |     |     |     |     |     |     |     |       
* /----//----//----//----//----//----/\----\         \----\/----//----//----//----//----//----/        
* |     | #   | $   | (   | )   | `   |                    | DOWN| 4   | 5   | 6   | +   |     |       
* |     |     |     |     |     |     |                    |     |     |     |     |     |     |       
* /----//----//----//----//----//----//----/         /----//----//----//----//----//----//----/        
* |     | %   | °   | [   | ]   | ~   |     |        |     | &   | 1   | 2   | 3   | \   |     |       
* |     |     |     |     |     |     |     |        |     |     |     |     |     |     |     |       
* \----\\----\\----\\----\\----\\----\\----\         \----\\----\\----\\----\\----\\----\\----\        
*                                                                                                      
*                                                                                                      
*             /----//----//----//----//----/                           /----//----//----//----//----/  
*             |     |     |     |     |     |                          | 0   | E   | 0   | =   |     | 
*             |     |     |     |     |     |                          |     |     |     |     |     | 
*             \----\\----\\----\\----\/----//----/   /----//----/      \----\\----\\----\\----\\----\  
*                                     |     |     |  |     |     |                                     
*                                     |     |     |  |     |     |                                     
*                                     \----\/----/   /----/\----\                                      
*                                           |     |  |     |                                           
*                                           |     |  |     |                                           
*                               /----//----//----/   /----//----//----/                                
*                               |     |     |     |  |     |     |     |                               
*                               |     |     |     |  |     |     |     |                               
*                               \----\\----\\----\   \----\\----\\----\                                
*                                                                                                      
* 
**/
[SYMB]=KEYMAP(
//left half
    KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_TRNS, 
    KC_TRNS, KC_EXLM, KC_AT, KC_LCBR, KC_RCBR, KC_PIPE, KC_TRNS, 
    KC_TRNS, KC_HASH, KC_DLR, KC_LPRN, KC_RPRN, KC_GRV, 
    KC_TRNS, KC_PERC, KC_CIRC, KC_LBRC, KC_RBRC, KC_TILD, KC_TRNS, 
                  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
                                              KC_TRNS, KC_TRNS, 
                                                     KC_TRNS, 
                                       KC_TRNS, KC_TRNS, KC_TRNS, 
    //right half
    KC_TRNS, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, 
    KC_TRNS, KC_UP, KC_KP_7, KC_KP_8, KC_KP_9, KC_ASTR, KC_F12, 
           KC_DOWN, KC_KP_4, KC_KP_5, KC_KP_6, KC_PLUS, KC_TRNS, 
    KC_TRNS, KC_AMPR, KC_KP_1, KC_KP_2, KC_KP_3, KC_BSLS, KC_TRNS, 
                         KC_KP_0, KC_E, KC_0, KC_EQL, KC_TRNS, 
    KC_TRNS, KC_TRNS, 
    KC_TRNS, 
    KC_TRNS, KC_TRNS, KC_TRNS),
/**
* Layer: MDIA
* /-----//-----//-----//-----//-----//-----//-----/          /-----//-----//-----//-----//-----//-----//-----/         
* |      |      |      |      |      |      |      |         |      |      |      |      |      | SLEEP| POWER|        
* |      |      |      |      |      |      |      |         |      |      |      |      |      |      |      |        
* /-----//-----//-----//-----//-----//-----//-----/          /-----//-----//-----//-----//-----//-----//-----/         
* |      |      |      | U    |      |      |      |         |      |      |      |      |      | RIGHT|      |        
* |      |      |      |      |      |      |      |         |      |      |      |      |      |      |      |        
* /-----//-----//-----//-----//-----//-----/\-----\          \-----\/-----//-----//-----//-----//-----//-----/         
* |      |      | L    | D    | R    |      |                       |      | LEFT |      |      |      |      |        
* |      |      |      |      |      |      |                       |      |      |      |      |      |      |        
* /-----//-----//-----//-----//-----//-----//-----/          /-----//-----//-----//-----//-----//-----//-----/         
* |      |      |      | DOWN | UP   |      |      |         |      |      | VOLD | VOLU | MUTE | MPLY |      |        
* |      |      |      |      |      |      |      |         |      |      |      |      |      |      |      |        
* \-----\\-----\\-----\\-----\\-----\\-----\\-----\          \-----\\-----\\-----\\-----\\-----\\-----\\-----\         
*                                                                                                                      
*                                                                                                                      
*               /-----//-----//-----//-----//-----/                               /-----//-----//-----//-----//-----/  
*               |      |      |      | BTN1 | BTN2 |                              |      |      |      |      |      | 
*               |      |      |      |      |      |                              |      |      |      |      |      | 
*               \-----\\-----\\-----\\-----\/-----//-----/   /-----//-----/       \-----\\-----\\-----\\-----\\-----\  
*                                           |      |      |  |      |      |                                           
*                                           |      |      |  |      |      |                                           
*                                           \-----\/-----/   /-----/\-----\                                            
*                                                  |      |  |      |                                                  
*                                                  |      |  |      |                                                  
*                                    /-----//-----//-----/   /-----//-----//-----/                                     
*                                    |      |      |      |  |      |      |      |                                    
*                                    |      |      |      |  |      |      |      |                                    
*                                    \-----\\-----\\-----\   \-----\\-----\\-----\                                     
*                                                                                                                      
* 
**/
[MDIA]=KEYMAP(
//left half
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
    KC_TRNS, KC_TRNS, KC_TRNS, KC_MS_U, KC_TRNS, KC_TRNS, KC_TRNS, 
    KC_TRNS, KC_TRNS, KC_MS_L, KC_MS_D, KC_MS_R, KC_TRNS, 
    KC_TRNS, KC_TRNS, KC_TRNS, KC_DOWN, KC_UP, KC_TRNS, KC_TRNS, 
                  KC_TRNS, KC_TRNS, KC_TRNS, KC_BTN1, KC_BTN2, 
                                              KC_TRNS, KC_TRNS, 
                                                     KC_TRNS, 
                                       KC_TRNS, KC_TRNS, KC_TRNS, 
    //right half
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_SYSTEM_SLEEP, KC_POWER, 
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_RIGHT, KC_TRNS, 
           KC_TRNS, KC_LEFT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
    KC_TRNS, KC_TRNS, KC_VOLD, KC_VOLU, KC_MUTE, KC_MPLY, KC_TRNS, 
                         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
    KC_TRNS, KC_TRNS, 
    KC_TRNS, 
    KC_TRNS, KC_TRNS, KC_TRNS),
};

const uint16_t PROGMEM fn_actions[] = {

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
static uint16_t start;
switch(id) {
case 0:
//Macro: 0//-----------------------













        if (record->event.pressed) {
          register_code(KC_RSFT);
        } else {
          unregister_code(KC_RSFT);
        }
        






break;
case M_MOD_KC_NO:
//Macro: M_MOD_KC_NO//-----------------------
if (record->event.pressed) {
			return MACRO(DOWN(KC_LSFT),DOWN(KC_LCTL),DOWN(KC_LALT),TYPE(KC_NO),UP(KC_LSFT),UP(KC_LCTL),UP(KC_LALT),END);
		}

break;
}
return MACRO_NONE;
};

// Runs just one time when the keyboard initializes.
void matrix_init_user(void) {

};

// Runs constantly in the background, in a loop.
void matrix_scan_user(void) {

uint8_t layer = biton32(layer_state);

ergodox_board_led_off();
ergodox_right_led_1_off();
ergodox_right_led_2_off();
ergodox_right_led_3_off();
switch (layer) {

    case SYMB:
        ergodox_right_led_1_on();
        
        
    break;
    case MDIA:
        
        
        ergodox_right_led_3_on();
    break;
default:
// none
break;
}

};

