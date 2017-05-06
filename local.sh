#!/bin/bash

# run local files through testing process

export PROCESSORS=1
ls *.x3d | xargs -P $PROCESSORS ./several.sh

