/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#define VIAL_KEYBOARD_UID \
    { 0x47, 0x97, 0x7E, 0x32, 0xC9, 0xAC, 0x13, 0xF3 }

#define VIAL_UNLOCK_COMBO_ROWS \
    { 2, 3, 0, 0, 0 }
#define VIAL_UNLOCK_COMBO_COLS \
    { 0, 1, 0, 2, 4 }

#define DYNAMIC_KEYMAP_LAYER_COUNT 10
#define FORCE_NKRO

#define IGNORE_MOD_TAP_INTERRUPT
#define TAPPING_TERM 200
#define BILATERAL_COMBINATIONS 500
