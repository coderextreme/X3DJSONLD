#!/bin/sh

# Run the Test Suite

# accepts files with .x3d extension
export PROCESSORS=${PROCESSORS-8}

. ./classpath

python ../python/classes.py

ORIGTOOUTPUT='s/\/orig\//\/out\/orig\//' 
OUTPUTTOORIG='s/\/out//'
STYLESHEETDIR=../lib/stylesheets


(ls -d "$@" | grep -v intermediate | grep -v "\.new") | xargs -P $PROCESSORS java net.coderextreme.RunSaxon ---overwrite --${STYLESHEETDIR}/X3dToJSON.xslt -json | xargs -P $PROCESSORS ${NODE} ${NODEDIR}/json2all.js

for i in `(ls -d "$@" | grep -v intermediate | grep -v "\.new") | sed  -e 's/\.x3d$/.x3d.new/' -e $ORIGTOOUTPUT`
do
	${NODE} ${NODEDIR}/xmldiff.js `dirname $i | sed $OUTPUTTOORIG`/`basename $i .x3d.new`.x3d $i
done

for i in `ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d$/.java/' -e 's/\/orig\//\/java\/net\/coderextreme\/out\/orig\//' | xargs ls -d`
do
	pushd `dirname $i` > /dev/null
	echo
	echo $i
 	javac -J-Xss1g -J-Xmx4g `basename $i`
	popd > /dev/null
done

for i in `ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d$/.class/' -e 's/\/orig\//\/java\/net\/coderextreme\/out\/orig\//' | xargs ls -d | sed 's/\.class$//' | sed -e 's/^..\/java\///'`
do
	pushd ../java > /dev/null
	echo
	echo $i
	java -d64 -Xss1g -Xmx4g $i # sh runToError.sh
	popd > /dev/null
done

for NEW in `ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d$/.new.json/' -e $ORIGTOOUTPUT`
do
	JSON=`dirname $NEW | sed -e $OUTPUTTOORIG `/`basename $NEW .new.json`.json
	${NODE} ${NODEDIR}/jsondiff.js $JSON $NEW
done


for i in `ls -d "$@" | grep -v intermediate | grep -v "\.new" |  sed -e 's/\.x3d$/.new.json.intermediate.x3d/' -e $ORIGTOOUTPUT`
do
	${NODE} ${NODEDIR}/xmldiff.js `dirname $i  | sed $OUTPUTTOORIG`/`basename $i .new.json.intermediate.x3d`.x3d $i
done


for i in `ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d$/.sail.js/' -e 's/\/orig\//\/nashorn\/net\/coderextreme\/out\/orig\//' | xargs ls -d | sed 's/\.class$//' | sed -e 's/^..\/java\///'`
do
	pushd ../nashorn > /dev/null
	echo
	echo $i
	jjs -J-Xss1g -J-Xmx4g -cp "${NASHORN_CLASSPATH}" $i
	popd > /dev/null
done

for NEW in `ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d$/.new.x3d/' -e $ORIGTOOUTPUT`
do
	X3D=`dirname $NEW | sed 's/\/new//' `/`basename $NEW .new.x3d`.x3d
	${NODE} ${NODEDIR}/xmldiff.js $X3D $NEW
done
