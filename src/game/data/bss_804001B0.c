/*
 * @file bss_804001B0.c
 * @brief DOL zero-fill unit .bss 0x804001B0-0x804007E8
 *        (auto unit main/auto_06_804001B0_bss).
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

/* 0x000098 1440 B, alignment 8 */
u8 lbl_80400248[1440] __attribute__((aligned(8)));

/* 0x000040 88 B, alignment 8 */
u8 lbl_804001F0[88] __attribute__((aligned(8)));

/* 0x000000 64 B, alignment 8 */
u8 lbl_804001B0[64] __attribute__((aligned(8)));

