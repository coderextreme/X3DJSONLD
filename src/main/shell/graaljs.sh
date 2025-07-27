#!/bin/bash
# set -euo pipefail
IFS=$'\n\t'

# Run the Test Suite

# accepts files with .x3d extension
export PROCESSORS="${PROCESSORS-8}"

. ./classpath

DATATOGRAAL='s/\/data\//\/graaljs\/net\/coderextreme\/data\//' 
PERSONALTOGRAAL='s/\/personal\//\/graaljs\/net\/coderextreme\/personal\//' 
EXTOGRAAL='s/\/Library\//\/graaljs\/net\/coderextreme\/Library\//' 
ROOTTOGRAAL='s/\/x3d_code\/www.web3d.org\//\/graaljs\/net\/coderextreme\/x3d_code\/www_web3d_org\//' 

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

