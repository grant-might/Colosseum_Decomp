/*
 * @file bss_80400948.c
 * @brief DOL zero-fill unit .bss 0x80400948-0x80400F30
 *        (auto unit main/auto_06_80400948_bss).
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

/* 0x000598 80 B, alignment 8 */
u8 lbl_80400EE0[80] __attribute__((aligned(8)));

/* 0x0001E0 952 B, alignment 8 */
u8 lbl_80400B28[952] __attribute__((aligned(8)));

/* 0x000000 480 B, alignment 8 */
u8 lbl_80400948[480] __attribute__((aligned(8)));

