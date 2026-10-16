/*
 * @file data_80313818.c
 * @brief DOL data unit .data 0x80313818-0x80313824
 *        (auto unit main/auto_05_80313818_data).
 *
 * Non-relocated data as byte-exact u8[]; pointer/jump tables as
 * void*[] so every R_PPC_ADDR32 relocation is reproduced.
 */
#include "dolphin/types.h"

#pragma section ".data"
/* 0x000000 9 B */
u8 gTRKRestoreFlags[9] __attribute__((aligned(1))) = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 0x000009 3 B */
u8 gap_05_80313821_data[3] __attribute__((aligned(1))) = {
    0x00, 0x00, 0x00,
};

