// Copyright 2022 David Ribeiro (@LoyalPotato)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

#define VENDOR_ID 0x26DB
#define PRODUCT_ID 0xDA01 // yggdrasil/rev01
#define DEVICE_VER 0x0001
#define PRODUCT Yggdrasil
#define MATRIX_ROWS 8
#define MATRIX_COLS 5

#define MATRIX_ROW_PINS \
  { D7, E6, B4, B5 }
#define MATRIX_COL_PINS \
  { F7, B1, B3, B2, B6 }

#define MATRIX_ROW_PINS_RIGHT \
  { D7, E6, B4, B5 }
#define MATRIX_COL_PINS_RIGHT \
  { F7, B1, B3, B2, B6 }

#define TAPPING_TOGGLE 2
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
