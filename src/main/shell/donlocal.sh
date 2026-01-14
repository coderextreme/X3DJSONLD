#!/bin/bash
set -euo pipefail
IFS=$'\n\t'

# run local files through testing process

. ../shell/classpath

ls ../data/*.x3d | grep -v new | xargs -P $PROCESSORS bash ./don.sh

