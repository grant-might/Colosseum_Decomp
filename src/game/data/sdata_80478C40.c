/*
 * @file sdata_80478C40.c
 * @brief DOL data unit .sdata 0x80478C40-0x80478C50 (auto unit main/auto_07_80478C40_sdata).
 *
 * One packed struct per dtk symbol: dtk's .obj boundaries in this
 * unit are byte-scan artifacts and a R_PPC_ADDR32 can sit at a
 * non-4-aligned offset inside a symbol, so each symbol keeps its
 * exact name/size and pack(1) places its pointer members where dtk
 * has them.  main.elf's symbol table must stay identical because
 * `dtk rel make` derives every REL's imports from it.
 */
#include "dolphin/types.h"


/* ---- struct types ---- */
#pragma pack(1)
typedef struct {
    void* m0;
    u8 m1[4];
} T_lbl_80478C40;
#pragma pack()
#pragma pack(1)
typedef struct {
    u8 m0[4];
} T_lbl_80478C48;
#pragma pack()
#pragma pack(1)
typedef struct {
    u8 m0[4];
} T_lbl_80478C4C;
#pragma pack()

/* ---- symbol declarations ---- */
extern u8 lbl_80452EC8[];
extern T_lbl_80478C40 lbl_80478C40;
extern T_lbl_80478C48 lbl_80478C48;
extern T_lbl_80478C4C lbl_80478C4C;

/* ---- data ---- */
T_lbl_80478C40 lbl_80478C40 __attribute__((aligned(8))) = {
    (void*)((u8*)&lbl_80452EC8),
    { 0x00, 0x00, 0x00, 0x00 }
};

T_lbl_80478C48 lbl_80478C48 __attribute__((aligned(8))) = {
    { 0x00, 0x00, 0x00, 0x14 }
};

T_lbl_80478C4C lbl_80478C4C __attribute__((aligned(4))) = {
    { 0xFF, 0xFF, 0xFF, 0xFF }
};

