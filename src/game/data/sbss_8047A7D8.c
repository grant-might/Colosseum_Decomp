/*
 * @file sbss_8047A7D8.c
 * @brief DOL zero-fill unit .sbss 0x8047A7D8-0x8047A838
 *        (auto unit main/auto_08_8047A7D8_sbss).
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

/* 0x00005C 4 B (alignment padding) */
u8 gap_08_8047A834_sbss[4] __attribute__((aligned(1)));

/* 0x000058 4 B, alignment 8 */
u8 FatalFunc_8047A830[4] __attribute__((aligned(8)));

/* 0x000054 4 B, alignment 4 */
u8 lbl_8047A82C[4] __attribute__((aligned(4)));

/* 0x000050 4 B, alignment 8 */
u8 DVDInitialized_8047A828[4] __attribute__((aligned(8)));

/* 0x00004C 4 B, alignment 4 */
u8 FirstTimeInBootrom_8047A824[4] __attribute__((aligned(4)));

/* 0x000048 4 B, alignment 8 */
u8 ResetRequired_8047A820[4] __attribute__((aligned(8)));

/* 0x000044 4 B, alignment 4 */
u8 lbl_8047A81C[4] __attribute__((aligned(4)));

/* 0x000040 4 B, alignment 8 */
u8 lbl_8047A818[4] __attribute__((aligned(8)));

/* 0x00003C 4 B, alignment 4 */
u8 CancelLastError_8047A814[4] __attribute__((aligned(4)));

/* 0x000038 4 B, alignment 8 */
u8 ResumeFromHere_8047A810[4] __attribute__((aligned(8)));

/* 0x000034 4 B, alignment 4 */
u8 lbl_8047A80C[4] __attribute__((aligned(4)));

/* 0x000030 4 B, alignment 8 */
u8 lbl_8047A808[4] __attribute__((aligned(8)));

/* 0x00002C 4 B, alignment 4 */
u8 CurrCommand_8047A804[4] __attribute__((aligned(4)));

/* 0x000028 4 B, alignment 8 */
u8 FatalErrorFlag_8047A800[4] __attribute__((aligned(8)));

/* 0x000024 4 B, alignment 4 */
u8 lbl_8047A7FC[4] __attribute__((aligned(4)));

/* 0x000020 4 B, alignment 8 */
u8 PausingFlag_8047A7F8[4] __attribute__((aligned(8)));

/* 0x00001C 4 B, alignment 4 */
u8 PauseFlag_8047A7F4[4] __attribute__((aligned(4)));

/* 0x000018 4 B, alignment 8 */
u8 bootInfo_8047A7F0[4] __attribute__((aligned(8)));

/* 0x000014 4 B, alignment 4 */
u8 IDShouldBe_8047A7EC[4] __attribute__((aligned(4)));

/* 0x000010 4 B, alignment 8 */
u8 executing_8047A7E8[4] __attribute__((aligned(8)));

/* 0x000008 8 B, alignment 8 */
u8 __DVDThreadQueue[8] __attribute__((aligned(8)));

/* 0x000004 4 B, alignment 4 */
u8 __DVDLongFileNameFlag[4] __attribute__((aligned(4)));

/* 0x000000 4 B, alignment 8 */
u8 lbl_8047A7D8[4] __attribute__((aligned(8)));

