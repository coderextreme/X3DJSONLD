#!/bin/sh

# Run the Test Suite

# accepts files with .x3d extension
export PROCESSORS=${PROCESSORS-8}

. ./classpath

python ../python/classes.py

echo translating to json
(ls "$@" | grep -v intermediate | grep -v "\.new") | xargs -P $PROCESSORS java net.coderextreme.RunSaxon ---overwrite ---silent --../lib/stylesheets/X3dToJson.xslt ---
echo translating to ecmascript 5
(ls "$@" | grep -v intermediate | grep -v "\.new") | xargs -P $PROCESSORS java net.coderextreme.RunSaxon ---overwrite ---silent --../lib/stylesheets/X3dToES5.xslt -sail.js ---../nashorn/net/x3djsonld/data/
echo translating to java
(ls "$@" | grep -v intermediate | grep -v "\.new") | xargs -P $PROCESSORS java net.coderextreme.RunSaxon ---overwrite ---silent --../lib/stylesheets/X3dToJava.xslt -java ---../java/net/x3djsonld/data/
echo compiling
pushd ../java
find ./net/x3djsonld/data -name '*.java' | xargs -L 1 -P $PROCESSORS javac -J-Xss1g -J-Xmx4g
echo running java
echo export CLASSPATH='"'${CLASSPATH}'"'
for i in `ls "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.\./net\/x3djsonld/' -e 's/\.x3d$//'`
do
	# java -Xss1g -Xmx4g $i x3d ../data/$i.don.x3d # sh runToError.sh
	mkdir -p ../data/`dirname $i` 
	echo '$' java $i ../data/`basename $i`.x3d
	java -cp "${CLASSPATH}" $i ../data/`basename $i`.x3d
done
popd
echo running jjs
pushd ../nashorn
find ./net/x3djsonld/data -name '*.sail.js' | xargs -L 1 -P $PROCESSORS jjs -J-Xss1g -J-Xmx4g -cp "${NASHORN_CLASSPATH}"
popd
