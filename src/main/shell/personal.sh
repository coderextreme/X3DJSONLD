#!/bin/bash
# set -euo pipefail
IFS=$'\n\t'

# Run the Test Suite

# accepts files with .x3d extension
export PROCESSORS=${PROCESSORS-8}

. ./classpath

# py ../python/classes.py

STYLESHEETDIR=../lib/stylesheets
DATATOJAVA='s/\/personal\//\/java\/net\/coderextreme\/personal\//' 
DATATONODE='s/\/personal\//\/node\/net\/coderextreme\/personal\//' 
DATATOGRAAL='s/\/personal\//\/graaljs\/net\/coderextreme\/personal\//' 
EXTOJAVA='s/\/Library\//\/java\/net\/coderextreme\/Library\//' 
EXTONODE='s/\/Library\//\/node\/net\/coderextreme\/Library\//' 
EXTOGRAAL='s/\/Library\//\/graaljs\/net\/coderextreme\/Library\//' 
ROOTTOJAVA='s/\/x3d_code\/www.web3d.org\//\/java\/net\/coderextreme\/x3d_code\/www_web3d_org\//' 
ROOTTONODE='s/\/x3d_code\/www.web3d.org\//\/node\/net\/coderextreme\/x3d_code\/www_web3d_org\//' 
ROOTTOGRAAL='s/\/x3d_code\/www.web3d.org\//\/graaljs\/net\/coderextreme\/x3d_code\/www_web3d_org\//' 
# OVERWRITE=
OVERWRITE=---overwrite
LOCALTOROOT='s/^\.\.\/x3d-code/\/c\/x3d-code/'
ROOTTOLOCAL='s/www.web3d.org/www_web3d_org/' 

# convert to first JSON,
# then overwrite with xml2all.js
# then create other files from second JSON
# ls -d "$@" | grep -v intermediate | grep -v "\.new" | xargs ${NODE} ${NODEDIR}/xml2all.js | xargs -P $PROCESSORS ${NODE} ${NODEDIR}/json2all.js
# ls -d "$@" | grep -v intermediate | grep -v "\.new" | xargs -P $PROCESSORS java net.coderextreme.RunSaxon --- ${OVERWRITE} --${STYLESHEETDIR}/X3dToJson.xslt -json | xargs ${NODE} ${NODEDIR}/xml2all.js | xargs -P $PROCESSORS ${NODE} ${NODEDIR}/json2all.js
echo converting to JSON et al
ls -d "$@" | grep -v intermediate | grep -v "\.new" | xargs -P $PROCESSORS java net.coderextreme.RunSaxon --- ${OVERWRITE} --${STYLESHEETDIR}/X3dToJson.xslt -json | xargs -P $PROCESSORS ${NODE} ${NODEDIR}/json2all.js
# Add exit here to just do conversions
# exit
#
echo comparing temp xml
for i in `ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d$/.x3d.new/' -e 's/-/_/g' -e $ROOTTOLOCAL -e 's/^\/c/../'`
do
	X3D=`dirname $i | sed -e 's/_/-/g' -e $LOCALTOROOT `/`basename $i .x3d.new`.x3d 
	${NODE} ${NODEDIR}/xmldiff.js $X3D $i
done

echo compiling java
for i in `ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d$/.java/' -e 's/-/_/g' -e 's/^\/c/../' -e $EXTOJAVA -e $DATATOJAVA -e $ROOTTOJAVA | xargs ls -d`
do
	pushd `dirname $i`
	echo $i
 	javac -proc:full -J-Xss1g -J-Xmx4g `basename $i`
	popd
done

echo running java
for i in `ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d$/.class/' -e 's/-/_/g' -e 's/^\/c/../' -e $EXTOJAVA -e $DATATOJAVA -e $ROOTTOJAVA | xargs ls -d | sed -e 's/\.class$//' -e 's/^\.\.\/java\///'`
do
	pushd ../java
	echo $i
	java -Xss1g -Xmx4g $i # sh runToError.sh || echo "Failed"
	popd
done

echo comparing java created json
for i in `ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d$/.new.java.json/' -e 's/-/_/g' -e $ROOTTOLOCAL -e 's/^\/c/../'`
do
	JSON=`dirname $i | sed -e 's/_/-/g' -e $LOCALTOROOT `/`basename $i .new.java.json`.json
	${NODE} ${NODEDIR}/jsondiff.js $JSON $i
done

echo comparing java created temp xml
for i in `ls -d "$@" | grep -v intermediate | grep -v "\.new" |  sed -e 's/\.x3d$/.new.javaPrettyPrint.intermediate.x3d/' -e 's/-/_/g' -e $ROOTTOLOCAL -e 's/^\/c/../'`
do
	X3D=`dirname $i | sed -e 's/_/-/g' -e $LOCALTOROOT `/`basename $i .new.javaPrettyPrint.intermediate.x3d`.x3d 
	${NODE} ${NODEDIR}/xmldiff.js $X3D $i
done

echo running GraalJS code
for i in `ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d$/.js/' -e 's/-/_/g' -e 's/^\/c/../' -e $EXTOGRAAL -e $DATATOGRAAL -e $ROOTTOGRAAL | xargs ls -d`
do
	pushd ../graaljs
	echo ../shell/jjs.sh $i
	../shell/jjs.sh $i
	popd
done

echo running nodejs code
for i in `ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d$/.js/' -e 's/-/_/g' -e 's/^\/c/../' -e $EXTONODE -e $DATATONODE -e $ROOTTONODE| xargs ls -d`
do
	pushd ../node
	echo $i
	${NODE} $i
	popd
done

echo comparing node XML output
for i in `ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d$/.new.node.x3d/' -e 's/-/_/g' -e $ROOTTOLOCAL -e 's/^\/c/../'`
do
	X3D=`dirname $i | sed -e 's/_/-/g' -e $LOCALTOROOT `/`basename $i .new.node.x3d`.x3d
	echo ${NODE} ${NODEDIR}/xmldiff.js $X3D $i
	${NODE} ${NODEDIR}/xmldiff.js $X3D $i
done
#for i in `ls -d "$@"| grep -v "\.new"`
#do
#echo ../../../node_modules/.bin/xslt3 -xsl:/c/x3d-code/www.web3d.org/x3d/stylesheets/X3dToJson.xslt -s:$i -o:`dirname $i`/`basename $i .x3d`.json2
#../../../node_modules/.bin/xslt3 -xsl:/c/x3d-code/www.web3d.org/x3d/stylesheets/X3dToJson.xslt -s:$i -o:`dirname $i`/`basename $i .x3d`.new.json2
#echo ${NODE} ${NODEDIR}/jsondiff.js `dirname $i`/`basename $i x3d`json `dirname $i`/`basename $i x3d`new.json2
#${NODE} ${NODEDIR}/jsondiff.js `dirname $i`/`basename $i x3d`json `dirname $i`/`basename $i x3d`new.json2
#done
