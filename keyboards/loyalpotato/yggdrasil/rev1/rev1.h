#pragma once
#include "quantum.h"


/*
#define LAYOUT_split_3x5_3(                             \
  k00, k01, k02, k03, k04,     k44, k43, k42, k41, k40, \
  k10, k11, k12, k13, k14,     k54, k53, k52, k51, k50, \
  k20, k21, k22, k23, k24,     k64, k63, k62, k61, k60, \
            k32, k33, k34,     k70, k71, k72            \
)                                                       \
{                                                       \
  {   k00,   k01,   k02,   k03,   k04 },                \
  {   k10,   k11,   k12,   k13,   k14 },                \
  {   k20,   k21,   k22,   k23,   k24 },                \
  {   KC_NO, KC_NO,   k32,   k33,   k34 },                \
  {   k40,   k41,   k42,   k43,   k44 },                \
  {   k50,   k51,   k52,   k53,   k54 },                \
  {   k60,   k61,   k62,   k63,   k64 },                \
  {   k70, k71,   k72, KC_NO, KC_NO },                \
*/

#define LAYOUT_split_3x5_3( \
  L00, L01, L02, L03, L04,           R00, R01, R02, R03, R04, \
  L10, L11, L12, L13, L14,           R10, R11, R12, R13, R14, \
  L20, L21, L22, L23, L24,           R20, R21, R22, R23, R24, \
                 L30, L31, L32, R30, R31, R32 \
  ) \
  { \
    { L00, L01, L02, L03, L04 }, \
    { L10, L11, L12, L13, L14 }, \
    { L20, L21, L22, L23, L24 }, \
    { KC_NO, KC_NO, L30, L31, L32 }, \
    { R04, R03, R02, R01, R00 }, \
    { R14, R13, R12, R11, R10 }, \
    { R24, R23, R22, R21, R20 }, \
    { KC_NO, KC_NO, R32, R31, R30 } \
  }

#define LAYOUT LAYOUT_split_3x5_3
