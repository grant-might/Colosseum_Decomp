/*
 * @file sbss_8047B1A0.c
 * @brief DOL zero-fill unit .sbss 0x8047B1A0-0x8047B1F0
 *        (auto unit main/auto_08_8047B1A0_sbss).
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

/* 0x000048 8 B, alignment 8 */
u8 lbl_8047B1E8[8] __attribute__((aligned(8)));

/* 0x000044 4 B, alignment 4 */
u8 lbl_8047B1E4[4] __attribute__((aligned(4)));

/* 0x000040 4 B, alignment 8 */
u8 lbl_8047B1E0[4] __attribute__((aligned(8)));

/* 0x000038 8 B, alignment 8 */
u8 lbl_8047B1D8[8] __attribute__((aligned(8)));

/* 0x000034 4 B, alignment 4 */
u8 lbl_8047B1D4[4] __attribute__((aligned(4)));

/* 0x000030 4 B, alignment 8 */
u8 lbl_8047B1D0[4] __attribute__((aligned(8)));

/* 0x000028 8 B, alignment 8 */
u8 lbl_8047B1C8[8] __attribute__((aligned(8)));

/* 0x000020 8 B, alignment 8 */
u8 lbl_8047B1C0[8] __attribute__((aligned(8)));

/* 0x00001C 4 B, alignment 4 */
u8 lbl_8047B1BC[4] __attribute__((aligned(4)));

/* 0x000018 4 B, alignment 8 */
u8 lbl_8047B1B8[4] __attribute__((aligned(8)));

/* 0x000014 4 B, alignment 4 */
u8 lbl_8047B1B4[4] __attribute__((aligned(4)));

/* 0x000010 4 B, alignment 8 */
u8 lbl_8047B1B0[4] __attribute__((aligned(8)));

/* 0x00000E 2 B (alignment padding) */
u8 gap_08_8047B1AE_sbss[2] __attribute__((aligned(1)));

/* 0x00000C 2 B, alignment 4 */
u8 lbl_8047B1AC[2] __attribute__((aligned(4)));

/* 0x000008 4 B, alignment 8 */
u8 lbl_8047B1A8[4] __attribute__((aligned(8)));

/* 0x000004 4 B, alignment 4 */
u8 lbl_8047B1A4[4] __attribute__((aligned(4)));

/* 0x000002 2 B, alignment 2 */
u8 lbl_8047B1A2[2] __attribute__((aligned(2)));

/* 0x000001 1 B (alignment padding) */
u8 gap_08_8047B1A1_sbss[1] __attribute__((aligned(1)));

/* 0x000000 1 B, alignment 8 */
u8 lbl_8047B1A0[1] __attribute__((aligned(8)));

