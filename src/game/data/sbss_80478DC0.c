/*
 * @file sbss_80478DC0.c
 * @brief DOL zero-fill unit .sbss 0x80478DC0-0x8047A6E0
 *        (auto unit main/auto_08_80478DC0_sbss).
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

/* 0x001918 8 B, alignment 8 */
u8 __OSStartTime[8] __attribute__((aligned(8)));

/* 0x001914 4 B (alignment padding) */
u8 gap_08_8047A6D4_sbss[4] __attribute__((aligned(1)));

/* 0x001910 4 B, alignment 8 */
u8 __OSInIPL[4] __attribute__((aligned(8)));

/* 0x00190C 4 B, alignment 4 */
u8 __OSSavedRegionStart[4] __attribute__((aligned(4)));

/* 0x001908 4 B, alignment 8 */
u8 __OSSavedRegionEnd[4] __attribute__((aligned(8)));

/* 0x001904 4 B, alignment 4 */
u8 OSExceptionTable_8047A6C4[4] __attribute__((aligned(4)));

/* 0x001900 4 B, alignment 8 */
u8 AreWeInitialized_8047A6C0[4] __attribute__((aligned(8)));

/* 0x0018F8 8 B, alignment 8 */
u8 ZeroPS_8047A6B8[8] __attribute__((aligned(8)));

/* 0x0018F0 8 B, alignment 8 */
u8 ZeroF_8047A6B0[8] __attribute__((aligned(8)));

/* 0x0018EC 4 B, alignment 4 */
u8 __OSIsGcam[4] __attribute__((aligned(4)));

/* 0x0018E8 4 B, alignment 8 */
u8 BI2DebugFlagHolder_8047A6A8[4] __attribute__((aligned(8)));

/* 0x0018E4 4 B, alignment 4 */
u8 BI2DebugFlag_8047A6A4[4] __attribute__((aligned(4)));

/* 0x0018E0 4 B, alignment 8 */
u8 BootInfo_8047A6A0[4] __attribute__((aligned(8)));

/* 0x0018D4 12 B, alignment 4 */
u8 lbl_8047A694[12] __attribute__((aligned(4)));

/* 0x0018D0 4 B, alignment 8 */
u8 lbl_8047A690[4] __attribute__((aligned(8)));

/* 0x0018C4 12 B, alignment 4 */
u8 lbl_8047A684[12] __attribute__((aligned(4)));

/* 0x0018BC 8 B, alignment 4 */
u8 lbl_8047A67C[8] __attribute__((aligned(4)));

/* 0x0018B9 3 B (alignment padding) */
u8 gap_08_8047A679_sbss[3] __attribute__((aligned(1)));

/* 0x0018B8 1 B, alignment 8 */
u8 lbl_8047A678[1] __attribute__((aligned(8)));

/* 0x0018B4 4 B, alignment 4 */
u8 lbl_8047A674[4] __attribute__((aligned(4)));

/* 0x0018B0 4 B, alignment 8 */
u8 lbl_8047A670[4] __attribute__((aligned(8)));

/* 0x0018AC 4 B, alignment 4 */
u8 lbl_8047A66C[4] __attribute__((aligned(4)));

/* 0x0018A8 4 B, alignment 8 */
u8 lbl_8047A668[4] __attribute__((aligned(8)));

/* 0x0018A4 4 B, alignment 4 */
u8 lbl_8047A664[4] __attribute__((aligned(4)));

/* 0x0018A0 4 B, alignment 8 */
u8 lbl_8047A660[4] __attribute__((aligned(8)));

/* 0x001898 8 B, alignment 8 */
u8 lbl_8047A658[8] __attribute__((aligned(8)));

/* 0x001890 8 B, alignment 8 */
u8 lbl_8047A650[8] __attribute__((aligned(8)));

/* 0x00188C 4 B, alignment 4 */
u8 lbl_8047A64C[4] __attribute__((aligned(4)));

/* 0x001888 4 B, alignment 8 */
u8 lbl_8047A648[4] __attribute__((aligned(8)));

/* 0x001880 8 B, alignment 8 */
u8 lbl_8047A640[8] __attribute__((aligned(8)));

/* 0x001878 8 B, alignment 8 */
u8 lbl_8047A638[8] __attribute__((aligned(8)));

/* 0x001876 2 B (alignment padding) */
u8 gap_08_8047A636_sbss[2] __attribute__((aligned(1)));

/* 0x001875 1 B */
u8 lbl_8047A635[1] __attribute__((aligned(1)));

/* 0x001874 1 B, alignment 4 */
u8 lbl_8047A634[1] __attribute__((aligned(4)));

/* 0x001873 1 B */
u8 lbl_8047A633[1] __attribute__((aligned(1)));

/* 0x001872 1 B, alignment 2 */
u8 lbl_8047A632[1] __attribute__((aligned(2)));

/* 0x001871 1 B */
u8 lbl_8047A631[1] __attribute__((aligned(1)));

/* 0x001870 1 B, alignment 8 */
u8 lbl_8047A630[1] __attribute__((aligned(8)));

/* 0x00186C 4 B, alignment 4 */
u8 lbl_8047A62C[4] __attribute__((aligned(4)));

/* 0x001868 4 B, alignment 8 */
u8 lbl_8047A628[4] __attribute__((aligned(8)));

/* 0x001860 8 B, alignment 8 */
u8 lbl_8047A620[8] __attribute__((aligned(8)));

/* 0x001858 8 B, alignment 8 */
u8 lbl_8047A618[8] __attribute__((aligned(8)));

/* 0x001850 8 B, alignment 8 */
u8 lbl_8047A610[8] __attribute__((aligned(8)));

/* 0x00184D 3 B (alignment padding) */
u8 gap_08_8047A60D_sbss[3] __attribute__((aligned(1)));

/* 0x00184C 1 B, alignment 4 */
u8 lbl_8047A60C[1] __attribute__((aligned(4)));

/* 0x001848 4 B, alignment 8 */
u8 lbl_8047A608[4] __attribute__((aligned(8)));

/* 0x001844 4 B, alignment 4 */
u8 lbl_8047A604[4] __attribute__((aligned(4)));

/* 0x001840 4 B, alignment 8 */
u8 lbl_8047A600[4] __attribute__((aligned(8)));

/* 0x00183C 4 B, alignment 4 */
u8 lbl_8047A5FC[4] __attribute__((aligned(4)));

/* 0x001838 4 B, alignment 8 */
u8 lbl_8047A5F8[4] __attribute__((aligned(8)));

/* 0x001834 4 B, alignment 4 */
u8 lbl_8047A5F4[4] __attribute__((aligned(4)));

/* 0x001830 4 B, alignment 8 */
u8 lbl_8047A5F0[4] __attribute__((aligned(8)));

/* 0x00182C 4 B, alignment 4 */
u8 lbl_8047A5EC[4] __attribute__((aligned(4)));

/* 0x001828 4 B, alignment 8 */
u8 lbl_8047A5E8[4] __attribute__((aligned(8)));

/* 0x001820 8 B, alignment 8 */
u8 lbl_8047A5E0[8] __attribute__((aligned(8)));

/* 0x001818 8 B, alignment 8 */
u8 lbl_8047A5D8[8] __attribute__((aligned(8)));

/* 0x001810 8 B, alignment 8 */
u8 lbl_8047A5D0[8] __attribute__((aligned(8)));

/* 0x001808 8 B, alignment 8 */
u8 lbl_8047A5C8[8] __attribute__((aligned(8)));

/* 0x001804 4 B, alignment 4 */
u8 lbl_8047A5C4[4] __attribute__((aligned(4)));

/* 0x001800 4 B, alignment 8 */
u8 lbl_8047A5C0[4] __attribute__((aligned(8)));

/* 0x0017FD 3 B (alignment padding) */
u8 gap_08_8047A5BD_sbss[3] __attribute__((aligned(1)));

/* 0x0017FC 1 B, alignment 4 */
u8 lbl_8047A5BC[1] __attribute__((aligned(4)));

/* 0x0017F8 4 B, alignment 8 */
u8 lbl_8047A5B8[4] __attribute__((aligned(8)));

/* 0x0017F4 4 B, alignment 4 */
u8 lbl_8047A5B4[4] __attribute__((aligned(4)));

/* 0x0017F0 4 B, alignment 8 */
u8 lbl_8047A5B0[4] __attribute__((aligned(8)));

/* 0x0017E8 8 B, alignment 8 */
u8 lbl_8047A5A8[8] __attribute__((aligned(8)));

/* 0x0017E4 4 B, alignment 4 */
u8 lbl_8047A5A4[4] __attribute__((aligned(4)));

/* 0x0017E0 4 B, alignment 8 */
u8 lbl_8047A5A0[4] __attribute__((aligned(8)));

/* 0x0017DC 4 B, alignment 4 */
u8 lbl_8047A59C[4] __attribute__((aligned(4)));

/* 0x0017D8 4 B, alignment 8 */
u8 lbl_8047A598[4] __attribute__((aligned(8)));

/* 0x0017D0 8 B, alignment 8 */
u8 lbl_8047A590[8] __attribute__((aligned(8)));

/* 0x0017CC 4 B, alignment 4 */
u8 lbl_8047A58C[4] __attribute__((aligned(4)));

/* 0x0017C8 4 B, alignment 8 */
u8 lbl_8047A588[4] __attribute__((aligned(8)));

/* 0x0017C4 4 B, alignment 4 */
u8 lbl_8047A584[4] __attribute__((aligned(4)));

/* 0x0017C0 4 B, alignment 8 */
u8 lbl_8047A580[4] __attribute__((aligned(8)));

/* 0x0017BC 4 B, alignment 4 */
u8 lbl_8047A57C[4] __attribute__((aligned(4)));

/* 0x0017B8 4 B, alignment 8 */
u8 lbl_8047A578[4] __attribute__((aligned(8)));

/* 0x0017B4 4 B, alignment 4 */
u8 lbl_8047A574[4] __attribute__((aligned(4)));

/* 0x0017B0 4 B, alignment 8 */
u8 lbl_8047A570[4] __attribute__((aligned(8)));

/* 0x0017AC 4 B, alignment 4 */
u8 lbl_8047A56C[4] __attribute__((aligned(4)));

/* 0x0017A8 4 B, alignment 8 */
u8 lbl_8047A568[4] __attribute__((aligned(8)));

/* 0x0017A0 8 B, alignment 8 */
u8 lbl_8047A560[8] __attribute__((aligned(8)));

/* 0x001798 8 B, alignment 8 */
u8 lbl_8047A558[8] __attribute__((aligned(8)));

/* 0x001794 4 B, alignment 4 */
u8 lbl_8047A554[4] __attribute__((aligned(4)));

/* 0x001790 4 B, alignment 8 */
u8 lbl_8047A550[4] __attribute__((aligned(8)));

/* 0x00178C 4 B, alignment 4 */
u8 lbl_8047A54C[4] __attribute__((aligned(4)));

/* 0x001788 4 B, alignment 8 */
u8 lbl_8047A548[4] __attribute__((aligned(8)));

/* 0x001784 4 B, alignment 4 */
u8 lbl_8047A544[4] __attribute__((aligned(4)));

/* 0x001780 4 B, alignment 8 */
u8 lbl_8047A540[4] __attribute__((aligned(8)));

/* 0x00177C 4 B, alignment 4 */
u8 lbl_8047A53C[4] __attribute__((aligned(4)));

/* 0x001778 4 B, alignment 8 */
u8 lbl_8047A538[4] __attribute__((aligned(8)));

/* 0x001774 4 B, alignment 4 */
u8 lbl_8047A534[4] __attribute__((aligned(4)));

/* 0x001770 4 B, alignment 8 */
u8 lbl_8047A530[4] __attribute__((aligned(8)));

/* 0x00176C 4 B, alignment 4 */
u8 lbl_8047A52C[4] __attribute__((aligned(4)));

/* 0x001768 4 B, alignment 8 */
u8 lbl_8047A528[4] __attribute__((aligned(8)));

/* 0x001765 3 B (alignment padding) */
u8 gap_08_8047A525_sbss[3] __attribute__((aligned(1)));

/* 0x001764 1 B, alignment 4 */
u8 lbl_8047A524[1] __attribute__((aligned(4)));

/* 0x001760 4 B, alignment 8 */
u8 lbl_8047A520[4] __attribute__((aligned(8)));

/* 0x001758 8 B, alignment 8 */
u8 lbl_8047A518[8] __attribute__((aligned(8)));

/* 0x001750 8 B, alignment 8 */
u8 lbl_8047A510[8] __attribute__((aligned(8)));

/* 0x00174C 4 B, alignment 4 */
u8 lbl_8047A50C[4] __attribute__((aligned(4)));

/* 0x001748 4 B, alignment 8 */
u8 lbl_8047A508[4] __attribute__((aligned(8)));

/* 0x001740 8 B, alignment 8 */
u8 lbl_8047A500[8] __attribute__((aligned(8)));

/* 0x00173C 4 B, alignment 4 */
u8 lbl_8047A4FC[4] __attribute__((aligned(4)));

/* 0x001738 4 B, alignment 8 */
u8 lbl_8047A4F8[4] __attribute__((aligned(8)));

/* 0x001730 8 B, alignment 8 */
u8 lbl_8047A4F0[8] __attribute__((aligned(8)));

/* 0x00172C 4 B, alignment 4 */
u8 lbl_8047A4EC[4] __attribute__((aligned(4)));

/* 0x00172A 2 B (alignment padding) */
u8 gap_08_8047A4EA_sbss[2] __attribute__((aligned(1)));

/* 0x001728 2 B, alignment 8 */
u8 lbl_8047A4E8[2] __attribute__((aligned(8)));

/* 0x001724 4 B, alignment 4 */
u8 lbl_8047A4E4[4] __attribute__((aligned(4)));

/* 0x001720 4 B, alignment 8 */
u8 lbl_8047A4E0[4] __attribute__((aligned(8)));

/* 0x00171C 4 B, alignment 4 */
u8 lbl_8047A4DC[4] __attribute__((aligned(4)));

/* 0x001718 4 B, alignment 8 */
u8 lbl_8047A4D8[4] __attribute__((aligned(8)));

/* 0x001714 4 B, alignment 4 */
u8 lbl_8047A4D4[4] __attribute__((aligned(4)));

/* 0x001710 4 B, alignment 8 */
u8 lbl_8047A4D0[4] __attribute__((aligned(8)));

/* 0x001708 8 B, alignment 8 */
u8 lbl_8047A4C8[8] __attribute__((aligned(8)));

/* 0x001700 8 B, alignment 8 */
u8 lbl_8047A4C0[8] __attribute__((aligned(8)));

/* 0x0016FC 4 B, alignment 4 */
u8 lbl_8047A4BC[4] __attribute__((aligned(4)));

/* 0x0016F8 4 B, alignment 8 */
u8 lbl_8047A4B8[4] __attribute__((aligned(8)));

/* 0x0016F4 4 B, alignment 4 */
u8 lbl_8047A4B4[4] __attribute__((aligned(4)));

/* 0x0016F0 4 B, alignment 8 */
u8 lbl_8047A4B0[4] __attribute__((aligned(8)));

/* 0x0016EC 4 B, alignment 4 */
u8 lbl_8047A4AC[4] __attribute__((aligned(4)));

/* 0x0016E8 4 B, alignment 8 */
u8 lbl_8047A4A8[4] __attribute__((aligned(8)));

/* 0x0016E0 8 B, alignment 8 */
u8 lbl_8047A4A0[8] __attribute__((aligned(8)));

/* 0x0016DC 4 B, alignment 4 */
u8 lbl_8047A49C[4] __attribute__((aligned(4)));

/* 0x0016D8 4 B, alignment 8 */
u8 lbl_8047A498[4] __attribute__((aligned(8)));

/* 0x0016D4 4 B, alignment 4 */
u8 lbl_8047A494[4] __attribute__((aligned(4)));

/* 0x0016D1 3 B (alignment padding) */
u8 pad_08_000016D1[3] __attribute__((aligned(1)));

/* 0x0016D0 1 B, alignment 8 */
u8 lbl_8047A490[1] __attribute__((aligned(8)));

/* 0x0016CC 4 B, alignment 4 */
u8 lbl_8047A48C[4] __attribute__((aligned(4)));

/* 0x0016C8 4 B, alignment 8 */
u8 lbl_8047A488[4] __attribute__((aligned(8)));

/* 0x0016C4 4 B, alignment 4 */
u8 lbl_8047A484[4] __attribute__((aligned(4)));

/* 0x0016C0 4 B, alignment 8 */
u8 lbl_8047A480[4] __attribute__((aligned(8)));

/* 0x0016BE 2 B (alignment padding) */
u8 gap_08_8047A47E_sbss[2] __attribute__((aligned(1)));

/* 0x0016BD 1 B */
u8 lbl_8047A47D[1] __attribute__((aligned(1)));

/* 0x0016BC 1 B, alignment 4 */
u8 lbl_8047A47C[1] __attribute__((aligned(4)));

/* 0x0016B8 4 B, alignment 8 */
u8 lbl_8047A478[4] __attribute__((aligned(8)));

/* 0x0016B0 8 B, alignment 8 */
u8 lbl_8047A470[8] __attribute__((aligned(8)));

/* 0x0016A8 8 B, alignment 8 */
u8 lbl_8047A468[8] __attribute__((aligned(8)));

/* 0x0016A4 4 B, alignment 4 */
u8 lbl_8047A464[4] __attribute__((aligned(4)));

/* 0x0016A0 4 B, alignment 8 */
u8 lbl_8047A460[4] __attribute__((aligned(8)));

/* 0x001698 8 B, alignment 8 */
u8 lbl_8047A458[8] __attribute__((aligned(8)));

/* 0x001695 3 B (alignment padding) */
u8 gap_08_8047A455_sbss[3] __attribute__((aligned(1)));

/* 0x001694 1 B, alignment 4 */
u8 lbl_8047A454[1] __attribute__((aligned(4)));

/* 0x001690 4 B, alignment 8 */
u8 lbl_8047A450[4] __attribute__((aligned(8)));

/* 0x00168C 4 B, alignment 4 */
u8 lbl_8047A44C[4] __attribute__((aligned(4)));

/* 0x00168B 1 B (alignment padding) */
u8 gap_08_8047A44B_sbss[1] __attribute__((aligned(1)));

/* 0x00168A 1 B, alignment 2 */
u8 lbl_8047A44A[1] __attribute__((aligned(2)));

/* 0x001689 1 B */
u8 lbl_8047A449[1] __attribute__((aligned(1)));

/* 0x001688 1 B, alignment 8 */
u8 lbl_8047A448[1] __attribute__((aligned(8)));

/* 0x001684 4 B, alignment 4 */
u8 lbl_8047A444[4] __attribute__((aligned(4)));

/* 0x001681 3 B (alignment padding) */
u8 gap_08_8047A441_sbss[3] __attribute__((aligned(1)));

/* 0x001680 1 B, alignment 8 */
u8 lbl_8047A440[1] __attribute__((aligned(8)));

/* 0x00167C 4 B, alignment 4 */
u8 lbl_8047A43C[4] __attribute__((aligned(4)));

/* 0x00167A 2 B (alignment padding) */
u8 gap_08_8047A43A_sbss[2] __attribute__((aligned(1)));

/* 0x001679 1 B */
u8 lbl_8047A439[1] __attribute__((aligned(1)));

/* 0x001678 1 B, alignment 8 */
u8 lbl_8047A438[1] __attribute__((aligned(8)));

/* 0x001674 4 B, alignment 4 */
u8 lbl_8047A434[4] __attribute__((aligned(4)));

/* 0x001670 4 B, alignment 8 */
u8 lbl_8047A430[4] __attribute__((aligned(8)));

/* 0x00166C 4 B, alignment 4 */
u8 lbl_8047A42C[4] __attribute__((aligned(4)));

/* 0x001668 4 B, alignment 8 */
u8 lbl_8047A428[4] __attribute__((aligned(8)));

/* 0x001664 4 B, alignment 4 */
u8 lbl_8047A424[4] __attribute__((aligned(4)));

/* 0x001660 4 B, alignment 8 */
u8 lbl_8047A420[4] __attribute__((aligned(8)));

/* 0x00165D 3 B (alignment padding) */
u8 gap_08_8047A41D_sbss[3] __attribute__((aligned(1)));

/* 0x00165C 1 B, alignment 4 */
u8 lbl_8047A41C[1] __attribute__((aligned(4)));

/* 0x001658 4 B, alignment 8 */
u8 lbl_8047A418[4] __attribute__((aligned(8)));

/* 0x001654 4 B, alignment 4 */
u8 lbl_8047A414[4] __attribute__((aligned(4)));

/* 0x001651 3 B (alignment padding) */
u8 gap_08_8047A411_sbss[3] __attribute__((aligned(1)));

/* 0x001650 1 B, alignment 8 */
u8 lbl_8047A410[1] __attribute__((aligned(8)));

/* 0x00164C 4 B, alignment 4 */
u8 lbl_8047A40C[4] __attribute__((aligned(4)));

/* 0x00164B 1 B (alignment padding) */
u8 gap_08_8047A40B_sbss[1] __attribute__((aligned(1)));

/* 0x00164A 1 B, alignment 2 */
u8 lbl_8047A40A[1] __attribute__((aligned(2)));

/* 0x001649 1 B */
u8 lbl_8047A409[1] __attribute__((aligned(1)));

/* 0x001648 1 B, alignment 8 */
u8 lbl_8047A408[1] __attribute__((aligned(8)));

/* 0x00163C 12 B, alignment 4 */
u8 lbl_8047A3FC[12] __attribute__((aligned(4)));

/* 0x00163A 2 B (alignment padding) */
u8 gap_08_8047A3FA_sbss[2] __attribute__((aligned(1)));

/* 0x001638 2 B, alignment 8 */
u8 lbl_8047A3F8[2] __attribute__((aligned(8)));

/* 0x001634 4 B, alignment 4 */
u8 lbl_8047A3F4[4] __attribute__((aligned(4)));

/* 0x001630 4 B, alignment 8 */
u8 lbl_8047A3F0[4] __attribute__((aligned(8)));

/* 0x00162C 4 B, alignment 4 */
u8 lbl_8047A3EC[4] __attribute__((aligned(4)));

/* 0x001628 4 B, alignment 8 */
u8 lbl_8047A3E8[4] __attribute__((aligned(8)));

/* 0x001624 4 B, alignment 4 */
u8 lbl_8047A3E4[4] __attribute__((aligned(4)));

/* 0x001620 4 B, alignment 8 */
u8 lbl_8047A3E0[4] __attribute__((aligned(8)));

/* 0x00161C 4 B, alignment 4 */
u8 lbl_8047A3DC[4] __attribute__((aligned(4)));

/* 0x001618 4 B, alignment 8 */
u8 lbl_8047A3D8[4] __attribute__((aligned(8)));

/* 0x001614 4 B, alignment 4 */
u8 lbl_8047A3D4[4] __attribute__((aligned(4)));

/* 0x001610 4 B, alignment 8 */
u8 lbl_8047A3D0[4] __attribute__((aligned(8)));

/* 0x00160C 4 B, alignment 4 */
u8 lbl_8047A3CC[4] __attribute__((aligned(4)));

/* 0x001608 4 B, alignment 8 */
u8 lbl_8047A3C8[4] __attribute__((aligned(8)));

/* 0x001604 4 B, alignment 4 */
u8 lbl_8047A3C4[4] __attribute__((aligned(4)));

/* 0x001600 4 B, alignment 8 */
u8 lbl_8047A3C0[4] __attribute__((aligned(8)));

/* 0x0015FC 4 B, alignment 4 */
u8 lbl_8047A3BC[4] __attribute__((aligned(4)));

/* 0x0015F8 4 B, alignment 8 */
u8 lbl_8047A3B8[4] __attribute__((aligned(8)));

/* 0x0015F4 4 B, alignment 4 */
u8 lbl_8047A3B4[4] __attribute__((aligned(4)));

/* 0x0015F0 4 B, alignment 8 */
u8 lbl_8047A3B0[4] __attribute__((aligned(8)));

/* 0x0015EC 4 B, alignment 4 */
u8 lbl_8047A3AC[4] __attribute__((aligned(4)));

/* 0x0015E9 3 B (alignment padding) */
u8 gap_08_8047A3A9_sbss[3] __attribute__((aligned(1)));

/* 0x0015E8 1 B, alignment 8 */
u8 lbl_8047A3A8[1] __attribute__((aligned(8)));

/* 0x0015E4 4 B, alignment 4 */
u8 lbl_8047A3A4[4] __attribute__((aligned(4)));

/* 0x0015E0 4 B, alignment 8 */
u8 lbl_8047A3A0[4] __attribute__((aligned(8)));

/* 0x0015DC 4 B, alignment 4 */
u8 lbl_8047A39C[4] __attribute__((aligned(4)));

/* 0x0015D8 4 B, alignment 8 */
u8 lbl_8047A398[4] __attribute__((aligned(8)));

/* 0x0015D4 4 B, alignment 4 */
u8 lbl_8047A394[4] __attribute__((aligned(4)));

/* 0x0015D0 4 B, alignment 8 */
u8 lbl_8047A390[4] __attribute__((aligned(8)));

/* 0x0015CC 4 B, alignment 4 */
u8 lbl_8047A38C[4] __attribute__((aligned(4)));

/* 0x0015C8 4 B, alignment 8 */
u8 lbl_8047A388[4] __attribute__((aligned(8)));

/* 0x0015C4 4 B, alignment 4 */
u8 lbl_8047A384[4] __attribute__((aligned(4)));

/* 0x0015C1 3 B (alignment padding) */
u8 gap_08_8047A381_sbss[3] __attribute__((aligned(1)));

/* 0x0015C0 1 B, alignment 8 */
u8 lbl_8047A380[1] __attribute__((aligned(8)));

/* 0x0015BC 4 B, alignment 4 */
u8 lbl_8047A37C[4] __attribute__((aligned(4)));

/* 0x0015B8 4 B, alignment 8 */
u8 lbl_8047A378[4] __attribute__((aligned(8)));

/* 0x0015B4 4 B, alignment 4 */
u8 lbl_8047A374[4] __attribute__((aligned(4)));

/* 0x0015B0 4 B, alignment 8 */
u8 lbl_8047A370[4] __attribute__((aligned(8)));

/* 0x0015AC 4 B, alignment 4 */
u8 lbl_8047A36C[4] __attribute__((aligned(4)));

/* 0x0015A8 4 B, alignment 8 */
u8 lbl_8047A368[4] __attribute__((aligned(8)));

/* 0x0015A0 8 B, alignment 8 */
u8 lbl_8047A360[8] __attribute__((aligned(8)));

/* 0x00159C 4 B, alignment 4 */
u8 lbl_8047A35C[4] __attribute__((aligned(4)));

/* 0x001598 4 B, alignment 8 */
u8 lbl_8047A358[4] __attribute__((aligned(8)));

/* 0x001590 8 B, alignment 8 */
u8 lbl_8047A350[8] __attribute__((aligned(8)));

/* 0x00158D 3 B (alignment padding) */
u8 gap_08_8047A34D_sbss[3] __attribute__((aligned(1)));

/* 0x00158C 1 B, alignment 4 */
u8 lbl_8047A34C[1] __attribute__((aligned(4)));

/* 0x001588 4 B, alignment 8 */
u8 lbl_8047A348[4] __attribute__((aligned(8)));

/* 0x001584 4 B, alignment 4 */
u8 lbl_8047A344[4] __attribute__((aligned(4)));

/* 0x001580 4 B, alignment 8 */
u8 lbl_8047A340[4] __attribute__((aligned(8)));

/* 0x00157C 4 B, alignment 4 */
u8 lbl_8047A33C[4] __attribute__((aligned(4)));

/* 0x001578 4 B, alignment 8 */
u8 lbl_8047A338[4] __attribute__((aligned(8)));

/* 0x001574 4 B, alignment 4 */
u8 lbl_8047A334[4] __attribute__((aligned(4)));

/* 0x001570 4 B, alignment 8 */
u8 lbl_8047A330[4] __attribute__((aligned(8)));

/* 0x00156D 3 B (alignment padding) */
u8 gap_08_8047A32D_sbss[3] __attribute__((aligned(1)));

/* 0x00156C 1 B, alignment 4 */
u8 lbl_8047A32C[1] __attribute__((aligned(4)));

/* 0x001568 4 B, alignment 8 */
u8 lbl_8047A328[4] __attribute__((aligned(8)));

/* 0x001564 4 B, alignment 4 */
u8 lbl_8047A324[4] __attribute__((aligned(4)));

/* 0x001560 4 B, alignment 8 */
u8 lbl_8047A320[4] __attribute__((aligned(8)));

/* 0x00155C 4 B, alignment 4 */
u8 lbl_8047A31C[4] __attribute__((aligned(4)));

/* 0x001558 4 B, alignment 8 */
u8 lbl_8047A318[4] __attribute__((aligned(8)));

/* 0x001554 4 B, alignment 4 */
u8 lbl_8047A314[4] __attribute__((aligned(4)));

/* 0x001550 4 B, alignment 8 */
u8 lbl_8047A310[4] __attribute__((aligned(8)));

/* 0x00154A 6 B, alignment 2 */
u8 lbl_8047A30A[6] __attribute__((aligned(2)));

/* 0x001548 2 B, alignment 8 */
u8 lbl_8047A308[2] __attribute__((aligned(8)));

/* 0x001540 8 B, alignment 8 */
u8 lbl_8047A300[8] __attribute__((aligned(8)));

/* 0x00153C 4 B, alignment 4 */
u8 lbl_8047A2FC[4] __attribute__((aligned(4)));

/* 0x001538 4 B, alignment 8 */
u8 lbl_8047A2F8[4] __attribute__((aligned(8)));

/* 0x001534 4 B, alignment 4 */
u8 lbl_8047A2F4[4] __attribute__((aligned(4)));

/* 0x001532 2 B (alignment padding) */
u8 gap_08_8047A2F2_sbss[2] __attribute__((aligned(1)));

/* 0x001530 2 B, alignment 8 */
u8 lbl_8047A2F0[2] __attribute__((aligned(8)));

/* 0x00152C 4 B, alignment 4 */
u8 lbl_8047A2EC[4] __attribute__((aligned(4)));

/* 0x001528 4 B, alignment 8 */
u8 lbl_8047A2E8[4] __attribute__((aligned(8)));

/* 0x001524 4 B, alignment 4 */
u8 lbl_8047A2E4[4] __attribute__((aligned(4)));

/* 0x001520 4 B, alignment 8 */
u8 lbl_8047A2E0[4] __attribute__((aligned(8)));

/* 0x00151C 4 B, alignment 4 */
u8 lbl_8047A2DC[4] __attribute__((aligned(4)));

/* 0x001518 4 B, alignment 8 */
u8 lbl_8047A2D8[4] __attribute__((aligned(8)));

/* 0x001514 4 B, alignment 4 */
u8 lbl_8047A2D4[4] __attribute__((aligned(4)));

/* 0x001510 4 B, alignment 8 */
u8 lbl_8047A2D0[4] __attribute__((aligned(8)));

/* 0x00150C 4 B, alignment 4 */
u8 lbl_8047A2CC[4] __attribute__((aligned(4)));

/* 0x001508 4 B, alignment 8 */
u8 lbl_8047A2C8[4] __attribute__((aligned(8)));

/* 0x001504 4 B, alignment 4 */
u8 lbl_8047A2C4[4] __attribute__((aligned(4)));

/* 0x001500 4 B, alignment 8 */
u8 lbl_8047A2C0[4] __attribute__((aligned(8)));

/* 0x0014FC 4 B, alignment 4 */
u8 lbl_8047A2BC[4] __attribute__((aligned(4)));

/* 0x0014F8 4 B, alignment 8 */
u8 lbl_8047A2B8[4] __attribute__((aligned(8)));

/* 0x0014F0 8 B, alignment 8 */
u8 lbl_8047A2B0[8] __attribute__((aligned(8)));

/* 0x0014EC 4 B, alignment 4 */
u8 lbl_8047A2AC[4] __attribute__((aligned(4)));

/* 0x0014E8 4 B, alignment 8 */
u8 lbl_8047A2A8[4] __attribute__((aligned(8)));

/* 0x0014E4 4 B, alignment 4 */
u8 lbl_8047A2A4[4] __attribute__((aligned(4)));

/* 0x0014E1 3 B (alignment padding) */
u8 gap_08_8047A2A1_sbss[3] __attribute__((aligned(1)));

/* 0x0014E0 1 B, alignment 8 */
u8 lbl_8047A2A0[1] __attribute__((aligned(8)));

/* 0x0014D9 7 B */
u8 lbl_8047A299[7] __attribute__((aligned(1)));

/* 0x0014D8 1 B, alignment 8 */
u8 lbl_8047A298[1] __attribute__((aligned(8)));

/* 0x0014D0 8 B, alignment 8 */
u8 lbl_8047A290[8] __attribute__((aligned(8)));

/* 0x0014CA 6 B, alignment 2 */
u8 lbl_8047A28A[6] __attribute__((aligned(2)));

/* 0x0014C8 2 B, alignment 8 */
u8 lbl_8047A288[2] __attribute__((aligned(8)));

/* 0x0014C7 1 B (alignment padding) */
u8 gap_08_8047A287_sbss[1] __attribute__((aligned(1)));

/* 0x0014C6 1 B, alignment 2 */
u8 lbl_8047A286[1] __attribute__((aligned(2)));

/* 0x0014C5 1 B */
u8 lbl_8047A285[1] __attribute__((aligned(1)));

/* 0x0014C4 1 B, alignment 4 */
u8 lbl_8047A284[1] __attribute__((aligned(4)));

/* 0x0014C2 2 B, alignment 2 */
u8 lbl_8047A282[2] __attribute__((aligned(2)));

/* 0x0014C1 1 B (alignment padding) */
u8 gap_08_8047A281_sbss[1] __attribute__((aligned(1)));

/* 0x0014C0 1 B, alignment 8 */
u8 lbl_8047A280[1] __attribute__((aligned(8)));

/* 0x0014BC 4 B, alignment 4 */
u8 lbl_8047A27C[4] __attribute__((aligned(4)));

/* 0x0014B8 4 B, alignment 8 */
u8 lbl_8047A278[4] __attribute__((aligned(8)));

/* 0x0014B4 4 B, alignment 4 */
u8 lbl_8047A274[4] __attribute__((aligned(4)));

/* 0x0014B2 2 B (alignment padding) */
u8 gap_08_8047A272_sbss[2] __attribute__((aligned(1)));

/* 0x0014B1 1 B */
u8 lbl_8047A271[1] __attribute__((aligned(1)));

/* 0x0014B0 1 B, alignment 8 */
u8 lbl_8047A270[1] __attribute__((aligned(8)));

/* 0x0014A8 8 B, alignment 8 */
u8 lbl_8047A268[8] __attribute__((aligned(8)));

/* 0x0014A4 4 B, alignment 4 */
u8 lbl_8047A264[4] __attribute__((aligned(4)));

/* 0x0014A0 4 B, alignment 8 */
u8 lbl_8047A260[4] __attribute__((aligned(8)));

/* 0x00149C 4 B, alignment 4 */
u8 lbl_8047A25C[4] __attribute__((aligned(4)));

/* 0x001498 4 B, alignment 8 */
u8 lbl_8047A258[4] __attribute__((aligned(8)));

/* 0x001494 4 B, alignment 4 */
u8 lbl_8047A254[4] __attribute__((aligned(4)));

/* 0x001490 4 B, alignment 8 */
u8 lbl_8047A250[4] __attribute__((aligned(8)));

/* 0x00148C 4 B, alignment 4 */
u8 lbl_8047A24C[4] __attribute__((aligned(4)));

/* 0x001444 72 B, alignment 4 */
u8 lbl_8047A204[72] __attribute__((aligned(4)));

/* 0x001440 4 B, alignment 8 */
u8 lbl_8047A200[4] __attribute__((aligned(8)));

/* 0x00143C 4 B, alignment 4 */
u8 lbl_8047A1FC[4] __attribute__((aligned(4)));

/* 0x001438 4 B, alignment 8 */
u8 lbl_8047A1F8[4] __attribute__((aligned(8)));

/* 0x001434 4 B, alignment 4 */
u8 lbl_8047A1F4[4] __attribute__((aligned(4)));

/* 0x001430 4 B, alignment 8 */
u8 lbl_8047A1F0[4] __attribute__((aligned(8)));

/* 0x00142C 4 B, alignment 4 */
u8 lbl_8047A1EC[4] __attribute__((aligned(4)));

/* 0x001428 4 B, alignment 8 */
u8 lbl_8047A1E8[4] __attribute__((aligned(8)));

/* 0x001424 4 B, alignment 4 */
u8 lbl_8047A1E4[4] __attribute__((aligned(4)));

/* 0x001420 4 B, alignment 8 */
u8 lbl_8047A1E0[4] __attribute__((aligned(8)));

/* 0x00141C 4 B, alignment 4 */
u8 lbl_8047A1DC[4] __attribute__((aligned(4)));

/* 0x001418 4 B, alignment 8 */
u8 lbl_8047A1D8[4] __attribute__((aligned(8)));

/* 0x001414 4 B, alignment 4 */
u8 lbl_8047A1D4[4] __attribute__((aligned(4)));

/* 0x001410 4 B, alignment 8 */
u8 lbl_8047A1D0[4] __attribute__((aligned(8)));

/* 0x00140C 4 B, alignment 4 */
u8 lbl_8047A1CC[4] __attribute__((aligned(4)));

/* 0x001408 4 B, alignment 8 */
u8 lbl_8047A1C8[4] __attribute__((aligned(8)));

/* 0x001404 4 B, alignment 4 */
u8 lbl_8047A1C4[4] __attribute__((aligned(4)));

/* 0x001400 4 B, alignment 8 */
u8 lbl_8047A1C0[4] __attribute__((aligned(8)));

/* 0x0013FC 4 B, alignment 4 */
u8 lbl_8047A1BC[4] __attribute__((aligned(4)));

/* 0x0013F8 4 B, alignment 8 */
u8 lbl_8047A1B8[4] __attribute__((aligned(8)));

/* 0x0013F4 4 B, alignment 4 */
u8 lbl_8047A1B4[4] __attribute__((aligned(4)));

/* 0x0013F0 4 B, alignment 8 */
u8 lbl_8047A1B0[4] __attribute__((aligned(8)));

/* 0x0013EC 4 B, alignment 4 */
u8 lbl_8047A1AC[4] __attribute__((aligned(4)));

/* 0x0013E8 4 B, alignment 8 */
u8 lbl_8047A1A8[4] __attribute__((aligned(8)));

/* 0x0013E4 4 B, alignment 4 */
u8 lbl_8047A1A4[4] __attribute__((aligned(4)));

/* 0x0013E0 4 B, alignment 8 */
u8 lbl_8047A1A0[4] __attribute__((aligned(8)));

/* 0x0013DC 4 B, alignment 4 */
u8 lbl_8047A19C[4] __attribute__((aligned(4)));

/* 0x0010A4 824 B, alignment 4 */
u8 lbl_80479E64[824] __attribute__((aligned(4)));

/* 0x0010A0 4 B, alignment 8 */
u8 lbl_80479E60[4] __attribute__((aligned(8)));

/* 0x00109C 4 B, alignment 4 */
u8 lbl_80479E5C[4] __attribute__((aligned(4)));

/* 0x001094 8 B, alignment 4 */
u8 lbl_80479E54[8] __attribute__((aligned(4)));

/* 0x001090 4 B, alignment 8 */
u8 lbl_80479E50[4] __attribute__((aligned(8)));

/* 0x00108C 4 B, alignment 4 */
u8 lbl_80479E4C[4] __attribute__((aligned(4)));

/* 0x001088 4 B, alignment 8 */
u8 lbl_80479E48[4] __attribute__((aligned(8)));

/* 0x001084 4 B, alignment 4 */
u8 lbl_80479E44[4] __attribute__((aligned(4)));

/* 0x001080 4 B, alignment 8 */
u8 lbl_80479E40[4] __attribute__((aligned(8)));

/* 0x00107C 4 B, alignment 4 */
u8 lbl_80479E3C[4] __attribute__((aligned(4)));

/* 0x000FCC 176 B, alignment 4 */
u8 lbl_80479D8C[176] __attribute__((aligned(4)));

/* 0x000FC8 4 B, alignment 8 */
u8 lbl_80479D88[4] __attribute__((aligned(8)));

/* 0x000FC4 4 B, alignment 4 */
u8 lbl_80479D84[4] __attribute__((aligned(4)));

/* 0x000F8C 56 B, alignment 4 */
u8 lbl_80479D4C[56] __attribute__((aligned(4)));

/* 0x000F88 4 B, alignment 8 */
u8 lbl_80479D48[4] __attribute__((aligned(8)));

/* 0x000F84 4 B, alignment 4 */
u8 lbl_80479D44[4] __attribute__((aligned(4)));

/* 0x000F80 4 B, alignment 8 */
u8 lbl_80479D40[4] __attribute__((aligned(8)));

/* 0x000F7C 4 B, alignment 4 */
u8 lbl_80479D3C[4] __attribute__((aligned(4)));

/* 0x000F78 4 B, alignment 8 */
u8 lbl_80479D38[4] __attribute__((aligned(8)));

/* 0x000F74 4 B, alignment 4 */
u8 lbl_80479D34[4] __attribute__((aligned(4)));

/* 0x000F70 4 B, alignment 8 */
u8 lbl_80479D30[4] __attribute__((aligned(8)));

/* 0x000F6C 4 B, alignment 4 */
u8 lbl_80479D2C[4] __attribute__((aligned(4)));

/* 0x000F68 4 B, alignment 8 */
u8 lbl_80479D28[4] __attribute__((aligned(8)));

/* 0x000F64 4 B, alignment 4 */
u8 lbl_80479D24[4] __attribute__((aligned(4)));

/* 0x000F60 4 B, alignment 8 */
u8 lbl_80479D20[4] __attribute__((aligned(8)));

/* 0x000F5C 4 B, alignment 4 */
u8 lbl_80479D1C[4] __attribute__((aligned(4)));

/* 0x000F58 4 B, alignment 8 */
u8 lbl_80479D18[4] __attribute__((aligned(8)));

/* 0x000F54 4 B, alignment 4 */
u8 lbl_80479D14[4] __attribute__((aligned(4)));

/* 0x000F50 4 B, alignment 8 */
u8 lbl_80479D10[4] __attribute__((aligned(8)));

/* 0x000F4C 4 B, alignment 4 */
u8 lbl_80479D0C[4] __attribute__((aligned(4)));

/* 0x000F48 4 B, alignment 8 */
u8 lbl_80479D08[4] __attribute__((aligned(8)));

/* 0x000F44 4 B, alignment 4 */
u8 lbl_80479D04[4] __attribute__((aligned(4)));

/* 0x000F40 4 B, alignment 8 */
u8 lbl_80479D00[4] __attribute__((aligned(8)));

/* 0x000F3C 4 B, alignment 4 */
u8 lbl_80479CFC[4] __attribute__((aligned(4)));

/* 0x000F38 4 B, alignment 8 */
u8 lbl_80479CF8[4] __attribute__((aligned(8)));

/* 0x000F34 4 B, alignment 4 */
u8 lbl_80479CF4[4] __attribute__((aligned(4)));

/* 0x000F30 4 B, alignment 8 */
u8 lbl_80479CF0[4] __attribute__((aligned(8)));

/* 0x000F2C 4 B, alignment 4 */
u8 lbl_80479CEC[4] __attribute__((aligned(4)));

/* 0x000F28 4 B, alignment 8 */
u8 lbl_80479CE8[4] __attribute__((aligned(8)));

/* 0x000F24 4 B, alignment 4 */
u8 lbl_80479CE4[4] __attribute__((aligned(4)));

/* 0x000F20 4 B, alignment 8 */
u8 lbl_80479CE0[4] __attribute__((aligned(8)));

/* 0x000F1C 4 B, alignment 4 */
u8 lbl_80479CDC[4] __attribute__((aligned(4)));

/* 0x000F18 4 B, alignment 8 */
u8 lbl_80479CD8[4] __attribute__((aligned(8)));

/* 0x000F14 4 B, alignment 4 */
u8 lbl_80479CD4[4] __attribute__((aligned(4)));

/* 0x000F10 4 B, alignment 8 */
u8 lbl_80479CD0[4] __attribute__((aligned(8)));

/* 0x000F0C 4 B, alignment 4 */
u8 lbl_80479CCC[4] __attribute__((aligned(4)));

/* 0x000F08 4 B, alignment 8 */
u8 lbl_80479CC8[4] __attribute__((aligned(8)));

/* 0x000F04 4 B, alignment 4 */
u8 lbl_80479CC4[4] __attribute__((aligned(4)));

/* 0x000F00 4 B, alignment 8 */
u8 lbl_80479CC0[4] __attribute__((aligned(8)));

/* 0x000EFC 4 B, alignment 4 */
u8 lbl_80479CBC[4] __attribute__((aligned(4)));

/* 0x000EF8 4 B, alignment 8 */
u8 lbl_80479CB8[4] __attribute__((aligned(8)));

/* 0x000EF4 4 B, alignment 4 */
u8 lbl_80479CB4[4] __attribute__((aligned(4)));

/* 0x000EF0 4 B, alignment 8 */
u8 lbl_80479CB0[4] __attribute__((aligned(8)));

/* 0x000EEC 4 B, alignment 4 */
u8 lbl_80479CAC[4] __attribute__((aligned(4)));

/* 0x000EE8 4 B, alignment 8 */
u8 lbl_80479CA8[4] __attribute__((aligned(8)));

/* 0x000EE4 4 B, alignment 4 */
u8 lbl_80479CA4[4] __attribute__((aligned(4)));

/* 0x000EE0 4 B, alignment 8 */
u8 lbl_80479CA0[4] __attribute__((aligned(8)));

/* 0x000EDC 4 B, alignment 4 */
u8 lbl_80479C9C[4] __attribute__((aligned(4)));

/* 0x000ED8 4 B, alignment 8 */
u8 lbl_80479C98[4] __attribute__((aligned(8)));

/* 0x0009A4 1332 B, alignment 4 */
u8 lbl_80479764[1332] __attribute__((aligned(4)));

/* 0x0009A0 4 B, alignment 8 */
u8 lbl_80479760[4] __attribute__((aligned(8)));

/* 0x00099C 4 B, alignment 4 */
u8 lbl_8047975C[4] __attribute__((aligned(4)));

/* 0x000998 4 B, alignment 8 */
u8 lbl_80479758[4] __attribute__((aligned(8)));

/* 0x000994 4 B, alignment 4 */
u8 lbl_80479754[4] __attribute__((aligned(4)));

/* 0x000990 4 B, alignment 8 */
u8 lbl_80479750[4] __attribute__((aligned(8)));

/* 0x00098C 4 B, alignment 4 */
u8 lbl_8047974C[4] __attribute__((aligned(4)));

/* 0x000988 4 B, alignment 8 */
u8 lbl_80479748[4] __attribute__((aligned(8)));

/* 0x000984 4 B, alignment 4 */
u8 lbl_80479744[4] __attribute__((aligned(4)));

/* 0x000980 4 B, alignment 8 */
u8 lbl_80479740[4] __attribute__((aligned(8)));

/* 0x00097C 4 B, alignment 4 */
u8 lbl_8047973C[4] __attribute__((aligned(4)));

/* 0x000978 4 B, alignment 8 */
u8 lbl_80479738[4] __attribute__((aligned(8)));

/* 0x000974 4 B, alignment 4 */
u8 lbl_80479734[4] __attribute__((aligned(4)));

/* 0x000970 4 B, alignment 8 */
u8 lbl_80479730[4] __attribute__((aligned(8)));

/* 0x00096C 4 B, alignment 4 */
u8 lbl_8047972C[4] __attribute__((aligned(4)));

/* 0x000968 4 B, alignment 8 */
u8 lbl_80479728[4] __attribute__((aligned(8)));

/* 0x000964 4 B, alignment 4 */
u8 lbl_80479724[4] __attribute__((aligned(4)));

/* 0x000960 4 B, alignment 8 */
u8 lbl_80479720[4] __attribute__((aligned(8)));

/* 0x00095C 4 B, alignment 4 */
u8 lbl_8047971C[4] __attribute__((aligned(4)));

/* 0x000958 4 B, alignment 8 */
u8 lbl_80479718[4] __attribute__((aligned(8)));

/* 0x000954 4 B, alignment 4 */
u8 lbl_80479714[4] __attribute__((aligned(4)));

/* 0x000950 4 B, alignment 8 */
u8 lbl_80479710[4] __attribute__((aligned(8)));

/* 0x00094C 4 B, alignment 4 */
u8 lbl_8047970C[4] __attribute__((aligned(4)));

/* 0x000948 4 B, alignment 8 */
u8 lbl_80479708[4] __attribute__((aligned(8)));

/* 0x000944 4 B, alignment 4 */
u8 lbl_80479704[4] __attribute__((aligned(4)));

/* 0x000940 4 B, alignment 8 */
u8 lbl_80479700[4] __attribute__((aligned(8)));

/* 0x00093C 4 B, alignment 4 */
u8 lbl_804796FC[4] __attribute__((aligned(4)));

/* 0x000938 4 B, alignment 8 */
u8 lbl_804796F8[4] __attribute__((aligned(8)));

/* 0x000934 4 B, alignment 4 */
u8 lbl_804796F4[4] __attribute__((aligned(4)));

/* 0x000930 4 B, alignment 8 */
u8 lbl_804796F0[4] __attribute__((aligned(8)));

/* 0x00092C 4 B, alignment 4 */
u8 lbl_804796EC[4] __attribute__((aligned(4)));

/* 0x000928 4 B, alignment 8 */
u8 lbl_804796E8[4] __attribute__((aligned(8)));

/* 0x000924 4 B, alignment 4 */
u8 lbl_804796E4[4] __attribute__((aligned(4)));

/* 0x000920 4 B, alignment 8 */
u8 lbl_804796E0[4] __attribute__((aligned(8)));

/* 0x00091C 4 B, alignment 4 */
u8 lbl_804796DC[4] __attribute__((aligned(4)));

/* 0x000918 4 B, alignment 8 */
u8 lbl_804796D8[4] __attribute__((aligned(8)));

/* 0x000914 4 B, alignment 4 */
u8 lbl_804796D4[4] __attribute__((aligned(4)));

/* 0x000910 4 B, alignment 8 */
u8 lbl_804796D0[4] __attribute__((aligned(8)));

/* 0x00090C 4 B, alignment 4 */
u8 lbl_804796CC[4] __attribute__((aligned(4)));

/* 0x000908 4 B, alignment 8 */
u8 lbl_804796C8[4] __attribute__((aligned(8)));

/* 0x000904 4 B, alignment 4 */
u8 lbl_804796C4[4] __attribute__((aligned(4)));

/* 0x000900 4 B, alignment 8 */
u8 lbl_804796C0[4] __attribute__((aligned(8)));

/* 0x0008FC 4 B, alignment 4 */
u8 lbl_804796BC[4] __attribute__((aligned(4)));

/* 0x0008F8 4 B, alignment 8 */
u8 lbl_804796B8[4] __attribute__((aligned(8)));

/* 0x0008F4 4 B, alignment 4 */
u8 lbl_804796B4[4] __attribute__((aligned(4)));

/* 0x0008F0 4 B, alignment 8 */
u8 lbl_804796B0[4] __attribute__((aligned(8)));

/* 0x000410 1248 B, alignment 8 */
u8 lbl_804791D0[1248] __attribute__((aligned(8)));

/* 0x00040C 4 B, alignment 4 */
u8 lbl_804791CC[4] __attribute__((aligned(4)));

/* 0x000408 4 B, alignment 8 */
u8 lbl_804791C8[4] __attribute__((aligned(8)));

/* 0x000404 4 B, alignment 4 */
u8 lbl_804791C4[4] __attribute__((aligned(4)));

/* 0x0003BC 72 B, alignment 4 */
u8 lbl_8047917C[72] __attribute__((aligned(4)));

/* 0x0003B8 4 B, alignment 8 */
u8 lbl_80479178[4] __attribute__((aligned(8)));

/* 0x0003B4 4 B, alignment 4 */
u8 lbl_80479174[4] __attribute__((aligned(4)));

/* 0x0003B0 4 B, alignment 8 */
u8 lbl_80479170[4] __attribute__((aligned(8)));

/* 0x0003AC 4 B, alignment 4 */
u8 lbl_8047916C[4] __attribute__((aligned(4)));

/* 0x0003A8 4 B, alignment 8 */
u8 lbl_80479168[4] __attribute__((aligned(8)));

/* 0x0003A4 4 B, alignment 4 */
u8 lbl_80479164[4] __attribute__((aligned(4)));

/* 0x0003A0 4 B, alignment 8 */
u8 lbl_80479160[4] __attribute__((aligned(8)));

/* 0x00039C 4 B, alignment 4 */
u8 lbl_8047915C[4] __attribute__((aligned(4)));

/* 0x000398 4 B, alignment 8 */
u8 lbl_80479158[4] __attribute__((aligned(8)));

/* 0x000394 4 B, alignment 4 */
u8 lbl_80479154[4] __attribute__((aligned(4)));

/* 0x000390 4 B, alignment 8 */
u8 lbl_80479150[4] __attribute__((aligned(8)));

/* 0x00038C 4 B, alignment 4 */
u8 lbl_8047914C[4] __attribute__((aligned(4)));

/* 0x000290 252 B, alignment 8 */
u8 lbl_80479050[252] __attribute__((aligned(8)));

/* 0x00028C 4 B, alignment 4 */
u8 lbl_8047904C[4] __attribute__((aligned(4)));

/* 0x000288 4 B, alignment 8 */
u8 lbl_80479048[4] __attribute__((aligned(8)));

/* 0x000284 4 B, alignment 4 */
u8 lbl_80479044[4] __attribute__((aligned(4)));

/* 0x000280 4 B, alignment 8 */
u8 lbl_80479040[4] __attribute__((aligned(8)));

/* 0x00027C 4 B, alignment 4 */
u8 lbl_8047903C[4] __attribute__((aligned(4)));

/* 0x000278 4 B, alignment 8 */
u8 lbl_80479038[4] __attribute__((aligned(8)));

/* 0x000274 4 B, alignment 4 */
u8 lbl_80479034[4] __attribute__((aligned(4)));

/* 0x000270 4 B, alignment 8 */
u8 lbl_80479030[4] __attribute__((aligned(8)));

/* 0x00026C 4 B, alignment 4 */
u8 lbl_8047902C[4] __attribute__((aligned(4)));

/* 0x000268 4 B, alignment 8 */
u8 lbl_80479028[4] __attribute__((aligned(8)));

/* 0x000264 4 B, alignment 4 */
u8 lbl_80479024[4] __attribute__((aligned(4)));

/* 0x000260 4 B, alignment 8 */
u8 lbl_80479020[4] __attribute__((aligned(8)));

/* 0x00025C 4 B, alignment 4 */
u8 lbl_8047901C[4] __attribute__((aligned(4)));

/* 0x000258 4 B, alignment 8 */
u8 lbl_80479018[4] __attribute__((aligned(8)));

/* 0x000254 4 B, alignment 4 */
u8 lbl_80479014[4] __attribute__((aligned(4)));

/* 0x000200 84 B, alignment 8 */
u8 lbl_80478FC0[84] __attribute__((aligned(8)));

/* 0x0001FC 4 B, alignment 4 */
u8 lbl_80478FBC[4] __attribute__((aligned(4)));

/* 0x0001F8 4 B, alignment 8 */
u8 lbl_80478FB8[4] __attribute__((aligned(8)));

/* 0x0001F4 4 B, alignment 4 */
u8 lbl_80478FB4[4] __attribute__((aligned(4)));

/* 0x0001F0 4 B, alignment 8 */
u8 lbl_80478FB0[4] __attribute__((aligned(8)));

/* 0x0001EC 4 B, alignment 4 */
u8 lbl_80478FAC[4] __attribute__((aligned(4)));

/* 0x0001E8 4 B, alignment 8 */
u8 lbl_80478FA8[4] __attribute__((aligned(8)));

/* 0x0001E4 4 B, alignment 4 */
u8 lbl_80478FA4[4] __attribute__((aligned(4)));

/* 0x0001E0 4 B, alignment 8 */
u8 lbl_80478FA0[4] __attribute__((aligned(8)));

/* 0x0001DC 4 B, alignment 4 */
u8 lbl_80478F9C[4] __attribute__((aligned(4)));

/* 0x0001D8 4 B, alignment 8 */
u8 lbl_80478F98[4] __attribute__((aligned(8)));

/* 0x0001D4 4 B, alignment 4 */
u8 lbl_80478F94[4] __attribute__((aligned(4)));

/* 0x0001D0 4 B, alignment 8 */
u8 lbl_80478F90[4] __attribute__((aligned(8)));

/* 0x0001CC 4 B, alignment 4 */
u8 lbl_80478F8C[4] __attribute__((aligned(4)));

/* 0x0001C8 4 B, alignment 8 */
u8 lbl_80478F88[4] __attribute__((aligned(8)));

/* 0x0001C4 4 B, alignment 4 */
u8 lbl_80478F84[4] __attribute__((aligned(4)));

/* 0x0001C0 4 B, alignment 8 */
u8 lbl_80478F80[4] __attribute__((aligned(8)));

/* 0x0001BC 4 B, alignment 4 */
u8 lbl_80478F7C[4] __attribute__((aligned(4)));

/* 0x0001B8 4 B, alignment 8 */
u8 lbl_80478F78[4] __attribute__((aligned(8)));

/* 0x0001B4 4 B, alignment 4 */
u8 lbl_80478F74[4] __attribute__((aligned(4)));

/* 0x0001B0 4 B, alignment 8 */
u8 lbl_80478F70[4] __attribute__((aligned(8)));

/* 0x0001AC 4 B, alignment 4 */
u8 lbl_80478F6C[4] __attribute__((aligned(4)));

/* 0x0001A8 4 B, alignment 8 */
u8 lbl_80478F68[4] __attribute__((aligned(8)));

/* 0x0001A4 4 B, alignment 4 */
u8 lbl_80478F64[4] __attribute__((aligned(4)));

/* 0x0001A0 4 B, alignment 8 */
u8 lbl_80478F60[4] __attribute__((aligned(8)));

/* 0x00019C 4 B, alignment 4 */
u8 lbl_80478F5C[4] __attribute__((aligned(4)));

/* 0x000198 4 B, alignment 8 */
u8 lbl_80478F58[4] __attribute__((aligned(8)));

/* 0x000194 4 B, alignment 4 */
u8 lbl_80478F54[4] __attribute__((aligned(4)));

/* 0x000190 4 B, alignment 8 */
u8 lbl_80478F50[4] __attribute__((aligned(8)));

/* 0x00018C 4 B, alignment 4 */
u8 lbl_80478F4C[4] __attribute__((aligned(4)));

/* 0x000188 4 B, alignment 8 */
u8 lbl_80478F48[4] __attribute__((aligned(8)));

/* 0x000184 4 B, alignment 4 */
u8 lbl_80478F44[4] __attribute__((aligned(4)));

/* 0x000180 4 B, alignment 8 */
u8 lbl_80478F40[4] __attribute__((aligned(8)));

/* 0x00017C 4 B, alignment 4 */
u8 lbl_80478F3C[4] __attribute__((aligned(4)));

/* 0x000178 4 B, alignment 8 */
u8 lbl_80478F38[4] __attribute__((aligned(8)));

/* 0x000174 4 B, alignment 4 */
u8 lbl_80478F34[4] __attribute__((aligned(4)));

/* 0x000170 4 B, alignment 8 */
u8 lbl_80478F30[4] __attribute__((aligned(8)));

/* 0x00016C 4 B, alignment 4 */
u8 lbl_80478F2C[4] __attribute__((aligned(4)));

/* 0x000168 4 B, alignment 8 */
u8 lbl_80478F28[4] __attribute__((aligned(8)));

/* 0x000164 4 B, alignment 4 */
u8 lbl_80478F24[4] __attribute__((aligned(4)));

/* 0x000160 4 B, alignment 8 */
u8 lbl_80478F20[4] __attribute__((aligned(8)));

/* 0x00015C 4 B, alignment 4 */
u8 lbl_80478F1C[4] __attribute__((aligned(4)));

/* 0x000158 4 B, alignment 8 */
u8 lbl_80478F18[4] __attribute__((aligned(8)));

/* 0x000154 4 B, alignment 4 */
u8 lbl_80478F14[4] __attribute__((aligned(4)));

/* 0x000150 4 B, alignment 8 */
u8 lbl_80478F10[4] __attribute__((aligned(8)));

/* 0x00014C 4 B, alignment 4 */
u8 lbl_80478F0C[4] __attribute__((aligned(4)));

/* 0x000148 4 B, alignment 8 */
u8 lbl_80478F08[4] __attribute__((aligned(8)));

/* 0x000144 4 B, alignment 4 */
u8 lbl_80478F04[4] __attribute__((aligned(4)));

/* 0x000140 4 B, alignment 8 */
u8 lbl_80478F00[4] __attribute__((aligned(8)));

/* 0x00013C 4 B, alignment 4 */
u8 lbl_80478EFC[4] __attribute__((aligned(4)));

/* 0x000138 4 B, alignment 8 */
u8 lbl_80478EF8[4] __attribute__((aligned(8)));

/* 0x000134 4 B, alignment 4 */
u8 lbl_80478EF4[4] __attribute__((aligned(4)));

/* 0x000130 4 B, alignment 8 */
u8 lbl_80478EF0[4] __attribute__((aligned(8)));

/* 0x00012C 4 B, alignment 4 */
u8 lbl_80478EEC[4] __attribute__((aligned(4)));

/* 0x000128 4 B, alignment 8 */
u8 lbl_80478EE8[4] __attribute__((aligned(8)));

/* 0x000124 4 B, alignment 4 */
u8 lbl_80478EE4[4] __attribute__((aligned(4)));

/* 0x000120 4 B, alignment 8 */
u8 lbl_80478EE0[4] __attribute__((aligned(8)));

/* 0x00011C 4 B, alignment 4 */
u8 lbl_80478EDC[4] __attribute__((aligned(4)));

/* 0x000118 4 B, alignment 8 */
u8 lbl_80478ED8[4] __attribute__((aligned(8)));

/* 0x000114 4 B, alignment 4 */
u8 lbl_80478ED4[4] __attribute__((aligned(4)));

/* 0x000110 4 B, alignment 8 */
u8 lbl_80478ED0[4] __attribute__((aligned(8)));

/* 0x00010C 4 B, alignment 4 */
u8 lbl_80478ECC[4] __attribute__((aligned(4)));

/* 0x000108 4 B, alignment 8 */
u8 lbl_80478EC8[4] __attribute__((aligned(8)));

/* 0x000104 4 B, alignment 4 */
u8 lbl_80478EC4[4] __attribute__((aligned(4)));

/* 0x000100 4 B, alignment 8 */
u8 lbl_80478EC0[4] __attribute__((aligned(8)));

/* 0x0000FC 4 B, alignment 4 */
u8 lbl_80478EBC[4] __attribute__((aligned(4)));

/* 0x0000F8 4 B, alignment 8 */
u8 lbl_80478EB8[4] __attribute__((aligned(8)));

/* 0x0000F4 4 B, alignment 4 */
u8 lbl_80478EB4[4] __attribute__((aligned(4)));

/* 0x0000F0 4 B, alignment 8 */
u8 lbl_80478EB0[4] __attribute__((aligned(8)));

/* 0x0000EC 4 B, alignment 4 */
u8 lbl_80478EAC[4] __attribute__((aligned(4)));

/* 0x0000E8 4 B, alignment 8 */
u8 lbl_80478EA8[4] __attribute__((aligned(8)));

/* 0x0000E4 4 B, alignment 4 */
u8 lbl_80478EA4[4] __attribute__((aligned(4)));

/* 0x0000E0 4 B, alignment 8 */
u8 lbl_80478EA0[4] __attribute__((aligned(8)));

/* 0x0000DC 4 B, alignment 4 */
u8 lbl_80478E9C[4] __attribute__((aligned(4)));

/* 0x0000D8 4 B, alignment 8 */
u8 lbl_80478E98[4] __attribute__((aligned(8)));

/* 0x0000D4 4 B, alignment 4 */
u8 lbl_80478E94[4] __attribute__((aligned(4)));

/* 0x0000D0 4 B, alignment 8 */
u8 lbl_80478E90[4] __attribute__((aligned(8)));

/* 0x0000CC 4 B, alignment 4 */
u8 lbl_80478E8C[4] __attribute__((aligned(4)));

/* 0x0000C8 4 B, alignment 8 */
u8 lbl_80478E88[4] __attribute__((aligned(8)));

/* 0x0000C4 4 B, alignment 4 */
u8 lbl_80478E84[4] __attribute__((aligned(4)));

/* 0x0000C0 4 B, alignment 8 */
u8 lbl_80478E80[4] __attribute__((aligned(8)));

/* 0x0000BC 4 B, alignment 4 */
u8 lbl_80478E7C[4] __attribute__((aligned(4)));

/* 0x0000B8 4 B, alignment 8 */
u8 lbl_80478E78[4] __attribute__((aligned(8)));

/* 0x0000B4 4 B, alignment 4 */
u8 lbl_80478E74[4] __attribute__((aligned(4)));

/* 0x0000B0 4 B, alignment 8 */
u8 lbl_80478E70[4] __attribute__((aligned(8)));

/* 0x0000AC 4 B, alignment 4 */
u8 lbl_80478E6C[4] __attribute__((aligned(4)));

/* 0x0000A8 4 B, alignment 8 */
u8 lbl_80478E68[4] __attribute__((aligned(8)));

/* 0x0000A4 4 B, alignment 4 */
u8 lbl_80478E64[4] __attribute__((aligned(4)));

/* 0x0000A0 4 B, alignment 8 */
u8 lbl_80478E60[4] __attribute__((aligned(8)));

/* 0x00009C 4 B, alignment 4 */
u8 lbl_80478E5C[4] __attribute__((aligned(4)));

/* 0x000098 4 B, alignment 8 */
u8 lbl_80478E58[4] __attribute__((aligned(8)));

/* 0x000094 4 B, alignment 4 */
u8 lbl_80478E54[4] __attribute__((aligned(4)));

/* 0x000090 4 B, alignment 8 */
u8 lbl_80478E50[4] __attribute__((aligned(8)));

/* 0x00008C 4 B, alignment 4 */
u8 lbl_80478E4C[4] __attribute__((aligned(4)));

/* 0x000088 4 B, alignment 8 */
u8 lbl_80478E48[4] __attribute__((aligned(8)));

/* 0x000084 4 B, alignment 4 */
u8 lbl_80478E44[4] __attribute__((aligned(4)));

/* 0x000080 4 B, alignment 8 */
u8 lbl_80478E40[4] __attribute__((aligned(8)));

/* 0x00007C 4 B, alignment 4 */
u8 lbl_80478E3C[4] __attribute__((aligned(4)));

/* 0x000078 4 B, alignment 8 */
u8 lbl_80478E38[4] __attribute__((aligned(8)));

/* 0x000074 4 B, alignment 4 */
u8 lbl_80478E34[4] __attribute__((aligned(4)));

/* 0x000070 4 B, alignment 8 */
u8 lbl_80478E30[4] __attribute__((aligned(8)));

/* 0x00006C 4 B, alignment 4 */
u8 lbl_80478E2C[4] __attribute__((aligned(4)));

/* 0x000068 4 B, alignment 8 */
u8 lbl_80478E28[4] __attribute__((aligned(8)));

/* 0x000064 4 B, alignment 4 */
u8 lbl_80478E24[4] __attribute__((aligned(4)));

/* 0x000060 4 B, alignment 8 */
u8 lbl_80478E20[4] __attribute__((aligned(8)));

/* 0x00005C 4 B, alignment 4 */
u8 lbl_80478E1C[4] __attribute__((aligned(4)));

/* 0x000058 4 B, alignment 8 */
u8 lbl_80478E18[4] __attribute__((aligned(8)));

/* 0x000054 4 B, alignment 4 */
u8 lbl_80478E14[4] __attribute__((aligned(4)));

/* 0x000050 4 B, alignment 8 */
u8 lbl_80478E10[4] __attribute__((aligned(8)));

/* 0x00004C 4 B, alignment 4 */
u8 lbl_80478E0C[4] __attribute__((aligned(4)));

/* 0x000048 4 B, alignment 8 */
u8 lbl_80478E08[4] __attribute__((aligned(8)));

/* 0x000044 4 B, alignment 4 */
u8 lbl_80478E04[4] __attribute__((aligned(4)));

/* 0x00003C 8 B, alignment 4 */
u8 lbl_80478DFC[8] __attribute__((aligned(4)));

/* 0x000038 4 B, alignment 8 */
u8 lbl_80478DF8[4] __attribute__((aligned(8)));

/* 0x000034 4 B, alignment 4 */
u8 lbl_80478DF4[4] __attribute__((aligned(4)));

/* 0x000030 4 B, alignment 8 */
u8 lbl_80478DF0[4] __attribute__((aligned(8)));

/* 0x00002C 4 B, alignment 4 */
u8 lbl_80478DEC[4] __attribute__((aligned(4)));

/* 0x000028 4 B, alignment 8 */
u8 lbl_80478DE8[4] __attribute__((aligned(8)));

/* 0x000024 4 B, alignment 4 */
u8 lbl_80478DE4[4] __attribute__((aligned(4)));

/* 0x000020 4 B, alignment 8 */
u8 lbl_80478DE0[4] __attribute__((aligned(8)));

/* 0x00001C 4 B, alignment 4 */
u8 lbl_80478DDC[4] __attribute__((aligned(4)));

/* 0x000018 4 B, alignment 8 */
u8 lbl_80478DD8[4] __attribute__((aligned(8)));

/* 0x000010 8 B, alignment 8 */
u8 lbl_80478DD0[8] __attribute__((aligned(8)));

/* 0x00000C 4 B, alignment 4 */
u8 lbl_80478DCC[4] __attribute__((aligned(4)));

/* 0x00000B 1 B (alignment padding) */
u8 gap_08_80478DCB_sbss[1] __attribute__((aligned(1)));

/* 0x00000A 1 B, alignment 2 */
u8 lbl_80478DCA[1] __attribute__((aligned(2)));

/* 0x000009 1 B */
u8 lbl_80478DC9[1] __attribute__((aligned(1)));

/* 0x000008 1 B, alignment 8 */
u8 lbl_80478DC8[1] __attribute__((aligned(8)));

/* 0x000000 8 B, alignment 8 */
u8 lbl_80478DC0[8] __attribute__((aligned(8)));

