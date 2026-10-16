/*
 * @file sbss_8047AA60.c
 * @brief DOL zero-fill unit .sbss 0x8047AA60-0x8047AAF8
 *        (auto unit main/auto_08_8047AA60_sbss).
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

/* 0x000094 4 B, alignment 4 */
u8 lbl_8047AAF4[4] __attribute__((aligned(4)));

/* 0x000090 4 B, alignment 8 */
u8 lbl_8047AAF0[4] __attribute__((aligned(8)));

/* 0x00008C 4 B, alignment 4 */
u8 lbl_8047AAEC[4] __attribute__((aligned(4)));

/* 0x00008A 2 B (alignment padding) */
u8 gap_08_8047AAEA_sbss[2] __attribute__((aligned(1)));

/* 0x000088 2 B, alignment 8 */
u8 lbl_8047AAE8[2] __attribute__((aligned(8)));

/* 0x000080 8 B, alignment 8 */
u8 lbl_8047AAE0[8] __attribute__((aligned(8)));

/* 0x000078 8 B, alignment 8 */
u8 lbl_8047AAD8[8] __attribute__((aligned(8)));

/* 0x000074 4 B, alignment 4 */
u8 lbl_8047AAD4[4] __attribute__((aligned(4)));

/* 0x000072 2 B (alignment padding) */
u8 gap_08_8047AAD2_sbss[2] __attribute__((aligned(1)));

/* 0x000070 2 B, alignment 8 */
u8 lbl_8047AAD0[2] __attribute__((aligned(8)));

/* 0x000068 8 B, alignment 8 */
u8 lbl_8047AAC8[8] __attribute__((aligned(8)));

/* 0x000064 4 B, alignment 4 */
u8 lbl_8047AAC4[4] __attribute__((aligned(4)));

/* 0x000060 4 B, alignment 8 */
u8 lbl_8047AAC0[4] __attribute__((aligned(8)));

/* 0x00005C 4 B, alignment 4 */
u8 lbl_8047AABC[4] __attribute__((aligned(4)));

/* 0x00005A 2 B (alignment padding) */
u8 gap_08_8047AABA_sbss[2] __attribute__((aligned(1)));

/* 0x000058 2 B, alignment 8 */
u8 lbl_8047AAB8[2] __attribute__((aligned(8)));

/* 0x000054 4 B, alignment 4 */
u8 lbl_8047AAB4[4] __attribute__((aligned(4)));

/* 0x000050 4 B, alignment 8 */
u8 lbl_8047AAB0[4] __attribute__((aligned(8)));

/* 0x00004C 4 B, alignment 4 */
u8 lbl_8047AAAC[4] __attribute__((aligned(4)));

/* 0x00004A 2 B (alignment padding) */
u8 gap_08_8047AAAA_sbss[2] __attribute__((aligned(1)));

/* 0x000048 2 B, alignment 8 */
u8 lbl_8047AAA8[2] __attribute__((aligned(8)));

/* 0x000040 8 B, alignment 8 */
u8 lbl_8047AAA0[8] __attribute__((aligned(8)));

/* 0x00003D 3 B (alignment padding) */
u8 gap_08_8047AA9D_sbss[3] __attribute__((aligned(1)));

/* 0x00003C 1 B, alignment 4 */
u8 lbl_8047AA9C[1] __attribute__((aligned(4)));

/* 0x000038 4 B, alignment 8 */
u8 lbl_8047AA98[4] __attribute__((aligned(8)));

/* 0x000034 4 B, alignment 4 */
u8 GSgfxVideoVsyncRate[4] __attribute__((aligned(4)));

/* 0x000032 2 B (alignment padding) */
u8 gap_08_8047AA92_sbss[2] __attribute__((aligned(1)));

/* 0x000031 1 B */
u8 lbl_8047AA91[1] __attribute__((aligned(1)));

/* 0x000030 1 B, alignment 8 */
u8 lbl_8047AA90[1] __attribute__((aligned(8)));

/* 0x00002C 4 B, alignment 4 */
u8 lbl_8047AA8C[4] __attribute__((aligned(4)));

/* 0x000028 4 B, alignment 8 */
u8 lbl_8047AA88[4] __attribute__((aligned(8)));

/* 0x000026 2 B (alignment padding) */
u8 gap_08_8047AA86_sbss[2] __attribute__((aligned(1)));

/* 0x000025 1 B */
u8 lbl_8047AA85[1] __attribute__((aligned(1)));

/* 0x000024 1 B, alignment 4 */
u8 lbl_8047AA84[1] __attribute__((aligned(4)));

/* 0x000020 4 B, alignment 8 */
u8 lbl_8047AA80[4] __attribute__((aligned(8)));

/* 0x000018 8 B, alignment 8 */
u8 lbl_8047AA78[8] __attribute__((aligned(8)));

/* 0x000014 4 B, alignment 4 */
u8 lbl_8047AA74[4] __attribute__((aligned(4)));

/* 0x000010 4 B, alignment 8 */
u8 lbl_8047AA70[4] __attribute__((aligned(8)));

/* 0x00000C 4 B, alignment 4 */
u8 lbl_8047AA6C[4] __attribute__((aligned(4)));

/* 0x00000A 2 B (alignment padding) */
u8 gap_08_8047AA6A_sbss[2] __attribute__((aligned(1)));

/* 0x000008 2 B, alignment 8 */
u8 lbl_8047AA68[2] __attribute__((aligned(8)));

/* 0x000004 4 B (alignment padding) */
u8 gap_08_8047AA64_sbss[4] __attribute__((aligned(1)));

/* 0x000000 4 B, alignment 8 */
u8 SamplingRate_8047AA60[4] __attribute__((aligned(8)));

