#!/bin/sh -x

# for i in for.json
for i in ArchPrototype.json ObliqueStrategies.json  NancyPrototypes.json for.json rubikOnFire.json bubbles.json rubik.json pp3.json qq3.json cobweb.json force.json
do
	echo "=========================$i====================="
	// read me
	node PPP.js $i > `basename $i .json`s.json
done
