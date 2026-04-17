#!/bin/bash
# set -euo pipefail
IFS=$'\n\t'

# Run the Test Suite

# accepts files with .x3d extension

. ./classpath

${PYTHON} -m pip install --upgrade pip
${PIP} install x3d
${PIP} install xmlschema
# ${PYTHON} ../python/classes.py
pushd ../java
echo $CLASSPATH
javac -proc:full net/coderextreme/RunSaxon.java net/coderextreme/X3DRoots.java
popd

echo translating to json
(ls "$@" | grep -v intermediate | grep -v "\.new") | xargs -P $PROCESSORS java -Xss1g -Xmx19g net.coderextreme.RunSaxon ---overwrite ---silent --../lib/stylesheets/X3dToJson.xslt ---
echo translating to java
(ls "$@" | grep -v intermediate | grep -v "\.new") | xargs -P $PROCESSORS java -Xss1g -Xmx19g net.coderextreme.RunSaxon ---overwrite ---silent --../lib/stylesheets/X3dToJava.xslt -java ---
echo translating to python
(ls "$@" | grep -v intermediate | grep -v "\.new" | grep -v Gramps8Final | grep -v 'john{,2,3}.x3d') | xargs -P $PROCESSORS java -Xss1g -Xmx19g net.coderextreme.RunSaxon ---overwrite ---silent --../lib/stylesheets/X3dToPython.xslt -py ---
echo translating to classic VRML
(ls "$@" | grep -v intermediate | grep -v "\.new" | xargs -P $PROCESSORS java -Xss1g -Xmx19g net.coderextreme.RunSaxon ---overwrite ---silent --../lib/stylesheets/X3dToX3dvClassicVrmlEncoding.xslt -x3dv ---
echo translating to Turtle
(ls "$@" | grep -v intermediate | grep -v "\.new" | xargs -P $PROCESSORS java -Xss1g -Xmx19g net.coderextreme.RunSaxon ---overwrite ---silent --../lib/stylesheets/X3dToTurtle.xslt -ttl ---
