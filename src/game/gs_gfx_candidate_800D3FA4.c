/** Residual GS graphics candidate at 0x800D3FA4. */
#define GS_GFX_RANGE_SPLIT
#define GS_GFX_RANGE_800D3FA4_800D45F8
#include "src/game/gs_gfx_range_800D3FA4.c"

/* Trailing .sdata2 padding: the unit's retail range is 0x8047CA20-0x8047CA30 (16 B); the pool above ends at 0x8047CA2C,
 * so retail's section carries 4 byte(s) that dtk folds into the last symbol.  Byte-exact, aligned(1)
 * so MWCC cannot insert alignment padding in front of it. */
const u8 pad_8047CA2C_sdata2[4] __attribute__((aligned(1))) = { 0x00, 0x00, 0x00, 0x00 };
