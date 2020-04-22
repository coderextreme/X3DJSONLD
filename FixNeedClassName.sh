#!/bin/sh
for i in `ls src/main/*/net/x3djsonld/data/*.* | grep -v .bak |grep -v .class`
do
	CLASS=`basename $i | sed -e 's/\([^\.]*\)\..*/\1/'`
	FILE=$i
	echo perl -p -i -e "s/NeedClassName/$CLASS/g" "$FILE"
	perl -p -i -e "s/NeedClassName/$CLASS/g" "$FILE"
done
