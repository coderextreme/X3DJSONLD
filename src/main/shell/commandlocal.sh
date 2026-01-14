#!/bin/bash
set -euo pipefail
IFS=$'\n\t'

# run local files through testing process

ls ../data/*.x3d | xargs -P $PROCESSORS ./commandLine.sh

