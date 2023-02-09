#!/bin/bash

# Run the Test Suite

# accepts files with .x3d extension
export PROCESSORS=${PROCESSORS-8}

. ./classpath

pip3 install x3d
pip3 install xmlschema
# python3 ../python/classes.py
pushd ../java
javac -cp "${CLASSPATH}" net/coderextreme/RunSaxon.java
popd

for FILE in $@
do
	X3D=`basename $FILE .x3d`

echo translating to json
(ls "$@" | grep -v intermediate | grep -v "\.new") | xargs -P $PROCESSORS java net.coderextreme.RunSaxon ---overwrite ---silent --../lib/stylesheets/X3dToJson.xslt ---
# echo translating to nashorn
# (ls "$@" | grep -v intermediate | grep -v "\.new") | xargs -P $PROCESSORS java net.coderextreme.RunSaxon ---overwrite ---silent --../lib/stylesheets/X3dToES5.xslt -js ---../nashorn/net/x3djsonld/data/
echo translating to node.js
(ls "$@" | grep -v intermediate | grep -v "\.new") | xargs -P $PROCESSORS java net.coderextreme.RunSaxon ---overwrite ---silent --../lib/stylesheets/X3dToNodeJS.xslt -js ---../node/net/x3djsonld/data/
echo translating to java
(ls "$@" | grep -v intermediate | grep -v "\.new") | xargs -P $PROCESSORS java net.coderextreme.RunSaxon ---overwrite ---silent --../lib/stylesheets/X3dToJava.xslt -java ---../java/net/x3djsonld/data/
echo translating to python
(ls "$@" | grep -v intermediate | grep -v "\.new") | xargs -P $PROCESSORS java net.coderextreme.RunSaxon ---overwrite ---silent --../lib/stylesheets/X3dToPython.xslt -py ---../python/net/x3djsonld/data/
echo compiling
pushd ../java
find ./net/x3djsonld/data -name "${X3D}.java" | xargs -L 1 -P $PROCESSORS javac -J-Xss1g -J-Xmx4g
echo running java
echo export CLASSPATH='"'${CLASSPATH}'"'
for i in `ls "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.\./net\/x3djsonld/' -e 's/\.x3d$//'`
do
	# java -Xss1g -Xmx4g $i x3d ../data/$i.don.x3d # sh runToError.sh
	mkdir -p ../data/`dirname $i` 
	echo '$' java $i -validate ../data/`basename $i`.x3d
	java -cp "${CLASSPATH}" $i -validate ../data/`basename $i`.x3d
done
popd
# echo running jjs
# pushd ../nashorn
# find ./net/x3djsonld/data -name "${X3D}.js" | xargs -L 1 -P $PROCESSORS jjs -J-Xss1g -J-Xmx4g -cp "${NASHORN_CLASSPATH}"
# popd
echo running python
pushd ../python
find ./net/x3djsonld/data -name "${X3D}.py" | xargs -L 1 -P $PROCESSORS python3
popd
echo running node
pushd ../node
find ./net/x3djsonld/data -name "${X3D}.js" | xargs -L 1 -P $PROCESSORS node
popd

done
