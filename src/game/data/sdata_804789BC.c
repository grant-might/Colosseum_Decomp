/*
 * @file sdata_804789BC.c
 * @brief DOL data unit .sdata 0x804789BC-0x804789E8 (auto unit main/auto_07_804789BC_sdata).
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
    u8 m0[4];
} T_pad_07_804789BC_sdata;
#pragma pack()
#pragma pack(1)
typedef struct {
    u8 m0[8];
} T_lbl_804789C0;
#pragma pack()
#pragma pack(1)
typedef struct {
    void* m0;
} T___DVDVersion;
#pragma pack()
#pragma pack(1)
typedef struct {
    u8 m0[4];
} T_autoInvalidation_804789CC;
#pragma pack()
#pragma pack(1)
typedef struct {
    void* m0;
} T_lbl_804789D0;
#pragma pack()
#pragma pack(1)
typedef struct {
    u8 m0[6];
} T_lbl_804789D4;
#pragma pack()
#pragma pack(1)
typedef struct {
    u8 m0[2];
} T_gap_07_804789DA_sdata;
#pragma pack()
#pragma pack(1)
typedef struct {
    u8 m0[4];
} T_lbl_804789DC;
#pragma pack()
#pragma pack(1)
typedef struct {
    void* m0;
} T_lbl_804789E0;
#pragma pack()
#pragma pack(1)
typedef struct {
    void* m0;
} T_lbl_804789E4;
#pragma pack()

/* ---- symbol declarations ---- */
extern u8 defaultOptionalCommandChecker[];
extern u8 lbl_80311A80[];
extern u8 lbl_80311C48[];
extern u8 lbl_80311CB8[];
extern T_pad_07_804789BC_sdata pad_07_804789BC_sdata;
extern T_lbl_804789C0 lbl_804789C0;
extern T___DVDVersion __DVDVersion;
extern T_autoInvalidation_804789CC autoInvalidation_804789CC;
extern T_lbl_804789D0 lbl_804789D0;
extern T_lbl_804789D4 lbl_804789D4;
extern T_gap_07_804789DA_sdata gap_07_804789DA_sdata;
extern T_lbl_804789DC lbl_804789DC;
extern T_lbl_804789E0 lbl_804789E0;
extern T_lbl_804789E4 lbl_804789E4;

/* ---- data ---- */
T_pad_07_804789BC_sdata pad_07_804789BC_sdata __attribute__((aligned(4))) = {
    { 0x00, 0x00, 0x00, 0x00 }
};

T_lbl_804789C0 lbl_804789C0 __attribute__((aligned(4))) = {
    { 0x64, 0x76, 0x64, 0x66, 0x73, 0x2E, 0x63, 0x00 }
};

T___DVDVersion __DVDVersion __attribute__((aligned(4))) = {
    (void*)((u8*)&lbl_80311A80)
};

T_autoInvalidation_804789CC autoInvalidation_804789CC __attribute__((aligned(4))) = {
    { 0x00, 0x00, 0x00, 0x01 }
};

T_lbl_804789D0 lbl_804789D0 __attribute__((aligned(4))) = {
    (void*)((u8*)&defaultOptionalCommandChecker)
};

T_lbl_804789D4 lbl_804789D4 __attribute__((aligned(4))) = {
    { 0x64, 0x76, 0x64, 0x2E, 0x63, 0x00 }
};

T_gap_07_804789DA_sdata gap_07_804789DA_sdata __attribute__((aligned(2))) = {
    { 0x00, 0x00 }
};

T_lbl_804789DC lbl_804789DC __attribute__((aligned(4))) = {
    { 0xFF, 0xFF, 0xFF, 0xFF }
};

T_lbl_804789E0 lbl_804789E0 __attribute__((aligned(4))) = {
    (void*)((u8*)&lbl_80311C48)
};

T_lbl_804789E4 lbl_804789E4 __attribute__((aligned(4))) = {
    (void*)((u8*)&lbl_80311CB8)
};

