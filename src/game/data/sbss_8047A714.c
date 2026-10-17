#include "dolphin/types.h"

/* Unsourced .sbss unit 0x8047A714..0x8047A760 (76 B):
 * 13 symbols mirrored from the dtk-extracted target object. Declared
 * last-to-first because MWCC emits uninitialized objects in reverse order; the
 * .sbss object is produced from the .sdata section name. */

/* 0x000044     8 B */
__declspec(section ".sdata") u8 lbl_8047A758[8] __attribute__((aligned(1)));

/* 0x00003C     8 B */
__declspec(section ".sdata") u8 lbl_8047A750[8] __attribute__((aligned(1)));

/* 0x000034     8 B */
__declspec(section ".sdata") u8 lbl_8047A748[8] __attribute__((aligned(1)));

/* 0x000030     4 B */
__declspec(section ".sdata") u8 lbl_8047A744[4] __attribute__((aligned(1)));

/* 0x00002C     4 B */
__declspec(section ".sdata") u8 lbl_8047A740[4] __attribute__((aligned(1)));

/* 0x000024     8 B */
__declspec(section ".sdata") u8 ResetFunctionQueue_8047A738[8] __attribute__((aligned(1)));

/* 0x00001C     8 B */
__declspec(section ".sdata") u8 lbl_8047A730[8] __attribute__((aligned(1)));

/* 0x000018     4 B */
__declspec(section ".sdata") u8 lbl_8047A72C[4] __attribute__((aligned(1)));

/* 0x000014     4 B */
__declspec(section ".sdata") u8 lbl_8047A728[4] __attribute__((aligned(1)));

/* 0x00000C     8 B */
__declspec(section ".sdata") u8 __OSLastInterruptTime[8] __attribute__((aligned(1)));

/* 0x000006     6 B */
__declspec(section ".sdata") u8 gap_08_8047A71A_sbss[6] __attribute__((aligned(1)));

/* 0x000004     2 B */
__declspec(section ".sdata") u8 __OSLastInterrupt[2] __attribute__((aligned(1)));

/* 0x000000     4 B */
__declspec(section ".sdata") u8 __OSLastInterruptSrr0[4] __attribute__((aligned(1)));
