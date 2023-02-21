#!/bin/bash

. ./classpath

export PROCESSORS=${PROCESSORS-8}
STYLESHEETDIR=../lib/stylesheets

# find  ../data/*.x3d | grep -v new | xargs -P $PROCESSORS java net.coderextreme.RunSaxon --- ---overwrite --${STYLESHEETDIR}/X3dToJson.xslt -json | xargs -P $PROCESSORS ${NODE} ${NODEDIR}/json2all.mjs
# find  ../data/*.x3d | grep -v new | xargs -P $PROCESSORS java net.coderextreme.RunSaxon --- ---overwrite --${STYLESHEETDIR}/X3dToJson.xslt -json | xargs ${NODE} ${NODEDIR}/xml2all.js | xargs -P $PROCESSORS ${NODE} ${NODEDIR}/json2all.mjs
find  ../data/*.x3d | grep -v new | xargs -P $PROCESSORS java net.coderextreme.RunSaxon --- ---overwrite --${STYLESHEETDIR}/X3dToJson.xslt -json | xargs -P $PROCESSORS ${NODE} ${NODEDIR}/json2all.mjs
for i in ../data/*.json.new
do
	${NODE} ../node/jsondiff.mjs `dirname $i`/`basename $i .json.new`.json $i
done
