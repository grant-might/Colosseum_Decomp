/*
 * @file sdata_80478998.c
 * @brief DOL data unit .sdata 0x80478998-0x804789A8
 *        (auto unit main/auto_07_80478998_sdata).
 *
 * Non-relocated data as byte-exact u8[]; pointer/jump tables as
 * void*[] so every R_PPC_ADDR32 relocation is reproduced.
 */
#include "dolphin/types.h"

/* 0x000000 4 B */
u8 lbl_80478998[4] __attribute__((aligned(8))) = {
    0x25, 0x73, 0x0A, 0x00,
};

/* 0x000004 4 B */
u8 gap_07_8047899C_sdata[4] __attribute__((aligned(4))) = {
    0x00, 0x00, 0x00, 0x00,
};

/* 0x000008 8 B */
u8 lbl_804789A0[8] __attribute__((aligned(8))) = {
    0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

