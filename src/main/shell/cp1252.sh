#!/bin/bash
set -euo pipefail
IFS=$'\n\t'

. ./classpath

# find files with Cp1252

bash noncompiled.sh 2>&1| xargs javac -J-Xss1g -J-Xmx19g -Xmaxerrs 10000 2>&1 | grep "error: unmappable character for encoding Cp1252"| awk -F: '{ print $1; }'|sort -u| sed 's/\\/\//g'
