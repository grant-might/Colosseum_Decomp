/*
 * @file sdata_80478B08.c
 * @brief DOL data unit .sdata 0x80478B08-0x80478BF8 (auto unit main/auto_07_80478B08_sdata).
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
} T_lbl_80478B08;
#pragma pack()
#pragma pack(1)
typedef struct {
    u8 m0[4];
} T_lbl_80478B10;
#pragma pack()
#pragma pack(1)
typedef struct {
    u8 m0[4];
} T_lbl_80478B14;
#pragma pack()
#pragma pack(1)
typedef struct {
    u8 m0[8];
} T_lbl_80478B18;
#pragma pack()
#pragma pack(1)
typedef struct {
    u8 m0[8];
} T_lbl_80478B20;
#pragma pack()
#pragma pack(1)
typedef struct {
    u8 m0[8];
} T_lbl_80478B28;
#pragma pack()
#pragma pack(1)
typedef struct {
    u8 m0[8];
} T_lbl_80478B30;
#pragma pack()
#pragma pack(1)
typedef struct {
    u8 m0[8];
} T_lbl_80478B38;
#pragma pack()
#pragma pack(1)
typedef struct {
    u8 m0[8];
} T_lbl_80478B40;
#pragma pack()
#pragma pack(1)
typedef struct {
    u8 m0[8];
} T_lbl_80478B48;
#pragma pack()
#pragma pack(1)
typedef struct {
    u8 m0[8];
} T_lbl_80478B50;
#pragma pack()
#pragma pack(1)
typedef struct {
    u8 m0[4];
} T_lbl_80478B58;
#pragma pack()
#pragma pack(1)
typedef struct {
    u8 m0[4];
} T_lbl_80478B5C;
#pragma pack()
#pragma pack(1)
typedef struct {
    u8 m0[8];
} T_lbl_80478B60;
#pragma pack()
#pragma pack(1)
typedef struct {
    u8 m0[8];
} T_lbl_80478B68;
#pragma pack()
#pragma pack(1)
typedef struct {
    u8 m0[8];
} T_lbl_80478B70;
#pragma pack()
#pragma pack(1)
typedef struct {
    u8 m0[8];
} T_lbl_80478B78;
#pragma pack()
#pragma pack(1)
typedef struct {
    u8 m0[8];
} T_lbl_80478B80;
#pragma pack()
#pragma pack(1)
typedef struct {
    u8 m0[8];
} T_lbl_80478B88;
#pragma pack()
#pragma pack(1)
typedef struct {
    u8 m0[8];
} T_lbl_80478B90;
#pragma pack()
#pragma pack(1)
typedef struct {
    u8 m0[8];
} T_lbl_80478B98;
#pragma pack()
#pragma pack(1)
typedef struct {
    u8 m0[8];
} T_lbl_80478BA0;
#pragma pack()
#pragma pack(1)
typedef struct {
    u8 m0[8];
} T_lbl_80478BA8;
#pragma pack()
#pragma pack(1)
typedef struct {
    u8 m0[8];
} T_lbl_80478BB0;
#pragma pack()
#pragma pack(1)
typedef struct {
    u8 m0[8];
} T_lbl_80478BB8;
#pragma pack()
#pragma pack(1)
typedef struct {
    u8 m0[8];
} T_lbl_80478BC0;
#pragma pack()
#pragma pack(1)
typedef struct {
    u8 m0[8];
} T_lbl_80478BC8;
#pragma pack()
#pragma pack(1)
typedef struct {
    u8 m0[8];
} T_lbl_80478BD0;
#pragma pack()
#pragma pack(1)
typedef struct {
    u8 m0[8];
} T_lbl_80478BD8;
#pragma pack()
#pragma pack(1)
typedef struct {
    u8 m0[8];
} T_lbl_80478BE0;
#pragma pack()
#pragma pack(1)
typedef struct {
    u8 m0[8];
} T_lbl_80478BE8;
#pragma pack()
#pragma pack(1)
typedef struct {
    u8 m0[8];
} T_lbl_80478BF0;
#pragma pack()

/* ---- symbol declarations ---- */
extern u8 lbl_804024E8[];
extern T_lbl_80478B08 lbl_80478B08;
extern T_lbl_80478B10 lbl_80478B10;
extern T_lbl_80478B14 lbl_80478B14;
extern T_lbl_80478B18 lbl_80478B18;
extern T_lbl_80478B20 lbl_80478B20;
extern T_lbl_80478B28 lbl_80478B28;
extern T_lbl_80478B30 lbl_80478B30;
extern T_lbl_80478B38 lbl_80478B38;
extern T_lbl_80478B40 lbl_80478B40;
extern T_lbl_80478B48 lbl_80478B48;
extern T_lbl_80478B50 lbl_80478B50;
extern T_lbl_80478B58 lbl_80478B58;
extern T_lbl_80478B5C lbl_80478B5C;
extern T_lbl_80478B60 lbl_80478B60;
extern T_lbl_80478B68 lbl_80478B68;
extern T_lbl_80478B70 lbl_80478B70;
extern T_lbl_80478B78 lbl_80478B78;
extern T_lbl_80478B80 lbl_80478B80;
extern T_lbl_80478B88 lbl_80478B88;
extern T_lbl_80478B90 lbl_80478B90;
extern T_lbl_80478B98 lbl_80478B98;
extern T_lbl_80478BA0 lbl_80478BA0;
extern T_lbl_80478BA8 lbl_80478BA8;
extern T_lbl_80478BB0 lbl_80478BB0;
extern T_lbl_80478BB8 lbl_80478BB8;
extern T_lbl_80478BC0 lbl_80478BC0;
extern T_lbl_80478BC8 lbl_80478BC8;
extern T_lbl_80478BD0 lbl_80478BD0;
extern T_lbl_80478BD8 lbl_80478BD8;
extern T_lbl_80478BE0 lbl_80478BE0;
extern T_lbl_80478BE8 lbl_80478BE8;
extern T_lbl_80478BF0 lbl_80478BF0;

/* ---- data ---- */
T_lbl_80478B08 lbl_80478B08 __attribute__((aligned(8))) = {
    (void*)((u8*)&lbl_804024E8),
    { 0x00, 0x00, 0x00, 0x00 }
};

T_lbl_80478B10 lbl_80478B10 __attribute__((aligned(8))) = {
    { 0x3F, 0x80, 0x00, 0x00 }
};

T_lbl_80478B14 lbl_80478B14 __attribute__((aligned(4))) = {
    { 0x3F, 0x80, 0x00, 0x00 }
};

T_lbl_80478B18 lbl_80478B18 __attribute__((aligned(8))) = {
    { 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00 }
};

T_lbl_80478B20 lbl_80478B20 __attribute__((aligned(8))) = {
    { 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x00 }
};

T_lbl_80478B28 lbl_80478B28 __attribute__((aligned(8))) = {
    { 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }
};

T_lbl_80478B30 lbl_80478B30 __attribute__((aligned(8))) = {
    { 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }
};

T_lbl_80478B38 lbl_80478B38 __attribute__((aligned(8))) = {
    { 0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x00 }
};

T_lbl_80478B40 lbl_80478B40 __attribute__((aligned(8))) = {
    { 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00 }
};

T_lbl_80478B48 lbl_80478B48 __attribute__((aligned(8))) = {
    { 0x00, 0x00, 0x00, 0x56, 0x00, 0x00, 0x00, 0x00 }
};

T_lbl_80478B50 lbl_80478B50 __attribute__((aligned(8))) = {
    { 0x00, 0x00, 0x01, 0x66, 0x00, 0x00, 0x00, 0x00 }
};

T_lbl_80478B58 lbl_80478B58 __attribute__((aligned(8))) = {
    { 0x01, 0x64, 0x05, 0x00 }
};

T_lbl_80478B5C lbl_80478B5C __attribute__((aligned(4))) = {
    { 0x01, 0x65, 0x05, 0x00 }
};

T_lbl_80478B60 lbl_80478B60 __attribute__((aligned(8))) = {
    { 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00 }
};

T_lbl_80478B68 lbl_80478B68 __attribute__((aligned(8))) = {
    { 0x00, 0x00, 0x00, 0x4E, 0x00, 0x00, 0x00, 0x00 }
};

T_lbl_80478B70 lbl_80478B70 __attribute__((aligned(8))) = {
    { 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x00 }
};

T_lbl_80478B78 lbl_80478B78 __attribute__((aligned(8))) = {
    { 0x00, 0x00, 0x01, 0x83, 0x00, 0x00, 0x00, 0x00 }
};

T_lbl_80478B80 lbl_80478B80 __attribute__((aligned(8))) = {
    { 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00 }
};

T_lbl_80478B88 lbl_80478B88 __attribute__((aligned(8))) = {
    { 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x00 }
};

T_lbl_80478B90 lbl_80478B90 __attribute__((aligned(8))) = {
    { 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00 }
};

T_lbl_80478B98 lbl_80478B98 __attribute__((aligned(8))) = {
    { 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00 }
};

T_lbl_80478BA0 lbl_80478BA0 __attribute__((aligned(8))) = {
    { 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x00 }
};

T_lbl_80478BA8 lbl_80478BA8 __attribute__((aligned(8))) = {
    { 0x06, 0x07, 0x5B, 0x06, 0x1E, 0x41, 0x44, 0x41 }
};

T_lbl_80478BB0 lbl_80478BB0 __attribute__((aligned(8))) = {
    { 0x00, 0x00, 0x01, 0x8D, 0x00, 0x00, 0x00, 0x00 }
};

T_lbl_80478BB8 lbl_80478BB8 __attribute__((aligned(8))) = {
    { 0x00, 0x00, 0x00, 0x0D, 0x00, 0x00, 0x00, 0x00 }
};

T_lbl_80478BC0 lbl_80478BC0 __attribute__((aligned(8))) = {
    { 0x00, 0x00, 0x00, 0x43, 0x00, 0x00, 0x00, 0x00 }
};

T_lbl_80478BC8 lbl_80478BC8 __attribute__((aligned(8))) = {
    { 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00 }
};

T_lbl_80478BD0 lbl_80478BD0 __attribute__((aligned(8))) = {
    { 0x00, 0x00, 0x00, 0x3A, 0x00, 0x00, 0x00, 0x00 }
};

T_lbl_80478BD8 lbl_80478BD8 __attribute__((aligned(8))) = {
    { 0x00, 0x00, 0x02, 0x24, 0x00, 0x00, 0x00, 0x00 }
};

T_lbl_80478BE0 lbl_80478BE0 __attribute__((aligned(8))) = {
    { 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00 }
};

T_lbl_80478BE8 lbl_80478BE8 __attribute__((aligned(8))) = {
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }
};

T_lbl_80478BF0 lbl_80478BF0 __attribute__((aligned(8))) = {
    { 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00 }
};

