/*
 * @file sbss_8047A778.c
 * @brief DOL zero-fill unit .sbss 0x8047A778-0x8047A780
 *        (auto unit main/auto_08_8047A778_sbss).
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

/* 0x000004 4 B, alignment 4 */
u8 DBVerbose[4] __attribute__((aligned(4)));

/* 0x000000 4 B, alignment 8 */
u8 __DBInterface[4] __attribute__((aligned(8)));

