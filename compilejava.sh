#!/bin/sh
jar -cMf GoodJava.zip RunSaxon.java
jar -cMf BadJava.zip compilejava.sh runjson.sh
jar -cMf DiffJSON.zip compilejava.sh runjson.sh
X3DJSONLD=./../pythonSAI/
export CLASSPATH=".;${X3DJSONLD}saxon9he.jar;${X3DJSONLD}jslint4java-2.0.5.jar;${X3DJSONLD}json-schema-validator-2.2.6-lib.jar;${X3DJSONLD}X3DJSAIL.3.3.classes.jar;${X3DJSONLD}X3DJAIL.3.3.full.jar;${CLASSPATH}"
for i in `ls *.java | grep -v RunSaxon.java` `find www_web3d_org/ -name '*.java'`
do
	BASE=`dirname $i`/`basename $i .java` 
	CLASS=`echo $BASE | sed 's/^[\.\/]*//'`
	echo $CLASS.java 1>&2
	echo $CLASS.java 2>&1
	if javac $i && java $CLASS $CLASS.new.json
	then
		if [ -z "`diff -w $BASE.json $CLASS.new.json`" ]
		then
			jar -uMf GoodJava.zip $i
		else
			echo diff -w $BASE.json $CLASS.new.json 1>&2
			diff -w $BASE.json $CLASS.new.json > $CLASS.diff
			jar -uMf DiffJSON.zip $BASE.json $CLASS.new.json $CLASS.diff
			
		fi
	else
		jar -uMf BadJava.zip $i
	fi
done
