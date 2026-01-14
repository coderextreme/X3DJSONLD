#!/bin/bash
# set -euo pipefail
IFS=$'\n\t'

# Run the Test Suite

# accepts files with .x3d extension

. ./classpath

# ${PYTHON} ../python/classes.py

DATATOPYTHON='s/\/data\//\/python\/net\/coderextreme\/data\//' 
ROOTTOPYTHON='s/\/x3d_code\/www.web3d.org\//\/python\/net\/coderextreme\/x3d_code\/www_web3d_org\//' 

echo "running python"
for i in `ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d$/\.'${JSONEXT}'/' -e 's/-/_/g' -e 's/^\/c/../'`
do
	PY=`echo $i | sed -e $DATATOPYTHON -e $ROOTTOPYTHON -e 's/\.'${JSONEXT}'$/.py/'`
	#echo ${PYTHON} ../python/x3djsonld.py $i $PY
	#${PYTHON} ../python/x3djsonld.py $i > $PY && ${PYTHON} $PY > /dev/null && echo "$PY" || echo "Error: $PY failed to parse"
	echo ${PYTHON} "$PY"
	${PYTHON} "$PY"
done
