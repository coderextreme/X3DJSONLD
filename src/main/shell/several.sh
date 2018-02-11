#!/bin/sh

# Run the Test Suite

# accepts files with .x3d extension
export PROCESSORS=${PROCESSORS-8}

. ./classpath

python ../python/classes.py

STYLESHEETDIR=../lib/stylesheets
DATATOJAVA='s/\/data\//\/java\/net\/coderextreme\/data\//' 
DATATONASH='s/\/data\//\/nashorn\/net\/coderextreme\/data\//' 
EXTOJAVA='s/\/Library\//\/java\/net\/coderextreme\/Library\//' 
EXTONASH='s/\/Library\//\/nashorn\/net\/coderextreme\/Library\//' 
ROOTTOJAVA='s/\/x3d_code\/www.web3d.org\//\/java\/net\/coderextreme\/x3d_code\/www_web3d_org\//' 
ROOTTONASH='s/\/x3d_code\/www.web3d.org\//\/nashorn\/net\/coderextreme\/x3d_code\/www_web3d_org\//' 
# OVERWRITE=
OVERWRITE=---overwrite
LOCALTOROOT='s/^\.\.\/x3d-code/\/c\/x3d-code/'
ROOTTOLOCAL='s/www.web3d.org/www_web3d_org/' 

ls -d "$@" | grep -v intermediate | grep -v "\.new" | xargs -P $PROCESSORS java net.coderextreme.RunSaxon --- ${OVERWRITE} --${STYLESHEETDIR}/X3dToJSON.xslt -json | xargs -P $PROCESSORS ${NODE} ${NODEDIR}/json2all.js

for i in `ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d$/.x3d.new/' -e 's/-/_/g' -e $ROOTTOLOCAL -e 's/^\/c/../'`
do
	X3D=`dirname $i | sed -e 's/_/-/g' -e $LOCALTOROOT `/`basename $i .x3d.new`.x3d 
	${NODE} ${NODEDIR}/xmldiff.js $X3D $i
done

for i in `ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d$/.java/' -e 's/-/_/g' -e 's/^\/c/../' -e $EXTOJAVA -e $DATATOJAVA -e $ROOTTOJAVA | xargs ls -d`
do
	pushd `dirname $i`
	echo $i
 	javac -J-Xss1g -J-Xmx4g `basename $i`
	popd
done

for i in `ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d$/.class/' -e 's/-/_/g' -e 's/^\/c/../' -e $EXTOJAVA -e $DATATOJAVA -e $ROOTTOJAVA | xargs ls -d | sed -e 's/\.class$//' -e 's/^\.\.\/java\///'`
do
	pushd ../java
	echo $i
	java -d64 -Xss1g -Xmx4g $i # sh runToError.sh || echo "Failed"
	popd
done

for i in `ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d$/.new.json/' -e 's/-/_/g' -e $ROOTTOLOCAL -e 's/^\/c/../'`
do
	JSON=`dirname $i | sed -e 's/_/-/g' -e $LOCALTOROOT `/`basename $i .new.json`.json
	${NODE} ${NODEDIR}/jsondiff.js $JSON $i
done

#for i in `ls -d "$@" | grep -v intermediate | grep -v "\.new" |  sed -e 's/\.x3d$/.newPrettyPrint.intermediate.x3d/' -e 's/-/_/g' -e $ROOTTOLOCAL -e 's/^\/c/../'`
#do
#	X3D=`dirname $i | sed -e 's/_/-/g' -e $LOCALTOROOT `/`basename $i .newPrettyPrint.intermediate.x3d`.x3d 
#	${NODE} ${NODEDIR}/xmldiff.js $X3D $i
#done

for i in `ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d$/.sail.js/' -e 's/-/_/g' -e 's/^\/c/../' -e $EXTONASH -e $DATATONASH -e $ROOTTONASH| xargs ls -d`
do
	pushd ../nashorn
	echo $i
	jjs -J-Xss1g -J-Xmx4g -J-Djava.class.path="${NASHORN_CLASSPATH}" $i
	popd
done

for i in `ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d$/.new.x3d/' -e 's/-/_/g' -e $ROOTTOLOCAL -e 's/^\/c/../'`
do
	X3D=`dirname $i | sed -e 's/_/-/g' -e $LOCALTOROOT `/`basename $i .new.x3d`.x3d
	${NODE} ${NODEDIR}/xmldiff.js $X3D $i
done
