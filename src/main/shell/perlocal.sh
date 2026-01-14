#!/bin/bash
set -euo pipefail
IFS=$'\n\t'

# run local files through testing process
. ../shell/classpath

ls ../personal/*.x3d | grep -v new | grep -v intermediate | xargs -P $PROCESSORS bash personal.sh

