#include QMK_KEYBOARD_H
#include "wheredoesyourmindgo.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT_ortho_2x2u(
        KC_NO, KC_1, KC_2, KC_3, KC_4, KC_5, KC_MINS, KC_EQL, KC_6, KC_7, KC_8, KC_9, KC_0, KC_NO,
        KC_DEL, KC_Q, KC_W, KC_F, KC_P, KC_B, KC_LBRC, KC_RBRC, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_BSPC,
        LT(OS,KC_GRV), KC_A, KC_R, KC_S, KC_T, KC_G, KC_HOME, KC_PGUP, KC_M, KC_N, KC_E, KC_I, KC_O, KC_QUOT,
        TD(TD_CAPS_WORD), KC_Z, KC_X, KC_C, KC_D, KC_V, KC_END, KC_PGDN, KC_K, KC_H, KC_COMM, KC_DOT, KC_SLSH, TD(TD_CAPS_SENTENCE),
        TD(TD_OOPSY), KC_LALT, KC_LGUI, MO(LOWEST), LT(LOWER,KC_ESC), LT(LOW,KC_ENT), /* <-2U  2U-> */ LT(HIGH,KC_TAB), LT(HIGHER,KC_SPC), LT(HIGHEST,KC_LEFT), RGUI_T(KC_DOWN), RALT_T(KC_UP), RCTL_T(KC_RIGHT)
    ),
    [BASE_HRM] = LAYOUT_ortho_2x2u(
        KC_NO, KC_1, KC_2, KC_3, KC_4, KC_5, KC_MINS, KC_EQL, KC_6, KC_7, KC_8, KC_9, KC_0, KC_NO,
        KC_DEL, KC_Q, KC_W, KC_F, KC_P, KC_B, KC_LBRC, KC_RBRC, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_BSPC,
        LT(OS,KC_GRV), LCTL_T(KC_A), LALT_T(KC_R), LGUI_T(KC_S), LSFT_T(KC_T), KC_G, KC_HOME, KC_PGUP, KC_M, RSFT_T(KC_N), RGUI_T(KC_E), RALT_T(KC_I), RCTL_T(KC_O), KC_QUOT,
        TD(TD_CAPS_WORD), KC_Z, ALGR_T(KC_X), KC_C, KC_D, KC_V, KC_END, KC_PGDN, KC_K, KC_H, KC_COMM, ALGR_T(KC_DOT), KC_SLSH, TD(TD_CAPS_SENTENCE),
        TD(TD_OOPSY), KC_LALT, KC_LGUI, MO(LOWEST), LT(LOWER,KC_ESC), LT(LOW,KC_ENT), /* <-2U  2U-> */ LT(HIGH,KC_TAB), LT(HIGHER_HRM,KC_SPC), LT(HIGHEST,KC_LEFT), RGUI_T(KC_DOWN), RALT_T(KC_UP), RCTL_T(KC_RIGHT)
    ),
    // Having LT(HIGHER,KC_SPC) allows quick toggle select when arrowing with Lower layer
	[LOWER] = LAYOUT_ortho_2x2u(
        KC_NO  , KC_NO        , KC_NO        , KC_NO        , KC_NO        , KC_NO    ,         KC_NO, KC_NO, KC_NO         , KC_NO  , KC_NO , KC_NO, KC_NO, KC_NO,
        KC_DEL , KC_1         , KC_2         , KC_3         , KC_4         , KC_5     ,         KC_NO, KC_NO, KC_6          , KC_7   , KC_8 , KC_9, KC_0, LALT(KC_BSPC),
        KC_NO,  XOSM_LCTL, XOSM_LALT, XOSM_LGUI, XOSM_LSFT, DF(LOWER),         KC_NO, KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO,
        KC_LSFT, KC_NO        , OSM(MOD_RALT)      , KC_NO        , KC_NO        , KC_NO    ,         KC_NO, KC_NO,       KC_NO  , KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_RSFT,
        KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT        , DF(BASE)     , KC_ENT   , KC_TAB, LT(HIGHER,KC_SPC),  KC_RSFT, KC_RGUI, KC_RALT, KC_RCTL
    ),
	[LOW] = LAYOUT_ortho_2x2u(
        KC_NO, KC_NO        , KC_NO        , KC_NO        , KC_NO        , KC_NO   ,                  KC_NO, KC_NO, KC_NO  , KC_NO  , KC_NO  , KC_NO, KC_NO, KC_NO,
        KC_DEL, KC_EXLM      , KC_AT        , KC_HASH      , KC_DLR       , KC_PERC ,                  KC_NO, KC_NO, KC_CIRC, KC_AMPR, KC_LPRN, KC_RPRN, KC_ASTR, KC_BSPC,
        KC_NO,  XOSM_LCTL, XOSM_LALT, XOSM_LGUI, XOSM_LSFT, DF(LOW),                  KC_NO, KC_NO, KC_MINS, KC_EQL , KC_LCBR, KC_RCBR, KC_PIPE, KC_NO,
        KC_LSFT, KC_NO        , OSM(MOD_RALT), KC_NO        , KC_NO        , KC_NO   ,                  KC_NO, KC_NO, KC_UNDS, KC_PLUS, KC_LBRC, KC_RBRC, KC_BSLS, KC_RSFT,
        KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT,        KC_NO        , DF(BASE), /* <-2U  2U-> */ KC_TAB, KC_SPC,  KC_RSFT, KC_RGUI, KC_RALT, KC_RCTL
    ),
    [LOWEST] = LAYOUT_ortho_2x2u(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO,KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_BTN1, KC_BTN3, KC_BTN2, KC_NO, LGUI(KC_BSPC),
        KC_NO,  XOSM_LCTL, XOSM_LALT, XOSM_LGUI, XOSM_LSFT, DF(LOWEST), KC_NO, KC_NO, KC_NO, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_NO,
        KC_LSFT, KC_NO, OSM(MOD_RALT), KC_NO, KC_NO, KC_NO,KC_NO, KC_NO, KC_NO, KC_WH_R, KC_WH_U, KC_WH_D, KC_WH_L, KC_RSFT,
        KC_LCTL, KC_LALT, KC_LGUI, DF(BASE), KC_NO, KC_NO, /* <-2U  2U-> */ KC_NO, KC_NO, KC_RSFT, KC_RGUI, KC_RALT, KC_RCTL
    ),
	[HIGHER] = LAYOUT_ortho_2x2u(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        LALT(KC_DEL), APP4, APP3, APP1, APP2, TD(TD_TGL_SEL), KC_NO, KC_NO, KC_NO, KC_PSCR, KC_SLCK, KC_PAUS, KC_INS, KC_NO,
        KC_NO, TO(BASE_HRM), KC_CAPS, KC_LEAD, OSHR, KC_APP, KC_NO, KC_NO, DF(HIGHER), XOSM_LSFT, XOSM_LGUI, XOSM_LALT, XOSM_LCTL, KC_NO,
        KC_LSFT, LGUI(KC_Z), LGUI(KC_X), LGUI(KC_C), LGUI(KC_V), SGUI(KC_Z), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, OSM(MOD_RALT), KC_NO, KC_RSFT,
        KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT, LT(LOWER,KC_ESC), KC_ENT, /* <-2U  2U-> */ KC_TAB, DF(BASE), KC_RSFT, KC_RGUI, KC_RALT, KC_RCTL
    ),
	[HIGHER_HRM] = LAYOUT_ortho_2x2u(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        LALT(KC_DEL), APP4, APP3, APP1, APP2, TD(TD_TGL_SEL), KC_NO, KC_NO, KC_NO, KC_PSCR, KC_SLCK, KC_PAUS, KC_INS, KC_NO,
        KC_NO, TO(BASE), KC_CAPS, KC_LEAD, OSHR, KC_APP, KC_NO, KC_NO, DF(HIGHER_HRM), XOSM_LSFT, XOSM_LGUI, XOSM_LALT, XOSM_LCTL, KC_NO,
        KC_LSFT, LGUI(KC_Z), LGUI(KC_X), LGUI(KC_C), LGUI(KC_V), SGUI(KC_Z), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, OSM(MOD_RALT), KC_NO, KC_RSFT,
        KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT, LT(LOWER,KC_ESC), KC_ENT, /* <-2U  2U-> */ KC_TAB, DF(BASE_HRM), KC_RSFT, KC_RGUI, KC_RALT, KC_RCTL
    ),
    [HIGH] = LAYOUT_ortho_2x2u(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  KC_NO,    KC_NO, KC_NO,      KC_NO, KC_NO , KC_NO, KC_NO , KC_NO, KC_NO,
        KC_DEL,  DISP_FDIM  , DISP_DIM , DISP_BRI,   DISP_FBRI, KC_NO ,  KC_NO, KC_NO,        RGB_TOG      , RGB_MOD       , RGB_HUI      , RGB_SAI      , RGB_VAI ,   RESET,
        KC_GRV, KC_MUTE, KC_VOLD, KC_VOLU, VOL_JUP,   KC_NO, KC_NO, KC_NO,  DF(HIGHEST),   XOSM_LSFT, XOSM_LGUI, XOSM_LALT, XOSM_LCTL, DEBUG,
        KC_LSFT ,  MAC_MSTP, KC_MRWD,  KC_MFFD,  KC_MPLY,  KC_NO   , KC_NO,    KC_NO, KC_NO,   KC_NO,    KC_NO, OSM(MOD_RALT) ,KC_NO, KC_RSFT,
        KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT, KC_ESC,  KC_ENT, /* <-2U  2U-> */ DF(BASE), KC_NO, KC_RSFT, KC_RGUI, KC_RALT, KC_RCTL
    ),
	[HIGHEST] = LAYOUT_ortho_2x2u(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        LCTL(KC_K), KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_NO, KC_NO, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_NO,
        KC_NO, KC_F11, KC_F12, KC_F13, KC_F14, KC_F15, KC_NO, KC_NO, DF(HIGH), XOSM_LSFT, XOSM_LGUI, XOSM_LALT, XOSM_LCTL, KC_NO,
        KC_LSFT, KC_F16, KC_F17, KC_F18, KC_F19, KC_F20, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, OSM(MOD_RALT), KC_NO, KC_RSFT,
        KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT, KC_NO, KC_NO,/* <-2U  2U-> */  KC_NO, KC_NO, DF(BASE), KC_RGUI, KC_RALT, KC_RCTL
    ),
	[OS] = LAYOUT_ortho_2x2u(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,     KC_NO,            KC_NO,          KC_NO,              KC_NO,              KC_NO,          KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,     OS_SCRN_SHT_OPT, OS_LNCHPD,     OS_SPTLGHT,           OS_SIRI,            OS_SDBR,        OS_DRKMD_TGL,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,     PRV_APP,       OS_PRV_SPC,     CMD_TAB_PRV,        CMD_TAB_NXT,        OS_NXT_SPC,     OS_FLLSCRN,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,     OS_DSKTP,         OS_MSN_CNTRL,   OS_PRVS_APP_WNDW,   OS_NXT_APP_WNDW,    OS_APP_WNDWS,   KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, /* <-2U  2U-> */   DF(WNDW),           KC_NO,          KC_NO,              KC_NO,              KC_NO,          KC_NO
    ),
	[WNDW] = LAYOUT_ortho_2x2u(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO   , KC_NO, LCA(KC_U)   ,               WNDW_TOP_HLF , LCA(KC_I), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO , WNDW_SMLLR , WNDW_LRGR, KC_NO, KC_NO,
        KC_NO, KC_NO, WNDW_LFT_HLF,               WNDW_CNTR_HLF, WNDW_RGHT_HLF, KC_NO, KC_NO, KC_NO, WNDW_CNTR, WNDW_MV_LFT, WNDW_MV_DWN, WNDW_MV_UP, WNDW_MV_RGHT, WNDW_MAX,
        KC_NO   , KC_NO    , LCA(KC_J)   ,               WNDW_BTTM_HLF, LCA(KC_K), KC_NO, KC_NO, KC_NO    ,LCA(KC_F), LCA(KC_D)  ,LCA(KC_E)   , LCA(KC_T), LCA(KC_G),     KC_NO,
        KC_NO, KC_NO , KC_NO , KC_NO, DF(BASE),  WNDW_ALMST_MAX, /* <-2U  2U-> */ WNDW_VRT_MAX, WNDW_RSTR, KC_NO, KC_NO, KC_NO, KC_NO
    )
};

