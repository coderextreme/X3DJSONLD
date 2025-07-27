# set -euo pipefail
IFS=$'\n\t'

# Run the Test Suite

# accepts files with .x3d extension
export PROCESSORS="${PROCESSORS-8}"

. ./classpath

DATATOCLOJURE='s/\/data\//\/clojure\/net\/coderextreme\/data\//' 
PERSONALTOCLOJURE='s/\/personal\//\/clojure\/net\/coderextreme\/personal\//' 
EXTOCLOJURE='s/\/Library\//\/clojure\/net\/coderextreme\/Library\//' 
ROOTTOCLOJURE='s/\/x3d_code\/www.web3d.org\//\/clojure\/net\/coderextreme\/x3d_code\/www_web3d_org\//' 
LOCALTOROOT='s/^\.\.\/x3d-code/\/c\/x3d-code/'

function mydirname {
	#echo DIR OF "$1"
	dir=`echo "$1" | sed 's/^"*\(.*\)\/[^\/]*"*$/\1/'`
	#echo IS "$dir"
	echo "$dir"
}

function mybasename {
	# echo BASE OF "$1"
	file=`echo "$1" | sed 's/.*\///'`
	# echo IS "$file"
	if [ ! -z "${2:-}" ]
	then
		file=`echo "$file" | sed s/$2//`
	fi
	echo "$file"
}

ROOTTOLOCAL='s/www.web3d.org/www_web3d_org/' 
JSONEXT=json

echo Running Clojure
OLDCLASSPATH=${CLASSPATH}
unset CLASSPATH
for i in `ls -d "$@" | sed 's/\(.*\)/"\1"/' | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d/.clj/' -e 's/^\/c/../' -e "$EXTOCLOJURE" -e "$DATATOCLOJURE" -e "$ROOTTOCLOJURE" -e "$PERSONALTOCLOJURE" | sed -e 's/\(data\)\/\(.*\).clj/\1\/\2\/\1\/\2.clj/' | sed -e 's/\(personal\)\/\(.*\).clj/\1\/\2\/\1\/\2.clj/' | xargs ls -d`
do
	MODEL=`basename "$i" .clj`
	echo "Creating app $i"
	if echo "$i" | grep -q "personal"; then
	  echo "The string contains 'world'."
	  APPSFOLDER="../clojure/net/coderextreme/personal"
	else
	  APPSFOLDER="../clojure/net/coderextreme/data"
	fi
	pushd "$APPSFOLDER"
	echo "lein new app $MODEL --force"
	lein new app "$MODEL" --force
	popd

	echo "cat ../resources/project.clj.template | sed s/{{MODEL}}/${MODEL}/g > $APPSFOLDER/$MODEL/project.clj"
	cat ../resources/project.clj.template | sed s/{{MODEL}}/"${MODEL}"/g > "$APPSFOLDER/$MODEL/project.clj"
	echo "cp $i  $APPSFOLDER/$MODEL/src/$MODEL/$MODEL.clj"
	cp "$i"  "$APPSFOLDER/$MODEL/src/$MODEL/$MODEL.clj"
	pushd "$APPSFOLDER/$MODEL"
	echo "lein run"
	lein run
	popd
done

echo comparing Clojure created json
ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d/.new.clojure.json/' -e "$ROOTTOLOCAL" -e 's/^\/c/../' | sed -e 's/ /$/g' | tr '\n' '\0' | while read -d $'\0' -r i
do
	OLDJSON=`mydirname "$i" | sed -e "$LOCALTOROOT" `/`mybasename "$i" .new.clojure.json`.${JSONEXT}
	echo "${NODE}" --trace-warnings "${NODEDIR}/jsondiff.js" "$OLDJSON" "$i"
	"${NODE}" --trace-warnings "${NODEDIR}/jsondiff.js" "$OLDJSON" "$i"
done

export CLASSPATH=${OLDCLASSPATH}
