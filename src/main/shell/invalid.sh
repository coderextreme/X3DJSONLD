#!/bin/bash
set -euo pipefail
IFS=$'\n\t'

# run local files through testing process

. ../shell/classpath

ls ../data/ArchPrototype.x3d ../data/CameraExamples.x3d ../data/extrusion.x3d ../data/flowers.x3d ../data/flowers2.x3d ../data/flowers4.x3d | grep -v new | grep -v intermediate | xargs -P $PROCESSORS ./several.sh


