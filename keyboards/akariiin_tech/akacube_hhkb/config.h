// Copyright 2024 AkariiinMKII (@AkariiinMKII)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

/* Config pointing device */
#define ANALOG_JOYSTICK_X_AXIS_PIN B0
#define ANALOG_JOYSTICK_Y_AXIS_PIN A6
#define ANALOG_JOYSTICK_CLICK_PIN A7
// #define ANALOG_JOYSTICK_AXIS_MIN 10
#define ANALOG_JOYSTICK_SPEED_REGULATOR 7
// #define ANALOG_JOYSTICK_READ_INTERVAL 5
// #define ANALOG_JOYSTICK_SPEED_MAX 5
#define POINTING_DEVICE_GESTURES_CURSOR_GLIDE_ENABLE
