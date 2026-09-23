// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once

#define OLED_DISPLAY_128X64
#define OLED_TIMEOUT 0

#define XXX KC_NO

// top left key (L06), unused by miryoku: cycle the rgb lighting modes
#define U_RGBM QK_USER_0

// only SOLID_COLOR is compiled in by default, leaving RGB_MOD nothing to step to
#define ENABLE_RGB_MATRIX_CYCLE_ALL
#define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
#define ENABLE_RGB_MATRIX_CYCLE_OUT_IN
#define ENABLE_RGB_MATRIX_CYCLE_PINWHEEL
#define ENABLE_RGB_MATRIX_CYCLE_SPIRAL
#define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#define ENABLE_RGB_MATRIX_RAINBOW_BEACON
#define ENABLE_RGB_MATRIX_DUAL_BEACON
#define ENABLE_RGB_MATRIX_HUE_WAVE
#define ENABLE_RGB_MATRIX_BREATHING
#define ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
#define ENABLE_RGB_MATRIX_PIXEL_RAIN

// keypress tracking, required by the reactive effects below
#define RGB_MATRIX_KEYPRESSES
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#define ENABLE_RGB_MATRIX_SPLASH
#define ENABLE_RGB_MATRIX_SOLID_SPLASH

// per key history buffer, required by the two effects below
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define ENABLE_RGB_MATRIX_TYPING_HEATMAP
#define ENABLE_RGB_MATRIX_DIGITAL_RAIN

#if defined MIRYOKU_MAPPING_EXTENDED_THUMBS
#define LAYOUT_miryoku( \
     K00, K01, K02, K03, K04,                          K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                          K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                          K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                          K35, K36, K37, N38, N39 \
) \
LAYOUT( \
U_RGBM, K00, K01, K02, K03, K04,                       K05, K06, K07, K08, K09, XXX, \
XXX, K10, K11, K12, K13, K14,                          K15, K16, K17, K18, K19, XXX, \
XXX, K20, K21, K22, K23, K24, XXX, XXX,      XXX, XXX, K25, K26, K27, K28, K29, XXX, \
               XXX, XXX, K32, K33, K34,      K35, K36, K37, XXX, XXX \
)
#else
#define LAYOUT_miryoku( \
     K00, K01, K02, K03, K04,                          K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                          K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                          K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                          K35, K36, K37, N38, N39 \
) \
LAYOUT( \
U_RGBM, K00, K01, K02, K03, K04,                       K05, K06, K07, K08, K09, XXX, \
XXX, K10, K11, K12, K13, K14,                          K15, K16, K17, K18, K19, XXX, \
XXX, K20, K21, K22, K23, K24, XXX, XXX,      XXX, XXX, K25, K26, K27, K28, K29, XXX, \
               XXX, K32, K33, K34, XXX,      XXX, K35, K36, K37, XXX \
)
#endif
