/*
 * @file data_80378AA0.c
 * @brief DOL data unit .data 0x80378AA0-0x80378B00 (auto unit main/auto_05_80378AA0_data).
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
    u8 m0[20];
    void* m1;
    void* m2;
    u8 m3[8];
    void* m4;
    u8 m5[8];
    void* m6;
    u8 m7[8];
    void* m8;
    u8 m9[8];
    void* m10;
    u8 m11[5];
} T_lbl_80378AA0;
#pragma pack()
#pragma pack(1)
typedef struct {
    u8 m0[11];
    void* m1;
} T_lbl_80378AF1;
#pragma pack()

/* ---- symbol declarations ---- */
extern u8 lbl_80378B00[];
extern u8 lbl_80378B0F[];
extern u8 lbl_80378B1E[];
extern u8 lbl_80378B2D[];
extern u8 lbl_8047B63C[];
extern u8 lbl_8047B63E[];
extern T_lbl_80378AA0 lbl_80378AA0;
extern T_lbl_80378AF1 lbl_80378AF1;

/* ---- data ---- */
T_lbl_80378AA0 lbl_80378AA0 __attribute__((aligned(8))) = {
    { 0x13, 0x00, 0x00, 0x00, 0x00, 0x12, 0x00, 0x40, 0xF9, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13 },
    (void*)((u8*)&lbl_8047B63E),
    (void*)((u8*)&lbl_8047B63C),
    { 0x2A, 0x00, 0x80, 0x47, 0xB6, 0x3C, 0x00, 0x02 },
    (void*)((u8*)&lbl_80378AF1),
    { 0x2A, 0x00, 0x80, 0x47, 0xB6, 0x3C, 0x00, 0x01 },
    (void*)((u8*)&lbl_80378B00),
    { 0x2A, 0x00, 0x80, 0x47, 0xB6, 0x3C, 0x00, 0x03 },
    (void*)((u8*)&lbl_80378B0F),
    { 0x2A, 0x00, 0x80, 0x47, 0xB6, 0x3C, 0x00, 0x04 },
    (void*)((u8*)&lbl_80378B1E),
    { 0x28, 0x80, 0x37, 0x8B, 0x2D }
};

T_lbl_80378AF1 lbl_80378AF1 __attribute__((aligned(1))) = {
    { 0x46, 0x11, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x28 },
    (void*)((u8*)&lbl_80378B2D)
};

