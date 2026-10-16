/*
 * @file bss_803FCDD8.c
 * @brief DOL zero-fill unit .bss 0x803FCDD8-0x803FED60
 *        (auto unit main/auto_06_803FCDD8_bss).
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

/* 0x001F80 8 B, alignment 8 */
u8 lbl_803FED58[8] __attribute__((aligned(8)));

/* 0x001F6C 20 B, alignment 4 */
u8 lbl_803FED44[20] __attribute__((aligned(4)));

/* 0x001ED8 148 B, alignment 8 */
u8 gTRKSaveState[148] __attribute__((aligned(8)));

/* 0x001AA8 1072 B, alignment 8 */
u8 gTRKCPUState[1072] __attribute__((aligned(8)));

/* 0x001A04 164 B, alignment 4 */
u8 gTRKState[164] __attribute__((aligned(4)));

/* 0x001A02 2 B (alignment padding) */
u8 gap_06_803FE7DA_bss[2] __attribute__((aligned(1)));

/* 0x001A00 2 B, alignment 8 */
u8 TRK_saved_exceptionID_803FE7D8[2] __attribute__((aligned(8)));

/* 0x0019F8 8 B, alignment 8 */
u8 lbl_803FE7D0[8] __attribute__((aligned(8)));

/* 0x0019E0 24 B, alignment 8 */
u8 lbl_803FE7B8[24] __attribute__((aligned(8)));

/* 0x000030 6576 B, alignment 8 */
u8 lbl_803FCE08[6576] __attribute__((aligned(8)));

/* 0x00002C 4 B (alignment padding) */
u8 gap_06_803FCE04_bss[4] __attribute__((aligned(1)));

/* 0x000028 4 B, alignment 8 */
u8 gTRKBigEndian[4] __attribute__((aligned(8)));

/* 0x000000 40 B, alignment 8 */
u8 lbl_803FCDD8[40] __attribute__((aligned(8)));

