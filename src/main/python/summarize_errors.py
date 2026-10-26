#!/usr/bin/env python3
"""Summarize concatenated X3D validator output (usage: summarize_errors.py errors.txt)."""
import re
import sys
from collections import Counter, defaultdict

HEADER = re.compile(r"^\[(ERROR|WARNING)\] (\w+) at (.*)$")
FIELDS = (("msg", "Message:"), ("exp", "Expected:"), ("act", "Actual:"), ("fix", "Fix:"))
INDEX = re.compile(r"\[\s*-?\d+\s*\]")          # [12] -> [#]
ROUTE_NODE = re.compile(
    r"Field '([^']+)' does not exist on (?:source|destination) node '([^']+)' \((\w+)\)")
ROUTE_CODES = ("ROUTE_FROM_FIELD_NOT_FOUND", "ROUTE_TO_FIELD_NOT_FOUND")


def norm(s):
    return INDEX.sub("[#]", s)


def parse(lines):
    """Return entries (dicts) and a list of runs (each run = list of lines)."""
    entries, cur = [], None
    for ln in lines:
        m = HEADER.match(ln)
        if m:
            cur = dict(sev=m[1], code=m[2], path=m[3], msg="", exp="", act="", fix="")
            entries.append(cur)
        elif cur:
            s = ln.strip()
            for key, prefix in FIELDS:
                if s.startswith(prefix):
                    cur[key] = s[len(prefix):].strip()
    # A new run starts at FIELD_UNKNOWN once the current run already has a warning
    runs, run = [], []
    for ln in lines:
        if ln.startswith("[ERROR] FIELD_UNKNOWN") and any(x.startswith("[WARNING]") for x in run):
            runs.append(run)
            run = []
        run.append(ln)
    runs.append(run)
    return entries, runs


def main(path):
    with open(path, encoding="utf-8", errors="replace") as f:
        lines = f.read().splitlines()
    entries, runs = parse(lines)

    n_err = sum(e["sev"] == "ERROR" for e in entries)
    print(f"{len(entries)} entries ({n_err} errors, {len(entries) - n_err} warnings), "
          f"{len(runs)} validator runs\n")

    # 1. Counts by code
    print("== By code ==")
    for (sev, code), n in Counter((e["sev"], e["code"]) for e in entries).most_common():
        print(f"{n:5}  {sev:7} {code}")

    # 2. Distinct problems: route errors keyed by field+hint, others by normalized path
    groups = defaultdict(list)
    for e in entries:
        if e["code"] in ROUTE_CODES:
            key = (e["code"], e["act"], e["fix"])
        else:
            key = (e["code"], norm(e["path"]), e["act"], norm(e["msg"]))
        groups[key].append(e)
    print(f"\n== Distinct problems ({len(groups)}) ==")
    for key, v in sorted(groups.items(), key=lambda kv: -len(kv[1])):
        print(f"{len(v):5}  {v[0]['sev']:7} " + " | ".join(k[:70] for k in key if k))

    # 3. Route errors by (field, node type), and which nodes are hit most
    for code in ROUTE_CODES:
        by_field, by_node = Counter(), Counter()
        for e in entries:
            if e["code"] == code:
                m = ROUTE_NODE.search(e["msg"])
                if m:
                    by_field[(m[1], m[3])] += 1
                    by_node[m[2]] += 1
        print(f"\n== {code}: (field, node type) ==")
        for (field, ntype), n in by_field.most_common():
            print(f"{n:5}  {field}  on {ntype}")
        print(f"   {len(by_node)} distinct nodes; top: {by_node.most_common(5)}")

    # 4. Java exceptions
    exc = Counter(ln for ln in lines if re.match(r"^[\w.]+(Exception|Error):", ln))
    print("\n== Java exceptions ==")
    for text, n in exc.most_common():
        print(f"{n:5}  {text}")

    # 5. Run profiles
    profiles = Counter()
    for r in runs:
        codes = Counter(m[2] for m in map(HEADER.match, r) if m)
        n_exc = sum(1 for ln in r if re.match(r"^[\w.]+(Exception|Error):", ln))
        profiles[tuple(sorted(codes.items())) + (("JavaException", n_exc),)] += 1
    print("\n== Run profiles (runs sharing the same error mix) ==")
    for prof, n in profiles.most_common():
        print(f"{n:3} runs  " + ", ".join(f"{c}={k}" for c, k in prof if k))


if __name__ == "__main__":
    main(sys.argv[1] if len(sys.argv) > 1 else "errors.txt")
