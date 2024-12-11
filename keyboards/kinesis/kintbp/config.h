// Copyright 2024 cub-uanic (@cub-uanic)
// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

// #define PERMISSIVE_HOLD
#define TAPPING_TERM        250

#define IS_COMMAND() ( \
        get_mods() == (MOD_BIT(KC_LCTL) | MOD_BIT(KC_RCTL)) || \
        get_mods() == (MOD_BIT(KC_LSFT) | MOD_BIT(KC_RSFT)) || \
        get_mods() == (MOD_BIT(KC_LCTL) | MOD_BIT(KC_LSFT) | MOD_BIT(KC_LALT)) || \
        get_mods() == (MOD_BIT(KC_RCTL) | MOD_BIT(KC_RSFT) | MOD_BIT(KC_RALT)) \
)

// /* QK_MAKE support*/
// #define ENABLE_COMPILE_KEYCODE

