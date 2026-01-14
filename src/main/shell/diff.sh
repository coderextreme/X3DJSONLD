#!/bin/bash
set -euo pipefail
IFS=$'\n\t'

. ./classpath


for i in `find ../data -name '*.x3d.new'`
do
	${NODE} ${NODEDIR}/xmldiff.js `dirname $i  | sed 's/.\/www_web3d_org/\/c\/x3d-code\/www.web3d.org/'`/`basename $i .x3d.new`.x3d $i
done

for i in `find ../data -name '*.new.java.'${JSONEXT}`
do
	${NODE} ${NODEDIR}/jsondiff.js `dirname $i  | sed 's/.\/www_web3d_org/\/c\/x3d-code\/www.web3d.org/'`/`basename $i .new.java.${JSONEXT}`.${JSONEXT} $i
done

#for i in `find ../data -name '*.new.'${JSONEXT}'.intermediate.x3d'`
#do
#	${NODE} ${NODEDIR}/xmldiff.js `dirname $i  | sed 's/.\/www_web3d_org/\/c\/x3d-code\/www.web3d.org/'`/`basename $i .new.'${JSONEXT}'.intermediate.x3d`.x3d $i
#done

# old way of comparing output from graaljs

for i in `find ../data -name '*.new.x3d'`
do
	${NODE} ${NODEDIR}/xmldiff.js `dirname $i  | sed 's/.\/www_web3d_org/\/c\/x3d-code\/www.web3d.org/'`/`basename $i .new.x3d`.x3d $i
done
