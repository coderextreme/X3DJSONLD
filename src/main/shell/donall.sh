#!/bin/bash
set -euo pipefail
IFS=$'\n\t'

# Run examples through test process

. ../shell/classpath

find ~/www.web3d.org/x3d/content/examples/ -name '*.x3d' | xargs -P $PROCESSORS ./don.sh
