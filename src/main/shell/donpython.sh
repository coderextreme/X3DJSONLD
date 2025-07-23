#!/bin/bash
set -euo pipefail
IFS=$'\n\t'

# Run the Test Suite

# accepts files with .x3d extension

source ../python/venv/Scripts/activate
export PROCESSORS=${PROCESSORS-8}

. ./classpath

echo translating to python
(find ../../../../../../x3d-code/www.web3d.org/x3d/content/examples/HumanoidAnimation -type f -name '*.x3d' | grep -v intermediate | grep -v "\.new") | xargs -P $PROCESSORS java net.coderextreme.RunSaxon ---overwrite ---silent --../lib/stylesheets/X3dToPython.xslt -py ---../python/net/x3djsonld/data/
echo running python
pushd ../../../x3d-code/www.web3d.org/x3d/content/examples/HumanoidAnimation
for i in `find . -name '*.py'`
	echo "$i"
	${PYTHON} "$i"
popd
