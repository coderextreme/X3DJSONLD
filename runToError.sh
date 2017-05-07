#!/bin/sh

. ./classpath

for i in "$@"
do
	java -d64 -Xss1g -Xmx4g $i 2> $i.runerr.txt 1> $i.runout.txt
done
