#!/bin/bash
set -euo pipefail
IFS=$'\n\t'
bash several.sh ../data/JinLOA4Canonical.x3d
cd ../data
node ../node/jin.js > centers.txt
node ../node/json2all.js ../data/JinLOA4Canonical101.x3dj
mv ../data/JinLOA4Canonical101.x3d.new ../data/JinLOA4Canonical101.x3d
~/Downloads/view3dscene-4.3.0-win64-x86_64/view3dscene/view3dscene.exe ../data/JinLOA4Canonical101.x3d
grep DEF=.hanim_._tarsal_distal_interphalangeal_5 ../data/JinLOA4Canonical101.x3d
