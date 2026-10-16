/*
 * @file bss_803FED64.c
 * @brief DOL zero-fill unit .bss 0x803FED64-0x803FFFB0
 *        (auto unit main/auto_06_803FED64_bss).
 *
 * Declarations only: the section holds no bytes in the DOL, so all
 * that has to be reproduced is the symbol set, the size of each
 * object and its offset inside the section.
 *
 * MWCC emits uninitialised globals in reverse source order, so the
 * objects are declared in descending address order and MWLD lays
 * them out in that order. Interior padding is expressed with
 * aligned(N) on the following object: MWLD does not honour the
 * target's gap_* globals when they come from source.
 */
#include "dolphin/types.h"

/* 0x00118C 192 B, alignment 8 */
u8 lbl_803FFEF0[192] __attribute__((aligned(8)));

/* 0x00108C 256 B, alignment 8 */
u8 lbl_803FFDF0[256] __attribute__((aligned(8)));

/* 0x000F8C 256 B, alignment 8 */
u8 lbl_803FFCF0[256] __attribute__((aligned(8)));

/* 0x000E8C 256 B, alignment 8 */
u8 lbl_803FFBF0[256] __attribute__((aligned(8)));

/* 0x000E54 56 B, alignment 8 */
u8 lbl_803FFBB8[56] __attribute__((aligned(8)));

/* 0x000D54 256 B, alignment 8 */
u8 __atexit_funcs[256] __attribute__((aligned(8)));

/* 0x000D34 32 B, alignment 8 */
u8 lbl_803FFA98[32] __attribute__((aligned(8)));

/* 0x000834 1280 B, alignment 8 */
u8 lbl_803FF598[1280] __attribute__((aligned(8)));

/* 0x000814 32 B, alignment 8 */
u8 lbl_803FF578[32] __attribute__((aligned(8)));

/* 0x00029C 1400 B, alignment 8 */
u8 lbl_803FF000[1400] __attribute__((aligned(8)));

/* 0x000014 648 B, alignment 8 */
u8 lbl_803FED78[648] __attribute__((aligned(8)));

/* 0x00000C 8 B, alignment 8 */
u8 lbl_803FED70[8] __attribute__((aligned(8)));

/* 0x000005 7 B (alignment padding) */
u8 gap_06_803FED69_bss[7] __attribute__((aligned(1)));

/* 0x000004 1 B, alignment 8 */
u8 TRK_Use_BBA[1] __attribute__((aligned(8)));

/* 0x000000 4 B (alignment padding) */
u8 pad_06_803FED64_bss[4] __attribute__((aligned(1)));

