#include "dolphin/types.h"

/* Unsourced .sbss2 unit 0x8047E714..0x8047E728 (20 B):
 * 3 symbols mirrored from the dtk-extracted target object. Declared
 * last-to-first because MWCC emits uninitialized objects in reverse order; the
 * .sbss2 object is produced from the .sdata2 section name. */

/* 0x00000C     8 B */
__declspec(section ".sdata2") u8 lbl_8047E720[8] __attribute__((aligned(1)));

/* 0x000004     8 B */
__declspec(section ".sdata2") u8 lbl_8047E718[8] __attribute__((aligned(1)));

/* 0x000000     4 B */
__declspec(section ".sdata2") u8 pad_10_8047E714_sbss2[4] __attribute__((aligned(1)));
