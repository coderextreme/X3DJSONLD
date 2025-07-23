#!/bin/bash
set -euo pipefail
IFS=$'\n\t'

export IN=`pwd`/"$1" 
export OUT=`pwd`/`dirname "$1"`/`basename "$1" .x3d`.x3dj
echo "npx --yes x3d-tidy -i $IN -o $OUT" >&2
npx x3d-tidy -i "$IN" -o "$OUT"
echo "$OUT"
