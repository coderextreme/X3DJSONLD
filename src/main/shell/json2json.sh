#!/bin/bash
set -euo pipefail
IFS=$'\n\t'

# Run the Test Suite

# accepts files with .x3d extension

. ./classpath

# ${PYTHON} ../python/classes.py

LOCALTOROOT='s/^\.\.\/x3d-code/\/c\/x3d-code/'
ROOTTOLOCAL='s/www.web3d.org/www_web3d_org/' 

ls -d "$@" | grep -v intermediate | grep -v "\.new" | xargs -P $PROCESSORS ${NODE} ${NODEDIR}/dom2json.js

for i in `ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.'${JSONEXT}'$/.'${JSONEXT}'.new/' -e 's/-/_/g' -e $ROOTTOLOCAL -e 's/^\/c/../'`
do
	JSON=`dirname $i | sed -e 's/_/-/g' -e $LOCALTOROOT `/`basename $i .${JSONEXT}.new`.${JSONEXT} 
	${NODE} ${NODEDIR}/jsondiff.js $JSON $i
done
