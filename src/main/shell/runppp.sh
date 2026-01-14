#!/bin/bash -x
# set -euo pipefail
IFS=$'\n\t'

# run the proto preprocessor

. ./classpath

EXAMPLES=${HOMESFOLDER}/$USERNAME/www.web3d.org/x3d/content/examples/

# Now does scripts too!
echo ===================PPP.js Local=================================== 1>&2
ls ../data/*.${JSONEXT} | grep -v intermediate | grep -v "\.new" | grep -v Schema | grep -v package.json | xargs ${NODE} ${NODEDIR}/PPP.js

ls ../ppp/*.mjs | grep -v good | xargs -L 1 ./testjs.sh

echo ===================CompleteXMLPrototypeExpander.js Local========== 1>&2
ls ../data/*.x3d | grep -v intermediate | grep -v "\.new" | xargs grep -lw ProtoInstance | xargs ${NODE} ${NODEDIR}/CompleteXMLPrototypeExpander.js

# following doesn't see to want to work

echo ===================Find Protos in Examples================================ 1>&2
# Gather files with PROTOs and Scripts
JSONSCRIPTS=
for i in `find "$EXAMPLES" -type f -name "*.${JSONEXT}" -print0 | xargs -0 grep -lw ProtoInstance | grep -v " " | xargs grep -lw Script`
do
	JSONSCRIPTS="$JSONSCRIPTS|$i"
done
JSONSCRIPTS=`echo $JSONSCRIPTS | sed -e 's/^\|//' -e 's/\|$//'`
# echo $JSONSCRIPTS

echo ===================PPP.js Examples================================ 1>&2
find "$EXAMPLES" -type f -name "*.${JSONEXT}" | grep -v " " | xargs grep -lw ProtoInstance | egrep -v $JSONSCRIPTS | xargs ${NODE} ${NODEDIR}/PPP.js




echo ===================Find Protos in JSON Examples for X3D Examples ================================ 1>&2
# Gather files with PROTOs and Scripts
X3DSCRIPTS=
for i in `find "$EXAMPLES" -type f -name "*.${JSONEXT}" -print0 | xargs -0 grep -lw ProtoInstance | grep -v " " | xargs grep -lw Script`
do
	X3DSCRIPTS="$X3DSCRIPTS|$i"
done
X3DSCRIPTS=`echo $X3DSCRIPTS | sed -e 's/^\|//' -e 's/\|$//'`
# echo $X3DSCRIPTS


echo ===================CompleteXMLPrototypeExpander.js X3D Examples======= 1>&2
find "$EXAMPLES" -type f -name '*.x3d'| grep -v " "| grep -v intermediate | grep -v "\.new"  | xargs grep -lw ProtoInstance | egrep -v $X3DSCRIPTS | xargs ${NODE} ${NODEDIR}/CompleteXMLPrototypeExpander.js
