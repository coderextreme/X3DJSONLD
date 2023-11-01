#!/bin/bash
set -euo pipefail
IFS=$'\n\t'

# sum lines on standard input

sum=0
while read err
do
	sum=`expr $sum + $err`
done
echo $sum
	
