#!/bin/bash
# set -euo pipefail
IFS=$'\n\t'

# Run the Test Suite

# accepts files with .x3d extension
export PROCESSORS="${PROCESSORS-8}"

. ./classpath

# ${PYTHON} ../python/classes.py
pushd ../java
echo "export CLASSPATH=$CLASSPATH"
# export CLASSPATH="C:/Users/jcarl/X3DJSONLD/X3DJSAIL.4.0.full.jar;C:/Users/jcarl/X3DJSONLD/saxon-he-12.8.jar;.;../../..;../java"
echo "export CLASSPATH=$CLASSPATH"
javac -proc:full -cp "${CLASSPATH}" net/coderextreme/RunSaxon.java net/coderextreme/X3DRoots.java
popd
# sudo pacman -Syu leiningen

STYLESHEETDIR=../lib/stylesheets
DATATOGRAALPY='s/\/data\//\/graalpy\/net\/coderextreme\/data\//' 
EXTOGRAALPY='s/\/Library\//\/graalpy\/net\/coderextreme\/Library\//' 
PERSONALTOGRAALPY='s/\/personal\//\/graalpy\/net\/coderextreme\/personal\//' 
ROOTTOGRAALPY='s/\/x3d_code\/www.web3d.org\//\/graalpy\/net\/coderextreme\/x3d_code\/www_web3d_org\//' 

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

#echo  "ls -d $@ | grep -v intermediate | grep -v  '\.new'  | tr '\n' '\0'| xargs -0 -P $PROCESSORS java net.coderextreme.RunSaxon --- ${OVERWRITE} --${STYLESHEETDIR}/X3dToJson.xslt -json | sed 's/^\(.*\)\$/\"\1\"/' | xargs -P $PROCESSORS ${NODE} ${NODEDIR}/json2all.js"
#ls -d "$@" | grep -v intermediate | grep -v '\.new' | tr '\n' '\0'| xargs -0 -P "$PROCESSORS" java net.coderextreme.RunSaxon --- "${OVERWRITE}" --"${STYLESHEETDIR}/X3dToJson.xslt" -json | sed 's/^\(.*\)$/"\1"/' | xargs -P "$PROCESSORS" "${NODE}" "${NODEDIR}/json2all.js"

echo Running graalpy code
ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e "s/\.x3d/.${JSONEXT}/" -e 's/^\/c/../' | tr '\n' '\0' | while read -d $'\0' -r i
do
	GPY=`echo "$i" | sed -e "$DATATOGRAALPY" -e "$PERSONALTOGRAALPY" -e "$ROOTTOGRAALPY" -e "s/.${JSONEXT}/.py/"`
	X3D=`echo "$i" | sed -e "s/.${JSONEXT}/.new.graalpy.x3d/"`

	echo "${GRAALPY}" --jvm --vm.cp="${CLASSPATH}" "$GPY"
	"${GRAALPY}" --jvm --vm.cp="${CLASSPATH}" "$GPY"
	#( "${GRAALPY}" --jvm --vm.cp="${CLASSPATH}" "$GPY") &
	#JOB_PID=$!
	#wait $JOB_PID
done

echo Diffing .new.graalpy.x3d .py with original x3d
ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d/.new.graalpy.x3d/' -e "$ROOTTOLOCAL" -e 's/^\/c/../' | tr '\n' '\0' | while read -d $'\0' -r i
do
	X3D=`mydirname "$i" | sed -e "$LOCALTOROOT" `/`mybasename "$i" .new.graalpy.x3d`.x3d
	echo "${NODE}" --trace-warnings "${NODEDIR}/xmldiff.js" "'$X3D'" "'$i'"
	"${NODE}" --trace-warnings "${NODEDIR}/xmldiff.js" "$X3D" "$i"
done
