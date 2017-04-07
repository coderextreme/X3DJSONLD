#!/bin/sh

# accepts files with .x3d extension

. ./classpath

javac RunSaxon.java

(ls "$@" | grep -v intermediate | grep -v new) | xargs -P 8 java RunSaxon
(ls "$@" | grep -v intermediate | grep -v new) | sed 's/\.x3d$/.json/' | xargs -P 8 node json2all.js
(ls "$@" | grep -v intermediate | grep -v new) | sed 's/\.x3d$/.java/' | xargs -L 1 -P 8 javac -J-Xss16m -J-Xmx4096M
(ls "$@" | grep -v intermediate | grep -v new) | sed 's/\.x3d$//' | xargs -L 1 -P 8 java -d64 -Xss16m -Xmx4096M
for NEW in `(ls "$@" | grep -v intermediate | grep -v new) | sed 's/\.x3d$/.new.json/'`
do
	JSON=`dirname $NEW`/`basename $NEW .new.json`.json
	echo node jsondiff.js $JSON $NEW
	node jsondiff.js $JSON $NEW
done
