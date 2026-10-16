/*
 * @file data_8035B3F0.c
 * @brief DOL data unit .data 0x8035B3F0-0x8035B400
 *        (auto unit main/auto_05_8035B3F0_data).
 *
 * Non-relocated data as byte-exact u8[]; pointer/jump tables as
 * void*[] so every R_PPC_ADDR32 relocation is reproduced.
 */
#include "dolphin/types.h"

#pragma section ".data"
/* 0x000000 14 B */
u8 lbl_8035B3F0[14] __attribute__((aligned(1))) = {
    0x77, 0x69, 0x6E, 0x53, 0x70, 0x72, 0x69, 0x74, 0x65, 0x49, 0x6E, 0x69,
    0x74, 0x00,
};

/* 0x00000E 2 B */
u8 gap_05_8035B3FE_data[2] __attribute__((aligned(1))) = {
    0x00, 0x00,
};

