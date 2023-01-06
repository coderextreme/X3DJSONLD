#!/bin/bash

# Run the Test Suite

# accepts files with .x3d extension

source ../../../venv/Scripts/activate
export PROCESSORS=${PROCESSORS-8}

. ./classpath

echo translating to python
(find /c/x3d-code/www.web3d.org/x3d/content/examples -type f -name '*.x3d' | grep -v intermediate | grep -v "\.new") | xargs -P $PROCESSORS java net.coderextreme.RunSaxon ---overwrite ---silent --../lib/stylesheets/X3dToPython.xslt -py ---../python/net/x3djsonld/data/
echo running python
pushd ../python/net/x3djsonld/data
find . -name '*.py' | xargs -L 1 -P $PROCESSORS python
popd
