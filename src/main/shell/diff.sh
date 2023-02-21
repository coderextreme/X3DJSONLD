#!/bin/bash

. ./classpath


for i in `find ../data -name '*.x3d.new'`
do
	${NODE} ${NODEDIR}/xmldiff.mjs `dirname $i  | sed 's/.\/www_web3d_org/\/c\/x3d-code\/www.web3d.org/'`/`basename $i .x3d.new`.x3d $i
done

for i in `find ../data -name '*.new.json'`
do
	${NODE} ${NODEDIR}/jsondiff.mjs `dirname $i  | sed 's/.\/www_web3d_org/\/c\/x3d-code\/www.web3d.org/'`/`basename $i .new.json`.json $i
done

for i in `find ../data -name '*.new.json.intermediate.x3d'`
do
	${NODE} ${NODEDIR}/xmldiff.mjs `dirname $i  | sed 's/.\/www_web3d_org/\/c\/x3d-code\/www.web3d.org/'`/`basename $i .new.json.intermediate.x3d`.x3d $i
done

# old way of comparing output from nashorn

for i in `find ../data -name '*.new.x3d'`
do
	${NODE} ${NODEDIR}/xmldiff.mjs `dirname $i  | sed 's/.\/www_web3d_org/\/c\/x3d-code\/www.web3d.org/'`/`basename $i .new.x3d`.x3d $i
done
