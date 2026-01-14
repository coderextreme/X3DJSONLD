#!/bin/bash
set -euo pipefail
IFS=$'\n\t'

# get lists of files which haven't been converted to Java
. ../shell/classpath

find ../data /c/x3d-code/www.web3d.org/x3d/content/examples -name '*.'${JSONEXT} | grep -v new | grep -v intermediate | grep -v " "| sed -e 's/\/default\./\/_default./' -e 's/\/switch\./\/_switch./' -e 's/\/for\./\/_for./' -e 's/[- ]/_/g' -e 's/\/\([0-9].*\)$/\/_\1/g' -e 's/\/\([0-9]\/\)/\/_\1/' -e 's/www.web3d.org/www_web3d_org/' -e 's/^\.\./..\/java\/net\/coderextreme/' -e 's/^\/c/..\/java\/net\/coderextreme/' -e 's/\.'${JSONEXT}'$/.java/'| xargs ls 2>&1| grep "No such file or directory" | awk '{ print $4; }' | sed -e "s/^'\.\.\/java\/net\/coderextreme\/x3d_code/\/c\/x3d-code/" -e "s/\.java':/.${JSONEXT}/" -e "s/^'//" -e 's/\/_\([0-9]\/\)/\/\1/g' -e 's/^_\(default|switch|for\)$/\1/g' -e 's/_/*/g' -e 's/java\/net\/coderextreme\///'
