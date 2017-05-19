#!/bin/sh

# Run the Test Suite

# accepts files with .x3d extension
export PROCESSORS=${PROCESSORS-8}

. ./classpath

python ../python/classes.py

STYLESHEETDIR=../lib/stylesheets
X3DTOJAVA='s/\/data\//\/java\/net\/coderextreme\/data\//' 
X3DTONASH='s/\/data\//\/nashorn\/net\/coderextreme\/data\//' 
OVERWRITE=
# OVERWRITE=---overwrite


(ls -d "$@" | grep -v intermediate | grep -v "\.new") | xargs -P $PROCESSORS java net.coderextreme.RunSaxon ---../ ${OVERWRITE} --${STYLESHEETDIR}/X3dToJSON.xslt -json | xargs -P $PROCESSORS ${NODE} ${NODEDIR}/json2all.js

for i in `ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed  -e 's/\.x3d$/.x3d.new/'`
do
	X3D=`dirname $i`/`basename $i .x3d.new`.x3d 
	${NODE} ${NODEDIR}/xmldiff.js $X3D $i
done

for i in `ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d$/.java/' -e $X3DTOJAVA | xargs ls -d`
do
	pushd `dirname $i`
	echo $i
 	javac -J-Xss1g -J-Xmx4g `basename $i`
	popd
done

for i in `ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d$/.class/' -e $X3DTOJAVA | xargs ls -d | sed -e 's/\.class$//' -e 's/^\.\.\/java\///'`
do
	pushd ../java
	echo $i
	java -d64 -Xss1g -Xmx4g $i # sh runToError.sh
	popd
done

for i in `ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d$/.new.json/'`
do
	JSON=`dirname $i`/`basename $i .new.json`.json
	${NODE} ${NODEDIR}/jsondiff.js $JSON $i
done


for i in `ls -d "$@" | grep -v intermediate | grep -v "\.new" |  sed -e 's/\.x3d$/.new.json.intermediate.x3d/'`
do
	X3D=`dirname $i`/`basename $i .new.json.intermediate.x3d`.x3d 
	${NODE} ${NODEDIR}/xmldiff.js $X3D $i
done


for i in `ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d$/.sail.js/' -e $X3DTONASH | xargs ls -d`
do
	pushd ../nashorn
	echo $i
	jjs -J-Xss1g -J-Xmx4g -cp "${NASHORN_CLASSPATH}" $i
	popd
done

for i in `ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d$/.new.x3d/'`
do
	X3D=`dirname $i`/`basename $i .new.x3d`.x3d
	${NODE} ${NODEDIR}/xmldiff.js $X3D $i
done
