#!/bin/bash
set -euo pipefail
IFS=$'\n\t'
export PROCESSORS=${PROCESSORS-8}
export XSLT=xslt3
export RESULTS=stylesheetout.txt
export NPM=npm
export STYLESHEET=../lib/stylesheets/X3dToJson.xslt
export USERNAME=coderextreme
export X3DJSONLD=/home/$USERNAME/X3DJSONLD
# for RunSaxon
export CLASS=net.coderextreme.RunSaxon
export CLASSPATH=".;${X3DJSONLD}/../pythonSAI/X3DJSAIL.4.0.full.jar;${X3DJSONLD}/saxon-he-12.1.jar;${X3DJSONLD}/target/X3DJSONLD-1.0-SNAPSHOT.jar;${X3DJSONLD}/target/classes;${X3DJSONLD}/src/main/java"
export OVERWRITE=---overwrite

echo 'ls -d "$@" | grep -v intermediate | grep -v "\.new" | xargs -P $PROCESSORS java ${CLASS} ${OVERWRITE} --${STYLESHEET} -json'
echo "Install ${CLASS}, or if already installed, hit return after restarting"
read
ls -d "$@" | grep -v intermediate | grep -v "\.new" | xargs -P $PROCESSORS java ${CLASS} ${OVERWRITE} --${STYLESHEET} -json
echo "${NPM} install -g ${XSLT}"
${NPM} install -g ${XSLT} || echo "Install ${NPM}!"
echo "Work in progress. Look at ${RESULTS} for results"
for i in `ls -d "$@"| grep -v "\.new"`
do
echo ${XSLT} -xsl:${STYLESHEET} -s:$i -o:`dirname $i`/`basename $i .x3d`.new.json2
${XSLT} -xsl:${STYLESHEET} -s:$i -o:`dirname $i`/`basename $i .x3d`.new.json2 2>&1
echo diff -w `dirname $i`/`basename $i x3d`json `dirname $i`/`basename $i x3d`new.json2
diff -w `dirname $i`/`basename $i x3d`json `dirname $i`/`basename $i x3d`new.json2
done | tee ${RESULTS}
echo "Finished. Look at ${RESULTS} for results"
