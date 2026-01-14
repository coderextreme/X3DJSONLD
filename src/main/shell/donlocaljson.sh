#!/bin/bash
set -euo pipefail
IFS=$'\n\t'

# Run examples through test process
. ../shell/classpath

find ../data -type f -name "*.x3d" | grep -v new | grep -v intermediate | tr '\n' '\0' |  xargs -0 -P $PROCESSORS ./donjson.sh
