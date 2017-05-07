#!/bin/bash

. ./classpath

for i in `find . -name '*.new.json'`
do
	${NODE} jsondiff.js `dirname $i  | sed  -e 's/\/_\([0-9]\/\)/\/\1/g' -e 's/^_\(default|switch|for\)$/\1/g' -e 's/.\/www_web3d_org/\/c\/x3d-code\/www.web3d.org/' -e 's/_/*/g'`/`basename $i .new.json`.json $i
done
