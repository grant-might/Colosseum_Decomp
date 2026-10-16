#include "dolphin/types.h"

/*
 * .bss 0x803FC360..0x803FC3D0 (112 B): the three statics that sit between
 * DVDLow.c's .bss (ends 0x803FC360) and DVDQueue.c's .bss (starts 0x803FC3F8).
 * DVD.c reaches them through its own extern names, `DVDStaticData
 * BB2_803FC360` and `DVDCommandBlock DummyCommandBlock_803FC3A0`, so until now
 * they existed only inside dtk's unsourced auto unit `auto_06_803FC360_bss`.
 *
 * symbols.txt records the partition as
 *
 *   BB2                0x803FC360   0x20   scope:local
 *   lbl_803FC380       0x803FC380   0x20
 *   DummyCommandBlock  0x803FC3A0   0x30   scope:local
 *
 * i.e. (0, 0x20) (0x20, 0x20) (0x40, 0x30), 0xA0 bytes.  The split therefore
 * ends at 0x803FC3D0, where the source reaches: the last 0x28 bytes up to
 * DVDQueue.c's 0x803FC3F8 are mwldeppc's alignment fill for the next input
 * section, not content.
 *
 * NOBITS recipe: declarations go in DESCENDING address order and every object
 * is pinned with aligned(8) (the largest power of two <= 8 dividing its retail
 * address) - mwldeppc otherwise both packs them at its own cursor and gives
 * undefined-size objects no space.
 */
u8 DummyCommandBlock_803FC3A0[0x30] __attribute__((aligned(8)));
u8 lbl_803FC380[0x20] __attribute__((aligned(8)));
u8 BB2_803FC360[0x20] __attribute__((aligned(8)));
