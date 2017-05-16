#!/bin/bash

# run local files through testing process

export PROCESSORS=1
ls ../orig/*.x3d | grep -v new | grep -v intermediate | xargs -P $PROCESSORS ./several.sh

