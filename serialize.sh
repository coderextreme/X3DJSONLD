#!/bin/bash

# serialize non-serialized files
export PROCESSORS=${PROCESSORS-1}

ls *.json| grep -v new | grep -v package | xargs -P $PROCESSORS node json2all.js 2>&1
eval ls `sh nonserialized.sh` | xargs -P $PROCESSORS node json2all.js 2>&1 | cat > jsonerrors.txt
cat jsonerrors.txt | sh processJsonErrors.sh
