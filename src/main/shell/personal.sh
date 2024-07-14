#!/bin/bash
# set -euo pipefail
IFS=$'\n\t'

# Run the Test Suite

# accepts files with .x3d extension
export PROCESSORS="${PROCESSORS-8}"

. ./classpath

# ${PYTHON} ../python/classes.py

STYLESHEETDIR=../lib/stylesheets

DATATOJAVA='s/\/data\//\/java\/net\/coderextreme\/data\//' 
DATATONODE='s/\/data\//\/node\/net\/coderextreme\/data\//' 
DATATOGRAAL='s/\/data\//\/graaljs\/net\/coderextreme\/data\//' 
DATATOPYTHON='s/\/data\//\/python\/net\/coderextreme\/data\//' 

PERSONALTOJAVA='s/\/personal\//\/java\/net\/coderextreme\/personal\//' 
PERSONALTONODE='s/\/personal\//\/node\/net\/coderextreme\/personal\//' 
PERSONALTOGRAAL='s/\/personal\//\/graaljs\/net\/coderextreme\/personal\//' 
PERSONALTOPYTHON='s/\/personal\//\/python\/net\/coderextreme\/personal\//' 

EXTOJAVA='s/\/Library\//\/java\/net\/coderextreme\/Library\//' 
EXTONODE='s/\/Library\//\/node\/net\/coderextreme\/Library\//' 
EXTOGRAAL='s/\/Library\//\/graaljs\/net\/coderextreme\/Library\//' 
EXTOPYTHON='s/\/Library\//\/python\/net\/coderextreme\/Library\//' 

ROOTTOJAVA='s/\/x3d_code\/www.web3d.org\//\/java\/net\/coderextreme\/x3d_code\/www_web3d_org\//' 
ROOTTONODE='s/\/x3d_code\/www.web3d.org\//\/node\/net\/coderextreme\/x3d_code\/www_web3d_org\//' 
ROOTTOPYTHON='s/\/x3d_code\/www.web3d.org\//\/python\/net\/coderextreme\/x3d_code\/www_web3d_org\//' 
ROOTTOGRAAL='s/\/x3d_code\/www.web3d.org\//\/graaljs\/net\/coderextreme\/x3d_code\/www_web3d_org\//' 

# OVERWRITE=
OVERWRITE=---overwrite
LOCALTOROOT='s/^\.\.\/x3d-code/\/c\/x3d-code/'
ROOTTOLOCAL='s/www.web3d.org/www_web3d_org/' 

function mydirname {
	#echo DIR OF "$1"
	dir=`echo "$1" | sed 's/^"*\(.*\)\/[^\/]*"*$/\1/'`
	#echo IS "$dir"
	echo "$dir"
}
function mybasename {
	# echo BASE OF "$1"
	file=`echo "$1" | sed 's/.*\///'`
	# echo IS "$file"
	if [ ! -z "${2:-}" ]
	then
		file=`echo "$file" | sed s/$2//`
	fi
	echo "$file"
}
JSONEXT=json

# convert to first JSON,
# then overwrite with xml2all.js
# then create other files from second JSON
# ls -d "$@" | grep -v intermediate | grep -v "\.new" | xargs ${NODE} ${NODEDIR}/xml2all.js | xargs -P $PROCESSORS ${NODE} ${NODEDIR}/json2all.js
# ls -d "$@" | grep -v intermediate | grep -v "\.new" | xargs -P $PROCESSORS java net.coderextreme.RunSaxon --- ${OVERWRITE} --${STYLESHEETDIR}/X3dToJson.xslt -json | xargs ${NODE} ${NODEDIR}/xml2all.js | xargs -P $PROCESSORS ${NODE} ${NODEDIR}/json2all.js
echo converting to JSON et al
echo  "ls -d $@ | grep -v intermediate | grep -v  '\.new'  | tr '\n' '\0'| xargs -0 -P $PROCESSORS java net.coderextreme.RunSaxon --- ${OVERWRITE} --${STYLESHEETDIR}/X3dToJson.xslt -json | sed 's/^\(.*\)\$/\"\1\"/' | xargs -P $PROCESSORS ${NODE} ${NODEDIR}/json2all.js"
ls -d "$@" | grep -v intermediate | grep -v '\.new' | tr '\n' '\0'| xargs -0 -P "$PROCESSORS" java net.coderextreme.RunSaxon --- "${OVERWRITE}" --"${STYLESHEETDIR}/X3dToJson.xslt" -json | sed 's/^\(.*\)$/"\1"/' | xargs -P "$PROCESSORS" "${NODE}" "${NODEDIR}/json2all.js"
# Add exit here to just do conversions
# exit
#
echo "test JSON to XML convertion .${JSONEXT} to .x3d.new (temp xml)"
ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d/.x3d.new/' -e "$ROOTTOLOCAL" -e 's/^\/c/../' | sed 's/^\(.*\)$/"\1"/' | tr '\n' '\0' | while read -d $'\0' -r file
do
	X3D=`mydirname "$file" | sed -e "$LOCALTOROOT"`/`mybasename "$file" .new`
	echo "${NODE}" --trace-warnings "${NODEDIR}/xmldiff.js" "$X3D" "$file"
	"${NODE}" --trace-warnings "${NODEDIR}/xmldiff.js" "$X3D" "$file"
done

echo compile java programs
ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d/.java/' -e 's/^\/c/../' -e "$EXTOJAVA" -e "$DATATOJAVA" -e "$ROOTTOJAVA" -e "$PERSONALTOJAVA"| sed -e 's/\(.*\)/'"\1"'/' -e 's/ /$/g'| tr '\n' '\0' | while read -d $'\0' -r i
do
	# echo JAVAC "$i"
	pushd `mydirname "$i"`
	echo javac -proc:full -J-Xss1g -J-Xmx4g `mybasename "$i"`
	javac -proc:full -J-Xss1g -J-Xmx4g `mybasename "$i"`
	popd
done

echo run java programs
ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d/.class/' -e 's/^\/c/../' -e "$EXTOJAVA" -e "$DATATOJAVA" -e "$ROOTTOJAVA" -e "$PERSONALTOJAVA" | sed -e 's/\.class$//' -e 's/^\.\.\/java\///' | sed -e 's/\(.*\)/'"\1"'/' -e 's/ /$/g' | tr '\n' '\0' | while read -d $'\0' -r i
do
	pushd ../java
	echo java -Xss1g -Xmx4g "$i"
	java -Xss1g -Xmx4g "$i" # sh runToError.sh || echo "Failed"
	popd
done

echo comparing java created json
ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d/.new.java.json/' -e "$ROOTTOLOCAL" -e 's/^\/c/../' | sed -e 's/ /$/g' | tr '\n' '\0' | while read -d $'\0' -r i
do
	OLDJSON=`mydirname "$i" | sed -e "$LOCALTOROOT" `/`mybasename "$i" .new.java.json`.${JSONEXT}
	echo "${NODE}" --trace-warnings "${NODEDIR}/jsondiff.js" "$OLDJSON" "$i"
	"${NODE}" --trace-warnings "${NODEDIR}/jsondiff.js" "$OLDJSON" "$i"
done

echo comparing java created temp xml
for i in `ls -d "$@" | grep -v intermediate | grep -v "\.new" |  sed -e 's/\.x3d$/.new.javaPrettyPrint.intermediate.x3d/' -e 's/-/_/g' -e $ROOTTOLOCAL -e 's/^\/c/../'`
do
	X3D=`dirname $i | sed -e 's/_/-/g' -e $LOCALTOROOT `/`basename $i .new.javaPrettyPrint.intermediate.x3d`.x3d 
	${NODE} ${NODEDIR}/xmldiff.js $X3D $i
done

echo running GraalJS code
for i in `ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d$/.js/' -e 's/-/_/g' -e 's/^\/c/../' -e $EXTOGRAAL -e $PERSONALTOGRAAL -e $ROOTTOGRAAL | xargs ls -d`
do
	pushd ../graaljs
	echo ../shell/jjs.sh $i
	../shell/jjs.sh $i
	popd
done

echo running nodejs code
for i in `ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d$/.js/' -e 's/-/_/g' -e 's/^\/c/../' -e $EXTONODE -e $PERSONALTONODE -e $ROOTTONODE| xargs ls -d`
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

echo Running python code
ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e "s/\.x3d$/.${JSONEXT}/" -e 's/^\/c/../' | tr '\n' '\0' | while read -d $'\0' -r i
do
	PY=`echo "$i" | sed -e "$EXTTOPYTHON" -e "$PERSONALTOPYTHON" -e "$ROOTTOPYTHON" -e "s/.${JSONEXT}$/.py/"`
	#X3D=`echo "$i" | sed -e "s/.${JSONEXT}$/.new.python.x3d/"`
	#echo ${PYTHON} ../python/x3djsonld.py "'$i'" ">" "'$PY'" and ${PYTHON} "'$PY'" ">" "'$X3D'"
	#${PYTHON} ../python/x3djsonld.py "$i" > "$PY" && ${PYTHON} "$PY" > "$X3D" && echo "$PY" "$X3D" || echo "Error: "$PY" failed to parse"
	echo "${PYTHON}" "$PY"
	"${PYTHON}" "$PY"
done

echo Diffing .new.python.x3d .py with original x3d
ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d/.new.python.x3d/' -e "$ROOTTOLOCAL" -e 's/^\/c/../' | tr '\n' '\0' | while read -d $'\0' -r i
do
	X3D=`mydirname "$i" | sed -e "$LOCALTOROOT" `/`mybasename "$i" .new.python.x3d`.x3d
	echo "${NODE}" --trace-warnings "${NODEDIR}/xmldiff.js" "'$X3D'" "'$i'"
	"${NODE}" --trace-warnings "${NODEDIR}/xmldiff.js" "$X3D" "$i"
done
