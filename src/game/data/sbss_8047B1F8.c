/*
 * @file sbss_8047B1F8.c
 * @brief DOL zero-fill unit .sbss 0x8047B1F8-0x8047B220
 *        (auto unit main/auto_08_8047B1F8_sbss).
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

/* 0x000020 8 B, alignment 8 */
u8 lbl_8047B218[8] __attribute__((aligned(8)));

/* 0x000018 8 B, alignment 8 */
u8 lbl_8047B210[8] __attribute__((aligned(8)));

/* 0x000014 4 B, alignment 4 */
u8 lbl_8047B20C[4] __attribute__((aligned(4)));

/* 0x000012 2 B (alignment padding) */
u8 gap_08_8047B20A_sbss[2] __attribute__((aligned(1)));

/* 0x000010 2 B, alignment 8 */
u8 lbl_8047B208[2] __attribute__((aligned(8)));

/* 0x000008 8 B, alignment 8 */
u8 lbl_8047B200[8] __attribute__((aligned(8)));

/* 0x000006 2 B (alignment padding) */
u8 gap_08_8047B1FE_sbss[2] __attribute__((aligned(1)));

/* 0x000004 2 B, alignment 4 */
u8 lbl_8047B1FC[2] __attribute__((aligned(4)));

/* 0x000000 4 B, alignment 8 */
u8 lbl_8047B1F8[4] __attribute__((aligned(8)));

