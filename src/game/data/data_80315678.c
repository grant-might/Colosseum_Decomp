/*
 * @file data_80315678.c
 * @brief DOL data unit .data 0x80315678-0x80315690
 *        (auto unit main/auto_05_80315678_data).
 *
 * Non-relocated data as byte-exact u8[]; pointer/jump tables as
 * void*[] so every R_PPC_ADDR32 relocation is reproduced.
 */
#include "dolphin/types.h"

#pragma section ".data"
/* 0x000000 17 B */
u8 lbl_80315678[17] __attribute__((aligned(1))) = {
    0x5F, 0x6D, 0x73, 0x67, 0x43, 0x61, 0x6C, 0x6C, 0x43, 0x74, 0x72, 0x6C,
    0x46, 0x75, 0x6E, 0x63, 0x00,
};

/* 0x000011 7 B */
u8 gap_05_80315689_data[7] __attribute__((aligned(1))) = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

