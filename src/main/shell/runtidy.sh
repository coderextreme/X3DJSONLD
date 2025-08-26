#!/bin/bash
set -euo pipefail
IFS=$'\n\t'

for i in "$@"
do
	export IN=`pwd`/"$i" 
	export OUT=`pwd`/`dirname "$i"`/`basename "$1" .x3d`.x3dj
	export FINAL=`pwd`/`dirname "$i"`/`basename "$1" .x3d`.json
	echo "npx --yes x3d-tidy -i $IN -o $OUT" >&2
	npx x3d-tidy -i "$IN" -o "$OUT"
	cp "$OUT" "$FINAL"
	echo "$FINAL"
done
