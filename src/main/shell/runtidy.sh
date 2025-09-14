#!/bin/bash
set -euo pipefail
IFS=$'\n\t'

echo "npx --yes x3d-tidy@latest -l -e .x3dj -i \"$@\" | sed -e 's/.*data/..\/data/' -e 's/\\/\//'" 1>&2
npx --yes x3d-tidy@latest -l -e .x3dj -i "$@" | sed -e 's/.*data/..\/data/' -e 's/\\/\//'
