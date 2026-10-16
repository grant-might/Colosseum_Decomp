/*
 * @file sbss_8047B490.c
 * @brief DOL zero-fill unit .sbss 0x8047B490-0x8047B4A0
 *        (auto unit main/auto_08_8047B490_sbss).
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

/* 0x000000 16 B (alignment padding) */
u8 pad_08_8047B490_sbss[16] __attribute__((aligned(1)));

