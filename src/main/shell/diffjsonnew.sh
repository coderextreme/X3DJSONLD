#!/bin/bash
set -euo pipefail
IFS=$'\n\t'

. ./classpath

export PROCESSORS=${PROCESSORS-8}
STYLESHEETDIR=../lib/stylesheets

# find  ../data/*.x3d | grep -v new | xargs -P $PROCESSORS java net.coderextreme.RunSaxon --- ---overwrite --${STYLESHEETDIR}/X3dToJson.xslt -json | xargs -P $PROCESSORS ${NODE} ${NODEDIR}/json2all.js
# find  ../data/*.x3d | grep -v new | xargs -P $PROCESSORS java net.coderextreme.RunSaxon --- ---overwrite --${STYLESHEETDIR}/X3dToJson.xslt -json | xargs ${NODE} ${NODEDIR}/xml2all.js | xargs -P $PROCESSORS ${NODE} ${NODEDIR}/json2all.js
find  ../data/*.x3d | grep -v new | xargs -P $PROCESSORS java net.coderextreme.RunSaxon --- ---overwrite --${STYLESHEETDIR}/X3dToJson.xslt -json | xargs -P $PROCESSORS ${NODE} ${NODEDIR}/json2all.js
for i in ../data/*.json.new
do
	${NODE} ../node/jsondiff.js `dirname $i`/`basename $i .json.new`.json $i
done
