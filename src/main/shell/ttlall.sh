#!/bin/bash

# Run examples through test process

. ./classpath

export PROCESSORS=1
find /c/x3d-code/www.web3d.org/x3d/content/examples/ -name '*.x3d' -print0 | xargs -0 -P $PROCESSORS ./tottl.sh

