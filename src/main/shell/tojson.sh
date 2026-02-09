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

# echo  "ls -d $@ | grep -v intermediate | grep -v  '\.new'  | tr '\n' '\0'| xargs -0 -P $PROCESSORS java net.coderextreme.RunSaxon --- ${OVERWRITE} --${STYLESHEETDIR}/X3dToJson.xslt -${JSONEXT} | sed 's/^\(.*\)\$/\"\1\"/' | xargs -P $PROCESSORS ${NODE} ${NODEDIR}/json2all.js"
# ls -d "$@" | grep -v intermediate | grep -v '\.new' | tr '\n' '\0'| xargs -0 -P "$PROCESSORS" java net.coderextreme.RunSaxon --- "${OVERWRITE}" --"${STYLESHEETDIR}/X3dToJson.xslt" -${JSONEXT} | sed 's/^\(.*\)$/"\1"/' | xargs -P "$PROCESSORS" "${NODE}" "${NODEDIR}/json2all.js"
echo "ls -d \"$@\" | grep -v intermediate | grep -v '\.new' | tr '\n' '\0'| xargs -0 -P \"$PROCESSORS\" bash runtidy.sh | sed 's/^\(.*\)$/\"\1\"/' | xargs -P \"$PROCESSORS\" \"${NODE}\" \"${NODEDIR}/json2all.js\""
ls -d "$@" | grep -v intermediate | grep -v '\.new' | tr '\n' '\0'| xargs -0 -L 33 -P "$PROCESSORS" bash runtidy.sh | sed 's/^\(.*\)$/"\1"/' | xargs -P "$PROCESSORS" "${NODE}" "${NODEDIR}/json2all.js"
