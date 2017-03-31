#!/bin/bash
. ./classpath

ls *.java | xargs -L 1 -P 8 javac -J-Xss16m -J-Xmx4096M
find www_web3d_org -name '*.java' | grep -v " "| sed 's/\.java$/.class/'| xargs ls 2>&1| grep "No such file or directory" | awk '{ print $4; }'| sed "s/^'\.\///" | sed "s/\.class':/.java/" | sed "s/^'//" | xargs -L 1 -P 8 javac -J-Xss16m -J-Xmx4096M
