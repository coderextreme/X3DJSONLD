#!/bin/bash
set -euo pipefail
IFS=$'\n\t'

. ./classpath

for i in "$@"
do
	java -Xss1g -Xmx4g $i 2> $i.runerr.txt 1> $i.runout.txt
done
