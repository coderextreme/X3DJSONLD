#!/bin/bash

. ./classpath

find ../data/*.x3d|grep -v new | xargs ${NODE} ../node/xml2all.js
for i in ../data/*.json.new
do
	${NODE} ../node/jsondiff.js `dirname $i`/`basename $i .json.new`.json $i
done
