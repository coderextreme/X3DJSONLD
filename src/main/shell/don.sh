#!/bin/sh

# Run the Test Suite

# accepts files with .x3d extension
export PROCESSORS=${PROCESSORS-8}

. ./classpath

python ../python/classes.py

echo translating to json
(ls "$@" | grep -v intermediate | grep -v "\.new") | xargs -P $PROCESSORS java net.coderextreme.RunSaxon ---overwrite ---silent --../lib/stylesheets/X3dToJson.xslt ---../
echo translating to ecmascript 5
(ls "$@" | grep -v intermediate | grep -v "\.new") | xargs -P $PROCESSORS java net.coderextreme.RunSaxon ---overwrite ---silent --../lib/stylesheets/X3dToES5.xslt -sail.js ---../nashorn/net/x3djsonld/
echo translating to java
(ls "$@" | grep -v intermediate | grep -v "\.new") | xargs -P $PROCESSORS java net.coderextreme.RunSaxon ---overwrite ---silent --../lib/stylesheets/X3dToJava.xslt -java ---../java/net/x3djsonld/
echo compiling
pushd ../java
find ./net/x3djsonld/data -name '*.java' | xargs -L 1 -P $PROCESSORS javac -J-Xss1g -J-Xmx4g
echo running java
find ./net/x3djsonld/data -name '*.java' | sed -e 's/\.\///' -e 's/\.java$//' | xargs -L 1 -P $PROCESSORS java -d64 -Xss1g -Xmx4g  # sh runToError.sh
popd
echo running jjs
pushd ../nashorn
find ./net/x3djsonld/data -name '*.sail.js' | xargs -L 1 -P $PROCESSORS jjs -J-Xss1g -J-Xmx4g -cp "${NASHORN_CLASSPATH}"
popd
