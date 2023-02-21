#!/bin/bash


. ./classpath

# serialize non-serialized files
export PROCESSORS=${PROCESSORS-8}

eval ls `sh nonserialized.sh` | xargs -L 10 -P $PROCESSORS ${NODE} ${NODEDIR}/json2all.mjs 2> jsonerrors.txt
grep "^File: " jsonerrors.txt | sh processJsonErrors.sh
