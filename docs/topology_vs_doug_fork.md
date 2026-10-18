# Unit topology: our tree vs the doug fork (measured 2026-10-18)

Comparison of unit/span topology against the other author's fork at master `4e36aa0`
(fresh clone of `dougchansan/pkmn-colosseum`, includes PR #652 / #647), against our
branch `adopt/doug-fork-improvements` at `d23da609d`.

Scope is topology only: section boundaries, coverage, unassigned bytes. Their file
naming, `.claude/`, `.lane-handoff/`, `AGENTS.md`, `archive/`, `fleet/` and
`tools/cloud_diff.py` are out of scope and were not considered.

## How accuracy is defined here

A boundary is correct when it falls on a real object boundary, and correctness is
verified, not asserted:

1. the module rebuilds to its retail SHA-1 in `config/GC6E01/build.sha1` (26/26
   outputs, the canonical gate), and
2. the unit scores 100% in `build/GC6E01/report.json`.

A mis-split shows up as a unit below 100%, or as retail bytes that no unit claims.
Both tests are used below. Neither is a matter of opinion.

## Method

- Spans parsed from all 26 `config/GC6E01/**/splits.txt` files on both sides.
- Section extents: for the main image, the DOL header (`orig/GC6E01/sys/main.dol`);
  for RELs, the union of symbol extents (`config/GC6E01/symbols.txt`), which is
  identical on both sides, so the comparison is apples-to-apples.
- "Unassigned" = bytes in the section extent that no unit's span covers. dtk fills
  each such gap with an auto-generated unit at build time, which is why unassigned
  bytes and unit counts move together.

## Per-section table

Main image (DOL):

| section | our spans | their spans | our unassigned B | their unassigned B |
|---|---:|---:|---:|---:|
| .bss | 88 | 86 | 52 | 4,708 |
| .data | 262 | 229 | 176 | 15,381 |
| .dtors | 1 | 1 | 0 | 0 |
| .init | 2 | 2 | 156 | 156 |
| .rodata | 114 | 114 | 113 | 47 |
| .sbss | 69 | 57 | 52 | 8,526 |
| .sbss2 | 5 | 3 | 0 | 32 |
| .sdata | 35 | 32 | 18 | 560 |
| .sdata2 | 254 | 254 | 65 | 30 |
| .text | 1795 | 1822 | 4 | 4 |
| **total** | **2625** | **2600** | **636** | **29,444** |

common_rel (REL 125):

| section | our spans | their spans | our unassigned B | their unassigned B |
|---|---:|---:|---:|---:|
| .data | 7 | 15 | 14,960 | 561,032 |
| .rodata | 3 | 3 | 0 | 0 |
| .text | 1 | 1 | 0 | 0 |
| **total** | **11** | **19** | **14,960** | **561,032** |

The other 24 REL modules are identical on both sides: 48 spans, 0 unassigned.

Grand total unassigned: **ours 15,596 B** (of which 15,000 B is 2 auto units and
440 B is sub-32 B alignment holes) against **theirs 590,476 B**.

## What the numbers say

### Where we are better

- **.text coverage is identical** (2,503,648 B each, same single 4 B gap). The
  difference there is only how the same bytes are partitioned.
- Every large gap on their side is a named unit that scores 100% on ours:

  | their gap | ours |
  |---|---|
  | common_rel `.data` 0x2D2C 561,032 B | `rel/common_rel/data_125_00000000.c` (572,596 B, 100%) |
  | `.sbss` 0x80478DC0 6,432 B | `game/data/sbss_80478DC0.c` (100%) |
  | `.bss` 0x803FED64 4,684 B | `game/data/bss_803FED64.c` (100%) |
  | `.data` 0x80376104 3,784 B | `game/data/data_80376104.c` (100%) |
  | `.data` 0x80377088 2,692 B | `game/data/data_80377088.c` (100%) |
  | `.data` 0x80377D90 1,840 B | `game/data/data_80377D90.c` (100%) |
  | `.data` 0x80378D7C 1,548 B | `game/data/data_80378D7C.c` (100%) |
  | `.sbss` 0x8047AB18 1,024 B | `game/data/sbss_8047AB18.c` (100%) |

  Their data deficit is structural, not a matching-quality difference: of the
  577,808 B gap between our matched_data (3,548,288) and theirs (2,970,480),
  574,880 B (99.5%) is bytes they never assigned to a unit at all.

### Where they are better

Only accommodation padding, and only in two sections:

- `.rodata`: 22 small gaps (113 B) versus their 8 (47 B).
- `.sdata2`: 17 gaps (65 B) versus their 9 (30 B).

Every one of these gaps is 1-7 B of inter-object alignment. Splitting a data
object finer produces these holes; the retail bytes are still reproduced, because
`build.sha1` verifies 26/26. Adopting their arrangement here would move bytes from
"unassigned padding" to "assigned padding" and would not add a single matched byte.

### Unit counts reconcile exactly

| | declared in splits.txt | auto gap-fill units | report / claim |
|---|---:|---:|---:|
| ours | 2,167 | 2 | 2,169 |
| theirs | 2,150 | 53 | 2,203 |

Their "corrected 2,203-unit topology" therefore contains **17 fewer sourced units
and 51 more empty gap-fill units** than ours. The higher unit count is the
consequence of the 590,476 unassigned bytes, not evidence of finer accuracy, and
those 53 units carry no matched bytes by construction. This is also why the
mechanical-carve-up concern does not appear as fixed-stride `.sbss` runs: measured
with a >=4-consecutive-equal-size test, neither tree has any significant stride
carve-up (ours 5 short runs totalling 312 B, theirs 6 totalling 320 B, all
legitimate small arrays). The unit-count inflation is gap-fill, not padding units.

## Text boundaries: 41 differ, none worth adopting

Interval sets differ in `.text` as: 41 intervals only on their side, 14 only on
ours. Test of every boundary on both sides against function start/end addresses:

- boundaries not aligned to any function boundary: **ours 0, theirs 0**. Neither
  topology cuts mid-function. The difference is granularity, not error.
- of their 41 intervals, 21 contain only functions we already match at 100%, so
  adopting them adds 21 units and 0 matched bytes.
- the other 20 each isolate exactly the one residual function we cannot match
  (`menuShopDrawListText` 95.68%, `_sysvarsProcessData` 91.50%, `fn_8003B85C`
  88.15%, `GSsplineCreate` 92.82%, and so on). In their own tree those units are
  still named `_candidate_` / `_suffix_`, i.e. still not byte-verified there. Their
  isolation did not make them match, so it is not a demonstrated improvement.
- our 14 differing intervals group 2-16 functions per unit; those groups contain
  the same residuals. Splitting them would reproduce an experiment their tree has
  already run and that failed.

## The 32 new files

All 32 are one-function or one-range units; 16 are 1-3 line `#define X_ONLY` +
include stubs, 16 are standalone single-function TUs of 45-164 lines. Mapped by
address onto our tree:

- **22** cover ranges we already match at 100% (`gs_range_exact_80034280`,
  `gs_spline_exact_80176068`, `menuFight_exact_8000DFF0`/`_8000EA10`,
  `menuShop_exact_8002B40C`, `pokeconv_exact_80089380`,
  `wazaViewer_exact_801D56B0`, the ten `pda_exact_*`, the three
  `menu_pda_mail_exact_*`). Redundant.
- **8** cover residual functions we are also below 100% on, and are named
  `_candidate_` / `_suffix_` by their own author, i.e. not byte-verified there:
  `fn_80034FB4` (93.48%), `fn_80060A28` (98.50%), `fn_8004E510` (99.44%),
  `fn_8003A10C` (99.02%), `fn_8003B85C` (88.15%), `fn_8003C2B8` (97.50%),
  `fn_8003C7C0` (95.13%), `menuFightButtonSecretPokemonTop` (98.36%).
- **2** are orphans: `pda_candidate_800379E8.c` and
  `menuShop_candidate_8002B594.c` have no entry in their own `splits.txt` and no
  reference anywhere in their tree; the addresses are already claimed by
  `pda_exact_800379E8.c` and `menuShop_island_8002B594.c`. Junk.

Body-level check on their residual functions (`fn_80089048`, `GSsplineCreate`):
token streams are identical to ours modulo identifier renaming, so there is no
source fix to import either.

Their PR claims "three exact functions / 2,192 matched code bytes". Searching the
46 functions inside their `_exact_` ranges for 3-subsets summing to 2,192 B yields
four fits, all inside units we already score at 100% (804 + 352 + 1,036 B, with
`fn_80034280` / `menuFightDrawSecretPokemon` and `fn_8004E180` / `fn_8004E2E0`
interchangeable at equal size). This is consistent with - not proof of - their
three wins landing on coverage we already had.

## Verdict

Nothing in this batch is adoptable. No boundary on their side is demonstrably
better under the two-part test above, and no function body differs from ours. Their
tree is behind ours on the thing being measured: 590,476 unassigned bytes against
our 15,596, and 17 fewer sourced units. Our topology stays.

Verify with:

```bash
python configure.py && ninja && python configure.py progress
```

and the SHA-1 gate over the 26 outputs in `config/GC6E01/build.sha1`.
