#include "dolphin/types.h"


struct lbl_8047897C_s;
extern struct lbl_8047897C_s lbl_8047897C;
struct lbl_80478980_s;
extern struct lbl_80478980_s lbl_80478980;
struct __OSArenaLo_s;
extern struct __OSArenaLo_s __OSArenaLo;
struct gap_07_8047898C_sdata_s;
extern struct gap_07_8047898C_sdata_s gap_07_8047898C_sdata;

/* Auto-carved .data unit 0x8047897C..0x80478990 (20 B): 4 object(s), 0 relocation(s).
 * Generated from the dtk-extracted target object: one definition per target symbol,
 * byte-exact, with every 4-aligned R_PPC_ADDR32 kept as a u32 in a packed struct. */

/* 0x000000     4 B, 0 reloc(s) */
#pragma pack(1)
struct lbl_8047897C_s {
    u8 p0[4];
};
#pragma pack()
__declspec(section ".sdata") struct lbl_8047897C_s lbl_8047897C __attribute__((aligned(1))) = {
    0x25, 0x73, 0x0A, 0x00,
};

/* 0x000004     8 B, 0 reloc(s) */
#pragma pack(1)
struct lbl_80478980_s {
    u8 p0[8];
};
#pragma pack()
__declspec(section ".sdata") struct lbl_80478980_s lbl_80478980 __attribute__((aligned(1))) = {
    0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00,
};

/* 0x00000C     4 B, 0 reloc(s) */
#pragma pack(1)
struct __OSArenaLo_s {
    u8 p0[4];
};
#pragma pack()
__declspec(section ".sdata") struct __OSArenaLo_s __OSArenaLo __attribute__((aligned(1))) = {
    0xFF, 0xFF, 0xFF, 0xFF,
};

/* 0x000010     4 B, 0 reloc(s) */
#pragma pack(1)
struct gap_07_8047898C_sdata_s {
    u8 p0[4];
};
#pragma pack()
__declspec(section ".sdata") struct gap_07_8047898C_sdata_s gap_07_8047898C_sdata __attribute__((aligned(1))) = {
    0x00, 0x00, 0x00, 0x00,
};
