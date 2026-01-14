#!/bin/bash
set -euo pipefail
IFS=$'\n\t'

# Run the Test Suite

# accepts files with .x3d extension

. ./classpath

for i in `ls "$@" | grep -v new`
do
	echo '$' java org.web3d.x3d.jsail.CommandLine -validate "$i"
	java org.web3d.x3d.jsail.CommandLine -validate "$i"
done
