#!/bin/sh
for i in "$@"
do
	CLASS=`basename $i .x3d | sed 's/\//./g'`
	FILE=`dirname $i`/`basename $i .x3d`.java
	perl -p -i -e "s/NeedClassName/$CLASS/g" "$FILE"
done
