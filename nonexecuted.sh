#!/bin/bash

# way to get list of non executed files

. ./classpath

(ls *.java; find www_web3d_org -name '*.class') | grep -v " "| sed 's/\.class$/.new.json/'| xargs ls 2>&1| grep "No such file or directory" | awk '{ print $4; }' | sed "s/^'\.\///" | sed "s/\.new.json'://" | sed "s/^'//" | sed 's/\//./g'
