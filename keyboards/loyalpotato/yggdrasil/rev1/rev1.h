#define LAYOUT_split_3x5_3(                             \
  k00, k01, k02, k03, k04,     k44, k43, k42, k41, k40, \
  k10, k11, k12, k13, k14,     k54, k53, k52, k51, k50, \
  k20, k21, k22, k23, k24,     k64, k63, k62, k61, k60, \
            k32, k31, k30,     k70, k71, k72            \
)                                                       \
{                                                       \
  {   k00,   k01,   k02,   k03,   k04 },                \
  {   k10,   k11,   k12,   k13,   k14 },                \
  {   k20,   k21,   k22,   k23,   k24 },                \
  {   k30,   k31,   k32,   KC_NO, KC_NO },              \
  {   k40,   k41,   k42,   k43,   k44 },                \
  {   k50,   k51,   k52,   k53,   k54 },                \
  {   k60,   k61,   k62,   k63,   k64 },                \
  {   k70,   k71,   k71,   KC_NO, KC_NO },              \
