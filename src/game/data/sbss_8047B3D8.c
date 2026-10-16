/*
 * @file sbss_8047B3D8.c
 * @brief DOL zero-fill unit .sbss 0x8047B3D8-0x8047B460
 *        (auto unit main/auto_08_8047B3D8_sbss).
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

/* 0x000084 4 B, alignment 4 */
u8 lbl_8047B45C[4] __attribute__((aligned(4)));

/* 0x000080 4 B, alignment 8 */
u8 lbl_8047B458[4] __attribute__((aligned(8)));

/* 0x00007C 4 B, alignment 4 */
u8 lbl_8047B454[4] __attribute__((aligned(4)));

/* 0x000078 4 B, alignment 8 */
u8 lbl_8047B450[4] __attribute__((aligned(8)));

/* 0x000070 8 B, alignment 8 */
u8 lbl_8047B448[8] __attribute__((aligned(8)));

/* 0x00006C 4 B, alignment 4 */
u8 lbl_8047B444[4] __attribute__((aligned(4)));

/* 0x00006A 2 B (alignment padding) */
u8 gap_08_8047B442_sbss[2] __attribute__((aligned(1)));

/* 0x000069 1 B */
u8 lbl_8047B441[1] __attribute__((aligned(1)));

/* 0x000068 1 B, alignment 8 */
u8 lbl_8047B440[1] __attribute__((aligned(8)));

/* 0x000065 3 B (alignment padding) */
u8 gap_08_8047B43D_sbss[3] __attribute__((aligned(1)));

/* 0x000064 1 B, alignment 4 */
u8 lbl_8047B43C[1] __attribute__((aligned(4)));

/* 0x000060 4 B, alignment 8 */
u8 lbl_8047B438[4] __attribute__((aligned(8)));

/* 0x00005E 2 B (alignment padding) */
u8 gap_08_8047B436_sbss[2] __attribute__((aligned(1)));

/* 0x00005D 1 B */
u8 lbl_8047B435[1] __attribute__((aligned(1)));

/* 0x00005C 1 B, alignment 4 */
u8 lbl_8047B434[1] __attribute__((aligned(4)));

/* 0x000058 4 B, alignment 8 */
u8 lbl_8047B430[4] __attribute__((aligned(8)));

/* 0x000054 4 B, alignment 4 */
u8 lbl_8047B42C[4] __attribute__((aligned(4)));

/* 0x000050 4 B, alignment 8 */
u8 lbl_8047B428[4] __attribute__((aligned(8)));

/* 0x00004C 4 B, alignment 4 */
u8 lbl_8047B424[4] __attribute__((aligned(4)));

/* 0x000049 3 B (alignment padding) */
u8 gap_08_8047B421_sbss[3] __attribute__((aligned(1)));

/* 0x000048 1 B, alignment 8 */
u8 lbl_8047B420[1] __attribute__((aligned(8)));

/* 0x000040 8 B, alignment 8 */
u8 lbl_8047B418[8] __attribute__((aligned(8)));

/* 0x00003C 4 B, alignment 4 */
u8 lbl_8047B414[4] __attribute__((aligned(4)));

/* 0x000038 4 B, alignment 8 */
u8 lbl_8047B410[4] __attribute__((aligned(8)));

/* 0x000030 8 B, alignment 8 */
u8 lbl_8047B408[8] __attribute__((aligned(8)));

/* 0x000028 8 B, alignment 8 */
u8 lbl_8047B400[8] __attribute__((aligned(8)));

/* 0x000027 1 B */
u8 lbl_8047B3FF[1] __attribute__((aligned(1)));

/* 0x000026 1 B, alignment 2 */
u8 lbl_8047B3FE[1] __attribute__((aligned(2)));

/* 0x000025 1 B */
u8 lbl_8047B3FD[1] __attribute__((aligned(1)));

/* 0x000024 1 B, alignment 4 */
u8 lbl_8047B3FC[1] __attribute__((aligned(4)));

/* 0x000020 4 B, alignment 8 */
u8 lbl_8047B3F8[4] __attribute__((aligned(8)));

/* 0x00001D 3 B (alignment padding) */
u8 gap_08_8047B3F5_sbss[3] __attribute__((aligned(1)));

/* 0x00001C 1 B, alignment 4 */
u8 lbl_8047B3F4[1] __attribute__((aligned(4)));

/* 0x000018 4 B, alignment 8 */
u8 lbl_8047B3F0[4] __attribute__((aligned(8)));

/* 0x000014 4 B, alignment 4 */
u8 lbl_8047B3EC[4] __attribute__((aligned(4)));

/* 0x000010 4 B, alignment 8 */
u8 lbl_8047B3E8[4] __attribute__((aligned(8)));

/* 0x000008 8 B, alignment 8 */
u8 lbl_8047B3E0[8] __attribute__((aligned(8)));

/* 0x000000 8 B, alignment 8 */
u8 lbl_8047B3D8[8] __attribute__((aligned(8)));

