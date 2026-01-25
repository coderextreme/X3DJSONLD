#!/bin/bash
# set -euo pipefail
set -x
IFS=$'\n\t'

# JSON Schema generation

# accepts files with .x3d extension

. ./classpath

# ${PYTHON} ../python/classes.py
pushd ../java
javac -cp ${CLASSPATH} -proc:full net/coderextreme/RunSaxon.java net/coderextreme/X3DRoots.java
popd
# sudo pacman -Syu leiningen

STYLESHEETDIR=../xslt
# OVERWRITE=
OVERWRITE=---overwrite

java net.coderextreme.RunSaxon ---../schema/ ${OVERWRITE} --${STYLESHEETDIR}/generateJSONschema2020-12.xslt -json ../../specifications/X3dUnifiedObjectModel-4.1.xml
