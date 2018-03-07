#!/bin/bash

. ./classpath

export PROCESSORS=${PROCESSORS-8}
STYLESHEETDIR=../lib/stylesheets

find ../data/*.x3d|grep -v new | xargs ${NODE} ${NODEDIR}/xml2all.js
# find  ../data/*.x3d | grep -v new | xargs -P $PROCESSORS java net.coderextreme.RunSaxon --- ---overwrite --${STYLESHEETDIR}/X3dToJSON.xslt -json | xargs -P $PROCESSORS ${NODE} ${NODEDIR}/json2all.js
for i in ../data/*.json.new
do
	${NODE} ../node/jsondiff.js `dirname $i`/`basename $i .json.new`.json $i
done
