#!/bin/sh

# run the proto preprocessor

. ./classpath
javac RunSaxon.java

EXAMPLES=examples/

mkdir -p ppp
echo ===================CompleteXMLPrototypeExpander.js Local==========
ls *.x3d | grep -v intermediate | grep -v "\.new" | xargs grep -lw ProtoInstance | xargs node CompleteXMLPrototypeExpander.js
echo ===================PPP.js Local===================================
ls *.json | grep -v intermediate | grep -v "\.new" | grep -v Schema | grep -v package.json | xargs grep -lw ProtoInstance | xargs node.exe PPP.js

SCRIPTS=
for i in `find "$EXAMPLES" -type f -name '*.json' -print0 | xargs -0 grep -lw ProtoInstance | grep -v " "`
do
	if grep -lw Script $i > /dev/null
	then
		SCRIPTS="$SCRIPTS|$i"
	fi
done
# echo $SCRIPTS


for i in `find Library "$EXAMPLES" -type f -name '*json' -print0 | xargs -0 grep -lw ProtoInstance | egrep -v $SCRIPTS`
do
	mkdir -p ppp/`dirname $i`
done

echo ===================CompleteXMLPrototypeExpander.js Examples=======
find Library "$EXAMPLES" -type f -name '*.x3d'| grep -v intermediate | grep -v "\.new"  | xargs grep -lw ProtoInstance | egrep -v $SCRIPTS | xargs node CompleteXMLPrototypeExpander.js

echo ===================PPP.js Examples================================
find Library "$EXAMPLES" -type f -name '*.json' -print0 | xargs -0 grep -lw ProtoInstance | egrep -v $SCRIPTS # | xargs node PPP.js
