/*
 * @file sdata_80478ABC.c
 * @brief DOL data unit .sdata 0x80478ABC-0x80478AD8
 *        (auto unit main/auto_07_80478ABC_sdata).
 *
 * Non-relocated data as byte-exact u8[]; pointer/jump tables as
 * void*[] so every R_PPC_ADDR32 relocation is reproduced.
 */
#include "dolphin/types.h"

/* 0x000000 4 B */
u8 pad_07_80478ABC_sdata[4] __attribute__((aligned(1))) = {
    0x00, 0x00, 0x00, 0x00,
};

/* 0x000004 4 B */
u8 lbl_80478AC0[4] __attribute__((aligned(1))) = {
    0x7F, 0xFF, 0xFF, 0xFF,
};

/* 0x000008 4 B */
u8 lbl_80478AC4[4] __attribute__((aligned(1))) = {
    0x7F, 0x80, 0x00, 0x00,
};

/* 0x00000C 4 B */
u8 lbl_80478AC8[4] __attribute__((aligned(1))) = {
    0x00, 0x80, 0x00, 0x00,
};

/* 0x000010 4 B */
u8 lbl_80478ACC[4] __attribute__((aligned(1))) = {
    0x34, 0x00, 0x00, 0x00,
};

/* 0x000014 8 B */
u8 lbl_80478AD0[8] __attribute__((aligned(1))) = {
    0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

