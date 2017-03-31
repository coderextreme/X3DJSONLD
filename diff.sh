#!/bin/bash
for i in `find . -name '*.new.x3d'`
do
	echo ================$i ==========================
	echo diff -w `dirname $i  | sed 's/www_web3d_org/www.web3d.org/'`/`basename $i .new.x3d`.x3d $i
	diff -w `dirname $i  | sed 's/www_web3d_org/www.web3d.org/'`/`basename $i .new.x3d`.x3d $i
done
