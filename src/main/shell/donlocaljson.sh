#!/bin/bash
set -euo pipefail
IFS=$'\n\t'

# Run examples through test process

export PROCESSORS=1
find ../data -type f -name "*.x3d" | grep -v new | grep -v intermediate | tr '\n' '\0' |  xargs -0 -P $PROCESSORS ./donjson.sh
