#!/bin/bash
for i in `ls -d src/main/{node,java,python}/net/{coderextreme,x3djsonld}/{data,personal}/*.{java,js,py} | grep -v .bak |grep -v .class`
do
	CLASS=`basename $i | sed -e 's/\([^\.]*\)\..*/\1/'`
	FILE=$i
	echo perl -p -i -e "s/NeedClassName/$CLASS/g" "$FILE"
	perl -p -i -e "s/NeedClassName/$CLASS/g" "$FILE"
	#echo perl -p -i -e "s/JohnBoy/$CLASS/g" "$FILE"
	#perl -p -i -e "s/JohnBoy/$CLASS/g" "$FILE"
done
