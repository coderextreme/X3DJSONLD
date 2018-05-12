#!/bin/bash

. ./classpath

export PROCESSORS=${PROCESSORS-4}

find  ../data/*.x3d | grep -v new | xargs ${NODE} ${NODEDIR}/xml2xml.js
for i in `find  ../data/*.Snew.x3d`
do
	diff `echo $i | sed 's/Snew\.//'` $i
done

find  /c/x3d-code/www.web3d.org/x3d/content/examples -name '*.x3d' | grep -v new | grep -v new | grep -v roundtrip | grep -v Canonical | xargs -L 1 -P 1 ${NODE} ${NODEDIR}/xml2xml.js
for i in `find  /c/x3d-code/www.web3d.org/x3d/content/examples -name '*.Snew.x3d'`
do
	diff `echo $i | sed 's/Snew\.//'` $i
done
