/*
 * @file data_8035B448.c
 * @brief DOL data unit .data 0x8035B448-0x8035B468
 *        (auto unit main/auto_05_8035B448_data).
 *
 * Non-relocated data as byte-exact u8[]; pointer/jump tables as
 * void*[] so every R_PPC_ADDR32 relocation is reproduced.
 */
#include "dolphin/types.h"

#pragma section ".data"
/* 0x000000 14 B */
u8 lbl_8035B448[14] __attribute__((aligned(8))) = {
    0x6D, 0x65, 0x6E, 0x75, 0x4D, 0x6F, 0x64, 0x65, 0x6C, 0x49, 0x6E, 0x69,
    0x74, 0x00,
};

/* 0x00000E 2 B */
u8 gap_05_8035B456_data[2] __attribute__((aligned(2))) = {
    0x00, 0x00,
};

/* 0x000010 14 B */
u8 lbl_8035B458[14] __attribute__((aligned(8))) = {
    0x6D, 0x65, 0x6E, 0x75, 0x4D, 0x6F, 0x64, 0x65, 0x6C, 0x54, 0x65, 0x72,
    0x6D, 0x00,
};

/* 0x00001E 2 B */
u8 gap_05_8035B466_data[2] __attribute__((aligned(2))) = {
    0x00, 0x00,
};

