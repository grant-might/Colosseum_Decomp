/*
 * @file data_8039A690.c
 * @brief DOL data unit .data 0x8039A690-0x8039A6A8
 *        (auto unit main/auto_05_8039A690_data).
 *
 * Non-relocated data as byte-exact u8[]; pointer/jump tables as
 * void*[] so every R_PPC_ADDR32 relocation is reproduced.
 */
#include "dolphin/types.h"

#pragma section ".data"
/* 0x000000 22 B */
u8 lbl_8039A690[22] __attribute__((aligned(1))) = {
    0x74, 0x61, 0x62, 0x6C, 0x65, 0x52, 0x65, 0x73, 0x42, 0x69, 0x6F, 0x73,
    0x47, 0x65, 0x74, 0x52, 0x65, 0x73, 0x50, 0x74, 0x72, 0x00,
};

/* 0x000016 2 B */
u8 gap_05_8039A6A6_data[2] __attribute__((aligned(1))) = {
    0x00, 0x00,
};

