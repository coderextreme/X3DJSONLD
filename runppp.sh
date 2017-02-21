#!/bin/sh

mkdir -p ppp
for i in box.json ArchPrototype.json NancyPrototypes.json for.json rubikOnFire.json bubbles.json rubik.json pp3.json qq3.json cobweb.json force.json rubikFurnace.json
do
	echo "=========================$i=====================PPP" 1>&2
	node PPP.js $i > ppp/`basename $i`
	echo "=========================$i=====================CompleteXMLPrototypeExpander" 1>&2
	node CompleteXMLPrototypeExpander.js `basename $i .json`.x3d
done
SCRIPTS=`find www_web3d_org/ -type f -name '*.json' | xargs grep -lw Script`
SCRIPTS=`echo $SCRIPTS | sed 's/ /|/g'`
# echo $SCRIPTS
for i in `find www_web3d_org/ Library -type f -name '*json' | xargs grep -lw ProtoInstance | egrep -v $SCRIPTS`
do
	echo "=========================$i=====================" 1>&2
	mkdir -p ppp/`dirname $i`
	# node PPP.js $i
	echo "=========================$i=====================PPP" 1>&2
	node PPP.js $i > ppp/`dirname $i`/`basename $i`
	echo "=========================$i=====================CompleteXMLPrototypeExpander" 1>&2
	node CompleteXMLPrototypeExpander.js `dirname $i`/`basename $i .json`.x3d
done
