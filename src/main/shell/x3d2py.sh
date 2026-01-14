#!/bin/bash
set -euo pipefail
IFS=$'\n\t'

# Run the Test Suite

# accepts files with .x3d extension

. ./classpath

pushd ../java
javac -proc:full net/coderextreme/RunSaxon.java
popd

ls *.x3d | xargs -P $PROCESSORS java net.coderextreme.RunSaxon ---overwrite | xargs -P $PROCESSORS ${NODE} json2py.js
