#!/bin/bash
# set -euo pipefail
IFS=$'\n\t'

# Run the Stylesheet

# accepts files with .x3d extension
export PROCESSORS="${PROCESSORS-8}"

. ./classpath

# ${PYTHON} ../python/classes.py
pushd ../java
echo "export CLASSPATH=$CLASSPATH"
# export CLASSPATH="C:/Users/jcarl/X3DJSONLD/X3DJSAIL.4.0.full.jar;C:/Users/jcarl/X3DJSONLD/saxon-he-12.8.jar;.;../java"
echo "export CLASSPATH=$CLASSPATH"
javac -proc:full -cp "${CLASSPATH}" net/coderextreme/RunSaxon.java net/coderextreme/X3DRoots.java
popd
# sudo pacman -Syu leiningen

STYLESHEETDIR=../lib/stylesheets
# OVERWRITE=
OVERWRITE=---overwrite

echo  "ls -d $@ | grep -v intermediate | grep -v  '\.new'  | tr '\n' '\0'| xargs -0 -P $PROCESSORS java net.coderextreme.RunSaxon --- ${OVERWRITE} --${STYLESHEETDIR}/X3dToJson.xslt -json | sed 's/^\(.*\)\$/\"\1\"/' | xargs -P $PROCESSORS ${NODE} ${NODEDIR}/json2all.js"
ls -d "$@" | grep -v intermediate | grep -v '\.new' | tr '\n' '\0'| xargs -0 -P "$PROCESSORS" java net.coderextreme.RunSaxon --- "${OVERWRITE}" --"${STYLESHEETDIR}/X3dToJson.xslt" -json | sed 's/^\(.*\)$/"\1"/' | xargs -P "$PROCESSORS" "${NODE}" "${NODEDIR}/json2all.js"

