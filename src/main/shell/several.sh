#!/bin/bash

# Run the Test Suite

# accepts files with .x3d extension
export PROCESSORS=${PROCESSORS-8}

. ./classpath

# python3 ../python/classes.py

STYLESHEETDIR=../lib/stylesheets
DATATOJAVA='s/\/data\//\/java\/net\/coderextreme\/data\//' 
DATATONODE='s/\/data\//\/node\/net\/coderextreme\/data\//' 
DATATOPYTHON='s/\/data\//\/python\/net\/coderextreme\/data\//' 
DATATONASH='s/\/data\//\/nashorn\/net\/coderextreme\/data\//' 
EXTOJAVA='s/\/Library\//\/java\/net\/coderextreme\/Library\//' 
EXTONODE='s/\/Library\//\/node\/net\/coderextreme\/Library\//' 
EXTONASH='s/\/Library\//\/nashorn\/net\/coderextreme\/Library\//' 
ROOTTOJAVA='s/\/x3d_code\/www.web3d.org\//\/java\/net\/coderextreme\/x3d_code\/www_web3d_org\//' 
ROOTTONODE='s/\/x3d_code\/www.web3d.org\//\/node\/net\/coderextreme\/x3d_code\/www_web3d_org\//' 
ROOTTOPYTHON='s/\/x3d_code\/www.web3d.org\//\/python\/net\/coderextreme\/x3d_code\/www_web3d_org\//' 
ROOTTONASH='s/\/x3d_code\/www.web3d.org\//\/nashorn\/net\/coderextreme\/x3d_code\/www_web3d_org\//' 
# OVERWRITE=
OVERWRITE=---overwrite
LOCALTOROOT='s/^\.\.\/x3d-code/\/c\/x3d-code/'
ROOTTOLOCAL='s/www.web3d.org/www_web3d_org/' 

# convert to first JSON,
# then overwrite with xml2all.js
# then create other files from second JSON
# ls -d "$@" | grep -v intermediate | grep -v "\.new" | xargs ${NODE} ${NODEDIR}/xml2all.js | xargs -P $PROCESSORS ${NODE} ${NODEDIR}/json2all.mjs
# ls -d "$@" | grep -v intermediate | grep -v "\.new" | xargs -P $PROCESSORS java net.coderextreme.RunSaxon --- ${OVERWRITE} --${STYLESHEETDIR}/X3dToJson.xslt -json | xargs ${NODE} ${NODEDIR}/xml2all.js | xargs -P $PROCESSORS ${NODE} ${NODEDIR}/json2all.mjs
ls -d "$@" | grep -v intermediate | grep -v "\.new" | xargs -P $PROCESSORS java net.coderextreme.RunSaxon --- ${OVERWRITE} --${STYLESHEETDIR}/X3dToJson.xslt -json | xargs -P $PROCESSORS ${NODE} ${NODEDIR}/json2all.mjs
# Add exit here to just do conversions
# exit
for i in `ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d$/.x3d.new/' -e 's/-/_/g' -e $ROOTTOLOCAL -e 's/^\/c/../'`
do
	X3D=`dirname $i | sed -e 's/_/-/g' -e $LOCALTOROOT `/`basename $i .x3d.new`.x3d 
	${NODE} ${NODEDIR}/xmldiff.mjs $X3D $i
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
	java -Xss1g -Xmx4g $i # sh runToError.sh || echo "Failed"
	popd
done

for i in `ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d$/.new.json/' -e 's/-/_/g' -e $ROOTTOLOCAL -e 's/^\/c/../'`
do
	JSON=`dirname $i | sed -e 's/_/-/g' -e $LOCALTOROOT `/`basename $i .new.json`.json
	${NODE} ${NODEDIR}/jsondiff.mjs $JSON $i
done

for i in `ls -d "$@" | grep -v intermediate | grep -v "\.new" |  sed -e 's/\.x3d$/.newPrettyPrint.intermediate.x3d/' -e 's/-/_/g' -e $ROOTTOLOCAL -e 's/^\/c/../'`
do
	X3D=`dirname $i | sed -e 's/_/-/g' -e $LOCALTOROOT `/`basename $i .newPrettyPrint.intermediate.x3d`.x3d 
	${NODE} ${NODEDIR}/xmldiff.mjs $X3D $i
done

#for i in `ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d$/.mjs/' -e 's/-/_/g' -e 's/^\/c/../' -e $EXTONASH -e $DATATONASH -e $ROOTTONASH | xargs ls -d`
#do
#	pushd ../nashorn
#	echo 	jjs -J-Xss1g -J-Xmx4g -J-Djava.class.path="${NASHORN_CLASSPATH}" $i
#	jjs -J-Xss1g -J-Xmx4g -J-Djava.class.path="${NASHORN_CLASSPATH}" $i
#	popd
#done

for i in `ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d$/.mjs/' -e 's/-/_/g' -e 's/^\/c/../' -e $EXTONODE -e $DATATONODE -e $ROOTTONODE| xargs ls -d`
do
	pushd ../node
	echo $i
	${NODE} $i
	popd
done
#for i in `ls -d "$@"| grep -v "\.new"`
#do
#echo ../../../node_modules/.bin/xslt3 -xsl:/c/x3d-code/www.web3d.org/x3d/stylesheets/X3dToJson.xslt -s:$i -o:`dirname $i`/`basename $i .x3d`.json2
#../../../node_modules/.bin/xslt3 -xsl:/c/x3d-code/www.web3d.org/x3d/stylesheets/X3dToJson.xslt -s:$i -o:`dirname $i`/`basename $i .x3d`.new.json2
#echo ${NODE} ${NODEDIR}/jsondiff.mjs `dirname $i`/`basename $i x3d`json `dirname $i`/`basename $i x3d`new.json2
#${NODE} ${NODEDIR}/jsondiff.mjs `dirname $i`/`basename $i x3d`json `dirname $i`/`basename $i x3d`new.json2
#done

for i in `ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d$/.json/' -e 's/-/_/g' -e 's/^\/c/../'`
do
	PY=`echo $i | sed -e $DATATOPYTHON -e $ROOTTOPYTHON -e 's/.json$/.py/'`
	X3D=`echo $i | sed -e 's/.json$/.new.x3d/'`
	echo python ../python/x3djsonld.py $i $PY
	python ../python/x3djsonld.py $i > $PY && python $PY > $X3D && echo "$PY" "$X3D" || echo "Error: $PY failed to parse"
done

for i in `ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d$/.new.x3d/' -e 's/-/_/g' -e $ROOTTOLOCAL -e 's/^\/c/../'`
do
	X3D=`dirname $i | sed -e 's/_/-/g' -e $LOCALTOROOT `/`basename $i .new.x3d`.x3d
	echo ${NODE} ${NODEDIR}/xmldiff.mjs $X3D $i
	${NODE} ${NODEDIR}/xmldiff.mjs $X3D $i
done
