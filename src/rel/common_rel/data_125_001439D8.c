/*
 * @file data_125_001439D8.c
 * @brief REL module common_rel: byte-exact data unit .data 0x1439D8-0x14A654 (27772 B).
 *
 * REL 125 .data 0x1439D8-0x14A654: the fn_800096B4 / fn_801EE544 table
 * family, published by _prolog as lbl_125_data_1439D8 ... lbl_125_data_14A602
 * (counts 97, 505, 97, 594, 51, 7, 8 at 0x14A6F8-0x14A710). u16-heavy id
 * records from the same 0xECxx id family as data_125_00111E04.c. Ends exactly
 * where common_rel.c's 48 element counts begin.
 *
 * Relocation-free. lbl_125_data_14A602 starts at a 2-mod-4 offset, so its
 * bytes live in a struct of u8 (alignment 1); the SN compiler would otherwise
 * 4-byte-align the object and shift it.
 *
 * The 0x14A5F4/0x14A602 pair is the menuSeBiosGetPtr table (14 sub-tables
 * plus the 82-byte menu sound-id list). *
 * one named global per dtk object, byte-exact literals, and a
 * typed element for every R_PPC_ADDR32 relocation target.
 * 7 objects, 0 relocations.
 *
 * Composed of typed tables from a contributor fork plus byte-exact
 * blob remainder; the unit's extents and symbol boundaries are unchanged.
 */
#include "dolphin/types.h"

/* 0x6C2A B typed tables: .data 0x1439D8-0x14A602 */
#include "misc_data.c"
/* 0x006C2A 82 B */
/* 0x6C2A is 2-mod-4; a plain u8 array would be 4-byte aligned,
 * so the bytes go in a struct of u8 (alignment 1) to keep the offset. */
struct lbl_125_data_14A602_s { u8 d[82]; };
struct lbl_125_data_14A602_s lbl_125_data_14A602 = {
    {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27,
        0x00, 0x28, 0x00, 0x23, 0x00, 0x24, 0x00, 0x25, 0x00, 0x27, 0x00, 0x00,
        0x00, 0x23, 0x00, 0x24, 0x00, 0x25, 0x00, 0x27, 0x00, 0x28, 0x03, 0xC5,
        0x03, 0xC6, 0x03, 0xC7, 0x00, 0x27, 0x00, 0x28, 0x00, 0x23, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x27, 0x00, 0x00, 0x00, 0x23, 0x00, 0x24, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x23, 0x00, 0x24, 0x00, 0x25, 0x00, 0x00,
        0x00, 0x00, 0x03, 0xC5, 0x03, 0xC6, 0x03, 0xC7, 0x00, 0x00,
    },
};
