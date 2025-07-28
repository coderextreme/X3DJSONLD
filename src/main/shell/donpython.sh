#!/bin/bash
set -euo pipefail
IFS=$'\n\t'

# Run the Test Suite

# accepts files with .x3d extension

source ../python/venv/Scripts/activate
export PROCESSORS=${PROCESSORS-8}

. ./classpath

echo translating to python
(find ~/www.web3d.org/x3d/content/examples/HumanoidAnimation -type f -name '*.x3d' | grep -v intermediate | grep -v "\.new" | grep -v GrampsAnimations) | xargs -P $PROCESSORS java net.coderextreme.RunSaxon ---commandline ---overwrite ---silent --../lib/stylesheets/X3dToPython.xslt -py ---""
echo running python
for i in `find ../python/net/x3djsonld -name '*.py'`
do
	echo "$i"
	${PYTHON} "$i"
done
