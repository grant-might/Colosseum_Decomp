/*
 * @file sdata_804789AC.c
 * @brief DOL data unit .sdata 0x804789AC-0x804789B8
 *        (auto unit main/auto_07_804789AC_sdata).
 *
 * Non-relocated data as byte-exact u8[]; pointer/jump tables as
 * void*[] so every R_PPC_ADDR32 relocation is reproduced.
 */
#include "dolphin/types.h"

/* 0x000000 4 B */
u8 pad_07_804789AC_sdata[4] __attribute__((aligned(1))) = {
    0x00, 0x00, 0x00, 0x00,
};

/* 0x000004 8 B */
u8 lbl_804789B0[8] __attribute__((aligned(1))) = {
    0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00,
};

