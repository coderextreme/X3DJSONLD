#!/bin/bash

# Run the Test Suite

# accepts files with .x3d extension
export PROCESSORS=${PROCESSORS-8}

. ./classpath

# py ../python/classes.py

LOCALTOROOT='s/^\.\.\/x3d-code/\/c\/x3d-code/'
ROOTTOLOCAL='s/www.web3d.org/www_web3d_org/' 

ls -d "$@" | grep -v intermediate | grep -v "\.new" | xargs -P $PROCESSORS ${NODE} ${NODEDIR}/dom2json.js

for i in `ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.json$/.json.new/' -e 's/-/_/g' -e $ROOTTOLOCAL -e 's/^\/c/../'`
do
	JSON=`dirname $i | sed -e 's/_/-/g' -e $LOCALTOROOT `/`basename $i .json.new`.json 
	${NODE} ${NODEDIR}/jsondiff.mjs $JSON $i
done
