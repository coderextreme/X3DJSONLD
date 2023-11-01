#!/bin/bash
set -euo pipefail
IFS=$'\n\t'

export PROCESSORS=${PROCESSORS-8}
export OVERWRITE=---overwrite
STYLESHEETDIR=/x3d-code/www.web3d.org/x3d/stylesheets
ls -d "$@" | grep -v intermediate | grep -v "\.new" | xargs -P $PROCESSORS java net.coderextreme.RunSaxon --- ${OVERWRITE} --${STYLESHEETDIR}/X3dToTurtle.xslt -ttl
