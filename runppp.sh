#!/bin/sh

# run the proto preprocessor

. ./classpath
javac RunSaxon.java

EXAMPLES=/c/x3d-code/www.web3d.org/x3d/content/examples/

mkdir -p ppp
echo ===================CompleteXMLPrototypeExpander.js Local==========
ls *.x3d | grep -v intermediate | grep -v "\.new" | xargs grep -lw ProtoInstance | xargs node CompleteXMLPrototypeExpander.js
echo ===================PPP.js Local===================================
ls *.json | grep -v intermediate | grep -v "\.new" | grep -v Schema | grep -v package.json | xargs grep -lw ProtoInstance | xargs node PPP.js
exit 

SCRIPTS=`find "$EXAMPLES" -type f -name '*.json' | grep -v intermediate | grep -v "\.new"  | xargs grep -lw Script`
SCRIPTS=`echo $SCRIPTS | sed 's/ /|/g'`


for i in `find Library "$EXAMPLES" -type f -name '*json'| grep -v intermediate | grep -v "\.new"  | xargs grep -lw ProtoInstance | egrep -v $SCRIPTS`
do
	mkdir -p ppp/`dirname $i`
done

echo ===================CompleteXMLPrototypeExpander.js Examples=======
find Library "$EXAMPLES" -type f -name '*.x3d'| grep -v intermediate | grep -v "\.new"  | xargs grep -lw ProtoInstance | egrep -v $SCRIPTS | xargs node CompleteXMLPrototypeExpander.js

echo ===================PPP.js Examples================================
find Library "$EXAMPLES" -type f -name '*json'| grep -v intermediate | grep -v "\.new"  | xargs grep -lw ProtoInstance | egrep -v $SCRIPTS| xargs node PPP.js
