#!/bin/bash
set -euo pipefail
IFS=$'\n\t'

# Run the Test Suite

# accepts files with .x3d extension
export PROCESSORS=${PROCESSORS-8}

. ./classpath

echo export CLASSPATH='"'${CLASSPATH}'"'
for i in `ls "$@" | grep -v new`
do
	echo '$' java org.web3d.x3d.jsail.CommandLine $i -validate
	java -cp "${CLASSPATH}" org.web3d.x3d.jsail.CommandLine $i -validate
done
