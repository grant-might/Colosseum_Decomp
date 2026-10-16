/*
 * @file sdata_80478A08.c
 * @brief DOL data unit .sdata 0x80478A08-0x80478AB8 (auto unit main/auto_07_80478A08_sdata).
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
} T_lbl_80478A08;
#pragma pack()
#pragma pack(1)
typedef struct {
    u8 m0[4];
} T_lbl_80478A0C;
#pragma pack()
#pragma pack(1)
typedef struct {
    u8 m0[4];
} T_lbl_80478A10;
#pragma pack()
#pragma pack(1)
typedef struct {
    u8 m0[4];
} T_lbl_80478A14;
#pragma pack()
#pragma pack(1)
typedef struct {
    u8 m0[4];
} T_lbl_80478A18;
#pragma pack()
#pragma pack(1)
typedef struct {
    void* m0;
} T_lbl_80478A1C;
#pragma pack()
#pragma pack(1)
typedef struct {
    u8 m0[2];
} T_lbl_80478A20;
#pragma pack()
#pragma pack(1)
typedef struct {
    u8 m0[2];
} T_gap_07_80478A22_sdata;
#pragma pack()
#pragma pack(1)
typedef struct {
    u8 m0[2];
} T_lbl_80478A24;
#pragma pack()
#pragma pack(1)
typedef struct {
    u8 m0[2];
} T_gap_07_80478A26_sdata;
#pragma pack()
#pragma pack(1)
typedef struct {
    void* m0;
    u8 m1[4];
} T_lbl_80478A28;
#pragma pack()
#pragma pack(1)
typedef struct {
    void* m0;
    u8 m1[4];
} T_lbl_80478A30;
#pragma pack()
#pragma pack(1)
typedef struct {
    void* m0;
    u8 m1[4];
} T_lbl_80478A38;
#pragma pack()
#pragma pack(1)
typedef struct {
    void* m0;
    u8 m1[4];
} T_lbl_80478A40;
#pragma pack()
#pragma pack(1)
typedef struct {
    void* m0;
    u8 m1[4];
} T_lbl_80478A48;
#pragma pack()
#pragma pack(1)
typedef struct {
    u8 m0[8];
} T_lbl_80478A50;
#pragma pack()
#pragma pack(1)
typedef struct {
    u8 m0[8];
} T_lbl_80478A58;
#pragma pack()
#pragma pack(1)
typedef struct {
    void* m0;
} T___GXVersion;
#pragma pack()
#pragma pack(1)
typedef struct {
    u8 m0[4];
} T_gap_07_80478A64_sdata;
#pragma pack()
#pragma pack(1)
typedef struct {
    u8 m0[4];
} T_lbl_80478A68;
#pragma pack()
#pragma pack(1)
typedef struct {
    u8 m0[4];
} T_lbl_80478A6C;
#pragma pack()
#pragma pack(1)
typedef struct {
    u8 m0[8];
} T_lbl_80478A70;
#pragma pack()
#pragma pack(1)
typedef struct {
    u8 m0[8];
} T_lbl_80478A78;
#pragma pack()
#pragma pack(1)
typedef struct {
    u8 m0[8];
} T_lbl_80478A80;
#pragma pack()
#pragma pack(1)
typedef struct {
    u8 m0[8];
} T_lbl_80478A88;
#pragma pack()
#pragma pack(1)
typedef struct {
    u8 m0[8];
} T_lbl_80478A90;
#pragma pack()
#pragma pack(1)
typedef struct {
    u8 m0[8];
} T_lbl_80478A98;
#pragma pack()
#pragma pack(1)
typedef struct {
    u8 m0[8];
} T_lbl_80478AA0;
#pragma pack()
#pragma pack(1)
typedef struct {
    u8 m0[8];
} T_lbl_80478AA8;
#pragma pack()
#pragma pack(1)
typedef struct {
    u8 m0[8];
} T_lbl_80478AB0;
#pragma pack()

/* ---- symbol declarations ---- */
extern u8 SPEC2_MakeStatus[];
extern u8 lbl_803124B8[];
extern u8 lbl_80312510[];
extern u8 lbl_80312558[];
extern u8 lbl_803125A0[];
extern u8 lbl_803125E8[];
extern u8 lbl_803127A8[];
extern u8 lbl_803129A0[];
extern T_lbl_80478A08 lbl_80478A08;
extern T_lbl_80478A0C lbl_80478A0C;
extern T_lbl_80478A10 lbl_80478A10;
extern T_lbl_80478A14 lbl_80478A14;
extern T_lbl_80478A18 lbl_80478A18;
extern T_lbl_80478A1C lbl_80478A1C;
extern T_lbl_80478A20 lbl_80478A20;
extern T_gap_07_80478A22_sdata gap_07_80478A22_sdata;
extern T_lbl_80478A24 lbl_80478A24;
extern T_gap_07_80478A26_sdata gap_07_80478A26_sdata;
extern T_lbl_80478A28 lbl_80478A28;
extern T_lbl_80478A30 lbl_80478A30;
extern T_lbl_80478A38 lbl_80478A38;
extern T_lbl_80478A40 lbl_80478A40;
extern T_lbl_80478A48 lbl_80478A48;
extern T_lbl_80478A50 lbl_80478A50;
extern T_lbl_80478A58 lbl_80478A58;
extern T___GXVersion __GXVersion;
extern T_gap_07_80478A64_sdata gap_07_80478A64_sdata;
extern T_lbl_80478A68 lbl_80478A68;
extern T_lbl_80478A6C lbl_80478A6C;
extern T_lbl_80478A70 lbl_80478A70;
extern T_lbl_80478A78 lbl_80478A78;
extern T_lbl_80478A80 lbl_80478A80;
extern T_lbl_80478A88 lbl_80478A88;
extern T_lbl_80478A90 lbl_80478A90;
extern T_lbl_80478A98 lbl_80478A98;
extern T_lbl_80478AA0 lbl_80478AA0;
extern T_lbl_80478AA8 lbl_80478AA8;
extern T_lbl_80478AB0 lbl_80478AB0;

/* ---- data ---- */
T_lbl_80478A08 lbl_80478A08 __attribute__((aligned(8))) = {
    (void*)((u8*)&lbl_803124B8)
};

T_lbl_80478A0C lbl_80478A0C __attribute__((aligned(4))) = {
    { 0x00, 0x00, 0x00, 0x20 }
};

T_lbl_80478A10 lbl_80478A10 __attribute__((aligned(8))) = {
    { 0xF0, 0x00, 0x00, 0x00 }
};

T_lbl_80478A14 lbl_80478A14 __attribute__((aligned(4))) = {
    { 0x00, 0x00, 0x03, 0x00 }
};

T_lbl_80478A18 lbl_80478A18 __attribute__((aligned(8))) = {
    { 0x00, 0x00, 0x00, 0x05 }
};

T_lbl_80478A1C lbl_80478A1C __attribute__((aligned(4))) = {
    (void*)((u8*)&SPEC2_MakeStatus)
};

T_lbl_80478A20 lbl_80478A20 __attribute__((aligned(8))) = {
    { 0x41, 0x00 }
};

T_gap_07_80478A22_sdata gap_07_80478A22_sdata __attribute__((aligned(2))) = {
    { 0x00, 0x00 }
};

T_lbl_80478A24 lbl_80478A24 __attribute__((aligned(4))) = {
    { 0x42, 0x00 }
};

T_gap_07_80478A26_sdata gap_07_80478A26_sdata __attribute__((aligned(2))) = {
    { 0x00, 0x00 }
};

T_lbl_80478A28 lbl_80478A28 __attribute__((aligned(8))) = {
    (void*)((u8*)&lbl_80312510),
    { 0x00, 0x00, 0x00, 0x00 }
};

T_lbl_80478A30 lbl_80478A30 __attribute__((aligned(8))) = {
    (void*)((u8*)&lbl_80312558),
    { 0x00, 0x00, 0x00, 0x00 }
};

T_lbl_80478A38 lbl_80478A38 __attribute__((aligned(8))) = {
    (void*)((u8*)&lbl_803125A0),
    { 0x00, 0x00, 0x00, 0x00 }
};

T_lbl_80478A40 lbl_80478A40 __attribute__((aligned(8))) = {
    (void*)((u8*)&lbl_803125E8),
    { 0x00, 0x00, 0x00, 0x00 }
};

T_lbl_80478A48 lbl_80478A48 __attribute__((aligned(8))) = {
    (void*)((u8*)&lbl_803127A8),
    { 0x00, 0x00, 0x00, 0x00 }
};

T_lbl_80478A50 lbl_80478A50 __attribute__((aligned(8))) = {
    { 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00 }
};

T_lbl_80478A58 lbl_80478A58 __attribute__((aligned(8))) = {
    { 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }
};

T___GXVersion __GXVersion __attribute__((aligned(8))) = {
    (void*)((u8*)&lbl_803129A0)
};

T_gap_07_80478A64_sdata gap_07_80478A64_sdata __attribute__((aligned(4))) = {
    { 0x00, 0x00, 0x00, 0x00 }
};

T_lbl_80478A68 lbl_80478A68 __attribute__((aligned(8))) = {
    { 0x00, 0x04, 0x01, 0x02 }
};

T_lbl_80478A6C lbl_80478A6C __attribute__((aligned(4))) = {
    { 0x00, 0x08, 0x01, 0x02 }
};

T_lbl_80478A70 lbl_80478A70 __attribute__((aligned(8))) = {
    { 0x00, 0x0C, 0x01, 0x02, 0x00, 0x00, 0x00, 0x00 }
};

T_lbl_80478A78 lbl_80478A78 __attribute__((aligned(8))) = {
    { 0x80, 0x81, 0x82, 0x83, 0xA0, 0xA1, 0xA2, 0xA3 }
};

T_lbl_80478A80 lbl_80478A80 __attribute__((aligned(8))) = {
    { 0x84, 0x85, 0x86, 0x87, 0xA4, 0xA5, 0xA6, 0xA7 }
};

T_lbl_80478A88 lbl_80478A88 __attribute__((aligned(8))) = {
    { 0x88, 0x89, 0x8A, 0x8B, 0xA8, 0xA9, 0xAA, 0xAB }
};

T_lbl_80478A90 lbl_80478A90 __attribute__((aligned(8))) = {
    { 0x8C, 0x8D, 0x8E, 0x8F, 0xAC, 0xAD, 0xAE, 0xAF }
};

T_lbl_80478A98 lbl_80478A98 __attribute__((aligned(8))) = {
    { 0x90, 0x91, 0x92, 0x93, 0xB0, 0xB1, 0xB2, 0xB3 }
};

T_lbl_80478AA0 lbl_80478AA0 __attribute__((aligned(8))) = {
    { 0x94, 0x95, 0x96, 0x97, 0xB4, 0xB5, 0xB6, 0xB7 }
};

T_lbl_80478AA8 lbl_80478AA8 __attribute__((aligned(8))) = {
    { 0x98, 0x99, 0x9A, 0x9B, 0xB8, 0xB9, 0xBA, 0xBB }
};

T_lbl_80478AB0 lbl_80478AB0 __attribute__((aligned(8))) = {
    { 0x00, 0x04, 0x01, 0x05, 0x02, 0x06, 0x00, 0x00 }
};

