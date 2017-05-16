#!/bin/bash

. ./classpath


for i in `find . -name '*.x3d.new'`
do
	${NODE} xmldiff.js `dirname $i  | sed 's/.\/www_web3d_org/\/c\/x3d-code\/www.web3d.org/'`/`basename $i .x3d.new`.x3d $i
done

for i in `find . -name '*.new.json'`
do
	${NODE} jsondiff.js `dirname $i  | sed 's/.\/www_web3d_org/\/c\/x3d-code\/www.web3d.org/'`/`basename $i .new.json`.json $i
done

for i in `find . -name '*.new.json.intermediate.x3d'`
do
	${NODE} xmldiff.js `dirname $i  | sed 's/.\/www_web3d_org/\/c\/x3d-code\/www.web3d.org/'`/`basename $i .new.json.intermediate.x3d`.x3d $i
done

# old way of comparing output from nashorn

for i in `find . -name '*.new.x3d'`
do
	${NODE} xmldiff.js `dirname $i  | sed 's/.\/www_web3d_org/\/c\/x3d-code\/www.web3d.org/'`/`basename $i .new.x3d`.x3d $i
done
