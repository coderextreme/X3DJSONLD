#!/bin/bash

# get list of files which have X3D but don't have JSON

find /c/x3d-code/www.web3d.org/x3d/content/examples -name '*.x3d' | grep -v " "| sed -e 's/\.x3d$/.json/' -e 's/^\/c/../' | xargs ls 2>&1| grep "No such file or directory" | awk '{ print $4; }' | sed -e "s/^'//" -e "s/\.json':/.x3d/" -e 's/^\.\./\/c/' | xargs ls
