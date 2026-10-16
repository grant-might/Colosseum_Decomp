/**
 * Linked gs_title unit 0x80020618 - 0x80020E9C (fn_80020618 .. fn_80020C9C)
 * with its .sdata2 pool 0x8047B868-0x8047B898, compiled from gs_title.c.
 * The slice starts with its own 1.0f/0.0f (both also earlier and later in
 * .sdata2, so it is a separate pool) and only this range reads it.
 */
#define GS_TITLE_SPLIT
#define GS_TITLE_RANGE_80020618
#define GS_TITLE_RANGE_8002091C
#include "src/game/gs_title.c"

/* Trailing .sdata2 padding: the unit's retail range is 0x8047B868-0x8047B898 (48 B); the pool above ends at 0x8047B894,
 * so retail's section carries 4 byte(s) that dtk folds into the last symbol.  Byte-exact, aligned(1)
 * so MWCC cannot insert alignment padding in front of it. */
const u8 pad_8047B894_sdata2[4] __attribute__((aligned(1))) = { 0x00, 0x00, 0x00, 0x00 };
