#!/bin/bash
set -euo pipefail
IFS=$'\n\t'

# Run examples through test process
. ../shell/classpath

find /c/x3d-code/www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/ -name '*.x3d' | xargs -P $PROCESSORS ./don.sh

