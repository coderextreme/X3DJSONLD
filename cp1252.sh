#!/bin/bash
sh noncompiled.sh 2>&1| xargs javac -Xmaxerrs 10000 2>&1 | grep "error: unmappable character for encoding Cp1252"| awk -F: '{ print $1; }'|sort -u| sed 's/\\/\//g'
