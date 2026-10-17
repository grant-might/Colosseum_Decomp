#include "dolphin/types.h"

#pragma section ".data"

extern u8 lbl_8038FFFC[];
extern u8 lbl_8047B618[];
extern u8 lbl_80379273[];

struct lbl_8037939C_s;
extern struct lbl_8037939C_s lbl_8037939C;
struct lbl_803793A5_s;
extern struct lbl_803793A5_s lbl_803793A5;
struct lbl_803793C3_s;
extern struct lbl_803793C3_s lbl_803793C3;
struct lbl_803793D7_s;
extern struct lbl_803793D7_s lbl_803793D7;
struct lbl_803793EA_s;
extern struct lbl_803793EA_s lbl_803793EA;
struct lbl_80379402_s;
extern struct lbl_80379402_s lbl_80379402;
struct lbl_8037941F_s;
extern struct lbl_8037941F_s lbl_8037941F;

/* Auto-carved .data unit 0x8037939C..0x8037943C (160 B): 7 object(s), 3 relocation(s).
 * Generated from the dtk-extracted target object: one definition per target symbol,
 * byte-exact, with every 4-aligned R_PPC_ADDR32 kept as a u32 in a packed struct. */

/* 0x000000     9 B, 0 reloc(s) */
#pragma pack(1)
struct lbl_8037939C_s {
    u8 p0[9];
};
#pragma pack()
struct lbl_8037939C_s lbl_8037939C __attribute__((aligned(1))) = {
    0x10, 0x00, 0x00, 0x75, 0xAC, 0x12, 0x00, 0x40, 0x3C,
};

/* 0x000009    30 B, 1 reloc(s) */
#pragma pack(1)
struct lbl_803793A5_s {
    u8 p0[3];
    u32 q3;
    u8 p7[23];
};
#pragma pack()
struct lbl_803793A5_s lbl_803793A5 __attribute__((aligned(1))) = {
    0x45, 0x11, 0x06,
    (u32)&lbl_8038FFFC,
    0x0A, 0x05, 0x35, 0x80, 0x47, 0xB6, 0x18, 0x00, 0x10, 0x01, 0x00, 0x0B,
    0x11, 0x10, 0x00, 0x00, 0x75, 0x8E, 0x28, 0x80, 0x37, 0x92, 0x73,
};

/* 0x000027    20 B, 0 reloc(s) */
#pragma pack(1)
struct lbl_803793C3_s {
    u8 p0[20];
};
#pragma pack()
struct lbl_803793C3_s lbl_803793C3 __attribute__((aligned(1))) = {
    0x45, 0x11, 0x17, 0x00, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x10, 0x00, 0x00,
    0x75, 0x8F, 0x12, 0x00, 0x40, 0x0A, 0x06, 0x3E,
};

/* 0x00003B    19 B, 0 reloc(s) */
#pragma pack(1)
struct lbl_803793D7_s {
    u8 p0[19];
};
#pragma pack()
struct lbl_803793D7_s lbl_803793D7 __attribute__((aligned(1))) = {
    0x65, 0x11, 0x00, 0x00, 0x00, 0x0A, 0x0A, 0x07, 0x10, 0x00, 0x00, 0x75,
    0x71, 0x12, 0x00, 0x40, 0x0A, 0x06, 0x3C,
};

/* 0x00004E    24 B, 0 reloc(s) */
#pragma pack(1)
struct lbl_803793EA_s {
    u8 p0[24];
};
#pragma pack()
struct lbl_803793EA_s lbl_803793EA __attribute__((aligned(1))) = {
    0x45, 0x12, 0x17, 0x00, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x10, 0x00, 0x00,
    0x75, 0x72, 0x12, 0x00, 0x40, 0x0A, 0x06, 0x28, 0x80, 0x37, 0x5F, 0xBF,
};

/* 0x000066    29 B, 0 reloc(s) */
#pragma pack(1)
struct lbl_80379402_s {
    u8 p0[29];
};
#pragma pack()
struct lbl_80379402_s lbl_80379402 __attribute__((aligned(1))) = {
    0x65, 0x11, 0x00, 0x00, 0x00, 0x17, 0x0A, 0x05, 0x35, 0x80, 0x47, 0xB6,
    0x18, 0x00, 0x10, 0x01, 0x00, 0x0B, 0x11, 0x10, 0x00, 0x00, 0x75, 0xC1,
    0x28, 0x80, 0x37, 0x92, 0x73,
};

/* 0x000083    29 B, 2 reloc(s) */
#pragma pack(1)
struct lbl_8037941F_s {
    u8 p0[9];
    u32 q9;
    u8 pD[12];
    u32 q19;
};
#pragma pack()
struct lbl_8037941F_s lbl_8037941F __attribute__((aligned(1))) = {
    0x65, 0x11, 0x00, 0x00, 0x00, 0x18, 0x0A, 0x05, 0x35,
    (u32)&lbl_8047B618,
    0x00, 0x10, 0x01, 0x00, 0x0B, 0x11, 0x10, 0x00, 0x00, 0x75, 0xC3, 0x28,
    (u32)&lbl_80379273,
};
