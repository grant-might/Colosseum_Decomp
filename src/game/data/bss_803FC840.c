/*
 * @file bss_803FC840.c
 * @brief DOL zero-fill unit .bss 0x803FC840-0x803FC860
 *        (auto unit main/auto_06_803FC840_bss).
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

/* 0x000000 32 B, alignment 8 */
u8 lbl_803FC840[32] __attribute__((aligned(8)));

