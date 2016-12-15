#!/bin/sh
X3DJSONLD=./../pythonSAI/
export CLASSPATH="${X3DJSONLD}jslint4java-2.0.5.jar;${X3DJSONLD}json-schema-validator-2.2.6-lib.jar;${X3DJSONLD}X3dJavaSceneAccessInterface3.3.classes.jar;${X3DJSONLD}X3dJavaSceneAccessInterface3.3.full.jar;${CLASSPATH}"
for i in  abox.java arc.java ArchHalf.java ArchPrototype.java box.java bubbles.java cobweb.java CoordinateAxes.java ExtrusionHeart.java flipper.java flowers2.java flowers4.java flowers7.java force.java geo.java geobubbles.java IcosahedronSubdivisionLevel5.java mirror.java mirror2.java NancyNativeTags.java NancyPrototypes.java ObliqueStrategies.java pp3.java qq3.java rubik.java rubikFurnace.java rubikOnFire.java RunSaxon.java
do
	javac -cp ${CLASSPATH} $i
done
