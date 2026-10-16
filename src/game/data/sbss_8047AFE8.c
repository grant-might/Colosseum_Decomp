/*
 * @file sbss_8047AFE8.c
 * @brief DOL zero-fill unit .sbss 0x8047AFE8-0x8047B030
 *        (auto unit main/auto_08_8047AFE8_sbss).
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

/* 0x000040 8 B, alignment 8 */
u8 lbl_8047B028[8] __attribute__((aligned(8)));

/* 0x00003C 4 B, alignment 4 */
u8 lbl_8047B024[4] __attribute__((aligned(4)));

/* 0x000038 4 B, alignment 8 */
u8 lbl_8047B020[4] __attribute__((aligned(8)));

/* 0x000034 4 B, alignment 4 */
u8 lbl_8047B01C[4] __attribute__((aligned(4)));

/* 0x000030 4 B, alignment 8 */
u8 lbl_8047B018[4] __attribute__((aligned(8)));

/* 0x00002C 4 B, alignment 4 */
u8 lbl_8047B014[4] __attribute__((aligned(4)));

/* 0x000028 4 B, alignment 8 */
u8 lbl_8047B010[4] __attribute__((aligned(8)));

/* 0x000026 2 B (alignment padding) */
u8 gap_08_8047B00E_sbss[2] __attribute__((aligned(1)));

/* 0x000024 2 B, alignment 4 */
u8 lbl_8047B00C[2] __attribute__((aligned(4)));

/* 0x000020 4 B, alignment 8 */
u8 lbl_8047B008[4] __attribute__((aligned(8)));

/* 0x00001C 4 B, alignment 4 */
u8 lbl_8047B004[4] __attribute__((aligned(4)));

/* 0x000018 4 B, alignment 8 */
u8 lbl_8047B000[4] __attribute__((aligned(8)));

/* 0x000016 2 B (alignment padding) */
u8 gap_08_8047AFFE_sbss[2] __attribute__((aligned(1)));

/* 0x000014 2 B, alignment 4 */
u8 lbl_8047AFFC[2] __attribute__((aligned(4)));

/* 0x000010 4 B, alignment 8 */
u8 lbl_8047AFF8[4] __attribute__((aligned(8)));

/* 0x00000C 4 B, alignment 4 */
u8 lbl_8047AFF4[4] __attribute__((aligned(4)));

/* 0x000008 4 B, alignment 8 */
u8 lbl_8047AFF0[4] __attribute__((aligned(8)));

/* 0x000000 8 B, alignment 8 */
u8 lbl_8047AFE8[8] __attribute__((aligned(8)));

