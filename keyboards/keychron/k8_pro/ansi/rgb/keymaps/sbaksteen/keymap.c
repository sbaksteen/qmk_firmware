/* Copyright 2021 @ Keychron (https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

// clang-format off
enum layers{
     BASE_MAP,
     FN_MAP,
     MATH_MAP,
     MATH2_MAP,
     GREEK_MAP,
     IPA_MAP,
     IPA_SHIFT,
     IPA_ALT
};

enum unicode_names {
    ALPHA,    // GREEK LETTERS
    ALPHA_U,
    BETA,
    BETA_U,
    GAMMA,
    GAMMA_U,
    DELTA,
    DELTA_U,
    EPSILON,
    EPSILON_U,
    ZETA,
    ZETA_U,
    ETA,
    ETA_U,
    THETA,
    THETA_U,
    IOTA,
    IOTA_U,
    KAPPA,
    KAPPA_U,
    LAMBDA,
    LAMBDA_U,
    MU,
    MU_U,
    NU,
    NU_U,
    KSI,
    KSI_U,
    OMICRON,
    OMICRON_U,
    PI,
    PI_U,
    RHO,
    RHO_U,
    SIGMA,
    SIGMA_U,
    SIGMA_E,
    TAU,
    TAU_U,
    UPSILON,
    UPSILON_U,
    PHI,
    PHI_U,
    CHI,
    CHI_U,
    PSI,
    PSI_U,
    OMEGA,
    OMEGA_U,
    LANGLE,   // MATH: OPENING AND CLOSING
    RANGLE,
    LBBRACK,
    RBBRACK,
    LFLOOR,
    RFLOOR,
    VVERT,
    WEDGE,    // MATH: BINARY OPERATORS
    VEE,
    CAP,
    CUP,
    OPLUS,
    OTIMES,
    TIMES,
    DOT,
    PM,
    MP,
    BIGPROD,  // MATH: BIG OPERATORS
    BIGSUM,
    BIGINT,
    BIGWEDGE,
    BIGVEE,
    BIGCAP,
    BIGCUP,
    BIGOPLUS,
    BIGOTIMES,
    SIM,      // MATH: RELATIONS
    CONG,
    GEQ,
    LEQ,
    NEQ,
    PREC,
    SUCC,
    SUBSET,
    SUPSET,
    IN,
    NOTIN,
    NI,
    RIGHTARROW, // MATH: ARROWS
    LEFTARROW,
    UPARROW,
    DOWNARROW,
    LRARROW,
    RRIGHTARROW,
    LLEFTARROW,
    UUPARROW,
    DDOWNARROW,
    LLRRARROW,
    MAPSTO,
    SQRT,     // MATH: UNARY OPERATORS
    PARTIAL,
    NABLA,
    EXISTS,
    FORALL,
    NOT,
    TOP,      // MATH: CONSTANTS
    BOT,
    COMPLEX,  // MATH: SETS
    REAL,
    NATURAL,
    INTEGER,
    RATIONAL,
    BATH_A,   // TODO: Change IPA symbol names to be systematic wrt position & quality
    THOUGHT_A,
    CENTER_A,
    ASH,
    BED_E,
    GRAPPIG_E,
    REV_E,
    RREV_E,
    SCHWA,
    CENTER_I,
    NEAR_I,
    STROKE_O,
    CENTER_O,
    OPEN_O,
    OE_LOWER,
    OE_SC,
    MID_U,
    UNROUND_U,
    NEAR_U,
    RAMHORN,
    NEAR_Y,
    RFLEX_T,
    RFLEX_D,
    RFLEX_N,
    RFLEX_R,
    RFLEX_S,
    RFLEX_Z,
    RFLEX_R2,
    RFLEX_L,
    SH,
    ZH,
    DH,
    PH,
    LL,
    LLH,
    YAPPROX,
    RAPPROX,
    UAPPROX,
    LAT_J,
    LAT_U,
    TRILL_B,
    DENT_M,
    DENT_V,
    PALAT_D,
    PALAT_N,
    PALAT_Z,
    VELAR_N,
    VELAR_GH,
    UVULAR_G,
    UVULAR_N,
    UVULAR_R,
    FRENCH_R,
    PHARYN_H,
    PHARYN_HV,
    GLOT_STOP,
    VOICED_H,
    CLICK_B,
    CLICK_D,
    CLICK_G,
    CLICK_C,
    CLICK_L,
    IMPLO_B,
    IMPLO_D,
    IMPLO_C,
    IMPLO_G,
    IMPLO_GG,
    WEIRD_SH,
    WEIRD_ZH,
    TAP_R,
};

const uint32_t PROGMEM unicode_map[] = {
    // GREEK LETTERS
    [ALPHA]     = 0x03B1, // α
    [BETA]      = 0x03B2, // β
    [GAMMA]     = 0x03B3, // γ
    [DELTA]     = 0x03B4, // δ
    [EPSILON]   = 0x03B5, // ε
    [ZETA]      = 0x03B6, // ζ
    [ETA]       = 0x03B7, // η
    [THETA]     = 0x03B8, // θ
    [IOTA]      = 0x03B9, // ι
    [KAPPA]     = 0x03BA, // κ
    [LAMBDA]    = 0x03BB, // λ
    [MU]        = 0x03BC, // μ
    [NU]        = 0x03BD, // ν
    [KSI]       = 0x03BE, // ξ
    [OMICRON]   = 0x03BF, // ο
    [PI]        = 0x03C0, // π
    [RHO]       = 0x03C1, // ρ
    [SIGMA_E]   = 0x03C2, // ς
    [SIGMA]     = 0x03C3, // σ
    [TAU]       = 0x03C4, // τ
    [UPSILON]   = 0x03C5, // υ
    [PHI]       = 0x03C6, // φ
    [CHI]       = 0x03C7, // χ
    [PSI]       = 0x03C8, // ψ
    [OMEGA]     = 0x03C9, // ω
    [ALPHA_U]   = 0x0391, // Α
    [BETA_U]    = 0x0392, // Β
    [GAMMA_U]   = 0x0393, // Γ
    [DELTA_U]   = 0x0394, // Δ
    [EPSILON_U] = 0x0395, // Ε
    [ZETA_U]    = 0x0396, // Ζ
    [ETA_U]     = 0x0397, // Η
    [THETA_U]   = 0x0398, // Θ
    [IOTA_U]    = 0x0399, // Ι
    [KAPPA_U]   = 0x039A, // Κ
    [LAMBDA_U]  = 0x039B, // Λ
    [MU_U]      = 0x039C, // Μ
    [NU_U]      = 0x039D, // Ν
    [KSI_U]     = 0x039E, // Ξ
    [OMICRON_U] = 0x039F, // Ο
    [PI_U]      = 0x03A0, // Π
    [RHO_U]     = 0x03A1, // Ρ
    [SIGMA_U]   = 0x03A3, // Σ
    [TAU_U]     = 0x03A4, // Τ
    [UPSILON_U] = 0x03A5, // Υ
    [PHI_U]     = 0x03A6, // Φ
    [CHI_U]     = 0x03A7, // Χ
    [PSI_U]     = 0x03A8, // Ψ
    [OMEGA_U]   = 0x03A9, // Ω
    // MATH: OPENING AND CLOSING
    [LANGLE]    = 0x27E8, // ⟨
    [RANGLE]    = 0x27E9, // ⟩
    [LBBRACK]   = 0x27E6, // ⟦
    [RBBRACK]   = 0x27E7, // ⟧
    [LFLOOR]    = 0x230A, // ⌊
    [RFLOOR]    = 0x230B, // ⌋
    [VVERT]     = 0x2016, // ‖
    // MATH: BINARY OPERATORS
    [WEDGE]     = 0x2227, // ∧
    [VEE]       = 0x2228, // ∨
    [CAP]       = 0x2229, // ∩
    [CUP]       = 0x222A, // ∪
    [OPLUS]     = 0x2295, // ⊕
    [OTIMES]    = 0x2297, // ⊗
    [TIMES]     = 0x00D7, // ×
    [DOT]       = 0x00B7, // ·
    [PM]        = 0x00B1, // ±
    [MP]        = 0x2213, // ∓
    // MATH: BIG OPERATORS
    [BIGPROD]   = 0x220F, // ∏
    [BIGSUM]    = 0x2211, // ∑
    [BIGINT]    = 0x222B, // ∫
    [BIGWEDGE]  = 0x22C0, // ⋀
    [BIGVEE]    = 0x22C1, // ⋁
    [BIGCAP]    = 0x22C2, // ⋂
    [BIGCUP]    = 0x22C3, // ⋃
    [BIGOPLUS]  = 0x2A01, // ⨁
    [BIGOTIMES] = 0x2A02, // ⨂
    // MATH: RELATIONS
    [SIM]       = 0x223C, // ∼
    [CONG]      = 0x2245, // ≅
    [GEQ]       = 0x2265, // ≥
    [LEQ]       = 0x2264, // ≤
    [NEQ]       = 0x2260, // ≠
    [PREC]      = 0x227A, // ≺
    [SUCC]      = 0x227B, // ≻
    [SUBSET]    = 0x2282, // ⊂
    [SUPSET]    = 0x2283, // ⊃
    [IN]        = 0x2208, // ∈
    [NOTIN]     = 0x2209, // ∉
    [NI]        = 0x220B, // ∋
    // MATH: ARROWS
    [RIGHTARROW]= 0x2192, // →
    [LEFTARROW] = 0x2190, // ←
    [UPARROW]   = 0x2191, // ↑
    [DOWNARROW] = 0x2193, // ↓
    [LRARROW]   = 0x2194, // ↔
    [RRIGHTARROW]=0x21D2, // ⇒
    [LLEFTARROW]= 0x21D0, // ⇐
    [UUPARROW]  = 0x21D1, // ⇑
    [DDOWNARROW]= 0x21D3, // ⇓
    [LLRRARROW] = 0x21D4, // ⇔
    [MAPSTO]    = 0x21A6, // ↦
    // MATH: UNARY OPERATORS
    [SQRT]      = 0x221A, // √
    [PARTIAL]   = 0x2202, // ∂
    [NABLA]     = 0x2207, // ∇
    [EXISTS]    = 0x2203, // ∃
    [FORALL]    = 0x2200, // ∀
    [NOT]       = 0x00AC, // ¬
    // MATH: CONSTANTS
    [TOP]       = 0x22A4, // ⊤
    [BOT]       = 0x22A5, // ⊥
    // MATH: SETS
    [COMPLEX]   = 0x2102, // ℂ
    [REAL]      = 0x211D, // ℝ
    [INTEGER]   = 0x2124, // ℤ
    [NATURAL]   = 0x2115, // ℕ
    [RATIONAL]  = 0x211A, // ℚ
    // IPA
    [BATH_A]    = 0x0251, // ɑ
    [THOUGHT_A] = 0x0252, // ɒ
    [CENTER_A]  = 0x0250, // ɐ
    [ASH]       = 0x00E6, // æ
    [BED_E]     = 0x025B, // ɛ
    [GRAPPIG_E] = 0x025C, // ɜ
    [REV_E]     = 0x0258, // ɘ
    [RREV_E]    = 0x025E, // ɞ
    [SCHWA]     = 0x0259, // ə
    [CENTER_I]  = 0x0268, // ɨ
    [NEAR_I]    = 0x026A, // ɪ
    [STROKE_O]  = 0x00F8, // ø
    [CENTER_O]  = 0x0275, // ɵ
    [OPEN_O]    = 0x0254, // ɔ
    [OE_LOWER]  = 0x0153, // œ
    [OE_SC]     = 0x0276, // ɶ
    [MID_U]     = 0x0289, // ʉ
    [UNROUND_U] = 0x026F, // ɯ
    [NEAR_U]    = 0x028A, // ʊ
    [RAMHORN]   = 0x0264, // ɤ
    [NEAR_Y]    = 0x028F, // ʏ
    [RFLEX_T]   = 0x0288, // ʈ
    [RFLEX_D]   = 0x0256, // ɖ
    [RFLEX_N]   = 0x0273, // ɳ
    [RFLEX_R]   = 0x027D, // ɽ
    [RFLEX_S]   = 0x0282, // ʂ
    [RFLEX_Z]   = 0x0290, // ʐ
    [RFLEX_R2]  = 0x027B, // ɻ
    [RFLEX_L]   = 0x026D, // ɭ
    [SH]        = 0x0283, // ʃ
    [ZH]        = 0x0292, // ʒ
    [DH]        = 0x00F0, // ð
    [PH]        = 0x0278, // ɸ
    [LL]        = 0x026C, // ɬ
    [LLH]       = 0x026E, // ɮ
    [YAPPROX]   = 0x028B, // ʋ
    [RAPPROX]   = 0x0279, // ɹ
    [UAPPROX]   = 0x0270, // ɰ
    [LAT_J]     = 0x028E, // ʎ
    [LAT_U]     = 0x029F, // ʟ
    [TRILL_B]   = 0x0299, // ʙ
    [DENT_M]    = 0x0271, // ɱ
    [DENT_V]    = 0x2C71, // ⱱ
    [PALAT_D]   = 0x025F, // ɟ
    [PALAT_N]   = 0x0272, // ɲ
    [PALAT_Z]   = 0x029D, // ʝ
    [VELAR_N]   = 0x014B, // ŋ
    [VELAR_GH]  = 0x0263, // ɣ
    [UVULAR_G]  = 0x0262, // ɢ
    [UVULAR_N]  = 0x0274, // ɴ
    [UVULAR_R]  = 0x0280, // ʀ
    [FRENCH_R]  = 0x0281, // ʁ
    [PHARYN_H]  = 0x0127, // ħ
    [PHARYN_HV] = 0x0295, // ʕ
    [GLOT_STOP] = 0x0294, // ʔ
    [VOICED_H]  = 0x0266, // ɦ
    [CLICK_B]   = 0x0298, // ʘ
    [CLICK_D]   = 0x01C0, // ǀ
    [CLICK_G]   = 0x01C3, // ǃ
    [CLICK_C]   = 0x01C2, // ǂ
    [CLICK_L]   = 0x01C1, // ǁ
    [IMPLO_B]   = 0x0253, // ɓ
    [IMPLO_D]   = 0x0257, // ɗ
    [IMPLO_C]   = 0x0284, // ʄ
    [IMPLO_G]   = 0x0260, // ɠ
    [IMPLO_GG]  = 0x029B, // ʛ
    [WEIRD_SH]  = 0x0255, // ɕ
    [WEIRD_ZH]  = 0x0291, // ʑ
    [TAP_R]     = 0x027E, // ɾ

};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[BASE_MAP] = LAYOUT_tkl_ansi(
     KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,         KC_F12,            KC_PSCR,   DF(IPA_MAP), RGB_MOD,
     KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,        KC_EQL,  KC_BSPC,  KC_INS,    KC_HOME,  KC_PGUP,
     KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,       KC_RBRC,  KC_BSLS,  KC_DEL,    KC_END,   KC_PGDN,
     KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,                  KC_ENT,
     KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,                 KC_RSFT,             KC_UP,
     KC_LCTL,  KC_LGUI,  KC_LALT,                   KC_SPACE,                  LT(MATH_MAP, KC_RALT),  MO(MATH2_MAP), MO(FN_MAP),MO(GREEK_MAP),  KC_LEFT,   KC_DOWN,  KC_RGHT),

[FN_MAP] = LAYOUT_tkl_ansi(
     KC_TRNS,  KC_BRID,  KC_BRIU,  KC_TASK,  KC_FILE,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,        KC_VOLU,            KC_TRNS,  KC_TRNS,  RGB_TOG,
     KC_TRNS,  BT_HST1,  BT_HST2,  BT_HST3,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
     RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
     KC_TRNS,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,                  KC_TRNS,
     KC_TRNS,            KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  BAT_LVL,  NK_TOGG,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,                  KC_TRNS,            KC_TRNS,
     KC_TRNS,  KC_TRNS,  KC_TRNS,                                KC_TRNS,                                KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS),

[MATH_MAP] = LAYOUT_tkl_ansi(
     KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,  KC_TRNS,  KC_TRNS,
     UM(NOT),  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  UP(WEDGE, BIGWEDGE),  UM(DOT),  UM(LFLOOR),  UM(RFLOOR),  UP(PM, MP),  UM(NEQ),  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
     KC_TRNS,  UM(RATIONAL),  KC_TRNS,  UM(EXISTS),  UM(REAL),  UP(TOP, BOT),  UP(CAP, BIGCAP),  UP(CUP, BIGCUP),  UP(IN, NOTIN),  UM(NI),  UM(BIGPROD),  UM(LANGLE),  UM(RANGLE),  UP(VEE, BIGVEE),  KC_TRNS,  KC_TRNS,  KC_TRNS,
     KC_TRNS,  UM(FORALL),  UM(BIGSUM),  UP(PARTIAL, NABLA),  UM(MAPSTO),  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,
     KC_TRNS,            UM(INTEGER),  UM(TIMES),  UM(COMPLEX),  KC_TRNS,  KC_TRNS,  UM(NATURAL),  KC_TRNS, UM(LEQ),  UM(GEQ),  KC_TRNS,            KC_TRNS,            KC_TRNS,
     KC_TRNS,  KC_TRNS,  KC_TRNS,                                KC_TRNS,                                KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS),

[MATH2_MAP] = LAYOUT_tkl_ansi(
     KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,  KC_TRNS,  KC_TRNS,
     UP(SIM, CONG),  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  UP(OPLUS, BIGOPLUS),  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
     KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  UM(SQRT),  KC_TRNS,  KC_TRNS,  KC_TRNS,  UP(UPARROW, UUPARROW),  KC_TRNS,  KC_TRNS,  UM(LBBRACK),  UM(RBBRACK),  UM(VVERT),  KC_TRNS,  KC_TRNS,  KC_TRNS,
     KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  UP(LEFTARROW, LLEFTARROW),  UP(DOWNARROW, DDOWNARROW),  UP(RIGHTARROW, RRIGHTARROW),  KC_TRNS,  KC_TRNS,            KC_TRNS,
     KC_TRNS,            KC_TRNS,  UP(OTIMES, BIGOTIMES),  KC_TRNS,  KC_TRNS,  KC_TRNS,  UM(BIGINT),  UP(LRARROW, LLRRARROW), UM(PREC),  UM(SUCC), KC_TRNS,           KC_TRNS,            KC_TRNS,
     KC_TRNS,  KC_TRNS,  KC_TRNS,                                KC_TRNS,                                KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS),

[GREEK_MAP] = LAYOUT_tkl_ansi(
     KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,  KC_TRNS,  KC_TRNS,
     KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
     KC_TRNS,  KC_TRNS,UM(SIGMA_E), UP(EPSILON, EPSILON_U),  UP(RHO, RHO_U),  UP(TAU, TAU_U),  UP(UPSILON, UPSILON_U),  UP(THETA, THETA_U),  UP(IOTA, IOTA_U),  UP(OMICRON, OMICRON_U),  UP(PI, PI_U),  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
     KC_TRNS,  UP(ALPHA, ALPHA_U),  UP(SIGMA, SIGMA_U),  UP(DELTA, DELTA_U),  UP(PHI, PHI_U),  UP(GAMMA, GAMMA_U),  UP(ETA, ETA_U),  UP(KSI, KSI_U),  UP(KAPPA, KAPPA_U),  UP(LAMBDA, LAMBDA_U),  KC_TRNS,  KC_TRNS,            KC_TRNS,
     KC_TRNS,            UP(ZETA, ZETA_U),  UP(CHI, CHI_U),  UP(PSI, PSI_U),  UP(OMEGA, OMEGA_U),  UP(BETA, BETA_U),  UP(NU, NU_U),  UP(MU, MU_U),  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,            KC_TRNS,
     KC_TRNS,  KC_TRNS,  KC_TRNS,                                KC_TRNS,                                KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS),

[IPA_MAP] = LAYOUT_tkl_ansi(
     KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,         KC_F12,            KC_PSCR,   DF(BASE_MAP), RGB_MOD,
     KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,        KC_EQL,  KC_BSPC,  KC_INS,    KC_HOME,  KC_PGUP,
     KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,       KC_RBRC,  KC_BSLS,  KC_DEL,    KC_END,   KC_PGDN,
     KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,                  KC_ENT,
     KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,                 MO(IPA_SHIFT),             KC_UP,
     KC_LCTL,  KC_LGUI,  KC_LALT,                                KC_SPC,                               MO(IPA_ALT),  MO(MATH_MAP), MO(FN_MAP), KC_RCTL,  KC_LEFT,   KC_DOWN,  KC_RGHT),

[IPA_SHIFT] = LAYOUT_tkl_ansi(
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,  KC_TRNS,  KC_TRNS,
     KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
     KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,UM(UVULAR_R), UM(THETA), UM(NEAR_Y),  KC_TRNS,  KC_TRNS,  KC_TRNS, UM(PH),  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
     KC_TRNS,  KC_TRNS,  KC_TRNS,   UM(DH),  KC_TRNS, UM(UVULAR_G),  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,
     KC_TRNS,            KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  UM(BETA),  UM(UVULAR_N),  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,            KC_TRNS,
     KC_TRNS,  KC_TRNS,  KC_TRNS,                                    KC_TRNS,                                KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS),

[IPA_ALT] = LAYOUT_tkl_ansi(
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,  KC_TRNS,  KC_TRNS,
     KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
     KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, UM(TAP_R),UM(RFLEX_T),  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
     KC_TRNS,  KC_TRNS,  KC_TRNS,UM(RFLEX_D),  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,
     KC_TRNS,            KC_TRNS,  KC_TRNS,  KC_TRNS,UM(YAPPROX),  KC_TRNS,  KC_TRNS, UM(DENT_M),KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,            KC_TRNS,
     KC_TRNS,  KC_TRNS,  KC_TRNS,                                KC_TRNS,                                KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS),

};
