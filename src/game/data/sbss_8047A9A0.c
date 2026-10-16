/*
 * @file sbss_8047A9A0.c
 * @brief DOL zero-fill unit .sbss 0x8047A9A0-0x8047A9F0
 *        (auto unit main/auto_08_8047A9A0_sbss).
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
u8 lbl_8047A9E8[8] __attribute__((aligned(8)));

/* 0x000040 8 B, alignment 8 */
u8 lbl_8047A9E0[8] __attribute__((aligned(8)));

/* 0x00003C 4 B (alignment padding) */
u8 gap_08_8047A9DC_sbss[4] __attribute__((aligned(1)));

/* 0x000038 4 B, alignment 8 */
u8 gTRKInputPendingPtr[4] __attribute__((aligned(8)));

/* 0x00002C 12 B, alignment 4 */
u8 lbl_8047A9CC[12] __attribute__((aligned(4)));

/* 0x000029 3 B (alignment padding) */
u8 gap_08_8047A9C9_sbss[3] __attribute__((aligned(1)));

/* 0x000028 1 B, alignment 8 */
u8 lbl_8047A9C8[1] __attribute__((aligned(8)));

/* 0x000024 4 B, alignment 4 */
u8 lbl_8047A9C4[4] __attribute__((aligned(4)));

/* 0x000020 4 B, alignment 8 */
u8 lbl_8047A9C0[4] __attribute__((aligned(8)));

/* 0x000018 8 B, alignment 8 */
u8 lbl_8047A9B8[8] __attribute__((aligned(8)));

/* 0x000014 4 B, alignment 4 */
u8 lbl_8047A9B4[4] __attribute__((aligned(4)));

/* 0x000010 4 B, alignment 8 */
u8 lbl_8047A9B0[4] __attribute__((aligned(8)));

/* 0x00000D 3 B (alignment padding) */
u8 gap_08_8047A9AD_sbss[3] __attribute__((aligned(1)));

/* 0x00000C 1 B, alignment 4 */
u8 lbl_8047A9AC[1] __attribute__((aligned(4)));

/* 0x000008 4 B, alignment 8 */
u8 lbl_8047A9A8[4] __attribute__((aligned(8)));

/* 0x000004 4 B, alignment 4 */
u8 lbl_8047A9A4[4] __attribute__((aligned(4)));

/* 0x000000 4 B, alignment 8 */
u8 lbl_8047A9A0[4] __attribute__((aligned(8)));

