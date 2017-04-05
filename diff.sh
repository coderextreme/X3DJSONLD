#!/bin/bash
for i in `find . -name '*.new.x3d'`
do
	echo ================$i ==========================
	echo node xmldiff.js -w `dirname $i  | sed 's/.\/www_web3d_org/\/c\/x3d-code\/www.web3d.org/'`/`basename $i .new.x3d`.x3d $i
	node xmldiff.js `dirname $i  | sed 's/.\/www_web3d_org/\/c\/x3d-code\/www.web3d.org/'`/`basename $i .new.x3d`.x3d $i
done
