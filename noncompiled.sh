#!/bin/bash

# way to get list of non compile files and compile them

. ./classpath

(ls *.java; find www_web3d_org -name '*.java') | grep -v " "| sed 's/\.java$/.class/'| xargs ls 2>&1| grep "No such file or directory" | awk '{ print $4; }'| sed -e "s/^'\.\///" -e "s/\.class':/.java/" -e "s/^'//"
