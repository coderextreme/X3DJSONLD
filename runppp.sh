#!/bin/sh -x

# for i in force.json
for i in for.json rubikOnFire.json bubbles.json ArchPrototype.json ObliqueStrategies.json rubik.json pp3.json qq3.json cobweb.json force.json NancyPrototypes.json examples/X3dForWebAuthors/KelpForestExhibit/KelpForestMain.json 
do
	echo "=========================$i====================="
	read me
	node PPP.js $i > `basename $i .json`s.json
done
