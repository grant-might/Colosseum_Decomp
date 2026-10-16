# Byte-exact verification ledger

One row per function that reached 100% in the report metric, derived from report
snapshots (never hand-written). Regenerate with `tooling/ledger.py`; snapshot reports
live under `tooling/reports/` (not in git - they carry no game data, only metrics).

**7 functions closed, 1,382,923 code bytes.** Current: 2,301,148 / 8,536 exact.

| win | date (UTC) | unit | function | size | before | note |
|---|---|---|---|---|---|---|
| 0001 | 2026-10-15 19:15 | main/game/gs_task_residual_80008868 | fn_80008C40 | 1,336 | 98.83234% | win 0001 - gsTaskFlagGetLinkedId named-helper recovery |
| 0002 | 2026-10-15 20:34 | (data units re-split or renamed by this change) | (data - attributable only in aggregate) | 1,338,904 | 0.00000% | common_rel data reconstruction (5 units, 1,338,904 B) |
| 0003 | 2026-10-15 22:58 | (data units re-split or renamed by this change) | (data - attributable only in aggregate) | 28,464 | 0.00000% | 32 DOL zero-fill .bss/.sbss units (28,464 B) |
| 0004 | 2026-10-15 23:38 | (data units re-split or renamed by this change) | (data - attributable only in aggregate) | 1,443 | 0.00000% | 27 DOL .data/.sdata units (1,443 B) |
| 0005 | 2026-10-16 00:28 | (data units re-split or renamed by this change) | (data - attributable only in aggregate) | 5,888 | 0.00000% | 15 pointer-bearing .data/.sdata units (5,888 B) |
| 0006 | 2026-10-16 01:02 | (data units re-split or renamed by this change) | (data - attributable only in aggregate) | 5,624 | 0.00000% | data_80375938 + hsd/video data (6,888 B) |
| 0007 | 2026-10-16 01:02 | main/game/data/data_80375938 | (data unit - unmatched data -> 0) | 1,264 | 0.00000% | data_80375938 + hsd/video data (6,888 B) |
