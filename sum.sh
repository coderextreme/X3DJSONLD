#!/bin/bash

# sum lines on standard input

sum=0
while read err
do
	sum=`expr $sum + $err`
done
echo $sum
	
