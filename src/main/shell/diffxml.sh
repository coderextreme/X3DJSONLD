#!/bin/bash
set -euo pipefail
IFS=$'\n\t'

. ./classpath
# way of comparing output from graaljs

for i in `find . -name '*.new.x3d'`
do
	${NODE} xmldiff.js `dirname $i  | sed  -e 's/\/_\([0-9]\/\)/\/\1/g' -e 's/^_\(default|switch|for\)$/\1/g' -e 's/.\/www_web3d_org/\/c\/x3d-code\/www.web3d.org/' -e 's/_/*/g'`/`basename $i .new.x3d`.x3d $i
done
