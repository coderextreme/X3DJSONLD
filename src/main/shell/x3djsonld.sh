#!/bin/bash

# Run the Test Suite

# accepts files with .x3d extension
export PROCESSORS="${PROCESSORS-8}"

. ./classpath

function jjs() {
	C:/graalvm-jdk-20_windows-x64_bin/graalvm-jdk-20.0.2+9.1/bin/js.cmd "$@"
}

# py ../python/classes.py

STYLESHEETDIR=../lib/stylesheets

DATATOJAVA='s/\/data\//\/java\/net\/coderextreme\/data\//' 
DATATONODE='s/\/data\//\/node\/net\/coderextreme\/data\//' 
DATATOPYTHON='s/\/data\//\/python\/net\/coderextreme\/data\//' 
DATATONASH='s/\/data\//\/nashorn\/net\/coderextreme\/data\//' 

PERSONALTOJAVA='s/\/personal\//\/java\/net\/coderextreme\/personal\//' 
PERSONALTONODE='s/\/personal\//\/node\/net\/coderextreme\/personal\//' 
PERSONALTOPYTHON='s/\/personal\//\/python\/net\/coderextreme\/personal\//' 
PERSONALTONASH='s/\/personal\//\/nashorn\/net\/coderextreme\/personal\//' 

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
	if [ ! -z "$2" ]
	then
		file=`echo "$file" | sed s/$2//`
	fi
	echo "$file"
}

# convert to first JSON,
# then overwrite with xml2all.js
# then create other files from second JSON
# ls -d "$@" | sed 's/\(.*\)/"\1"/' | grep -v intermediate | grep -v "\.new" | xargs "${NODE}" "${NODEDIR}/xml2all.js" | xargs -P "$PROCESSORS" "${NODE}" "${NODEDIR}"/json2all.js
# ls -d "$@" | sed 's/\(.*\)/"\1"/' | grep -v intermediate | grep -v "\.new" | xargs -P "$PROCESSORS" java net.coderextreme.RunSaxon --- "${OVERWRITE}" --"${STYLESHEETDIR}/X3dToJson.xslt" -json | xargs "${NODE}" "${NODEDIR}/xml2all.js" | xargs -P "$PROCESSORS" "${NODE}" "${NODEDIR}/json2all.js"
ls -d "$@" | grep -v intermediate | grep -v "\.new" | tr '\n' '\0'| xargs -0 -P "$PROCESSORS" java net.coderextreme.RunSaxon --- "${OVERWRITE}" --"${STYLESHEETDIR}/X3dToJson.xslt" -json | sed 's/^\(.*\)$/"\1"/' | xargs -P "$PROCESSORS" "${NODE}" "${NODEDIR}/json2all.js"