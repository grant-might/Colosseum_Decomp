/*
 * @file sbss_8047B398.c
 * @brief DOL zero-fill unit .sbss 0x8047B398-0x8047B3D0
 *        (auto unit main/auto_08_8047B398_sbss).
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

/* 0x000030 8 B, alignment 8 */
u8 lbl_8047B3C8[8] __attribute__((aligned(8)));

/* 0x00002D 3 B (alignment padding) */
u8 gap_08_8047B3C5_sbss[3] __attribute__((aligned(1)));

/* 0x00002C 1 B, alignment 4 */
u8 lbl_8047B3C4[1] __attribute__((aligned(4)));

/* 0x000028 4 B, alignment 8 */
u8 lbl_8047B3C0[4] __attribute__((aligned(8)));

/* 0x000020 8 B, alignment 8 */
u8 lbl_8047B3B8[8] __attribute__((aligned(8)));

/* 0x00001C 4 B, alignment 4 */
u8 lbl_8047B3B4[4] __attribute__((aligned(4)));

/* 0x000019 3 B (alignment padding) */
u8 gap_08_8047B3B1_sbss[3] __attribute__((aligned(1)));

/* 0x000018 1 B, alignment 8 */
u8 lbl_8047B3B0[1] __attribute__((aligned(8)));

/* 0x000010 8 B, alignment 8 */
u8 lbl_8047B3A8[8] __attribute__((aligned(8)));

/* 0x000004 12 B, alignment 4 */
u8 lbl_8047B39C[12] __attribute__((aligned(4)));

/* 0x000003 1 B (alignment padding) */
u8 gap_08_8047B39B_sbss[1] __attribute__((aligned(1)));

/* 0x000002 1 B, alignment 2 */
u8 lbl_8047B39A[1] __attribute__((aligned(2)));

/* 0x000001 1 B */
u8 lbl_8047B399[1] __attribute__((aligned(1)));

/* 0x000000 1 B, alignment 8 */
u8 lbl_8047B398[1] __attribute__((aligned(8)));

