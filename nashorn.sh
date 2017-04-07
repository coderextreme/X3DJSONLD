#!/bin/bash
. ./classpath

cp /dev/null jsdiffs.txt

python classes.py

(ls *.sail.js; find www_web3d_org -name '*.sail.js') | sed 's/\.sail\.js/.new.x3d/' | xargs ls 2>&1| grep "No such file or directory" | awk '{ print $4; }'| sed "s/^'\.\///" | sed "s/\.new\.x3d':/.sail.js/" | sed "s/^'//" | xargs -L 1 -P 8 jjs -Dnashorn.args="-classpath ${CLASSPATH}" 2> jserrors.txt

for i in *.new.x3d `find www_web3d_org -name '*.new.x3d'`
do
	echo ================================================================================ | tee -a jsdiffs.txt
	echo node xmldiff.js `dirname $i | sed 's/www_web3d_org\//\/c\/x3d-code\/www.web3d.org\//'`/`basename $i .new.x3d`.x3d $i | tee -a jsdiffs.txt
	node xmldiff.js `dirname $i | sed 's/www_web3d_org\//\/c\/x3d-code\/www.web3d.org\//'`/`basename $i .new.x3d`.x3d $i | tee -a jsdiffs.txt
done
