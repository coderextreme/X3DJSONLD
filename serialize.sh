#!/bin/bash

# serialize non-serialized files
export PROCESSORS=${PROCESSORS-8}

ls *.json| grep -v new | grep -v package | xargs -L 10 -P $PROCESSORS ${NODE} json2all.js 2> jsonerrors.txt
eval ls `sh nonserialized.sh` | xargs -L 10 -P $PROCESSORS ${NODE} json2all.js 2>> jsonerrors.txt
cat jsonerrors.txt | sh processJsonErrors.sh
