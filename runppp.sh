#!/bin/sh

mkdir -p ppp
for i in box.json ArchPrototype.json ObliqueStrategies.json  NancyPrototypes.json for.json rubikOnFire.json bubbles.json rubik.json pp3.json qq3.json cobweb.json force.json
do
	git add $i
	echo "=========================$i====================="
	read me
	node PPP.js $i > ppp/`basename $i`
	git add ppp/`basename $i`
done
for i in `find examples/X3dForWebAuthors/Chapter14-Prototypes examples/Vrml2.0Sourcebook/Chapter31-Prototypes examples/Basic/UniversalMediaMaterials -type f -name '*json' | xargs grep -ilw ProtoInstance`
do
	echo "=========================$i====================="
	mkdir -p ppp/`dirname $i`
	node PPP.js $i > ppp/`dirname $i`/`basename $i`
	git add ppp/`dirname $i`/`basename $i`
done
