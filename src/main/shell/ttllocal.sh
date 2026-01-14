#!/bin/bash
set -euo pipefail
IFS=$'\n\t'

# run local files through testing process

. ./classpath

ls ../data/*.x3d | grep -v new | grep -v intermediate | xargs -P $PROCESSORS ./tottl.sh

