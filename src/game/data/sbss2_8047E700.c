#include "dolphin/types.h"

/* Unsourced .sbss2 unit 0x8047E700..0x8047E710 (16 B):
 * 2 symbols mirrored from the dtk-extracted target object. Declared
 * last-to-first because MWCC emits uninitialized objects in reverse order; the
 * .sbss2 object is produced from the .sdata2 section name. */

/* 0x000008     8 B */
__declspec(section ".sdata2") u8 lbl_8047E708[8] __attribute__((aligned(1)));

/* 0x000000     8 B */
__declspec(section ".sdata2") u8 lbl_8047E700[8] __attribute__((aligned(1)));
