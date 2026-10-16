/*
 * @file sbss_8047A9F4.c
 * @brief DOL zero-fill unit .sbss 0x8047A9F4-0x8047AA20
 *        (auto unit main/auto_08_8047A9F4_sbss).
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

/* 0x000028 4 B (alignment padding) */
u8 pad_08_00000028[4] __attribute__((aligned(1)));

/* 0x000024 4 B, alignment 8 */
u8 lbl_8047AA18[4] __attribute__((aligned(8)));

/* 0x00001C 8 B, alignment 8 */
u8 lbl_8047AA10[8] __attribute__((aligned(8)));

/* 0x000014 8 B, alignment 8 */
u8 lbl_8047AA08[8] __attribute__((aligned(8)));

/* 0x000010 4 B, alignment 4 */
u8 __console_exit[4] __attribute__((aligned(4)));

/* 0x00000C 4 B, alignment 8 */
u8 __stdio_exit[4] __attribute__((aligned(8)));

/* 0x000008 4 B, alignment 4 */
u8 __atexit_curr_func[4] __attribute__((aligned(4)));

/* 0x000004 4 B, alignment 8 */
u8 __aborting[4] __attribute__((aligned(8)));

/* 0x000000 4 B (alignment padding) */
u8 pad_08_8047A9F4_sbss[4] __attribute__((aligned(1)));

