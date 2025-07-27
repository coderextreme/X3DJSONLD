#!/bin/bash
set -euo pipefail
IFS=$'\n\t'

# get list of files which have X3D but don't have JSON

find ../data /c/x3d-code/www.web3d.org/x3d/content/examples -name '*.x3d' | grep -v new | grep -v intermediate | grep -v " "| sed -e 's/\.x3d$/.json/' | xargs ls 2>&1| grep "No such file or directory" | awk '{ print $4; }' | sed -e "s/^'//" -e "s/\.json':/.x3d/" | xargs ls
