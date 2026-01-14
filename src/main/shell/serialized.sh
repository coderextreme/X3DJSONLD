#!/bin/bash
set -euo pipefail
IFS=$'\n\t'

# get lists of files which haven't been converted to Java
. ../shell/classpath

DIR=`pwd`

(cd /c; find x3d-code/www.web3d.org/x3d/content/examples -name '*.'${JSONEXT}; cd $DIR) | grep -v " "| sed -e 's/\/default\./\/_default./' -e 's/\/switch\./\/_switch./' -e 's/\/for\./\/_for./' -e 's/[-. ]/_/g' -e 's/\/\([0-9].*\)$/\/_\1/g' -e 's/\/\([0-9]\/\)/\/_\1/' -e 's/www.web3d.org/www_web3d_org/' -e 's/x3d_code/..\/java\/net\/coderextreme\/x3d_code/' -e 's/\_'${JSONEXT}'$/.java/'| xargs ls 2> /dev/null |  sed -e "s/\.java$/."${JSONEXT}"/" -e 's/\/_\([0-9]\/\)/\/\1/g' -e 's/^_\(default|switch|for\)$/\1/g' -e 's/_/*/g' -e 's/java\/net\/coderextreme\///'
