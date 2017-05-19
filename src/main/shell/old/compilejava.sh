#!/bin/sh

# old way to compile java files and compare

jar -cMf GoodJSON.zip classpath
jar -cMf DiffJSON.zip classpath
. ./classpath
(ls *.java | grep -v RunSaxon; find www_web3d_org/ -name '*.java') | xargs -L 1 -P 8 javac -J-Xss1g -J-Xmx4g 2> javacerrors.txt

(ls *.class | grep -v RunSaxon; find www_web3d_org/ -name '*.class') | sed 's/\.class$//' | xargs -L 1 -P 8 java -d64 -Xss1g -Xmx4g 2> javaerrors.txt
for NEW in `find . -name '*.new.json'`
do
	JSON=`dirname $NEW`/`basename $NEW .new.json`.json
	DIFF=`dirname $NEW`/`basename $NEW .new.json`.diff
	echo ${NODE} jsondiff.js $JSON $NEW 2>&1
	if [ -z "`${NODE} jsondiff.js $JSON $NEW`" ]
	then
		jar -uMf GoodJSON.zip $NEW
	else
		${NODE} jsondiff.js $JSON $NEW | tee $DIFF
		jar -uMf DiffJSON.zip $JSON $NEW $DIFF
			
	fi
done
