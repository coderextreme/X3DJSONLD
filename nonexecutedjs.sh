#!/bin/bash

# way to get list of non executed js files

. ./classpath

(ls *.sail.js; find www_web3d_org -name '*.sail.js') | grep -v " "| sed 's/\.sail.js$/.new.x3d/'| xargs ls 2>&1| grep "No such file or directory" | awk '{ print $4; }' | sed "s/^'\.\///" | sed "s/\.new.x3d':/.sail.js/" | sed "s/^'//"
