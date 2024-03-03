#!/bin/bash
# set -euo pipefail
IFS=$'\n\t'

# Run the Test Suite

# accepts files with .x3d extension
export PROCESSORS="${PROCESSORS-8}"

. ./classpath

# py ../python/classes.py

STYLESHEETDIR=../lib/stylesheets

DATATOJAVA='s/\/data\//\/java\/net\/coderextreme\/data\//' 
DATATONODE='s/\/data\//\/node\/net\/coderextreme\/data\//' 
DATATOPYTHON='s/\/data\//\/python\/net\/coderextreme\/data\//' 
DATATOGRAAL='s/\/data\//\/graaljs\/net\/coderextreme\/data\//' 

PERSONALTOJAVA='s/\/personal\//\/java\/net\/coderextreme\/personal\//' 
PERSONALTONODE='s/\/personal\//\/node\/net\/coderextreme\/personal\//' 
PERSONALTOPYTHON='s/\/personal\//\/python\/net\/coderextreme\/personal\//' 
PERSONALTOGRAAL='s/\/personal\//\/graaljs\/net\/coderextreme\/personal\//' 

EXTOJAVA='s/\/Library\//\/java\/net\/coderextreme\/Library\//' 
EXTONODE='s/\/Library\//\/node\/net\/coderextreme\/Library\//' 
EXTOGRAAL='s/\/Library\//\/graaljs\/net\/coderextreme\/Library\//' 
ROOTTOJAVA='s/\/x3d_code\/www.web3d.org\//\/java\/net\/coderextreme\/x3d_code\/www_web3d_org\//' 
ROOTTONODE='s/\/x3d_code\/www.web3d.org\//\/node\/net\/coderextreme\/x3d_code\/www_web3d_org\//' 
ROOTTOPYTHON='s/\/x3d_code\/www.web3d.org\//\/python\/net\/coderextreme\/x3d_code\/www_web3d_org\//' 
ROOTTOGRAAL='s/\/x3d_code\/www.web3d.org\//\/graaljs\/net\/coderextreme\/x3d_code\/www_web3d_org\//' 
# OVERWRITE=
OVERWRITE=---overwrite
LOCALTOROOT='s/^\.\.\/x3d-code/\/c\/x3d-code/'
ROOTTOLOCAL='s/www.web3d.org/www_web3d_org/' 
export NODE_OPTIONS=--max-old-space-size=24576

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
# ls -d "$@" | sed 's/\(.*\)/"\1"/' | grep -v intermediate | grep -v "\.new" | xargs "${NODE}" "${NODEDIR}/xml2all.js" | xargs -P "$PROCESSORS" "${NODE}" "${NODEDIR}"/json2all.js
# ls -d "$@" | sed 's/\(.*\)/"\1"/' | grep -v intermediate | grep -v "\.new" | xargs -P "$PROCESSORS" java net.coderextreme.RunSaxon --- "${OVERWRITE}" --"${STYLESHEETDIR}/X3dToJson.xslt" -json | xargs "${NODE}" "${NODEDIR}/xml2all.js" | xargs -P "$PROCESSORS" "${NODE}" "${NODEDIR}/json2all.js"
# ls -d "$@" | grep -v intermediate | grep -v "\.new" | tr '\n' '\0'| xargs -0 -P "$PROCESSORS" java net.coderextreme.RunSaxon --- "${OVERWRITE}" --"${STYLESHEETDIR}/X3dToJson.xslt" -json | sed 's/^/Created /'
echo  "ls -d $@ | grep -v intermediate | grep -v  '\.new'  | tr '\n' '\0'| xargs -0 -P $PROCESSORS java net.coderextreme.RunSaxon --- ${OVERWRITE} --${STYLESHEETDIR}/X3dToJson.xslt -json | sed 's/^\(.*\)\$/\"\1\"/' | xargs -P $PROCESSORS ${NODE} ${NODEDIR}/json2all.js"
ls -d "$@" | grep -v intermediate | grep -v "\.new" | tr '\n' '\0'| xargs -0 -P "$PROCESSORS" java net.coderextreme.RunSaxon --- "${OVERWRITE}" --"${STYLESHEETDIR}/X3dToJson.xslt" -json | sed 's/^\(.*\)$/"\1"/' | xargs -P "$PROCESSORS" "${NODE}" "${NODEDIR}/json2all.js"
# ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d/.x3d.new/' -e "$ROOTTOLOCAL" -e 's/^\/c/../' | sed 's/\(.*\)/"\1"/'
# Add exit here to just do conversions
#
# ls -d "$@" | grep -v intermediate | grep -v "\.new" | tr '\n' '\0' | xargs -0 -L 1 bash runtidy.sh | sed '/^$/d' | sed 's/^\(.*\)$/"\1"/' | xargs -P "$PROCESSORS" "${NODE}" "${NODEDIR}/json2all.js"


echo test JSON to XML convertion .${JSONEXT} to .x3d.new
# ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d/.x3d.new/' -e "$ROOTTOLOCAL" -e 's/^\/c/../' | sed 's/^\(.*\)$/"\1"/'
ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d/.x3d.new/' -e "$ROOTTOLOCAL" -e 's/^\/c/../' | sed 's/^\(.*\)$/"\1"/' | tr '\n' '\0' | while read -d $'\0' -r file
do
	#echo FILE "$file"
	#echo DIR `mydirname "$file" | sed -e "$LOCALTOROOT"`
	#echo BASE `mybasename "$file" .new`
	X3D=`mydirname "$file" | sed -e "$LOCALTOROOT"`/`mybasename "$file" .new`
	# echo X3D "$X3D"
	echo "${NODE}" --trace-warnings "${NODEDIR}/xmldiff.js" "$X3D" "$file"
	"${NODE}" --trace-warnings "${NODEDIR}/xmldiff.js" "$X3D" "$file"
done

echo compile java programs
# ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d/.java/' -e 's/^\/c/../' -e "$EXTOJAVA" -e "$DATATOJAVA" -e "$ROOTTOJAVA" -e "$PERSONALTOJAVA"| | sed -e 's/\(.*\)/'"\1"'/' -e 's/ /$/g'| tr '\n' '\0' | while read -d $'\0' -r i
ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d/.java/' -e 's/^\/c/../' -e "$EXTOJAVA" -e "$DATATOJAVA" -e "$ROOTTOJAVA" -e "$PERSONALTOJAVA"| sed -e 's/\(.*\)/'"\1"'/' -e 's/ /$/g'| tr '\n' '\0' | while read -d $'\0' -r i
do
	# echo JAVAC "$i"
	pushd `mydirname "$i"`
	echo javac -proc:full -J-Xss1g -J-Xmx4g `mybasename "$i"`
	javac -proc:full -J-Xss1g -J-Xmx4g `mybasename "$i"`
	popd
done


echo run java programs
# ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d/.class/' -e 's/^\/c/../' -e "$EXTOJAVA" -e "$DATATOJAVA" -e "$ROOTTOJAVA" -e "$PERSONALTOJAVA" | sed -e 's/\.class$//' -e 's/^\.\.\/java\///'

ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d/.class/' -e 's/^\/c/../' -e "$EXTOJAVA" -e "$DATATOJAVA" -e "$ROOTTOJAVA" -e "$PERSONALTOJAVA" | sed -e 's/\.class$//' -e 's/^\.\.\/java\///' | sed -e 's/\(.*\)/'"\1"'/' -e 's/ /$/g' | tr '\n' '\0' | while read -d $'\0' -r i
do
	pushd ../java
	echo java -Xss1g -Xmx4g "$i" # sh runToError.sh || echo "Failed"
	java -Xss1g -Xmx4g "$i" # sh runToError.sh || echo "Failed"
	popd
done

echo Comparing JSON
# ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d/.new.java.json/' -e "$ROOTTOLOCAL" -e 's/^\/c/../' | sed -e 's/ /$/g' # | tr '\n' '\0' | while read -d $'\0' -r i
ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d/.new.java.json/' -e "$ROOTTOLOCAL" -e 's/^\/c/../' | sed -e 's/ /$/g' | tr '\n' '\0' | while read -d $'\0' -r i
do
	OLDJSON=`mydirname "$i" | sed -e "$LOCALTOROOT" `/`mybasename "$i" .new.java.json`.${JSONEXT}
	# echo OLDJSON $OLDJSON
	# echo NEWJSON $i
	echo "${NODE}" --trace-warnings "${NODEDIR}/jsondiff.js" "$OLDJSON" "$i"
	"${NODE}" --trace-warnings "${NODEDIR}/jsondiff.js" "$OLDJSON" "$i"
done

echo Comparing old xml and pretty printed intermediate xml
ls -d "$@" | grep -v intermediate | grep -v "\.new" |  sed -e 's/\.x3d/.newPrettyPrint.intermediate.x3d/' -e "$ROOTTOLOCAL" -e 's/^\/c/../' | sed -e 's/ /$/g' | tr '\n' '\0' | while read -d $'\0' -r i
do
	X3D=`mydirname "$i" | sed -e "$LOCALTOROOT" `/`mybasename "$i" .newPrettyPrint.intermediate.x3d | sed 's/\\$/ /g'`.x3d 
	# echo "$X3D" "$i"
	echo "${NODE}" --trace-warnings "${NODEDIR}/xmldiff.js" "$X3D" "$i"
	"${NODE}" --trace-warnings "${NODEDIR}/xmldiff.js" "$X3D" "$i"
done

echo Running Graal JavaScript
for i in `ls -d "$@" | sed 's/\(.*\)/"\1"/' | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d/.js/' -e 's/^\/c/../' -e "$EXTOGRAAL" -e "$DATATOGRAAL" -e "$ROOTTOGRAAL" -e "$PERSONALTOGRAAL" | xargs ls -d`
do
	pushd ../graaljs
	echo "../shell/jjs.sh $i"
	      ../shell/jjs.sh "$i"
	popd
done

echo Diffing .new.graal.x3d from graalvm with original x3d
ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d/.new.graal.x3d/' -e "$ROOTTOLOCAL" -e 's/^\/c/../' | tr '\n' '\0' | while read -d $'\0' -r i
do
	X3D=`mydirname "$i" | sed -e "$LOCALTOROOT" `/`mybasename "$i" .new.graal.x3d`.x3d
	echo "${NODE}" --trace-warnings "${NODEDIR}/xmldiff.js" "'$X3D'" "'$i'"
	"${NODE}" --trace-warnings "${NODEDIR}/xmldiff.js" "$X3D" "$i"
done

echo Running Node JavaScript
ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d/.js/' -e 's/^\/c/../' -e "$EXTONODE" -e "$DATATONODE" -e "$PERSONALTONODE" -e "$ROOTTONODE" | tr '\n' '\0' | while read -d $'\0' -r i
do
	pushd ../node
	# We do have a node.js java module
	echo "${NODE}" --trace-warnings "$i"
	"${NODE}" --trace-warnings "$i"
	popd
done

#echo comparing SAXON and XSLT outputs
#ls -d "$@" | grep -v intermediate | grep -v "\.new"| tr '\n' '\0' | while read -d $'\0' -r i
#do
#	DIRBASE=`mydirname "$i"`/`mybasename "$i" x3d`
#	SAXGEND="$DIRBASE"json
#	XSLTGEND="$DIRBASE"new2.json
#	XSLT3=../../../node_modules/.bin/xslt3 
#	X3DTOJSON=/c/x3d-code/www.web3d.org/x3d/stylesheets/X3dToJson.xslt 
#	echo "$XSLT3" -xsl:"$X3DTOJSON" -s:"$i" -o:"$XSLTGEND"
#	     "$XSLT3" -xsl:"$X3DTOJSON" -s:"$i" -o:"$XSLTGEND"
#	echo "${NODE}" "${NODEDIR}/jsondiff.js" "$SAXGEND" "$XSLTGEND"
#	     "${NODE}" "${NODEDIR}/jsondiff.js" "$SAXGEND" "$XSLTGEND"
#done

echo Running python code
ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e "s/\.x3d/.${JSONEXT}/" -e 's/^\/c/../' | tr '\n' '\0' | while read -d $'\0' -r i
do
	PY=`echo "$i" | sed -e "$DATATOPYTHON" -e "$PERSONALTOPYTHON" -e "$ROOTTOPYTHON" -e "s/.${JSONEXT}/.py/"`
	X3D=`echo "$i" | sed -e "s/.${JSONEXT}/.new.python.x3d/"`
	#echo py ../python/x3djsonld.py "'$i'" ">" "'$PY'" and py "'$PY'" ">" "'$X3D'"
	#py ../python/x3djsonld.py "$i" > "$PY" && py "$PY" > "$X3D" && echo "$PY" "$X3D" || echo "Error: "$PY" failed to parse"
	echo python "$PY"
	python "$PY"
done

echo Diffing .new.python.x3d .py with original x3d
ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d/.new.python.x3d/' -e "$ROOTTOLOCAL" -e 's/^\/c/../' | tr '\n' '\0' | while read -d $'\0' -r i
do
	X3D=`mydirname "$i" | sed -e "$LOCALTOROOT" `/`mybasename "$i" .new.python.x3d`.x3d
	echo "${NODE}" --trace-warnings "${NODEDIR}/xmldiff.js" "'$X3D'" "'$i'"
	"${NODE}" --trace-warnings "${NODEDIR}/xmldiff.js" "$X3D" "$i"
done
