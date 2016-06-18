#!/bin/sh

mkdir -p ppp
for i in box.json ArchPrototype.json NancyPrototypes.json for.json rubikOnFire.json bubbles.json rubik.json pp3.json qq3.json cobweb.json force.json
do
	echo "=========================$i=====================" 1>&2
	node PPP.js $i > ppp/`basename $i`
done
SCRIPTS=`find examples/X3dForWebAuthors/Chapter14-Prototypes examples/Vrml2.0Sourcebook/Chapter31-Prototypes examples/Basic/UniversalMediaMaterials -type f -name '*json' | xargs grep -lw Script`
SCRIPTS=`echo $SCRIPTS | sed 's/ /|/g'`
echo $SCRIPTS
# for i in examples/Vrml2.0Sourcebook/Chapter31-Prototypes/Figure31.9SpinGroupPrototype.json
for i in `find examples/X3dForWebAuthors/Chapter14-Prototypes examples/Vrml2.0Sourcebook/Chapter31-Prototypes examples/Basic/UniversalMediaMaterials Library/Examples/Gears -type f -name '*json' | xargs grep -lw ProtoInstance | egrep -v $SCRIPTS`
do
	echo "=========================$i=====================" 1>&2
	mkdir -p ppp/`dirname $i`
	# node PPP.js $i
	node PPP.js $i > ppp/`dirname $i`/`basename $i`
	#if [ $i == examples/X3dForWebAuthors/Chapter14-Prototypes/ViewFrustumExample.json ]
	#then
	#	read me
	#fi
done
