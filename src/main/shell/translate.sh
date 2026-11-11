#!/bin/bash
# set -euo pipefail
IFS=$'\n\t'

# accepts files with .x3d extension

. ./classpath

pushd ../java
javac -cp ${CLASSPATH} -proc:full net/coderextreme/RunSaxon.java net/coderextreme/X3DRoots.java
popd

export STYLESHEETDIR=../lib/stylesheets
export OVERWRITE=---overwrite
export PROCESSORS=1

ls -d "$@" | grep -v intermediate | grep -v '\.new' | xargs -P "$PROCESSORS" "${NODE}" "../node/json2all.js"
