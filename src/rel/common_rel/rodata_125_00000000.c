/*
 * @file rodata_125_00000000.c
 * @brief REL module common_rel: byte-exact data unit .rodata 0x0-0x56C (1388 B).
 *
 * REL 125 .rodata 0x0-0x56C: five u32 tables. 0x0 is a {u32 0, u32
 * 0x00180000} descriptor and 0x5C is a 1296-byte table with a few float
 * words (e.g. 0x41CC28F6 = 25.52f). The module's strings do not start
 * until 0x56C, inside snd_song_table.c.
 *
 * Relocation-free. Reconstructed byte-exact from the retail REL and checked by
 * byte-comparing the rebuilt common_rel.rel against the original: one named global
 * per region, literal values, and a typed declaration for every R_PPC_ADDR32
 * relocation target.
 * 5 objects, 0 relocations.
 *
 * Composed of typed tables from a contributor fork plus byte-exact
 * blob remainder; the unit's extents and symbol boundaries are unchanged.
 */
#include "dolphin/types.h"

/* 0x56C B typed tables: .rodata 0x0-0x56C */
#include "const_data.c"
