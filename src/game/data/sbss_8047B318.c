/*
 * @file sbss_8047B318.c
 * @brief DOL zero-fill unit .sbss 0x8047B318-0x8047B358
 *        (auto unit main/auto_08_8047B318_sbss).
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

/* 0x000039 7 B */
u8 lbl_8047B351[7] __attribute__((aligned(1)));

/* 0x000038 1 B, alignment 8 */
u8 lbl_8047B350[1] __attribute__((aligned(8)));

/* 0x000034 4 B, alignment 4 */
u8 lbl_8047B34C[4] __attribute__((aligned(4)));

/* 0x000030 4 B, alignment 8 */
u8 lbl_8047B348[4] __attribute__((aligned(8)));

/* 0x00002C 4 B, alignment 4 */
u8 lbl_8047B344[4] __attribute__((aligned(4)));

/* 0x000028 4 B, alignment 8 */
u8 lbl_8047B340[4] __attribute__((aligned(8)));

/* 0x000024 4 B, alignment 4 */
u8 lbl_8047B33C[4] __attribute__((aligned(4)));

/* 0x000021 3 B (alignment padding) */
u8 gap_08_8047B339_sbss[3] __attribute__((aligned(1)));

/* 0x000020 1 B, alignment 8 */
u8 lbl_8047B338[1] __attribute__((aligned(8)));

/* 0x00001C 4 B, alignment 4 */
u8 lbl_8047B334[4] __attribute__((aligned(4)));

/* 0x000019 3 B (alignment padding) */
u8 gap_08_8047B331_sbss[3] __attribute__((aligned(1)));

/* 0x000018 1 B, alignment 8 */
u8 lbl_8047B330[1] __attribute__((aligned(8)));

/* 0x000014 4 B, alignment 4 */
u8 lbl_8047B32C[4] __attribute__((aligned(4)));

/* 0x000011 3 B (alignment padding) */
u8 gap_08_8047B329_sbss[3] __attribute__((aligned(1)));

/* 0x000010 1 B, alignment 8 */
u8 lbl_8047B328[1] __attribute__((aligned(8)));

/* 0x00000C 4 B, alignment 4 */
u8 lbl_8047B324[4] __attribute__((aligned(4)));

/* 0x000008 4 B, alignment 8 */
u8 lbl_8047B320[4] __attribute__((aligned(8)));

/* 0x000007 1 B (alignment padding) */
u8 gap_08_8047B31F_sbss[1] __attribute__((aligned(1)));

/* 0x000006 1 B, alignment 2 */
u8 lbl_8047B31E[1] __attribute__((aligned(2)));

/* 0x000005 1 B */
u8 lbl_8047B31D[1] __attribute__((aligned(1)));

/* 0x000004 1 B, alignment 4 */
u8 lbl_8047B31C[1] __attribute__((aligned(4)));

/* 0x000003 1 B */
u8 lbl_8047B31B[1] __attribute__((aligned(1)));

/* 0x000002 1 B, alignment 2 */
u8 lbl_8047B31A[1] __attribute__((aligned(2)));

/* 0x000001 1 B */
u8 lbl_8047B319[1] __attribute__((aligned(1)));

/* 0x000000 1 B, alignment 8 */
u8 lbl_8047B318[1] __attribute__((aligned(8)));

