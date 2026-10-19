#!/bin/bash
# set -euo pipefail
IFS=$'\n\t'

# Run the Test Suite

# accepts files with .x3d extension

. ./classpath

# ${PYTHON} ../python/classes.py
pushd ../java
javac -cp ${CLASSPATH} -proc:full net/coderextreme/RunSaxon.java net/coderextreme/X3DRoots.java
popd
# sudo pacman -Syu leiningen

STYLESHEETDIR=../lib/stylesheets

DATATOCLOJURE='s/\/data\//\/clojure\/net\/coderextreme\/data\//' 
DATATOJAVA='s/\/data\//\/java\/net\/coderextreme\/data\//' 
DATATONODE='s/\/data\//\/node\/net\/coderextreme\/data\//' 
DATATOGRAAL='s/\/data\//\/graaljs\/net\/coderextreme\/data\//' 
DATATOGRAALPY='s/\/data\//\/graalpy\/net\/coderextreme\/data\//' 
DATATOPYTHON='s/\/data\//\/python\/net\/coderextreme\/data\//' 
DATATOTRUFFLERUBY='s/\/data\//\/truffleruby\/net\/coderextreme\/data\//' 
DATATOJRUBY='s/\/data\//\/jruby\/net\/coderextreme\/data\//' 

PERSONALTOCLOJURE='s/\/personal\//\/clojure\/net\/coderextreme\/personal\//' 
PERSONALTOJAVA='s/\/personal\//\/java\/net\/coderextreme\/personal\//' 
PERSONALTONODE='s/\/personal\//\/node\/net\/coderextreme\/personal\//' 
PERSONALTOGRAAL='s/\/personal\//\/graaljs\/net\/coderextreme\/personal\//' 
PERSONALTOGRAALPY='s/\/personal\//\/graalpy\/net\/coderextreme\/personal\//' 
PERSONALTOPYTHON='s/\/personal\//\/python\/net\/coderextreme\/personal\//' 
PERSONALTOTRUFFLERUBY='s/\/personal\//\/truffleruby\/net\/coderextreme\/personal\//' 
PERSONALTOJRUBY='s/\/personal\//\/jruby\/net\/coderextreme\/personal\//' 

EXTOCLOJURE='s/\/Library\//\/clojure\/net\/coderextreme\/Library\//' 
EXTOJAVA='s/\/Library\//\/java\/net\/coderextreme\/Library\//' 
EXTONODE='s/\/Library\//\/node\/net\/coderextreme\/Library\//' 
EXTOGRAAL='s/\/Library\//\/graaljs\/net\/coderextreme\/Library\//' 
EXTOGRAALPY='s/\/Library\//\/graalpy\/net\/coderextreme\/Library\//' 
EXTOPYTHON='s/\/Library\//\/python\/net\/coderextreme\/Library\//' 
EXTOTRUFFLERUBY='s/\/Library\//\/truffleruby\/net\/coderextreme\/Library\//' 
EXTOJRUBY='s/\/Library\//\/jruby\/net\/coderextreme\/Library\//' 

ROOTTOCLOJURE='s/\/x3d_code\/www.web3d.org\//\/clojure\/net\/coderextreme\/x3d_code\/www_web3d_org\//' 
ROOTTOJAVA='s/\/x3d_code\/www.web3d.org\//\/java\/net\/coderextreme\/x3d_code\/www_web3d_org\//' 
ROOTTONODE='s/\/x3d_code\/www.web3d.org\//\/node\/net\/coderextreme\/x3d_code\/www_web3d_org\//' 
ROOTTOGRAAL='s/\/x3d_code\/www.web3d.org\//\/graaljs\/net\/coderextreme\/x3d_code\/www_web3d_org\//' 
ROOTTOGRAALPY='s/\/x3d_code\/www.web3d.org\//\/graalpy\/net\/coderextreme\/x3d_code\/www_web3d_org\//' 
ROOTTOPYTHON='s/\/x3d_code\/www.web3d.org\//\/python\/net\/coderextreme\/x3d_code\/www_web3d_org\//' 
ROOTTOTRUFFLERUBY='s/\/x3d_code\/www.web3d.org\//\/truffleruby\/net\/coderextreme\/x3d_code\/www_web3d_org\//' 
ROOTTOJRUBY='s/\/x3d_code\/www.web3d.org\//\/jruby\/net\/coderextreme\/x3d_code\/www_web3d_org\//' 

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

# convert to first JSON,
# ls -d "$@" | grep -v intermediate | grep -v '\.new' | tr '\n' '\0' | xargs -0 -L 33 -P "$PROCESSORS" bash runtidy.sh | sed 's/^\(.*\)$/"\1"/' | xargs -P "$PROCESSORS" "${NODE}" "../node/json2all.js"
ls -d "$@" | grep -v intermediate | grep -v '\.new' | tr '\n' '\0'| xargs -0 -P "$PROCESSORS" java net.coderextreme.RunSaxon --- "${OVERWRITE}" --"${STYLESHEETDIR}/X3dToJson.xslt" -${JSONEXT} | sed 's/^\(.*\)$/"\1"/' | xargs -P "$PROCESSORS" "${NODE}" "../node/json2all.js"

echo "test JSON to XML convertion .${JSONEXT} to .x3d.new (temp xml)"
ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d/.x3d.new/' -e "$ROOTTOLOCAL" -e 's/^\/c/../' | sed 's/^\(.*\)$/"\1"/' | tr '\n' '\0' | while read -d $'\0' -r file
do
	#echo FILE "$file"
	#echo DIR `mydirname "$file" | sed -e "$LOCALTOROOT"`
	#echo BASE `mybasename "$file" .new`
	X3D=`mydirname "$file" | sed -e "$LOCALTOROOT"`/`mybasename "$file" .new`
	FILE=`mydirname "$file" | sed -e "$LOCALTOROOT"`/`mybasename "$file" | sed -e s/-/_/g`
	# echo X3D "$X3D"
	echo "${NODE}" --trace-warnings "../node/xmldiff.js" "$X3D" "$FILE"
	"${NODE}" --trace-warnings "../node/xmldiff.js" "$X3D" "$FILE"
done
