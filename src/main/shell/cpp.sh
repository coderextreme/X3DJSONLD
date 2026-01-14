#!/bin/bash
set -euo pipefail
IFS=$'\n\t'

# convert JSON files to C++

# accepts files with .json extension

. ../shell/classpath

export NODE_OPTIONS=--max-old-space-size=24576

ls -d "$@" | grep ${JSONEXT} | grep -v new | xargs -P "${PROCESSORS}" "${NODE}" "${NODEDIR}/json2cpp.js"
