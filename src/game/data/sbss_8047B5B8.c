/*
 * @file sbss_8047B5B8.c
 * @brief DOL zero-fill unit .sbss 0x8047B5B8-0x8047B670
 *        (auto unit main/auto_08_8047B5B8_sbss).
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

/* 0x0000B0 8 B, alignment 8 */
u8 lbl_8047B668[8] __attribute__((aligned(8)));

/* 0x0000AC 4 B, alignment 4 */
u8 lbl_8047B664[4] __attribute__((aligned(4)));

/* 0x0000A8 4 B, alignment 8 */
u8 lbl_8047B660[4] __attribute__((aligned(8)));

/* 0x0000A0 8 B, alignment 8 */
u8 lbl_8047B658[8] __attribute__((aligned(8)));

/* 0x00009C 4 B, alignment 4 */
u8 lbl_8047B654[4] __attribute__((aligned(4)));

/* 0x000098 4 B, alignment 8 */
u8 lbl_8047B650[4] __attribute__((aligned(8)));

/* 0x000094 4 B, alignment 4 */
u8 lbl_8047B64C[4] __attribute__((aligned(4)));

/* 0x000093 1 B (alignment padding) */
u8 gap_08_8047B64B_sbss[1] __attribute__((aligned(1)));

/* 0x000092 1 B, alignment 2 */
u8 lbl_8047B64A[1] __attribute__((aligned(2)));

/* 0x000091 1 B */
u8 lbl_8047B649[1] __attribute__((aligned(1)));

/* 0x000090 1 B, alignment 8 */
u8 lbl_8047B648[1] __attribute__((aligned(8)));

/* 0x00008C 4 B, alignment 4 */
u8 lbl_8047B644[4] __attribute__((aligned(4)));

/* 0x00008B 1 B (alignment padding) */
u8 gap_08_8047B643_sbss[1] __attribute__((aligned(1)));

/* 0x00008A 1 B, alignment 2 */
u8 lbl_8047B642[1] __attribute__((aligned(2)));

/* 0x000088 2 B, alignment 8 */
u8 lbl_8047B640[2] __attribute__((aligned(8)));

/* 0x000087 1 B */
u8 lbl_8047B63F[1] __attribute__((aligned(1)));

/* 0x000086 1 B, alignment 2 */
u8 lbl_8047B63E[1] __attribute__((aligned(2)));

/* 0x000084 2 B, alignment 4 */
u8 lbl_8047B63C[2] __attribute__((aligned(4)));

/* 0x000080 4 B, alignment 8 */
u8 lbl_8047B638[4] __attribute__((aligned(8)));

/* 0x00007C 4 B, alignment 4 */
u8 lbl_8047B634[4] __attribute__((aligned(4)));

/* 0x000078 4 B, alignment 8 */
u8 lbl_8047B630[4] __attribute__((aligned(8)));

/* 0x000074 4 B, alignment 4 */
u8 lbl_8047B62C[4] __attribute__((aligned(4)));

/* 0x000071 3 B */
u8 lbl_8047B629[3] __attribute__((aligned(1)));

/* 0x000070 1 B, alignment 8 */
u8 lbl_8047B628[1] __attribute__((aligned(8)));

/* 0x00006F 1 B */
u8 lbl_8047B627[1] __attribute__((aligned(1)));

/* 0x00006E 1 B, alignment 2 */
u8 lbl_8047B626[1] __attribute__((aligned(2)));

/* 0x00006D 1 B */
u8 lbl_8047B625[1] __attribute__((aligned(1)));

/* 0x000068 5 B, alignment 8 */
u8 lbl_8047B620[5] __attribute__((aligned(8)));

/* 0x000066 2 B (alignment padding) */
u8 gap_08_8047B61E_sbss[2] __attribute__((aligned(1)));

/* 0x000064 2 B, alignment 4 */
u8 lbl_8047B61C[2] __attribute__((aligned(4)));

/* 0x000060 4 B, alignment 8 */
u8 lbl_8047B618[4] __attribute__((aligned(8)));

/* 0x00005D 3 B (alignment padding) */
u8 gap_08_8047B615_sbss[3] __attribute__((aligned(1)));

/* 0x00005C 1 B, alignment 4 */
u8 lbl_8047B614[1] __attribute__((aligned(4)));

/* 0x000058 4 B, alignment 8 */
u8 lbl_8047B610[4] __attribute__((aligned(8)));

/* 0x000056 2 B (alignment padding) */
u8 gap_08_8047B60E_sbss[2] __attribute__((aligned(1)));

/* 0x000054 2 B, alignment 4 */
u8 lbl_8047B60C[2] __attribute__((aligned(4)));

/* 0x000050 4 B, alignment 8 */
u8 lbl_8047B608[4] __attribute__((aligned(8)));

/* 0x000048 8 B, alignment 8 */
u8 lbl_8047B600[8] __attribute__((aligned(8)));

/* 0x000040 8 B, alignment 8 */
u8 lbl_8047B5F8[8] __attribute__((aligned(8)));

/* 0x000038 8 B, alignment 8 */
u8 lbl_8047B5F0[8] __attribute__((aligned(8)));

/* 0x000034 4 B, alignment 4 */
u8 lbl_8047B5EC[4] __attribute__((aligned(4)));

/* 0x000030 4 B, alignment 8 */
u8 lbl_8047B5E8[4] __attribute__((aligned(8)));

/* 0x000029 7 B */
u8 lbl_8047B5E1[7] __attribute__((aligned(1)));

/* 0x000028 1 B, alignment 8 */
u8 lbl_8047B5E0[1] __attribute__((aligned(8)));

/* 0x000022 6 B, alignment 2 */
u8 lbl_8047B5DA[6] __attribute__((aligned(2)));

/* 0x000020 2 B, alignment 8 */
u8 lbl_8047B5D8[2] __attribute__((aligned(8)));

/* 0x00001E 2 B, alignment 2 */
u8 lbl_8047B5D6[2] __attribute__((aligned(2)));

/* 0x00001D 1 B */
u8 lbl_8047B5D5[1] __attribute__((aligned(1)));

/* 0x00001C 1 B, alignment 4 */
u8 lbl_8047B5D4[1] __attribute__((aligned(4)));

/* 0x000018 4 B, alignment 8 */
u8 lbl_8047B5D0[4] __attribute__((aligned(8)));

/* 0x000010 8 B, alignment 8 */
u8 lbl_8047B5C8[8] __attribute__((aligned(8)));

/* 0x00000C 4 B, alignment 4 */
u8 lbl_8047B5C4[4] __attribute__((aligned(4)));

/* 0x00000A 2 B (alignment padding) */
u8 gap_08_8047B5C2_sbss[2] __attribute__((aligned(1)));

/* 0x000009 1 B */
u8 lbl_8047B5C1[1] __attribute__((aligned(1)));

/* 0x000008 1 B, alignment 8 */
u8 lbl_8047B5C0[1] __attribute__((aligned(8)));

/* 0x000000 8 B, alignment 8 */
u8 lbl_8047B5B8[8] __attribute__((aligned(8)));

