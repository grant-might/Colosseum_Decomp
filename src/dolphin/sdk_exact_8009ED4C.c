/**
 * @file sdk_exact_8009ED4C.c
 * @brief Dolphin SDK OSLink.c: the public OSLink entry point, 0x8009ED4C.
 *
 * BOOL OSLink(OSModuleInfo* newModule, void* bss) is a tail call into
 * Link(..., FALSE); the neighbouring unit sdk_candidate_8009ED70.c holds
 * OSLinkFixed, which forwards the same call with fixed = TRUE. That
 * pairing is the SDK's: OSLink is the general entry point, OSLinkFixed
 * the already-fixed (version 3) one.
 *
 * Retail callers: the game's REL loader fn_8017F484 at 0x8017F584,
 * 0x8017F644 and 0x8017F654, all passing (moduleInfo, bss). The
 * relocation walker it eventually reaches is 0x8009E7B0 (Relocate),
 * which has no caller outside Link.
 */
#include "dolphin/types.h"

typedef struct OSModuleInfo {
    u8 unused_00[0x1C];
    u32 version;
} OSModuleInfo;

extern BOOL Link(OSModuleInfo* module, void* bss, BOOL fixed);

BOOL OSLink(OSModuleInfo* module, void* bss)
{
    return Link(module, bss, FALSE);
}
