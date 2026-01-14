#!/bin/bash
set -euo pipefail
IFS=$'\n\t'
. ../shell/classpath
export XSLT=xslt3
export RESULTS=stylesheetout.txt
export NPM=npm
export STYLESHEET=../lib/stylesheets/X3dToJson.xslt
export USERNAME=coderextreme
export X3DJSONLD=/home/$USERNAME/X3DJSONLD
# for RunSaxon
export CLASS=net.coderextreme.RunSaxon
export CLASSPATH=".;${X3DJSONLD}/X3DJSAIL.4.0.full.jar;${X3DJSONLD}/saxon-he-12.8.jar;${X3DJSONLD}/target/X3DJSONLD-1.0-SNAPSHOT.jar;${X3DJSONLD}/target/classes;${X3DJSONLD}/src/main/java"
export OVERWRITE=---overwrite

echo "ls -d $@ | grep -v intermediate | grep -v "\.new" | xargs -P $PROCESSORS java ${CLASS} ${OVERWRITE} --${STYLESHEET} -${JSONEXT}'
echo "Install ${CLASS}, or if already installed, hit return after restarting"
read
ls -d "$@" | grep -v intermediate | grep -v "\.new" | xargs -P $PROCESSORS java ${CLASS} ${OVERWRITE} --${STYLESHEET} -${JSONEXT}
echo "${NPM} install -g ${XSLT}"
${NPM} install -g ${XSLT} || echo "Install ${NPM}!"
echo "Work in progress. Look at ${RESULTS} for results"
for i in `ls -d "$@"| grep -v "\.new"`
do
echo ${XSLT} -xsl:${STYLESHEET} -s:$i -o:`dirname $i`/`basename $i .x3d`.new.${JSONEXT}2
${XSLT} -xsl:${STYLESHEET} -s:$i -o:`dirname $i`/`basename $i .x3d`.new.${JSONEXT}2 2>&1
echo diff -w `dirname $i`/`basename $i x3d`${JSONEXT} `dirname $i`/`basename $i x3d`new.${JSONEXT}2
diff -w `dirname $i`/`basename $i x3d`${JSONEXT} `dirname $i`/`basename $i x3d`new.${JSONEXT}2
done | tee ${RESULTS}
echo "Finished. Look at ${RESULTS} for results"
