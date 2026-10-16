/*
 * @file data_80379478.c
 * @brief DOL data unit .data 0x80379478-0x803794CC (auto unit main/auto_05_80379478_data).
 *
 * One packed struct per dtk symbol: dtk's .obj boundaries in this
 * unit are byte-scan artifacts and a R_PPC_ADDR32 can sit at a
 * non-4-aligned offset inside a symbol, so each symbol keeps its
 * exact name/size and pack(1) places its pointer members where dtk
 * has them.  main.elf's symbol table must stay identical because
 * `dtk rel make` derives every REL's imports from it.
 */
#include "dolphin/types.h"

#pragma section ".data"

/* ---- struct types ---- */
#pragma pack(1)
typedef struct {
    u8 m0[21];
} T_lbl_80379478;
#pragma pack()
#pragma pack(1)
typedef struct {
    u8 m0[7];
    void* m1;
    u8 m2[10];
} T_lbl_8037948D;
#pragma pack()
#pragma pack(1)
typedef struct {
    u8 m0[21];
} T_lbl_803794A2;
#pragma pack()
#pragma pack(1)
typedef struct {
    u8 m0[17];
    void* m1;
} T_lbl_803794B7;
#pragma pack()

/* ---- symbol declarations ---- */
extern u8 lbl_80379462[];
extern u8 lbl_8047E5A8[];
extern T_lbl_80379478 lbl_80379478;
extern T_lbl_8037948D lbl_8037948D;
extern T_lbl_803794A2 lbl_803794A2;
extern T_lbl_803794B7 lbl_803794B7;

/* ---- data ---- */
T_lbl_80379478 lbl_80379478 __attribute__((aligned(8))) = {
    { 0x64, 0x16, 0x0A, 0x07, 0x98, 0x16, 0x13, 0x80, 0x47, 0xE5, 0x98, 0x12, 0x00, 0x40, 0x0A, 0x06, 0x28, 0x80, 0x37, 0x94, 0x62 }
};

T_lbl_8037948D lbl_8037948D __attribute__((aligned(1))) = {
    { 0x64, 0x16, 0x0A, 0x07, 0x98, 0x16, 0x13 },
    (void*)((u8*)&lbl_8047E5A8),
    { 0x12, 0x00, 0x40, 0x0A, 0x06, 0x28, 0x80, 0x37, 0x94, 0x62 }
};

T_lbl_803794A2 lbl_803794A2 __attribute__((aligned(2))) = {
    { 0x64, 0x16, 0x0A, 0x07, 0x98, 0x16, 0x13, 0x80, 0x47, 0xE5, 0xB0, 0x12, 0x00, 0x40, 0x0A, 0x06, 0x28, 0x80, 0x37, 0x94, 0x62 }
};

T_lbl_803794B7 lbl_803794B7 __attribute__((aligned(1))) = {
    { 0x64, 0x16, 0x0A, 0x07, 0x98, 0x16, 0x13, 0x80, 0x47, 0xE5, 0xA0, 0x12, 0x00, 0x40, 0x0A, 0x06, 0x28 },
    (void*)((u8*)&lbl_80379462)
};

