#!/bin/bash
set -euo pipefail
IFS=$'\n\t'

# run local files through testing process
. ../shell/classpath

find ../data -type f -name "*.x3d" | grep -v new | grep -v intermediate | tr '\n' '\0' | xargs -0 -P $PROCESSORS bash several.sh

