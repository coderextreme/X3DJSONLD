#!/bin/bash
set -euo pipefail
IFS=$'\n\t'

# convert JSON files to C++

# accepts files with .json extension

export PROCESSORS="${PROCESSORS-8}"

. ../shell/classpath

export NODE_OPTIONS=--max-old-space-size=24576

ls -d "$@" | grep json | grep -v new | xargs -P "${PROCESSORS}" "${NODE}" "${NODEDIR}/json2cpp.js"
