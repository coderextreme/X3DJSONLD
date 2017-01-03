#!/bin/sh
X3DJSONLD=./../pythonSAI/
export CLASSPATH="${X3DJSONLD}jslint4java-2.0.5.jar;${X3DJSONLD}json-schema-validator-2.2.6-lib.jar;${X3DJSONLD}X3dJavaSceneAccessInterface3.3.classes.jar;${X3DJSONLD}X3dJavaSceneAccessInterface3.3.full.jar;${CLASSPATH}"
for i in `ls *.java | grep -v RunSaxon.java` `find examples/ -name '*.java'`
do
	if javac -cp ${CLASSPATH} $i
	then
		tar -rf GoodJava.tar $i
	else
		tar -rf BadJava.tar $i
	fi
done
