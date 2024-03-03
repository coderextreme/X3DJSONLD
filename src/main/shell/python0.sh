#!/bin/bash
# set -euo pipefail
IFS=$'\n\t'

# Run the Test Suite

# accepts files with .x3d extension
export PROCESSORS=${PROCESSORS-8}

. ./classpath

# py ../python/classes.py

DATATOPYTHON='s/\/data\//\/python\/net\/coderextreme\/data\//' 
ROOTTOPYTHON='s/\/x3d_code\/www.web3d.org\//\/python\/net\/coderextreme\/x3d_code\/www_web3d_org\//' 

echo "running python"
for i in `ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d$/.json/' -e 's/-/_/g' -e 's/^\/c/../'`
do
	PY=`echo $i | sed -e $DATATOPYTHON -e $ROOTTOPYTHON -e 's/.json$/.py/'`
	#echo python ../python/x3djsonld.py $i $PY
	#python ../python/x3djsonld.py $i > $PY && python $PY > /dev/null && echo "$PY" || echo "Error: $PY failed to parse"
	echo python "$PY"
	python "$PY"
done
