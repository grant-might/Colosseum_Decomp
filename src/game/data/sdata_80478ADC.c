/*
 * @file sdata_80478ADC.c
 * @brief DOL data unit .sdata 0x80478ADC-0x80478AE8
 *        (auto unit main/auto_07_80478ADC_sdata).
 *
 * Non-relocated data as byte-exact u8[]; pointer/jump tables as
 * void*[] so every R_PPC_ADDR32 relocation is reproduced.
 */
#include "dolphin/types.h"

/* 0x000000 4 B */
u8 pad_07_80478ADC_sdata[4] __attribute__((aligned(1))) = {
    0x00, 0x00, 0x00, 0x00,
};

/* 0x000004 8 B */
u8 lbl_80478AE0[8] __attribute__((aligned(1))) = {
    0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x05,
};

