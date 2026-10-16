/*
 * @file data_8035B950.c
 * @brief DOL data unit .data 0x8035B950-0x8035B96C
 *        (auto unit main/auto_05_8035B950_data).
 *
 * Non-relocated data as byte-exact u8[]; pointer/jump tables as
 * void*[] so every R_PPC_ADDR32 relocation is reproduced.
 */
#include "dolphin/types.h"

#pragma section ".data"
/* 0x000000 27 B */
u8 lbl_8035B950[27] __attribute__((aligned(1))) = {
    0x66, 0x6C, 0x6F, 0x6F, 0x72, 0x44, 0x61, 0x74, 0x61, 0x42, 0x69, 0x6F,
    0x73, 0x47, 0x65, 0x74, 0x53, 0x6F, 0x75, 0x6E, 0x64, 0x53, 0x63, 0x74,
    0x49, 0x44, 0x00,
};

/* 0x00001B 1 B */
u8 gap_05_8035B96B_data[1] __attribute__((aligned(1))) = {
    0x00,
};

