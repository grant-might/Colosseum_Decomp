/**
 * @file snd_sample_table.c
 * @brief REL 125 (common_rel): the sample table.
 *
 * Module 125 .rodata 184 B (the string pool, 7 4-byte-aligned
 * slots) and .data 192 B (8 R_PPC_ADDR32).
 *
 * The count/index tables the DOL publishes through _prolog are unchanged; this
 * file only makes the pool objects NAMED so the unit is scoreable, and keeps
 * each pointer's in-place pool offset (retail stores the addend in place).
 */
#include "rel/common_rel.h"

/* .rodata string pool, 184 B in 7 slots */
static const char lbl_125_rodata_C54[28] = "/sound/snd_se_nakigoe.samp";
static const char lbl_125_rodata_C70[28] = "/sound/snd_se_motion.samp";
static const char lbl_125_rodata_C8C[28] = "/sound/snd_se_battle.samp";
static const char lbl_125_rodata_CA8[28] = "/sound/snd_music_atmos.samp";
static const char lbl_125_rodata_CC4[28] = "/sound/snd_se_nakigoe2.samp";
static const char lbl_125_rodata_CE0[20] = "/sound/snd_se.samp";
static const char lbl_125_rodata_CF4[24] = "/sound/snd_music.samp";

/* .data, 192 B: 8 x SndSampleArchive (24 B), 8 relocated words */
SndSampleArchive lbl_125_data_143918[8] = {
    { 0x01, 0x00, 0x0000, 0x0000000a, 0x01a50000, 0x01a60000, 0x01a80000, (const char*)(lbl_125_rodata_C54 + 0xa0) },
    { 0x01, 0x00, 0x0000, 0x0000000a, 0x01a50000, 0x01a60000, 0x01a80000, (const char*)(lbl_125_rodata_C54 + 0xa0) },
    { 0x01, 0x00, 0x0006, 0x0000000a, 0x01ad0000, 0x01ae0000, 0x01b00000, (const char*)(lbl_125_rodata_C54 + 0x8c) },
    { 0x00, 0x00, 0x0009, 0x0000000a, 0x01bd0000, 0x01be0000, 0x01c00000, (const char*)(lbl_125_rodata_C54 + 0x70) },
    { 0x00, 0x00, 0x0001, 0x0000000a, 0x01a90000, 0x01aa0000, 0x01ac0000, (const char*)(lbl_125_rodata_C54 + 0x54) },
    { 0x00, 0x00, 0x0005, 0x0000000a, 0x01b10000, 0x01b20000, 0x01b40000, (const char*)(lbl_125_rodata_C54 + 0x38) },
    { 0x00, 0x00, 0x0008, 0x0000000a, 0x01b50000, 0x01b60000, 0x01b80000, (const char*)(lbl_125_rodata_C54 + 0x1c) },
    { 0x00, 0x00, 0x0004, 0x0000000a, 0x01b90000, 0x01ba0000, 0x01bc0000, (const char*)(lbl_125_rodata_C54 + 0x0) },
};
