#!/bin/sh

# run the proto preprocessor

. ./classpath
javac RunSaxon.java

mkdir -p ppp
for i in `ls *.json | grep -v intermediate | grep -v "\.new" | grep -v JSONSchema| grep -v package.json | xargs grep -lw ProtoInstance`
do
	echo "=========================$i=====================PPP" 1>&2
	node PPP.js $i > ppp/`basename $i`
	echo "=========================$i=====================CompleteXMLPrototypeExpander" 1>&2
	node CompleteXMLPrototypeExpander.js `basename $i .json`.x3d
done
SCRIPTS=`find www_web3d_org/ -type f -name '*.json' | grep -v intermediate | grep -v "\.new"  | xargs grep -lw Script`
SCRIPTS=`echo $SCRIPTS | sed 's/ /|/g'`
# echo $SCRIPTS
for i in `find Library www_web3d_org/ -type f -name '*json'| grep -v intermediate | grep -v "\.new"  | xargs grep -lw ProtoInstance | egrep -v $SCRIPTS`
do
	echo "=========================$i=====================" 1>&2
	mkdir -p ppp/`dirname $i`
	# node PPP.js $i
	echo "=========================$i=====================PPP" 1>&2
	node PPP.js $i > ppp/`dirname $i`/`basename $i`
	echo "=========================$i=====================CompleteXMLPrototypeExpander" 1>&2
	node CompleteXMLPrototypeExpander.js `dirname $i`/`basename $i .json`.x3d
done
