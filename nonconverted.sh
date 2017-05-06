#!/bin/bash

# get list of files which have X3D but don't have JSON

find /c/x3d-code/www.web3d.org/x3d/content/examples -name '*.x3d' | grep -v " "| sed 's/\.x3d$/.json/'| xargs ls 2>&1| grep "No such file or directory" | awk '{ print $4; }'| sed "s/^'\.\///" | sed "s/\.json':/.x3d/" | sed "s/^'//" | xargs ls
