#!/bin/bash
set -euo pipefail
IFS=$'\n\t'

. ../shell/classpath

export OVERWRITE=---overwrite
STYLESHEETDIR=${HOMESFOLDER}/${USERNAME}/www.web3d.org/x3d/stylesheets
ls -d "$@" | grep -v intermediate | grep -v "\.new" | xargs -P $PROCESSORS java net.coderextreme.RunSaxon --- ${OVERWRITE} --${STYLESHEETDIR}/X3dToTurtle.xslt -ttl
