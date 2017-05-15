#!/bin/sh


# Run the Test Suite

# accepts files with .x3d extension
export PROCESSORS=${PROCESSORS-8}

. ./classpath

javac RunSaxon.java
python classes.py

echo translating to json
(ls "$@" | grep -v intermediate | grep -v "\.new") | xargs -P $PROCESSORS java RunSaxon ---silent
echo translating to ecmascript 5
(ls "$@" | grep -v intermediate | grep -v "\.new") | xargs -P $PROCESSORS java RunSaxon ---silent --X3dToES5.xslt -sail.js
echo translating to java
(ls "$@" | grep -v intermediate | grep -v "\.new") | xargs -P $PROCESSORS java RunSaxon ---silent --X3dToJava.xslt -java
echo replacing NeedClassName
(ls "$@" | grep -v intermediate | grep -v "\.new") | xargs -P $PROCESSORS sh replaceclass.sh
echo compiling
(ls "$@" | grep -v intermediate | grep -v "\.new") | sed 's/\.x3d$/.java/' | xargs -L 1 -P $PROCESSORS javac -J-Xss1g -J-Xmx4g
echo running java
for i in `ls "$@" | grep -v intermediate | grep -v "\.new" | sed 's/\.x3d$//' | sed 's/^\.+\///'`
do
	pushd `dirname $i` > /dev/null
	echo
	echo $i
	java -d64 -Xss1g -Xmx4g `basename $i` # sh runToError.sh
	popd > /dev/null
done

echo running jjs
(ls "$@" | grep -v intermediate | grep -v "\.new") | sed "s/\.x3d$/.sail.js/" | sed 's/\/c\/x3d-code\/www.web3d.org/www_web3d_org/' | xargs -L 1 -P $PROCESSORS jjs -J-Xss1g -J-Xmx4g -cp "${NASHORN_CLASSPATH}"
