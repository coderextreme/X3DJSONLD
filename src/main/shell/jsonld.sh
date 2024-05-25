#!/bin/bash
set -euo pipefail
IFS=$'\n\t'

# Run the Test Suite

# accepts files with .x3d extension
export PROCESSORS="${PROCESSORS-8}"

. ./classpath

# py ../python/classes.py

STYLESHEETDIR=../lib/stylesheets
ROOTTOGRAAL='s/\/x3d_code\/www.web3d.org\//\/graaljs\/net\/coderextreme\/x3d_code\/www_web3d_org\//' 
# OVERWRITE=
OVERWRITE=---overwrite

ls -d "$@" | sed 's/.x3d$/.json/g' | grep -v intermediate | grep -v "\.new" | xargs -P "$PROCESSORS" "${NODE}" "${NODEDIR}/json2all.js"
