/*
 * @file sbss_8047AA28.c
 * @brief DOL zero-fill unit .sbss 0x8047AA28-0x8047AA50
 *        (auto unit main/auto_08_8047AA28_sbss).
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

/* 0x000024 4 B, alignment 4 */
u8 lbl_8047AA4C[4] __attribute__((aligned(4)));

/* 0x000020 4 B, alignment 8 */
u8 lbl_8047AA48[4] __attribute__((aligned(8)));

/* 0x00001C 4 B, alignment 4 */
u8 lbl_8047AA44[4] __attribute__((aligned(4)));

/* 0x000018 4 B, alignment 8 */
u8 lbl_8047AA40[4] __attribute__((aligned(8)));

/* 0x000015 3 B (alignment padding) */
u8 gap_08_8047AA3D_sbss[3] __attribute__((aligned(1)));

/* 0x000014 1 B, alignment 4 */
u8 lbl_8047AA3C[1] __attribute__((aligned(4)));

/* 0x000010 4 B, alignment 8 */
u8 lbl_8047AA38[4] __attribute__((aligned(8)));

/* 0x00000C 4 B, alignment 4 */
u8 lbl_8047AA34[4] __attribute__((aligned(4)));

/* 0x000008 4 B, alignment 8 */
u8 lbl_8047AA30[4] __attribute__((aligned(8)));

/* 0x000004 4 B, alignment 4 */
u8 lbl_8047AA2C[4] __attribute__((aligned(4)));

/* 0x000000 4 B, alignment 8 */
u8 lbl_8047AA28[4] __attribute__((aligned(8)));

