#!/bin/bash
set -euo pipefail
IFS=$'\n\t'

# old way of running files through graaljs

. ./classpath

export PROCESSORS=${PROCESSORS-8}

cp /dev/null jsdiffs.txt

pushd ../python
${PYTHON} nodeclasses.py
popd


(ls ../node/net/*/data/*.mjs; find www_web3d_org -name '*.mjs') | sed 's/\.mjs/.new.x3d/' | xargs ls 2>&1| grep "No such file or directory" | awk '{ print $4; }'| sed "s/^'\.\///" | sed "s/\.new\.x3d':/.mjs/" | sed "s/^'//" | xargs -L 1 -P ${PROCESSORS-8} node 2> jserrors.txt

for i in `find .. www_web3d_org -name '*.new.x3d'`
do
	echo ================================================================================ | tee -a jsdiffs.txt
	echo ${NODE} ${NODEDIR}/xmldiff.js `dirname $i | sed 's/www_web3d_org\//\/c\/x3d-code\/www.web3d.org\//'`/`basename $i .new.x3d`.x3d $i | tee -a jsdiffs.txt
	${NODE} ${NODEDIR}/xmldiff.js `dirname $i | sed 's/www_web3d_org\//\/c\/x3d-code\/www.web3d.org\//'`/`basename $i .new.x3d`.x3d $i | tee -a jsdiffs.txt
done
