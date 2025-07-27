#!/usr/bin/bash -x
# set -euo pipefail
IFS=$'\n\t'

# Run the Clojure Test Suite

. ./classpath

DATATOCLOJURE='s/\/data\//\/clojure\/net\/coderextreme\/data\//' 
PERSONALTOCLOJURE='s/\/personal\//\/clojure\/net\/coderextreme\/personal\//' 
EXTOCLOJURE='s/\/Library\//\/clojure\/net\/coderextreme\/Library\//' 
ROOTTOCLOJURE='s/\/x3d_code\/www.web3d.org\//\/clojure\/net\/coderextreme\/x3d_code\/www_web3d_org\//' 

echo Running Clojure
OLDCLASSPATH=${CLASSPATH}
unset CLASSPATH
for i in `find ../data -name '*.x3d' | sed 's/\(.*\)/"\1"/' | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d/.clj/' -e 's/^\/c/../' -e "$EXTOCLOJURE" -e "$DATATOCLOJURE" -e "$ROOTTOCLOJURE" -e "$PERSONALTOCLOJURE" | sed -e 's/\(data\)\/\(.*\).clj/\1\/\2\/\1\/\2.clj/' | xargs ls -d`
do
	MODEL=`basename "$i" .clj`
	DIR="data/"
	sed "s/{{MODEL}}/${MODEL}/g" < ../resources/project.clj.template > "../clojure/net/coderextreme/data/$MODEL/project.clj"
	pushd "../clojure/net/coderextreme/data/$MODEL"
	ln -s "${DIR}" "x3dclsail"
	echo "clj $i"
	lein run
	popd
done
export CLASSPATH=${OLDCLASSPATH}
