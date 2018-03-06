#!/bin/bash

. ./classpath

for i in ../data/*.json.new
do
	${NODE} ../node/jsondiff.js `dirname $i`/`basename $i .json.new`.json $i
done
