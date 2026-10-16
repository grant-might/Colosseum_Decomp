/*
 * @file sbss_8047AB18.c
 * @brief DOL zero-fill unit .sbss 0x8047AB18-0x8047AF18
 *        (auto unit main/auto_08_8047AB18_sbss).
 *
 * Declarations only: the section holds no bytes in the DOL, so all
 * that has to be reproduced is the symbol set, the size of each
 * object and its offset inside the section.
 *
 * MWCC emits uninitialised globals in reverse source order, so the
 * objects are declared in descending address order and MWLD lays
 * them out in that order. Interior padding is expressed with
 * aligned(N) on the following object: MWLD does not honour the
 * target's gap_* globals when they come from source.
 */
#include "dolphin/types.h"

/* 0x0003FC 4 B, alignment 4 */
u8 lbl_8047AF14[4] __attribute__((aligned(4)));

/* 0x0003F8 4 B, alignment 8 */
u8 lbl_8047AF10[4] __attribute__((aligned(8)));

/* 0x0003F4 4 B, alignment 4 */
u8 lbl_8047AF0C[4] __attribute__((aligned(4)));

/* 0x0003F0 4 B, alignment 8 */
u8 lbl_8047AF08[4] __attribute__((aligned(8)));

/* 0x0003EC 4 B, alignment 4 */
u8 lbl_8047AF04[4] __attribute__((aligned(4)));

/* 0x0003E8 4 B, alignment 8 */
u8 lbl_8047AF00[4] __attribute__((aligned(8)));

/* 0x0003E5 3 B (alignment padding) */
u8 gap_08_8047AEFD_sbss[3] __attribute__((aligned(1)));

/* 0x0003E4 1 B, alignment 4 */
u8 lbl_8047AEFC[1] __attribute__((aligned(4)));

/* 0x0003E0 4 B, alignment 8 */
u8 lbl_8047AEF8[4] __attribute__((aligned(8)));

/* 0x0003D8 8 B, alignment 8 */
u8 lbl_8047AEF0[8] __attribute__((aligned(8)));

/* 0x0003D6 2 B (alignment padding) */
u8 gap_08_8047AEEE_sbss[2] __attribute__((aligned(1)));

/* 0x0003D4 2 B, alignment 4 */
u8 lbl_8047AEEC[2] __attribute__((aligned(4)));

/* 0x0003D0 4 B, alignment 8 */
u8 lbl_8047AEE8[4] __attribute__((aligned(8)));

/* 0x0003CE 2 B (alignment padding) */
u8 gap_08_8047AEE6_sbss[2] __attribute__((aligned(1)));

/* 0x0003CC 2 B, alignment 4 */
u8 lbl_8047AEE4[2] __attribute__((aligned(4)));

/* 0x0003C8 4 B, alignment 8 */
u8 lbl_8047AEE0[4] __attribute__((aligned(8)));

/* 0x0003C4 4 B, alignment 4 */
u8 lbl_8047AEDC[4] __attribute__((aligned(4)));

/* 0x0003C2 2 B (alignment padding) */
u8 gap_08_8047AEDA_sbss[2] __attribute__((aligned(1)));

/* 0x0003C1 1 B */
u8 lbl_8047AED9[1] __attribute__((aligned(1)));

/* 0x0003C0 1 B, alignment 8 */
u8 lbl_8047AED8[1] __attribute__((aligned(8)));

/* 0x0003BC 4 B, alignment 4 */
u8 lbl_8047AED4[4] __attribute__((aligned(4)));

/* 0x0003BA 2 B (alignment padding) */
u8 gap_08_8047AED2_sbss[2] __attribute__((aligned(1)));

/* 0x0003B9 1 B */
u8 lbl_8047AED1[1] __attribute__((aligned(1)));

/* 0x0003B8 1 B, alignment 8 */
u8 lbl_8047AED0[1] __attribute__((aligned(8)));

/* 0x0003B4 4 B, alignment 4 */
u8 lbl_8047AECC[4] __attribute__((aligned(4)));

/* 0x0003B0 4 B, alignment 8 */
u8 lbl_8047AEC8[4] __attribute__((aligned(8)));

/* 0x0003AE 2 B (alignment padding) */
u8 gap_08_8047AEC6_sbss[2] __attribute__((aligned(1)));

/* 0x0003AC 2 B, alignment 4 */
u8 lbl_8047AEC4[2] __attribute__((aligned(4)));

/* 0x0003A8 4 B, alignment 8 */
u8 lbl_8047AEC0[4] __attribute__((aligned(8)));

/* 0x0003A4 4 B, alignment 4 */
u8 lbl_8047AEBC[4] __attribute__((aligned(4)));

/* 0x0003A2 2 B (alignment padding) */
u8 gap_08_8047AEBA_sbss[2] __attribute__((aligned(1)));

/* 0x0003A0 2 B, alignment 8 */
u8 lbl_8047AEB8[2] __attribute__((aligned(8)));

/* 0x00039C 4 B, alignment 4 */
u8 lbl_8047AEB4[4] __attribute__((aligned(4)));

/* 0x000398 4 B, alignment 8 */
u8 lbl_8047AEB0[4] __attribute__((aligned(8)));

/* 0x000390 8 B, alignment 8 */
u8 lbl_8047AEA8[8] __attribute__((aligned(8)));

/* 0x00038E 2 B (alignment padding) */
u8 gap_08_8047AEA6_sbss[2] __attribute__((aligned(1)));

/* 0x00038C 2 B, alignment 4 */
u8 lbl_8047AEA4[2] __attribute__((aligned(4)));

/* 0x00038A 2 B, alignment 2 */
u8 lbl_8047AEA2[2] __attribute__((aligned(2)));

/* 0x000388 2 B, alignment 8 */
u8 lbl_8047AEA0[2] __attribute__((aligned(8)));

/* 0x000384 4 B, alignment 4 */
u8 lbl_8047AE9C[4] __attribute__((aligned(4)));

/* 0x000380 4 B, alignment 8 */
u8 lbl_8047AE98[4] __attribute__((aligned(8)));

/* 0x00037C 4 B, alignment 4 */
u8 lbl_8047AE94[4] __attribute__((aligned(4)));

/* 0x00037A 2 B (alignment padding) */
u8 gap_08_8047AE92_sbss[2] __attribute__((aligned(1)));

/* 0x000378 2 B, alignment 8 */
u8 lbl_8047AE90[2] __attribute__((aligned(8)));

/* 0x000374 4 B, alignment 4 */
u8 lbl_8047AE8C[4] __attribute__((aligned(4)));

/* 0x000370 4 B, alignment 8 */
u8 lbl_8047AE88[4] __attribute__((aligned(8)));

/* 0x00036C 4 B, alignment 4 */
u8 lbl_8047AE84[4] __attribute__((aligned(4)));

/* 0x000368 4 B, alignment 8 */
u8 lbl_8047AE80[4] __attribute__((aligned(8)));

/* 0x000366 2 B (alignment padding) */
u8 gap_08_8047AE7E_sbss[2] __attribute__((aligned(1)));

/* 0x000364 2 B, alignment 4 */
u8 lbl_8047AE7C[2] __attribute__((aligned(4)));

/* 0x000360 4 B, alignment 8 */
u8 lbl_8047AE78[4] __attribute__((aligned(8)));

/* 0x00035C 4 B, alignment 4 */
u8 lbl_8047AE74[4] __attribute__((aligned(4)));

/* 0x000358 4 B, alignment 8 */
u8 lbl_8047AE70[4] __attribute__((aligned(8)));

/* 0x000354 4 B, alignment 4 */
u8 lbl_8047AE6C[4] __attribute__((aligned(4)));

/* 0x000350 4 B, alignment 8 */
u8 lbl_8047AE68[4] __attribute__((aligned(8)));

/* 0x00034C 4 B, alignment 4 */
u8 lbl_8047AE64[4] __attribute__((aligned(4)));

/* 0x000348 4 B, alignment 8 */
u8 lbl_8047AE60[4] __attribute__((aligned(8)));

/* 0x000344 4 B, alignment 4 */
u8 lbl_8047AE5C[4] __attribute__((aligned(4)));

/* 0x000340 4 B, alignment 8 */
u8 lbl_8047AE58[4] __attribute__((aligned(8)));

/* 0x00033C 4 B, alignment 4 */
u8 lbl_8047AE54[4] __attribute__((aligned(4)));

/* 0x00033A 2 B, alignment 2 */
u8 lbl_8047AE52[2] __attribute__((aligned(2)));

/* 0x000338 2 B, alignment 8 */
u8 lbl_8047AE50[2] __attribute__((aligned(8)));

/* 0x000334 4 B, alignment 4 */
u8 lbl_8047AE4C[4] __attribute__((aligned(4)));

/* 0x000330 4 B, alignment 8 */
u8 lbl_8047AE48[4] __attribute__((aligned(8)));

/* 0x00032C 4 B, alignment 4 */
u8 lbl_8047AE44[4] __attribute__((aligned(4)));

/* 0x000328 4 B, alignment 8 */
u8 lbl_8047AE40[4] __attribute__((aligned(8)));

/* 0x000324 4 B, alignment 4 */
u8 lbl_8047AE3C[4] __attribute__((aligned(4)));

/* 0x000320 4 B, alignment 8 */
u8 lbl_8047AE38[4] __attribute__((aligned(8)));

/* 0x00031C 4 B, alignment 4 */
u8 lbl_8047AE34[4] __attribute__((aligned(4)));

/* 0x000318 4 B, alignment 8 */
u8 lbl_8047AE30[4] __attribute__((aligned(8)));

/* 0x000314 4 B, alignment 4 */
u8 lbl_8047AE2C[4] __attribute__((aligned(4)));

/* 0x000310 4 B, alignment 8 */
u8 lbl_8047AE28[4] __attribute__((aligned(8)));

/* 0x00030C 4 B, alignment 4 */
u8 lbl_8047AE24[4] __attribute__((aligned(4)));

/* 0x000308 4 B, alignment 8 */
u8 lbl_8047AE20[4] __attribute__((aligned(8)));

/* 0x000304 4 B, alignment 4 */
u8 lbl_8047AE1C[4] __attribute__((aligned(4)));

/* 0x000300 4 B, alignment 8 */
u8 lbl_8047AE18[4] __attribute__((aligned(8)));

/* 0x0002FC 4 B, alignment 4 */
u8 lbl_8047AE14[4] __attribute__((aligned(4)));

/* 0x0002F8 4 B, alignment 8 */
u8 lbl_8047AE10[4] __attribute__((aligned(8)));

/* 0x0002F4 4 B, alignment 4 */
u8 lbl_8047AE0C[4] __attribute__((aligned(4)));

/* 0x0002F0 4 B, alignment 8 */
u8 lbl_8047AE08[4] __attribute__((aligned(8)));

/* 0x0002EC 4 B, alignment 4 */
u8 lbl_8047AE04[4] __attribute__((aligned(4)));

/* 0x0002E8 4 B, alignment 8 */
u8 lbl_8047AE00[4] __attribute__((aligned(8)));

/* 0x0002E4 4 B, alignment 4 */
u8 lbl_8047ADFC[4] __attribute__((aligned(4)));

/* 0x0002E0 4 B, alignment 8 */
u8 lbl_8047ADF8[4] __attribute__((aligned(8)));

/* 0x0002DC 4 B, alignment 4 */
u8 lbl_8047ADF4[4] __attribute__((aligned(4)));

/* 0x0002D8 4 B, alignment 8 */
u8 lbl_8047ADF0[4] __attribute__((aligned(8)));

/* 0x0002D4 4 B, alignment 4 */
u8 lbl_8047ADEC[4] __attribute__((aligned(4)));

/* 0x0002D0 4 B, alignment 8 */
u8 lbl_8047ADE8[4] __attribute__((aligned(8)));

/* 0x0002CC 4 B, alignment 4 */
u8 lbl_8047ADE4[4] __attribute__((aligned(4)));

/* 0x0002C8 4 B, alignment 8 */
u8 lbl_8047ADE0[4] __attribute__((aligned(8)));

/* 0x0002C4 4 B, alignment 4 */
u8 lbl_8047ADDC[4] __attribute__((aligned(4)));

/* 0x0002C0 4 B, alignment 8 */
u8 lbl_8047ADD8[4] __attribute__((aligned(8)));

/* 0x0002BC 4 B, alignment 4 */
u8 lbl_8047ADD4[4] __attribute__((aligned(4)));

/* 0x0002B8 4 B, alignment 8 */
u8 lbl_8047ADD0[4] __attribute__((aligned(8)));

/* 0x0002B4 4 B, alignment 4 */
u8 lbl_8047ADCC[4] __attribute__((aligned(4)));

/* 0x0002B0 4 B, alignment 8 */
u8 lbl_8047ADC8[4] __attribute__((aligned(8)));

/* 0x0002A8 8 B, alignment 8 */
u8 lbl_8047ADC0[8] __attribute__((aligned(8)));

/* 0x0002A0 8 B, alignment 8 */
u8 lbl_8047ADB8[8] __attribute__((aligned(8)));

/* 0x000298 8 B, alignment 8 */
u8 lbl_8047ADB0[8] __attribute__((aligned(8)));

/* 0x000294 4 B, alignment 4 */
u8 lbl_8047ADAC[4] __attribute__((aligned(4)));

/* 0x000290 4 B, alignment 8 */
u8 lbl_8047ADA8[4] __attribute__((aligned(8)));

/* 0x00028E 2 B (alignment padding) */
u8 gap_08_8047ADA6_sbss[2] __attribute__((aligned(1)));

/* 0x00028C 2 B, alignment 4 */
u8 lbl_8047ADA4[2] __attribute__((aligned(4)));

/* 0x000288 4 B, alignment 8 */
u8 lbl_8047ADA0[4] __attribute__((aligned(8)));

/* 0x000284 4 B, alignment 4 */
u8 lbl_8047AD9C[4] __attribute__((aligned(4)));

/* 0x000282 2 B (alignment padding) */
u8 gap_08_8047AD9A_sbss[2] __attribute__((aligned(1)));

/* 0x000280 2 B, alignment 8 */
u8 lbl_8047AD98[2] __attribute__((aligned(8)));

/* 0x00027C 4 B, alignment 4 */
u8 lbl_8047AD94[4] __attribute__((aligned(4)));

/* 0x000278 4 B, alignment 8 */
u8 lbl_8047AD90[4] __attribute__((aligned(8)));

/* 0x000274 4 B, alignment 4 */
u8 lbl_8047AD8C[4] __attribute__((aligned(4)));

/* 0x000270 4 B, alignment 8 */
u8 lbl_8047AD88[4] __attribute__((aligned(8)));

/* 0x00026C 4 B, alignment 4 */
u8 lbl_8047AD84[4] __attribute__((aligned(4)));

/* 0x000268 4 B, alignment 8 */
u8 lbl_8047AD80[4] __attribute__((aligned(8)));

/* 0x000264 4 B, alignment 4 */
u8 lbl_8047AD7C[4] __attribute__((aligned(4)));

/* 0x000260 4 B, alignment 8 */
u8 lbl_8047AD78[4] __attribute__((aligned(8)));

/* 0x00025C 4 B, alignment 4 */
u8 lbl_8047AD74[4] __attribute__((aligned(4)));

/* 0x00025A 2 B (alignment padding) */
u8 pad_08_0000025A[2] __attribute__((aligned(1)));

/* 0x000259 1 B */
u8 lbl_8047AD71[1] __attribute__((aligned(1)));

/* 0x000258 1 B, alignment 8 */
u8 lbl_8047AD70[1] __attribute__((aligned(8)));

/* 0x000254 4 B, alignment 4 */
u8 lbl_8047AD6C[4] __attribute__((aligned(4)));

/* 0x000250 4 B, alignment 8 */
u8 lbl_8047AD68[4] __attribute__((aligned(8)));

/* 0x000248 8 B, alignment 8 */
u8 lbl_8047AD60[8] __attribute__((aligned(8)));

/* 0x000240 8 B, alignment 8 */
u8 lbl_8047AD58[8] __attribute__((aligned(8)));

/* 0x00023C 4 B, alignment 4 */
u8 lbl_8047AD54[4] __attribute__((aligned(4)));

/* 0x00023A 2 B (alignment padding) */
u8 gap_08_8047AD52_sbss[2] __attribute__((aligned(1)));

/* 0x000238 2 B, alignment 8 */
u8 lbl_8047AD50[2] __attribute__((aligned(8)));

/* 0x000234 4 B, alignment 4 */
u8 lbl_8047AD4C[4] __attribute__((aligned(4)));

/* 0x000230 4 B, alignment 8 */
u8 lbl_8047AD48[4] __attribute__((aligned(8)));

/* 0x00022D 3 B (alignment padding) */
u8 gap_08_8047AD45_sbss[3] __attribute__((aligned(1)));

/* 0x00022C 1 B, alignment 4 */
u8 lbl_8047AD44[1] __attribute__((aligned(4)));

/* 0x000228 4 B, alignment 8 */
u8 lbl_8047AD40[4] __attribute__((aligned(8)));

/* 0x000224 4 B, alignment 4 */
u8 lbl_8047AD3C[4] __attribute__((aligned(4)));

/* 0x000220 4 B, alignment 8 */
u8 lbl_8047AD38[4] __attribute__((aligned(8)));

/* 0x00021C 4 B, alignment 4 */
u8 lbl_8047AD34[4] __attribute__((aligned(4)));

/* 0x000218 4 B, alignment 8 */
u8 lbl_8047AD30[4] __attribute__((aligned(8)));

/* 0x000214 4 B, alignment 4 */
u8 lbl_8047AD2C[4] __attribute__((aligned(4)));

/* 0x000210 4 B, alignment 8 */
u8 lbl_8047AD28[4] __attribute__((aligned(8)));

/* 0x00020D 3 B (alignment padding) */
u8 gap_08_8047AD25_sbss[3] __attribute__((aligned(1)));

/* 0x00020C 1 B, alignment 4 */
u8 lbl_8047AD24[1] __attribute__((aligned(4)));

/* 0x00020B 1 B */
u8 lbl_8047AD23[1] __attribute__((aligned(1)));

/* 0x00020A 1 B, alignment 2 */
u8 lbl_8047AD22[1] __attribute__((aligned(2)));

/* 0x000209 1 B */
u8 lbl_8047AD21[1] __attribute__((aligned(1)));

/* 0x000208 1 B, alignment 8 */
u8 lbl_8047AD20[1] __attribute__((aligned(8)));

/* 0x000204 4 B, alignment 4 */
u8 lbl_8047AD1C[4] __attribute__((aligned(4)));

/* 0x000202 2 B (alignment padding) */
u8 gap_08_8047AD1A_sbss[2] __attribute__((aligned(1)));

/* 0x000200 2 B, alignment 8 */
u8 lbl_8047AD18[2] __attribute__((aligned(8)));

/* 0x0001F8 8 B, alignment 8 */
u8 lbl_8047AD10[8] __attribute__((aligned(8)));

/* 0x0001F0 8 B, alignment 8 */
u8 lbl_8047AD08[8] __attribute__((aligned(8)));

/* 0x0001ED 3 B (alignment padding) */
u8 gap_08_8047AD05_sbss[3] __attribute__((aligned(1)));

/* 0x0001EC 1 B, alignment 4 */
u8 lbl_8047AD04[1] __attribute__((aligned(4)));

/* 0x0001E8 4 B, alignment 8 */
u8 lbl_8047AD00[4] __attribute__((aligned(8)));

/* 0x0001E0 8 B, alignment 8 */
u8 lbl_8047ACF8[8] __attribute__((aligned(8)));

/* 0x0001DC 4 B, alignment 4 */
u8 lbl_8047ACF4[4] __attribute__((aligned(4)));

/* 0x0001D8 4 B, alignment 8 */
u8 lbl_8047ACF0[4] __attribute__((aligned(8)));

/* 0x0001D4 4 B, alignment 4 */
u8 lbl_8047ACEC[4] __attribute__((aligned(4)));

/* 0x0001D0 4 B, alignment 8 */
u8 lbl_8047ACE8[4] __attribute__((aligned(8)));

/* 0x0001C8 8 B, alignment 8 */
u8 lbl_8047ACE0[8] __attribute__((aligned(8)));

/* 0x0001C4 4 B, alignment 4 */
u8 lbl_8047ACDC[4] __attribute__((aligned(4)));

/* 0x0001C0 4 B, alignment 8 */
u8 lbl_8047ACD8[4] __attribute__((aligned(8)));

/* 0x0001BC 4 B, alignment 4 */
u8 lbl_8047ACD4[4] __attribute__((aligned(4)));

/* 0x0001B8 4 B, alignment 8 */
u8 lbl_8047ACD0[4] __attribute__((aligned(8)));

/* 0x0001B4 4 B, alignment 4 */
u8 lbl_8047ACCC[4] __attribute__((aligned(4)));

/* 0x0001B0 4 B, alignment 8 */
u8 lbl_8047ACC8[4] __attribute__((aligned(8)));

/* 0x0001AC 4 B, alignment 4 */
u8 lbl_8047ACC4[4] __attribute__((aligned(4)));

/* 0x0001A8 4 B, alignment 8 */
u8 lbl_8047ACC0[4] __attribute__((aligned(8)));

/* 0x0001A4 4 B, alignment 4 */
u8 lbl_8047ACBC[4] __attribute__((aligned(4)));

/* 0x0001A0 4 B, alignment 8 */
u8 lbl_8047ACB8[4] __attribute__((aligned(8)));

/* 0x00019C 4 B, alignment 4 */
u8 lbl_8047ACB4[4] __attribute__((aligned(4)));

/* 0x000198 4 B, alignment 8 */
u8 lbl_8047ACB0[4] __attribute__((aligned(8)));

/* 0x000196 2 B (alignment padding) */
u8 gap_08_8047ACAE_sbss[2] __attribute__((aligned(1)));

/* 0x000194 2 B, alignment 4 */
u8 lbl_8047ACAC[2] __attribute__((aligned(4)));

/* 0x000190 4 B, alignment 8 */
u8 lbl_8047ACA8[4] __attribute__((aligned(8)));

/* 0x00018C 4 B, alignment 4 */
u8 lbl_8047ACA4[4] __attribute__((aligned(4)));

/* 0x00018A 2 B (alignment padding) */
u8 gap_08_8047ACA2_sbss[2] __attribute__((aligned(1)));

/* 0x000188 2 B, alignment 8 */
u8 lbl_8047ACA0[2] __attribute__((aligned(8)));

/* 0x000184 4 B, alignment 4 */
u8 lbl_8047AC9C[4] __attribute__((aligned(4)));

/* 0x000180 4 B, alignment 8 */
u8 lbl_8047AC98[4] __attribute__((aligned(8)));

/* 0x00017C 4 B, alignment 4 */
u8 lbl_8047AC94[4] __attribute__((aligned(4)));

/* 0x000178 4 B, alignment 8 */
u8 lbl_8047AC90[4] __attribute__((aligned(8)));

/* 0x000176 2 B (alignment padding) */
u8 gap_08_8047AC8E_sbss[2] __attribute__((aligned(1)));

/* 0x000174 2 B, alignment 4 */
u8 lbl_8047AC8C[2] __attribute__((aligned(4)));

/* 0x000170 4 B, alignment 8 */
u8 lbl_8047AC88[4] __attribute__((aligned(8)));

/* 0x00016C 4 B, alignment 4 */
u8 lbl_8047AC84[4] __attribute__((aligned(4)));

/* 0x000168 4 B, alignment 8 */
u8 lbl_8047AC80[4] __attribute__((aligned(8)));

/* 0x000164 4 B, alignment 4 */
u8 lbl_8047AC7C[4] __attribute__((aligned(4)));

/* 0x000162 2 B (alignment padding) */
u8 gap_08_8047AC7A_sbss[2] __attribute__((aligned(1)));

/* 0x000160 2 B, alignment 8 */
u8 lbl_8047AC78[2] __attribute__((aligned(8)));

/* 0x00015A 6 B, alignment 2 */
u8 lbl_8047AC72[6] __attribute__((aligned(2)));

/* 0x000158 2 B, alignment 8 */
u8 lbl_8047AC70[2] __attribute__((aligned(8)));

/* 0x000150 8 B, alignment 8 */
u8 lbl_8047AC68[8] __attribute__((aligned(8)));

/* 0x000148 8 B, alignment 8 */
u8 lbl_8047AC60[8] __attribute__((aligned(8)));

/* 0x000144 4 B, alignment 4 */
u8 lbl_8047AC5C[4] __attribute__((aligned(4)));

/* 0x000142 2 B (alignment padding) */
u8 gap_08_8047AC5A_sbss[2] __attribute__((aligned(1)));

/* 0x000140 2 B, alignment 8 */
u8 lbl_8047AC58[2] __attribute__((aligned(8)));

/* 0x000138 8 B, alignment 8 */
u8 lbl_8047AC50[8] __attribute__((aligned(8)));

/* 0x000134 4 B, alignment 4 */
u8 lbl_8047AC4C[4] __attribute__((aligned(4)));

/* 0x000130 4 B, alignment 8 */
u8 lbl_8047AC48[4] __attribute__((aligned(8)));

/* 0x000128 8 B, alignment 8 */
u8 lbl_8047AC40[8] __attribute__((aligned(8)));

/* 0x000124 4 B, alignment 4 */
u8 lbl_8047AC3C[4] __attribute__((aligned(4)));

/* 0x000120 4 B, alignment 8 */
u8 lbl_8047AC38[4] __attribute__((aligned(8)));

/* 0x000118 8 B, alignment 8 */
u8 lbl_8047AC30[8] __attribute__((aligned(8)));

/* 0x000116 2 B (alignment padding) */
u8 gap_08_8047AC2E_sbss[2] __attribute__((aligned(1)));

/* 0x000114 2 B, alignment 4 */
u8 lbl_8047AC2C[2] __attribute__((aligned(4)));

/* 0x000110 4 B, alignment 8 */
u8 lbl_8047AC28[4] __attribute__((aligned(8)));

/* 0x00010C 4 B, alignment 4 */
u8 lbl_8047AC24[4] __attribute__((aligned(4)));

/* 0x000108 4 B, alignment 8 */
u8 lbl_8047AC20[4] __attribute__((aligned(8)));

/* 0x000104 4 B, alignment 4 */
u8 lbl_8047AC1C[4] __attribute__((aligned(4)));

/* 0x000100 4 B, alignment 8 */
u8 lbl_8047AC18[4] __attribute__((aligned(8)));

/* 0x0000FC 4 B, alignment 4 */
u8 lbl_8047AC14[4] __attribute__((aligned(4)));

/* 0x0000F8 4 B, alignment 8 */
u8 lbl_8047AC10[4] __attribute__((aligned(8)));

/* 0x0000F5 3 B (alignment padding) */
u8 gap_08_8047AC0D_sbss[3] __attribute__((aligned(1)));

/* 0x0000F4 1 B, alignment 4 */
u8 lbl_8047AC0C[1] __attribute__((aligned(4)));

/* 0x0000F0 4 B, alignment 8 */
u8 lbl_8047AC08[4] __attribute__((aligned(8)));

/* 0x0000EC 4 B, alignment 4 */
u8 lbl_8047AC04[4] __attribute__((aligned(4)));

/* 0x0000E8 4 B, alignment 8 */
u8 lbl_8047AC00[4] __attribute__((aligned(8)));

/* 0x0000E0 8 B, alignment 8 */
u8 lbl_8047ABF8[8] __attribute__((aligned(8)));

/* 0x0000DC 4 B, alignment 4 */
u8 lbl_8047ABF4[4] __attribute__((aligned(4)));

/* 0x0000DA 2 B (alignment padding) */
u8 gap_08_8047ABF2_sbss[2] __attribute__((aligned(1)));

/* 0x0000D8 2 B, alignment 8 */
u8 lbl_8047ABF0[2] __attribute__((aligned(8)));

/* 0x0000D4 4 B, alignment 4 */
u8 lbl_8047ABEC[4] __attribute__((aligned(4)));

/* 0x0000D1 3 B (alignment padding) */
u8 gap_08_8047ABE9_sbss[3] __attribute__((aligned(1)));

/* 0x0000D0 1 B, alignment 8 */
u8 lbl_8047ABE8[1] __attribute__((aligned(8)));

/* 0x0000CC 4 B, alignment 4 */
u8 lbl_8047ABE4[4] __attribute__((aligned(4)));

/* 0x0000C8 4 B, alignment 8 */
u8 lbl_8047ABE0[4] __attribute__((aligned(8)));

/* 0x0000C4 4 B, alignment 4 */
u8 lbl_8047ABDC[4] __attribute__((aligned(4)));

/* 0x0000C0 4 B, alignment 8 */
u8 lbl_8047ABD8[4] __attribute__((aligned(8)));

/* 0x0000B8 8 B, alignment 8 */
u8 lbl_8047ABD0[8] __attribute__((aligned(8)));

/* 0x0000B4 4 B, alignment 4 */
u8 lbl_8047ABCC[4] __attribute__((aligned(4)));

/* 0x0000B0 4 B, alignment 8 */
u8 lbl_8047ABC8[4] __attribute__((aligned(8)));

/* 0x0000AD 3 B (alignment padding) */
u8 gap_08_8047ABC5_sbss[3] __attribute__((aligned(1)));

/* 0x0000AC 1 B, alignment 4 */
u8 lbl_8047ABC4[1] __attribute__((aligned(4)));

/* 0x0000A8 4 B, alignment 8 */
u8 lbl_8047ABC0[4] __attribute__((aligned(8)));

/* 0x0000A4 4 B, alignment 4 */
u8 lbl_8047ABBC[4] __attribute__((aligned(4)));

/* 0x0000A2 2 B (alignment padding) */
u8 gap_08_8047ABBA_sbss[2] __attribute__((aligned(1)));

/* 0x0000A0 2 B, alignment 8 */
u8 lbl_8047ABB8[2] __attribute__((aligned(8)));

/* 0x000098 8 B, alignment 8 */
u8 lbl_8047ABB0[8] __attribute__((aligned(8)));

/* 0x000094 4 B, alignment 4 */
u8 lbl_8047ABAC[4] __attribute__((aligned(4)));

/* 0x000090 4 B, alignment 8 */
u8 lbl_8047ABA8[4] __attribute__((aligned(8)));

/* 0x000088 8 B, alignment 8 */
u8 lbl_8047ABA0[8] __attribute__((aligned(8)));

/* 0x000080 8 B, alignment 8 */
u8 lbl_8047AB98[8] __attribute__((aligned(8)));

/* 0x00007D 3 B (alignment padding) */
u8 gap_08_8047AB95_sbss[3] __attribute__((aligned(1)));

/* 0x00007C 1 B, alignment 4 */
u8 lbl_8047AB94[1] __attribute__((aligned(4)));

/* 0x000078 4 B, alignment 8 */
u8 lbl_8047AB90[4] __attribute__((aligned(8)));

/* 0x000074 4 B, alignment 4 */
u8 lbl_8047AB8C[4] __attribute__((aligned(4)));

/* 0x000070 4 B, alignment 8 */
u8 lbl_8047AB88[4] __attribute__((aligned(8)));

/* 0x00006C 4 B, alignment 4 */
u8 lbl_8047AB84[4] __attribute__((aligned(4)));

/* 0x000068 4 B, alignment 8 */
u8 lbl_8047AB80[4] __attribute__((aligned(8)));

/* 0x000060 8 B, alignment 8 */
u8 lbl_8047AB78[8] __attribute__((aligned(8)));

/* 0x00005C 4 B, alignment 4 */
u8 lbl_8047AB74[4] __attribute__((aligned(4)));

/* 0x00005A 2 B (alignment padding) */
u8 gap_08_8047AB72_sbss[2] __attribute__((aligned(1)));

/* 0x000058 2 B, alignment 8 */
u8 lbl_8047AB70[2] __attribute__((aligned(8)));

/* 0x000050 8 B, alignment 8 */
u8 lbl_8047AB68[8] __attribute__((aligned(8)));

/* 0x00004C 4 B, alignment 4 */
u8 lbl_8047AB64[4] __attribute__((aligned(4)));

/* 0x000048 4 B, alignment 8 */
u8 lbl_8047AB60[4] __attribute__((aligned(8)));

/* 0x000044 4 B, alignment 4 */
u8 lbl_8047AB5C[4] __attribute__((aligned(4)));

/* 0x000040 4 B, alignment 8 */
u8 lbl_8047AB58[4] __attribute__((aligned(8)));

/* 0x00003C 4 B, alignment 4 */
u8 lbl_8047AB54[4] __attribute__((aligned(4)));

/* 0x000038 4 B, alignment 8 */
u8 lbl_8047AB50[4] __attribute__((aligned(8)));

/* 0x000034 4 B, alignment 4 */
u8 lbl_8047AB4C[4] __attribute__((aligned(4)));

/* 0x000030 4 B, alignment 8 */
u8 lbl_8047AB48[4] __attribute__((aligned(8)));

/* 0x00002C 4 B, alignment 4 */
u8 lbl_8047AB44[4] __attribute__((aligned(4)));

/* 0x000028 4 B, alignment 8 */
u8 lbl_8047AB40[4] __attribute__((aligned(8)));

/* 0x000024 4 B, alignment 4 */
u8 lbl_8047AB3C[4] __attribute__((aligned(4)));

/* 0x000020 4 B, alignment 8 */
u8 lbl_8047AB38[4] __attribute__((aligned(8)));

/* 0x00001C 4 B, alignment 4 */
u8 lbl_8047AB34[4] __attribute__((aligned(4)));

/* 0x000018 4 B, alignment 8 */
u8 lbl_8047AB30[4] __attribute__((aligned(8)));

/* 0x000014 4 B, alignment 4 */
u8 lbl_8047AB2C[4] __attribute__((aligned(4)));

/* 0x000011 3 B (alignment padding) */
u8 gap_08_8047AB29_sbss[3] __attribute__((aligned(1)));

/* 0x000010 1 B, alignment 8 */
u8 lbl_8047AB28[1] __attribute__((aligned(8)));

/* 0x000008 8 B, alignment 8 */
u8 lbl_8047AB20[8] __attribute__((aligned(8)));

/* 0x000004 4 B, alignment 4 */
u8 lbl_8047AB1C[4] __attribute__((aligned(4)));

/* 0x000002 2 B (alignment padding) */
u8 gap_08_8047AB1A_sbss[2] __attribute__((aligned(1)));

/* 0x000000 2 B, alignment 8 */
u8 lbl_8047AB18[2] __attribute__((aligned(8)));

