/*
 * @file bss_804011B8.c
 * @brief DOL zero-fill unit .bss 0x804011B8-0x80401C10
 *        (auto unit main/auto_06_804011B8_bss).
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

/* 0x000A40 24 B, alignment 8 */
u8 lbl_80401BF8[24] __attribute__((aligned(8)));

/* 0x000A20 32 B, alignment 8 */
u8 lbl_80401BD8[32] __attribute__((aligned(8)));

/* 0x000A00 32 B, alignment 8 */
u8 lbl_80401BB8[32] __attribute__((aligned(8)));

/* 0x000900 256 B, alignment 8 */
u8 lbl_80401AB8[256] __attribute__((aligned(8)));

/* 0x0008C0 64 B, alignment 8 */
u8 lbl_80401A78[64] __attribute__((aligned(8)));

/* 0x000838 136 B, alignment 8 */
u8 lbl_804019F0[136] __attribute__((aligned(8)));

/* 0x000738 256 B, alignment 8 */
u8 lbl_804018F0[256] __attribute__((aligned(8)));

/* 0x0006F8 64 B, alignment 8 */
u8 lbl_804018B0[64] __attribute__((aligned(8)));

/* 0x000518 480 B, alignment 8 */
u8 lbl_804016D0[480] __attribute__((aligned(8)));

/* 0x0004E8 48 B, alignment 8 */
u8 lbl_804016A0[48] __attribute__((aligned(8)));

/* 0x0002D8 528 B, alignment 8 */
u8 lbl_80401490[528] __attribute__((aligned(8)));

/* 0x000000 728 B, alignment 8 */
u8 lbl_804011B8[728] __attribute__((aligned(8)));

