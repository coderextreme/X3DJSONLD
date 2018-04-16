#!/bin/sh

# run the proto preprocessor

. ./classpath

EXAMPLES=/c/x3d-code/www.web3d.org/x3d/content/examples/
# Now does scripts too!
echo ===================PPP.js Local=================================== 1>&2
ls ../data/*.json | grep -v intermediate | grep -v "\.new" | grep -v Schema | grep -v package.json | xargs ${NODE} ${NODEDIR}/PPP.js

echo ===================CompleteXMLPrototypeExpander.js Local==========
ls ../data/*.x3d | grep -v intermediate | grep -v "\.new" | xargs grep -lw ProtoInstance | xargs ${NODE} ${NODEDIR}/CompleteXMLPrototypeExpander.js ---../ --../lib/stylesheets/X3dToJson.xslt

# following doesn't see to want to work

JSONSCRIPTS=
for i in `find "$EXAMPLES" -type f -name '*.json' -print0 | xargs -0 grep -lw ProtoInstance | grep -v " " | xargs grep -lw Script`
do
	JSONSCRIPTS="$JSONSCRIPTS|$i"
done
JSONSCRIPTS=`echo $JSONSCRIPTS | sed -e 's/^\|//' -e 's/\|$//'`
# echo $JSONSCRIPTS

echo ===================PPP.js Examples================================
find "$EXAMPLES" -type f -name '*.json' | grep -v " " | xargs grep -lw ProtoInstance | egrep -v $JSONSCRIPTS | xargs ${NODE} ${NODEDIR}/PPP.js

X3DSCRIPTS=
for i in `find "$EXAMPLES" -type f -name '*.json' -print0 | xargs -0 grep -lw ProtoInstance | grep -v " " | xargs grep -lw Script`
do
	X3DSCRIPTS="$X3DSCRIPTS|$i"
done
X3DSCRIPTS=`echo $X3DSCRIPTS | sed -e 's/^\|//' -e 's/\|$//'`
# echo $X3DSCRIPTS


echo ===================CompleteXMLPrototypeExpander.js Examples=======
find "$EXAMPLES" -type f -name '*.x3d'| grep -v " "| grep -v intermediate | grep -v "\.new"  | xargs grep -lw ProtoInstance | egrep -v $X3DSCRIPTS | xargs ${NODE} ${NODEDIR}/CompleteXMLPrototypeExpander.js ---../ --../lib/stylesheets/X3dToJson.xslt
