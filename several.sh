#!/bin/sh

# accepts files with .x3d extension

. ./classpath

javac RunSaxon.java
python classes.py

(ls "$@" | grep -v intermediate | grep -v new) | xargs -P 8 java RunSaxon
(ls "$@" | grep -v intermediate | grep -v new) | sed 's/\.x3d$/.json/' | xargs -P 8 node json2all.js
(ls "$@" | grep -v intermediate | grep -v new) | sed 's/\.x3d$/.java/' | xargs -L 1 -P 8 javac -J-Xss16m -J-Xmx4096M
(ls "$@" | grep -v intermediate | grep -v new) | sed 's/\.x3d$//' | sed 's/^\.*\///' | xargs -L 1 -P 8 java -d64 -Xss16m -Xmx4096M
for NEW in `(ls "$@" | grep -v intermediate | grep -v new) | sed 's/\.x3d$/.new.json/'`
do
	JSON=`dirname $NEW`/`basename $NEW .new.json`.json
	echo node jsondiff.js $JSON $NEW
	node jsondiff.js $JSON $NEW
done

(ls "$@" | grep -v intermediate | grep -v new) | sed 's/\.x3d$/.new.x3d/' | xargs ls 2>&1| grep "No such file or directory" | awk '{ print $4; }'| sed "s/^'\.\///" | sed "s/\.new\.x3d':/.sail.js/" | sed "s/^'//" | xargs -L 1 -P 8 jjs -Dnashorn.args="-classpath ${CLASSPATH}"

for i in `(ls "$@" | grep -v intermediate | grep -v new) | sed 's/\.x3d$/.new.x3d/'`
do
	echo ================================================================================
	echo node xmldiff.js `basename $i .new.x3d`.x3d $i
	node xmldiff.js `basename $i .new.x3d`.x3d $i
done
