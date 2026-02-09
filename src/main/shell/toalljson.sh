#!/bin/bash
# set -euo pipefail
IFS=$'\n\t'

# Run the Stylesheet

# accepts files with .x3d extension

. ./classpath

# ${PYTHON} ../python/classes.py
pushd ../java
javac -proc:full net/coderextreme/RunSaxon.java net/coderextreme/X3DRoots.java
popd

STYLESHEETDIR=../lib/stylesheets
# OVERWRITE=
OVERWRITE=---overwrite

echo  "find ~/www.web3d.org/x3d/content/examples -name '*.x3d' | grep -v intermediate | grep -v  '\.new'  | tr '\n' '\0'| xargs -0 -P $PROCESSORS java net.coderextreme.RunSaxon --- ${OVERWRITE} --${STYLESHEETDIR}/X3dToJson.xslt -${JSONEXT} | sed 's/^\(.*\)\$/\"\1\"/' | xargs -P $PROCESSORS ${NODE} ${NODEDIR}/json2all.js"
find ~/www.web3d.org/x3d/content/examples -name '*.x3d' | grep -v intermediate | grep -v '\.new' | tr '\n' '\0'| xargs -0 -P "$PROCESSORS" java net.coderextreme.RunSaxon --- "${OVERWRITE}" --"${STYLESHEETDIR}/X3dToJson.xslt" -${JSONEXT} | sed 's/^\(.*\)$/"\1"/' | xargs -P "$PROCESSORS" "${NODE}" "${NODEDIR}/json2all.js"

