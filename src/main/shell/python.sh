#!/bin/bash
set -euo pipefail
IFS=$'\n\t'

# Run the Test Suite

# accepts files with .x3d extension
export PROCESSORS=${PROCESSORS-8}

. ./classpath

echo translating to python
(find ../data -type f -name '*.x3d' | grep -v intermediate | grep -v "\.new" | grep -v Gramps8Final | grep -v 'john[23]?.x3d') | xargs -P $PROCESSORS java net.coderextreme.RunSaxon ---commandline ---overwrite ---silent --../lib/stylesheets/X3dToPython.xslt -py ---../python/net/x3djsonld/data/
echo running python
pushd ../python/net/x3djsonld/data
ls *.py | xargs -L 1 -P $PROCESSORS ${PYTHON}
popd
