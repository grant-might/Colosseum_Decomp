/** Residual GS graphics candidates, 0x800D55D0 - 0x800D56C0. */
#define GS_GFX_RANGE_SPLIT
#define GS_GFX_RANGE_800D55D0_800D56C0
#include "src/game/gs_gfx_range_800D3FA4.c"

/* Trailing .sdata2 padding: the unit's retail range is 0x8047CA30-0x8047CA40 (16 B); the pool above ends at 0x8047CA3C,
 * so retail's section carries 4 byte(s) that dtk folds into the last symbol.  Byte-exact, aligned(1)
 * so MWCC cannot insert alignment padding in front of it. */
const u8 pad_8047CA3C_sdata2[4] __attribute__((aligned(1))) = { 0x00, 0x00, 0x00, 0x00 };
