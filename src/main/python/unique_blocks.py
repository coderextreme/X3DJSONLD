import re
import sys
from collections import Counter

# Matches [123]
BRACKET_NUM = re.compile(r"\[\d+\]")

def normalize(line):
    if "ERROR" in line:
        return BRACKET_NUM.sub("[#]", line)
    return line

path = sys.argv[1]
with open(path, encoding="utf-8") as f:
    lines = [ln.rstrip("\n") for ln in f]

# Consecutive 5-line blocks; key = normalized, keep original for display
blocks = [tuple(lines[i:i+5]) for i in range(0, len(lines), 5)]
keys = [tuple(normalize(ln) for ln in b) for b in blocks]

counts = Counter(keys)
first_seen = {}
for k, b in zip(keys, blocks):
    first_seen.setdefault(k, b)

distinct = list(first_seen)                      # first-seen order
only_once = [k for k in distinct if counts[k] == 1]

print(f"Total blocks: {len(blocks)}")
print(f"Distinct blocks: {len(distinct)}")
print(f"Blocks appearing exactly once: {len(only_once)}\n")

for n, k in enumerate(distinct, 1):
    print(f"--- Block {n} (x{counts[k]}) ---")
    print("\n".join(first_seen[k]))
    print()
