#!/bin/bash
set -euo pipefail
IFS=$'\n\t'

. ./classpath

# Run examples through test process

export PROCESSORS=1
find /c/x3d-code/www.web3d.org/x3d/content/examples/ -name '*.x3d' | xargs -P $PROCESSORS bash ./several.sh

