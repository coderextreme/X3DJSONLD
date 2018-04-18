#!/bin/bash

# run local files through testing process

export PROCESSORS=1
ls ../data/*.x3d | grep -v new | grep -v intermediate | xargs -P $PROCESSORS ./several.sh

