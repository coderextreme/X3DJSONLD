#!/bin/bash
set -euo pipefail
IFS=$'\n\t'

# Run the Test Suite

# accepts files with .x3d extension
export PROCESSORS=${PROCESSORS-8}

. ./classpath

pip3 install x3d
pip3 install xmlschema
# py ../python/classes.py
pushd ../java
javac -cp "${CLASSPATH}" net/coderextreme/RunSaxon.java
popd

	#if false
	#then
echo translating to json
(ls "$@" | grep -v intermediate | grep -v "\.new") | xargs -P $PROCESSORS java net.coderextreme.RunSaxon ---overwrite ---silent --../lib/stylesheets/X3dToJson.xslt ---
