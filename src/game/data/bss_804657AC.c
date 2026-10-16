/*
 * @file bss_804657AC.c
 * @brief DOL zero-fill unit .bss 0x804657AC-0x804657C0
 *        (auto unit main/auto_06_804657AC_bss).
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

/* 0x000000 20 B (alignment padding) */
u8 pad_06_804657AC_bss[20] __attribute__((aligned(1)));

