#!/bin/bash
# set -euo pipefail
IFS=$'\n\t'

# Run the Test Suite

# accepts files with .x3d extension

. ./classpath

# ${PYTHON} ../python/classes.py

STYLESHEETDIR=../lib/stylesheets

DATATOTRUFFLERUBY='s/\/data\//\/truffleruby\/net\/coderextreme\/data\//' 
PERSONALTOTRUFFLERUBY='s/\/personal\//\/truffleruby\/net\/coderextreme\/personal\//' 
EXTOTRUFFLERUBY='s/\/Library\//\/truffleruby\/net\/coderextreme\/Library\//' 
ROOTTOTRUFFLERUBY='s/\/x3d_code\/www.web3d.org\//\/truffleruby\/net\/coderextreme\/x3d_code\/www_web3d_org\//' 

OVERWRITE=---overwrite
LOCALTOROOT='s/^\.\.\/x3d-code/\/c\/x3d-code/'
ROOTTOLOCAL='s/www.web3d.org/www_web3d_org/' 
export NODE_OPTIONS=--max-old-space-size=24576

echo  "ls -d $@ | grep -v intermediate | grep -v  '\.new'  | tr '\n' '\0'| xargs -0 -P $PROCESSORS java net.coderextreme.RunSaxon --- ${OVERWRITE} --${STYLESHEETDIR}/X3dToJson.xslt -${JSONEXT} | sed 's/^\(.*\)\$/\"\1\"/' | xargs -P $PROCESSORS ${NODE} ${NODEDIR}/json2all.js"
ls -d "$@" | grep -v intermediate | grep -v '\.new' | tr '\n' '\0'| xargs -0 -P "$PROCESSORS" java net.coderextreme.RunSaxon --- "${OVERWRITE}" --"${STYLESHEETDIR}/X3dToJson.xslt" -${JSONEXT} | sed 's/^\(.*\)$/"\1"/' | xargs -P "$PROCESSORS" "${NODE}" "${NODEDIR}/json2all.js"

echo Running JRuby
pushd ../truffleruby
ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d/.rb/' -e 's/^\/c/../' -e "$EXTOTRUFFLERUBY" -e "$DATATOTRUFFLERUBY" -e "$ROOTTOTRUFFLERUBY" -e "$PERSONALTOTRUFFLERUBY"| sed -e 's/\(.*\)/'"\1"'/' -e 's/ /$/g'| tr '\n' '\0' | while read -d $'\0' -r i
do
	echo "$TRUFFLERUBY $i"
	$TRUFFLERUBY --jvm --vm.cp=../../../X3DJSAIL.4.0.full.jar $i
	X3D=../data/`basename $i .rb`.x3d
	RUBY_X3D=../data/`basename $i .rb`.new.truffleruby.x3d
	echo "${NODE} ${NODEDIR}/xmldiff.js $X3D $RUBY_X3D"
	${NODE} ${NODEDIR}/xmldiff.js $X3D $RUBY_X3D
done
popd
