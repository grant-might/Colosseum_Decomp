/*
 * @file sdata_80478C08.c
 * @brief DOL data unit .sdata 0x80478C08-0x80478C38 (auto unit main/auto_07_80478C08_sdata).
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
    u8 m0[8];
} T_lbl_80478C08;
#pragma pack()
#pragma pack(1)
typedef struct {
    u8 m0[4];
} T_lbl_80478C10;
#pragma pack()
#pragma pack(1)
typedef struct {
    u8 m0[4];
} T_lbl_80478C14;
#pragma pack()
#pragma pack(1)
typedef struct {
    u8 m0[4];
} T_lbl_80478C18;
#pragma pack()
#pragma pack(1)
typedef struct {
    u8 m0[4];
} T_lbl_80478C1C;
#pragma pack()
#pragma pack(1)
typedef struct {
    u8 m0[4];
} T_lbl_80478C20;
#pragma pack()
#pragma pack(1)
typedef struct {
    void* m0;
} T_lbl_80478C24;
#pragma pack()
#pragma pack(1)
typedef struct {
    void* m0;
    u8 m1[4];
} T_lbl_80478C28;
#pragma pack()
#pragma pack(1)
typedef struct {
    u8 m0[8];
} T_lbl_80478C30;
#pragma pack()

/* ---- symbol declarations ---- */
extern u8 lbl_8047D578[];
extern u8 lbl_8047D580[];
extern T_lbl_80478C08 lbl_80478C08;
extern T_lbl_80478C10 lbl_80478C10;
extern T_lbl_80478C14 lbl_80478C14;
extern T_lbl_80478C18 lbl_80478C18;
extern T_lbl_80478C1C lbl_80478C1C;
extern T_lbl_80478C20 lbl_80478C20;
extern T_lbl_80478C24 lbl_80478C24;
extern T_lbl_80478C28 lbl_80478C28;
extern T_lbl_80478C30 lbl_80478C30;

/* ---- data ---- */
T_lbl_80478C08 lbl_80478C08 __attribute__((aligned(8))) = {
    { 0x19, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }
};

T_lbl_80478C10 lbl_80478C10 __attribute__((aligned(8))) = {
    { 0x00, 0x00, 0x00, 0x01 }
};

T_lbl_80478C14 lbl_80478C14 __attribute__((aligned(4))) = {
    { 0x00, 0x00, 0x00, 0x01 }
};

T_lbl_80478C18 lbl_80478C18 __attribute__((aligned(8))) = {
    { 0x00, 0x00, 0x00, 0x01 }
};

T_lbl_80478C1C lbl_80478C1C __attribute__((aligned(4))) = {
    { 0x00, 0x00, 0x00, 0x01 }
};

T_lbl_80478C20 lbl_80478C20 __attribute__((aligned(8))) = {
    { 0x00, 0x00, 0x00, 0x01 }
};

T_lbl_80478C24 lbl_80478C24 __attribute__((aligned(4))) = {
    (void*)((u8*)&lbl_8047D578)
};

T_lbl_80478C28 lbl_80478C28 __attribute__((aligned(8))) = {
    (void*)((u8*)&lbl_8047D580),
    { 0x00, 0x00, 0x00, 0x00 }
};

T_lbl_80478C30 lbl_80478C30 __attribute__((aligned(8))) = {
    { 0x7B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }
};

