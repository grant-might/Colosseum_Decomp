/*
 * @file sbss_8047AF60.c
 * @brief DOL zero-fill unit .sbss 0x8047AF60-0x8047AF68
 *        (auto unit main/auto_08_8047AF60_sbss).
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

/* 0x000006 2 B (alignment padding) */
u8 gap_08_8047AF66_sbss[2] __attribute__((aligned(1)));

/* 0x000005 1 B */
u8 lbl_8047AF65[1] __attribute__((aligned(1)));

/* 0x000004 1 B, alignment 4 */
u8 lbl_8047AF64[1] __attribute__((aligned(4)));

/* 0x000000 4 B, alignment 8 */
u8 lbl_8047AF60[4] __attribute__((aligned(8)));

