/*
 * @file bss_80478800.c
 * @brief DOL zero-fill unit .bss 0x80478800-0x80478820
 *        (auto unit main/auto_06_80478800_bss).
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

/* 0x000010 16 B, alignment 8 */
u8 lbl_80478810[16] __attribute__((aligned(8)));

/* 0x000000 16 B, alignment 8 */
u8 lbl_80478800[16] __attribute__((aligned(8)));

