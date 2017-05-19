#!/bin/bash

# run local files through testing process

export PROCESSORS=1
ls ../data/*.x3d | xargs -P $PROCESSORS ./don.sh

