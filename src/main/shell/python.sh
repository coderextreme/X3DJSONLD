#!/bin/bash

# Run the Test Suite

# accepts files with .x3d extension
export PROCESSORS=${PROCESSORS-8}

. ./classpath

echo translating to python
(find ../data -type f -name '*.x3d' | grep -v intermediate | grep -v "\.new") | xargs -P $PROCESSORS java net.coderextreme.RunSaxon ---overwrite ---silent --../lib/stylesheets/X3dToPython.xslt -py ---../python/net/x3djsonld/data/
echo running python
pushd ../python/net/x3djsonld/data
export PYTHONPATH=`pwd`
ls *.py | xargs -L 1 -P $PROCESSORS python3
popd
