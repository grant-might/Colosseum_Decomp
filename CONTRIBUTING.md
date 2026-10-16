# Contributing

This branch is intentionally reset around the standard dtk-template workflow.
Keep changes small and make the dtk build/report the source of truth.

## Setup

1. Put your legally obtained game files under `orig/GC6E01/`.
2. Run `python configure.py`.
3. Run `ninja`.
4. Run `python configure.py progress` or inspect `build/GC6E01/report.json`.

## Matching Work

- Add source only through `configure.py` object entries and
  `config/GC6E01/splits.txt`.
- Leave nonmatching source as `CodeCandidate` / `DataCandidate` until the
  generated dtk report proves it should be linked.
- Prefer `python tools/decompctx.py -I include src/path/to/file.c` for
  decomp.me context.
- Use objdiff against the generated target/source objects before claiming a
  match.

## Rules

- Do not commit `.inc` files or ROM-derived snippets.
- Do not use asm wrappers, inline asm, or included assembly as decompilation
  progress.
- Do not edit generated target objects, game assets, compiler binaries, or other
  copyrighted extracted data into the repository.
- Do not edit symbols/splits/linker config just to improve a metric; config
  changes need a build reason.
- Keep source changes scoped to objects declared in `configure.py`.
- Do not introduce uninitialized reads, unexplained side effects, or changed game
  semantics merely to improve a score. Investigate such findings instead of
  treating the source-style policy as a correctness waiver.
- Registered assembly may contribute to matching and linked-code totals only
  through the per-function evidence registry in `docs/asm_evidence/registry.json`
  and the branch-target validation in
  `.github/scripts/verify_asm_branch_targets.py`, and it is reported separately
  from decompiled C/C++. Registry extensions need explicit evidence and matching
  CI coverage.

## Matching policy

Clear, natural C/C++ is preferred, but documented compiler-control pragmas,
source-shaping temporaries, aliases, masks and reconstructed inline helpers are
acceptable when reproducible matching evidence supports them. A historical
`RULE-EXCEPTION` tag records an engineering tradeoff, not an automatic rejection;
see `docs/RULE_EXCEPTIONS.md`.

Keep the build, relocation, section-layout, canonical-hash, metric-integrity and
regression checks in place. Compare renamed or repartitioned functions by
original module, section/address and size, and keep exact-source gains separate
from linked-code gains. A failed compiler probe is evidence about the candidates
that were tested, not proof that C is impossible. Do not count original-object
fallback as compiled-source progress, hide a regression by changing the
denominator, or claim runtime testing from hashes.

## Validation

Use the smallest check that proves the change:

1. `python configure.py --no-progress`
2. `ninja all_source build/GC6E01/report.json`
3. `ninja`
4. `python configure.py progress`

Also run the applicable quality, metric-integrity, object-map and regression
checks with their documented arguments. A final DOL hash alone does not validate
an incomplete `CodeCandidate` object: check the actual source objects, data,
relocations and sibling functions. If a command cannot run in your environment,
report the exact command and why. Never change canonical hashes or bypass a
required check to make a change look green.

## Naming

Rename conservatively and preserve address traceability. A nontrivial rename
needs evidence from callsites, strings, known SDK patterns, data tables, or
confirmed assembly or decompiler analysis.
