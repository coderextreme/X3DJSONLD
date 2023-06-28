#!/bin/bash

# run local files through testing process

export PROCESSORS=1
ls ../data/*.x3d | grep -v new | xargs -P $PROCESSORS ./don.sh

