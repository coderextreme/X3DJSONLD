#!/bin/bash
set -euo pipefail
IFS=$'\n\t'

. ./classpath

export STYLESHEETDIR=../lib/stylesheets

# find  ../data/*.x3d | grep -v new | xargs -P $PROCESSORS java net.coderextreme.RunSaxon --- ---overwrite --${STYLESHEETDIR}/X3dToJson.xslt -${JSONEXT} | xargs -P $PROCESSORS ${NODE} ${NODEDIR}/json2all.js
# find  ../data/*.x3d | grep -v new | xargs -P $PROCESSORS java net.coderextreme.RunSaxon --- ---overwrite --${STYLESHEETDIR}/X3dToJson.xslt -${JSONEXT} | xargs ${NODE} ${NODEDIR}/xml2all.js | xargs -P $PROCESSORS ${NODE} ${NODEDIR}/json2all.js
find  ../data/*.x3d | grep -v new | xargs -P $PROCESSORS java net.coderextreme.RunSaxon --- ---overwrite --${STYLESHEETDIR}/X3dToJson.xslt -${JSONEXT} | xargs -P $PROCESSORS ${NODE} ${NODEDIR}/json2all.js
for i in ../data/*.${JSONEXT}.new
do
	${NODE} ../node/jsondiff.js `dirname $i`/`basename $i .${JSONEXT}.new`.${JSONEXT} $i
done
