#!/bin/sh

. ./classpath

for i in "$@"
do
	java -d64 -Xss16m -Xmx4096M $i 2> $i.runerr.txt 1> $i.runout.txt
done
