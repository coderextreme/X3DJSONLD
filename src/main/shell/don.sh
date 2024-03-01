#!/bin/bash
# set -euo pipefail
IFS=$'\n\t'

# Run the Test Suite

# accepts files with .x3d extension
export PROCESSORS=${PROCESSORS-8}

. ./classpath

pip3 install x3d
pip3 install xmlschema
# py ../python/classes.py
pushd ../java
javac -proc:full -cp "${CLASSPATH}" net/coderextreme/RunSaxon.java
popd

	#if false
	#then
echo translating to java
(ls "$@" | grep -v intermediate | grep -v "\.new") | xargs -P $PROCESSORS java -Xss1g -Xmx4g net.coderextreme.RunSaxon ---overwrite ---silent --../lib/stylesheets/X3dToJava.xslt -java ---../java/net/x3djsonld/data/
echo translating to json
(ls "$@" | grep -v intermediate | grep -v "\.new") | xargs -P $PROCESSORS java -Xss1g -Xmx4g net.coderextreme.RunSaxon ---overwrite ---silent --../lib/stylesheets/X3dToJson.xslt ---
echo translating to graaljs
(ls "$@" | grep -v intermediate | grep -v "\.new") | xargs -P $PROCESSORS java -Xss1g -Xmx4g net.coderextreme.RunSaxon ---overwrite ---silent --../lib/stylesheets/X3dToES5.xslt -js ---../graaljs/net/x3djsonld/data/
echo translating to node.js
(ls "$@" | grep -v intermediate | grep -v "\.new") | xargs -P $PROCESSORS java -Xss1g -Xmx4g net.coderextreme.RunSaxon ---overwrite ---silent --../lib/stylesheets/X3dToNodeJS.xslt -js ---../node/net/x3djsonld/data/
echo translating to python
(ls "$@" | grep -v intermediate | grep -v "\.new") | xargs -P $PROCESSORS java -Xss1g -Xmx4g net.coderextreme.RunSaxon ---overwrite ---silent --../lib/stylesheets/X3dToPython.xslt -py ---../python/net/x3djsonld/data/
	#fi
for FILE in $@
do
	X3D=`basename $FILE .x3d`
echo swapping class names
perl -p -i -e "s/NeedClassName/$X3D/g" "$FILE"
perl -p -i -e "s/JohnBoy/$X3D/g" "$FILE"

echo compiling
pushd ../java
find ./net/x3djsonld/data -name "${X3D}.java" | xargs -L 1 -P $PROCESSORS javac.exe -proc:full -J-Xss1g -J-Xmx4g -cp ".;C:/Users/john/pythonSAI/saxon-he-12.1.jar;C:/Users/john/pythonSAI/X3DJSAIL.4.0.full.jar"

echo running java
echo export CLASSPATH=".;C:/Users/john/pythonSAI/saxon-he-12.1.jar;C:/Users/john/pythonSAI/X3DJSAIL.4.0.full.jar"
export CLASSPATH=".;C:/Users/john/pythonSAI/saxon-he-12.1.jar;C:/Users/john/pythonSAI/X3DJSAIL.4.0.full.jar"
#for i in `ls "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.\./net\/x3djsonld/' -e 's/\.x3d$//'`
#do
	mkdir -p net/x3djsonld/data
	echo '$' java -Xss1g -Xmx4g -cp ".;C:/Users/john/pythonSAI/saxon-he-12.1.jar;C:/Users/john/pythonSAI/X3DJSAIL.4.0.full.jar" net/x3djsonld/data/${X3D}
	java.exe -Xss1g -Xmx4g -cp ".;C:/Users/john/pythonSAI/saxon-he-12.1.jar;C:/Users/john/pythonSAI/X3DJSAIL.4.0.full.jar" net/x3djsonld/data/${X3D}
#done
popd


echo running ../shell/jjs.sh
pushd ../graaljs
echo "find ./net/x3djsonld/data -name ${X3D}.js | xargs -L 1 -P $PROCESSORS ../shell/jjs.sh"
find ./net/x3djsonld/data -name "${X3D}.js" | xargs -L 1 -P $PROCESSORS ../shell/jjs.sh
popd

echo running python
pushd ../python
find ./net/x3djsonld/data -name "${X3D}.py" | xargs -L 1 -P $PROCESSORS py.exe
popd

echo running node
pushd ../node
echo "find ./net/x3djsonld/data -name ${X3D}.js | xargs -L 1 -P $PROCESSORS node.exe"
find ./net/x3djsonld/data -name "${X3D}.js" | xargs -L 1 -P $PROCESSORS node.exe
popd

done
