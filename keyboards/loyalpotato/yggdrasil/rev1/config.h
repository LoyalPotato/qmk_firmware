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

#define MATRIX_ROW_PINS { D7, E6, B4, B5 }
//#define MATRIX_COL_PINS { F7, B1, B3, B2, B6 }
#define MATRIX_COL_PINS { B6, B2, B3, B1, F7 }

#define MATRIX_COL_PINS_RIGHT { F7, B1, B3, B2, B6 }

#define MASTER_LEFT

#define SOFT_SERIAL_PIN D2


#define TAPPING_TOGGLE 2
