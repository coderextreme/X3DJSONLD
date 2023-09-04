#!/bin/bash

# run local files through testing process

export PROCESSORS=1
find ../data -type f -name "*.x3d" | grep -v new | grep -v intermediate | tr '\n' '\0' | xargs -0 -P $PROCESSORS bash x3djsonld.sh

