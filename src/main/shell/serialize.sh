#!/bin/bash
set -euo pipefail
IFS=$'\n\t'


. ./classpath

# serialize non-serialized files

eval ls `sh nonserialized.sh` | xargs -L 10 -P $PROCESSORS ${NODE} ${NODEDIR}/json2all.js 2> jsonerrors.txt
grep "^File: " jsonerrors.txt | sh processJsonErrors.sh
