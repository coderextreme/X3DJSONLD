#!/bin/bash
set -euo pipefail
IFS=$'\n\t'

# run local files through testing process

export PROCESSORS=1

find ../data -name *.x3d |grep -v new | xargs grep -l HAnimHumanoid | xargs bash don.sh 2>&1 |egrep 'ERROR|^\$' | tee foo.txt
sed 's/.*net/net/' foo.txt |grep -v ^net/| sed 's/" self.*//'|grep ^net
find ../data -name *.x3d |grep -v new | xargs grep -l HAnimHumanoid | xargs bash several.sh 2>&1 |egrep '^ERROR|^net' | tee foojohn.txt
