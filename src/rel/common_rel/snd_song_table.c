/**
 * @file snd_song_table.c
 * @brief REL 125 (common_rel): the song table.
 *
 * Module 125 .rodata 1768 B (the string pool, 78 4-byte-aligned
 * slots) and .data 632 B (78 R_PPC_ADDR32).
 *
 * The count/index tables the DOL publishes through _prolog are unchanged; this
 * file only makes the pool objects NAMED so the unit is scoreable, and keeps
 * each pointer's in-place pool offset (retail stores the addend in place).
 */
#include "rel/common_rel.h"

/* .rodata string pool, 1768 B in 78 slots */
static const char lbl_125_rodata_56C[24] = "sound/ev_kinpaku.song";
static const char lbl_125_rodata_584[20] = "sound/gs_logo.song";
static const char lbl_125_rodata_598[24] = "sound/me_ex_tre.song";
static const char lbl_125_rodata_5B0[24] = "sound/me_winwin.song";
static const char lbl_125_rodata_5C8[20] = "sound/virtual.song";
static const char lbl_125_rodata_5DC[24] = "sound/siren_atmos.song";
static const char lbl_125_rodata_5F4[20] = "sound/level_up.song";
static const char lbl_125_rodata_608[24] = "sound/end_roll_c.song";
static const char lbl_125_rodata_620[20] = "sound/end_ev_2.song";
static const char lbl_125_rodata_634[20] = "sound/end_ev_1.song";
static const char lbl_125_rodata_648[28] = "sound/hyper_shiccho.song";
static const char lbl_125_rodata_664[20] = "sound/jyakira.song";
static const char lbl_125_rodata_678[24] = "sound/open_roll.song";
static const char lbl_125_rodata_690[24] = "sound/demo_roll.song";
static const char lbl_125_rodata_6A8[24] = "sound/fanfare03.song";
static const char lbl_125_rodata_6C0[24] = "sound/me_chukei.song";
static const char lbl_125_rodata_6D8[24] = "sound/miraclebo.song";
static const char lbl_125_rodata_6F0[24] = "sound/ev_shadow.song";
static const char lbl_125_rodata_708[20] = "sound/title.song";
static const char lbl_125_rodata_71C[24] = "sound/end_roll_b.song";
static const char lbl_125_rodata_734[24] = "sound/worldmap2.song";
static const char lbl_125_rodata_74C[20] = "sound/tretre.song";
static const char lbl_125_rodata_760[24] = "sound/battle9plus.song";
static const char lbl_125_rodata_778[20] = "sound/shinpi.song";
static const char lbl_125_rodata_78C[20] = "sound/battle8.song";
static const char lbl_125_rodata_7A0[20] = "sound/worldmap.song";
static const char lbl_125_rodata_7B4[24] = "sound/ev_shiccho.song";
static const char lbl_125_rodata_7CC[24] = "sound/ev_snatch.song";
static const char lbl_125_rodata_7E4[20] = "sound/battle9.song";
static const char lbl_125_rodata_7F8[24] = "sound/me_relive.song";
static const char lbl_125_rodata_810[24] = "sound/me_snatch.song";
static const char lbl_125_rodata_828[20] = "sound/me_win.song";
static const char lbl_125_rodata_83C[20] = "sound/battle6.song";
static const char lbl_125_rodata_850[24] = "sound/agb_shinka.song";
static const char lbl_125_rodata_868[28] = "sound/agb_me_shinka.song";
static const char lbl_125_rodata_884[24] = "sound/agb_fanfa5.song";
static const char lbl_125_rodata_89C[20] = "sound/dungeon.song";
static const char lbl_125_rodata_8B0[24] = "sound/mt_battle.song";
static const char lbl_125_rodata_8C8[24] = "sound/fanfare02.song";
static const char lbl_125_rodata_8E0[24] = "sound/fanfare01.song";
static const char lbl_125_rodata_8F8[24] = "sound/fanfare00.song";
static const char lbl_125_rodata_910[24] = "sound/agb_fanfa1b.song";
static const char lbl_125_rodata_928[24] = "sound/me_welcome.song";
static const char lbl_125_rodata_940[20] = "sound/me_fue.song";
static const char lbl_125_rodata_954[24] = "sound/tool_battle3.song";
static const char lbl_125_rodata_96C[24] = "sound/tool_battle2.song";
static const char lbl_125_rodata_984[24] = "sound/tool_battle1.song";
static const char lbl_125_rodata_99C[24] = "sound/tool_music.song";
static const char lbl_125_rodata_9B4[24] = "sound/me_undertime.song";
static const char lbl_125_rodata_9CC[20] = "sound/me_news.song";
static const char lbl_125_rodata_9E0[24] = "sound/darkside4.song";
static const char lbl_125_rodata_9F8[20] = "sound/battle5.song";
static const char lbl_125_rodata_A0C[24] = "sound/agb_me_asa.song";
static const char lbl_125_rodata_A24[20] = "sound/battle2.song";
static const char lbl_125_rodata_A38[20] = "sound/battle7.song";
static const char lbl_125_rodata_A4C[24] = "sound/chakumelo09.song";
static const char lbl_125_rodata_A64[24] = "sound/chakumelo08.song";
static const char lbl_125_rodata_A7C[24] = "sound/chakumelo07.song";
static const char lbl_125_rodata_A94[24] = "sound/chakumelo06.song";
static const char lbl_125_rodata_AAC[24] = "sound/chakumelo05.song";
static const char lbl_125_rodata_AC4[24] = "sound/chakumelo04.song";
static const char lbl_125_rodata_ADC[24] = "sound/chakumelo03.song";
static const char lbl_125_rodata_AF4[24] = "sound/chakumelo02.song";
static const char lbl_125_rodata_B0C[24] = "sound/chakumelo01.song";
static const char lbl_125_rodata_B24[24] = "sound/chakumelo00.song";
static const char lbl_125_rodata_B3C[24] = "sound/darkunder.song";
static const char lbl_125_rodata_B54[20] = "sound/gtsolo.song";
static const char lbl_125_rodata_B68[20] = "sound/mirrorbo.song";
static const char lbl_125_rodata_B7C[28] = "sound/wind_atmos_loop.song";
static const char lbl_125_rodata_B98[20] = "sound/saint.song";
static const char lbl_125_rodata_BAC[20] = "sound/pokecen.song";
static const char lbl_125_rodata_BC0[20] = "sound/darkside.song";
static const char lbl_125_rodata_BD4[20] = "sound/country.song";
static const char lbl_125_rodata_BE8[20] = "sound/stand2.song";
static const char lbl_125_rodata_BFC[20] = "sound/stand.song";
static const char lbl_125_rodata_C10[24] = "sound/watercity.song";
static const char lbl_125_rodata_C28[24] = "sound/windycity.song";
static const char lbl_125_rodata_C40[20] = "sound/null_bgm.song";

/* .data, 632 B: 79 x SndSong (8 B), 78 relocated words */
SndSong lbl_125_data_111B8C[79] = {
    { 0x019f0800, (const char*)(lbl_125_rodata_56C + 0x6d4) },
    { 0x01a40800, (const char*)(lbl_125_rodata_56C + 0x6bc) },
    { 0x01a20800, (const char*)(lbl_125_rodata_56C + 0x6a4) },
    { 0x01a00800, (const char*)(lbl_125_rodata_56C + 0x690) },
    { 0x01a10800, (const char*)(lbl_125_rodata_56C + 0x67c) },
    { 0x01e30800, (const char*)(lbl_125_rodata_56C + 0x668) },
    { 0x01e20800, (const char*)(lbl_125_rodata_56C + 0x654) },
    { 0x01e50800, (const char*)(lbl_125_rodata_56C + 0x640) },
    { 0x01e40800, (const char*)(lbl_125_rodata_56C + 0x62c) },
    { 0x01a30800, (const char*)(lbl_125_rodata_56C + 0x610) },
    { 0x00000000, 0x00000000 },
    { 0x01e60800, (const char*)(lbl_125_rodata_56C + 0x5fc) },
    { 0x01e70800, (const char*)(lbl_125_rodata_56C + 0x5e8) },
    { 0x01e80800, (const char*)(lbl_125_rodata_56C + 0x5d0) },
    { 0x02ee0800, (const char*)(lbl_125_rodata_56C + 0x5b8) },
    { 0x02f10800, (const char*)(lbl_125_rodata_56C + 0x5a0) },
    { 0x02f20800, (const char*)(lbl_125_rodata_56C + 0x588) },
    { 0x02f30800, (const char*)(lbl_125_rodata_56C + 0x570) },
    { 0x02f40800, (const char*)(lbl_125_rodata_56C + 0x558) },
    { 0x02f50800, (const char*)(lbl_125_rodata_56C + 0x540) },
    { 0x02f60800, (const char*)(lbl_125_rodata_56C + 0x528) },
    { 0x02f70800, (const char*)(lbl_125_rodata_56C + 0x510) },
    { 0x02f80800, (const char*)(lbl_125_rodata_56C + 0x4f8) },
    { 0x02f90800, (const char*)(lbl_125_rodata_56C + 0x4e0) },
    { 0x030a0800, (const char*)(lbl_125_rodata_56C + 0x4cc) },
    { 0x03080800, (const char*)(lbl_125_rodata_56C + 0x4b8) },
    { 0x03330800, (const char*)(lbl_125_rodata_56C + 0x4a0) },
    { 0x05ef0800, (const char*)(lbl_125_rodata_56C + 0x48c) },
    { 0x05f00800, (const char*)(lbl_125_rodata_56C + 0x474) },
    { 0x05f10800, (const char*)(lbl_125_rodata_56C + 0x460) },
    { 0x05f20800, (const char*)(lbl_125_rodata_56C + 0x448) },
    { 0x06a40800, (const char*)(lbl_125_rodata_56C + 0x430) },
    { 0x06a10800, (const char*)(lbl_125_rodata_56C + 0x418) },
    { 0x06a20800, (const char*)(lbl_125_rodata_56C + 0x400) },
    { 0x06a30800, (const char*)(lbl_125_rodata_56C + 0x3e8) },
    { 0x06f10800, (const char*)(lbl_125_rodata_56C + 0x3d4) },
    { 0x06f20800, (const char*)(lbl_125_rodata_56C + 0x3bc) },
    { 0x06f00800, (const char*)(lbl_125_rodata_56C + 0x3a4) },
    { 0x08070800, (const char*)(lbl_125_rodata_56C + 0x38c) },
    { 0x08080800, (const char*)(lbl_125_rodata_56C + 0x374) },
    { 0x08090800, (const char*)(lbl_125_rodata_56C + 0x35c) },
    { 0x080a0800, (const char*)(lbl_125_rodata_56C + 0x344) },
    { 0x080f0800, (const char*)(lbl_125_rodata_56C + 0x330) },
    { 0x080b0800, (const char*)(lbl_125_rodata_56C + 0x318) },
    { 0x080c0800, (const char*)(lbl_125_rodata_56C + 0x2fc) },
    { 0x080d0800, (const char*)(lbl_125_rodata_56C + 0x2e4) },
    { 0x080e0800, (const char*)(lbl_125_rodata_56C + 0x2d0) },
    { 0x0b5a0800, (const char*)(lbl_125_rodata_56C + 0x2bc) },
    { 0x0b590800, (const char*)(lbl_125_rodata_56C + 0x2a4) },
    { 0x0b580800, (const char*)(lbl_125_rodata_56C + 0x28c) },
    { 0x0b570800, (const char*)(lbl_125_rodata_56C + 0x278) },
    { 0x0be80800, (const char*)(lbl_125_rodata_56C + 0x260) },
    { 0x0be70800, (const char*)(lbl_125_rodata_56C + 0x248) },
    { 0x0d120800, (const char*)(lbl_125_rodata_56C + 0x234) },
    { 0x0d110800, (const char*)(lbl_125_rodata_56C + 0x220) },
    { 0x0d600800, (const char*)(lbl_125_rodata_56C + 0x20c) },
    { 0x0d5f0800, (const char*)(lbl_125_rodata_56C + 0x1f4) },
    { 0x0d710800, (const char*)(lbl_125_rodata_56C + 0x1e0) },
    { 0x0daa0800, (const char*)(lbl_125_rodata_56C + 0x1c8) },
    { 0x0fed0800, (const char*)(lbl_125_rodata_56C + 0x1b0) },
    { 0x0ff00800, (const char*)(lbl_125_rodata_56C + 0x19c) },
    { 0x0fee0800, (const char*)(lbl_125_rodata_56C + 0x184) },
    { 0x0fef0800, (const char*)(lbl_125_rodata_56C + 0x16c) },
    { 0x0ff10800, (const char*)(lbl_125_rodata_56C + 0x154) },
    { 0x10810800, (const char*)(lbl_125_rodata_56C + 0x13c) },
    { 0x10900800, (const char*)(lbl_125_rodata_56C + 0x124) },
    { 0x10a20800, (const char*)(lbl_125_rodata_56C + 0x10c) },
    { 0x10a30800, (const char*)(lbl_125_rodata_56C + 0xf8) },
    { 0x10b40800, (const char*)(lbl_125_rodata_56C + 0xdc) },
    { 0x10b30800, (const char*)(lbl_125_rodata_56C + 0xc8) },
    { 0x11140800, (const char*)(lbl_125_rodata_56C + 0xb4) },
    { 0x11490800, (const char*)(lbl_125_rodata_56C + 0x9c) },
    { 0x114a0800, (const char*)(lbl_125_rodata_56C + 0x88) },
    { 0x114c0800, (const char*)(lbl_125_rodata_56C + 0x70) },
    { 0x114d0800, (const char*)(lbl_125_rodata_56C + 0x5c) },
    { 0x114f0800, (const char*)(lbl_125_rodata_56C + 0x44) },
    { 0x114e0800, (const char*)(lbl_125_rodata_56C + 0x2c) },
    { 0x119a0800, (const char*)(lbl_125_rodata_56C + 0x18) },
    { 0x12640800, (const char*)(lbl_125_rodata_56C + 0x0) },
};
