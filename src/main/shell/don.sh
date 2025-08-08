#!/bin/bash
# set -euo pipefail
IFS=$'\n\t'

# Run the Test Suite

# accepts files with .x3d extension
export PROCESSORS=${PROCESSORS-8}

. ./classpath

python.exe -m pip install --upgrade pip
pip3 install x3d
pip3 install xmlschema
# ${PYTHON} ../python/classes.py
pushd ../java
echo "export CLASSPATH=$CLASSPATH"
# export CLASSPATH="C:/Users/jcarl/X3DJSONLD/X3DJSAIL.4.0.full.jar;C:/Users/jcarl/X3DJSONLD/saxon-he-12.8.jar;.;../java"
echo "export CLASSPATH=$CLASSPATH"
javac -proc:full -cp "${CLASSPATH}" net/coderextreme/RunSaxon.java net/coderextreme/X3DRoots.java
javac -proc:full -cp "${CLASSPATH}" net/coderextreme/RunSaxon.java net/coderextreme/X3DRoots.java
popd

#if false
#then
echo translating to java
(ls "$@" | grep -v intermediate | grep -v "\.new") | xargs -P $PROCESSORS java -Xss1g -Xmx19g net.coderextreme.RunSaxon ---overwrite ---silent --../lib/stylesheets/X3dToJava.xslt -java ---../java/net/x3djsonld/data/
echo translating to json
(ls "$@" | grep -v intermediate | grep -v "\.new") | xargs -P $PROCESSORS java -Xss1g -Xmx19g net.coderextreme.RunSaxon ---overwrite ---silent --../lib/stylesheets/X3dToJson.xslt ---
echo translating to graaljs
(ls "$@" | grep -v intermediate | grep -v "\.new") | xargs -P $PROCESSORS java -Xss1g -Xmx19g net.coderextreme.RunSaxon ---overwrite ---silent --../lib/stylesheets/X3dToES5.xslt -js ---../graaljs/net/x3djsonld/data/
echo translating to node.js
(ls "$@" | grep -v intermediate | grep -v "\.new") | xargs -P $PROCESSORS java -Xss1g -Xmx19g net.coderextreme.RunSaxon ---overwrite ---silent --../lib/stylesheets/X3dToNodeJS.xslt -js ---../node/net/x3djsonld/data/
echo translating to python
(ls "$@" | grep -v intermediate | grep -v "\.new" | grep -v Gramps8Final | grep -v 'john[23]?.x3d') | xargs -P $PROCESSORS java -Xss1g -Xmx19g net.coderextreme.RunSaxon ---overwrite ---silent --../lib/stylesheets/X3dToPython.xslt -py ---../python/net/x3djsonld/data/
#fi

echo compiling
for FILE in $@
do
	X3D=`basename $FILE .x3d`
echo swapping class names
perl -p -i -e "s/NeedClassName/$X3D/g" "$FILE"
perl -p -i -e "s/JohnBoy/$X3D/g" "$FILE"

pushd ../java
echo "find ./net/x3djsonld/data -name ${X3D}.java | xargs -L 1 -P $PROCESSORS javac.exe -proc:full -J-Xss1g -J-Xmx19g -cp \"${CLASSPATH}\""
find ./net/x3djsonld/data -name "${X3D}.java" | xargs -L 1 -P $PROCESSORS javac.exe -proc:full -J-Xss1g -J-Xmx19g -cp "${CLASSPATH}"
popd
done

echo running java
for FILE in $@
do
	X3D=`basename $FILE .x3d`

pushd ../java
#for i in `ls "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.\./net\/x3djsonld/' -e 's/\.x3d$//'`
#do
	mkdir -p net/x3djsonld/data
	echo java -Xss1g -Xmx19g -cp "${CLASSPATH}" net/x3djsonld/data/${X3D}
	java -Xss1g -Xmx19g -cp "${CLASSPATH}" net/x3djsonld/data/${X3D}
#done
popd

echo running ../shell/jjs.sh
pushd ../graaljs
echo "find ./net/x3djsonld/data -name ${X3D}.js | xargs -L 1 -P $PROCESSORS ../shell/jjs.sh"
find ./net/x3djsonld/data -name "${X3D}.js" | xargs -L 1 -P $PROCESSORS ../shell/jjs.sh
popd

echo running python
pushd ../python
echo "find ./net/x3djsonld/data -name "${X3D}.py" | xargs -L 1 -P $PROCESSORS ${PYTHON}"
find ./net/x3djsonld/data -name "${X3D}.py" | xargs -L 1 -P $PROCESSORS ${PYTHON}
popd

echo running node
pushd ../node
echo "find ./net/x3djsonld/data -name ${X3D}.js | xargs -L 1 -P $PROCESSORS node"
# find ./net/x3djsonld/data -name "${X3D}.js" | xargs -L 1 -P $PROCESSORS ${NODE}
popd

done
