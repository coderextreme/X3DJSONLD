#!/bin/sh
jar -cMf GoodJSON.zip classpath
jar -cMf DiffJSON.zip classpath
X3DJSONLD=./../pythonSAI/
export CLASSPATH=".;${X3DJSONLD}saxon9he.jar;${X3DJSONLD}jslint4java-2.0.5.jar;${X3DJSONLD}json-schema-validator-2.2.6-lib.jar;${X3DJSONLD}X3DJSAIL.3.3.classes.jar;${X3DJSONLD}X3DJAIL.3.3.full.jar;${CLASSPATH}"
(ls *.java | grep -v RunSaxon; find www_web3d_org/ -name '*.java') | xargs -L 1 -P 8 javac

(ls *.class | grep -v RunSaxon; find www_web3d_org/ -name '*.class') | sed 's/\.class$//' | xargs -L 1 -P 8 java -d64
for NEW in `find . -name '*.new.json'`
	JSON=`dirname $NEW`/`basename $NEW .new.json`.json
	DIFF=`dirname $NEW`/`basename $NEW .new.json`.diff
	echo node jsondiff.js $JSON $NEW 2>&1
	if [ -z "`node jsondiff.js $JSON $NEW`" ]
	then
			jar -uMf GoodJSON.zip $NEW
	else
		node jsondiff.js $JSON $NEW | tee $DIFF
		jar -uMf DiffJSON.zip $JSON $NEW $DIFF
			
	fi
done
