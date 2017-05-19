#!/bin/sh
for i in src/main/java/net/x3djsonld/data/*.java
do
	CLASS=`basename $i .java`
	FILE=$i
	echo perl -p -i -e "s/NeedClassName/$CLASS/g" "$FILE"
	perl -p -i -e "s/NeedClassName/$CLASS/g" "$FILE"
done
