/*
 * @file data_8036DCA8.c
 * @brief DOL data unit .data 0x8036DCA8-0x8036DCB8
 *        (auto unit main/auto_05_8036DCA8_data).
 *
 * Non-relocated data as byte-exact u8[]; pointer/jump tables as
 * void*[] so every R_PPC_ADDR32 relocation is reproduced.
 */
#include "dolphin/types.h"

#pragma section ".data"
/* 0x000000 15 B */
u8 lbl_8036DCA8[15] __attribute__((aligned(1))) = {
    0x73, 0x63, 0x72, 0x69, 0x70, 0x74, 0x45, 0x78, 0x65, 0x63, 0x54, 0x61,
    0x73, 0x6B, 0x00,
};

/* 0x00000F 1 B */
u8 gap_05_8036DCB7_data[1] __attribute__((aligned(1))) = {
    0x00,
};

