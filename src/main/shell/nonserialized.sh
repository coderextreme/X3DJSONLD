#!/bin/bash

# get lists of files which haven't been converted to Java

find /c/x3d-code/www.web3d.org/x3d/content/examples -name '*.json' | grep -v " "| sed -e 's/\/default\./\/_default./' -e 's/\/switch\./\/_switch./' -e 's/\/for\./\/_for./' -e 's/[-. ]/_/g' -e 's/\/\([0-9].*\)$/\/_\1/g' -e 's/\/\([0-9]\/\)/\/_\1/' -e 's/www.web3d.org/www_web3d_org/' -e 's/\/c\/x3d_code/..\/java\/net\/coderextreme\/x3d_code/' -e 's/\_json$/.java/'| xargs ls 2>&1| grep "No such file or directory" | awk '{ print $4; }' | sed -e "s/^'\.\.\/java\/net\/coderextreme/\/c/" -e "s/\.java':/.json/" -e "s/^'//" -e 's/\/_\([0-9]\/\)/\/\1/g' -e 's/^_\(default|switch|for\)$/\1/g' -e 's/_/*/g' -e 's/java\/net\/coderextreme\///'
