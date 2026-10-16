/* The waza camera source file, 0x801D2D28-0x801D5328, linked whole with its
 * .sdata2 pool 0x8047E1E0-0x8047E2E0. The 0x801D2B4C and 0x801D2C6C units
 * (wazaSequenceCameraGetPattern, fn_801D2C6C, fn_801D2C74) stay separate. */
#define WAZA_CAMERA_FILE_ONLY
#include "src/game/wazaSequenceCamera.c"

/* Trailing .sdata2 padding: the unit's retail range is 0x8047E1E0-0x8047E2E0 (256 B); the pool above ends at 0x8047E2DC,
 * so retail's section carries 4 byte(s) of padding that dtk folds into the last symbol. */
const u8 pad_8047E2DC_sdata2[4] = { 0x00, 0x00, 0x00, 0x00 };
