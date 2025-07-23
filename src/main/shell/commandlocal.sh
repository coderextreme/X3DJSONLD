#!/bin/bash
set -euo pipefail
IFS=$'\n\t'

# run local files through testing process

export PROCESSORS=1
ls ../data/*.x3d | xargs -P $PROCESSORS ./commandLine.sh

