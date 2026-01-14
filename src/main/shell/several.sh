#!/bin/bash
# set -euo pipefail
IFS=$'\n\t'

# Run the Test Suite

# accepts files with .x3d extension

. ./classpath

# ${PYTHON} ../python/classes.py
pushd ../java
javac -cp ${CLASSPATH} -proc:full net/coderextreme/RunSaxon.java net/coderextreme/X3DRoots.java
popd
# sudo pacman -Syu leiningen

STYLESHEETDIR=../lib/stylesheets

DATATOCLOJURE='s/\/data\//\/clojure\/net\/coderextreme\/data\//' 
DATATOJAVA='s/\/data\//\/java\/net\/coderextreme\/data\//' 
DATATONODE='s/\/data\//\/node\/net\/coderextreme\/data\//' 
DATATOGRAAL='s/\/data\//\/graaljs\/net\/coderextreme\/data\//' 
DATATOGRAALPY='s/\/data\//\/graalpy\/net\/coderextreme\/data\//' 
DATATOPYTHON='s/\/data\//\/python\/net\/coderextreme\/data\//' 
DATATOJRUBY='s/\/data\//\/jruby\/net\/coderextreme\/data\//' 

PERSONALTOCLOJURE='s/\/personal\//\/clojure\/net\/coderextreme\/personal\//' 
PERSONALTOJAVA='s/\/personal\//\/java\/net\/coderextreme\/personal\//' 
PERSONALTONODE='s/\/personal\//\/node\/net\/coderextreme\/personal\//' 
PERSONALTOGRAAL='s/\/personal\//\/graaljs\/net\/coderextreme\/personal\//' 
PERSONALTOGRAALPY='s/\/personal\//\/graalpy\/net\/coderextreme\/personal\//' 
PERSONALTOPYTHON='s/\/personal\//\/python\/net\/coderextreme\/personal\//' 
PERSONALTOJRUBY='s/\/personal\//\/jruby\/net\/coderextreme\/personal\//' 

EXTOCLOJURE='s/\/Library\//\/clojure\/net\/coderextreme\/Library\//' 
EXTOJAVA='s/\/Library\//\/java\/net\/coderextreme\/Library\//' 
EXTONODE='s/\/Library\//\/node\/net\/coderextreme\/Library\//' 
EXTOGRAAL='s/\/Library\//\/graaljs\/net\/coderextreme\/Library\//' 
EXTOGRAALPY='s/\/Library\//\/graalpy\/net\/coderextreme\/Library\//' 
EXTOPYTHON='s/\/Library\//\/python\/net\/coderextreme\/Library\//' 
EXTOJRUBY='s/\/Library\//\/jruby\/net\/coderextreme\/Library\//' 

ROOTTOCLOJURE='s/\/x3d_code\/www.web3d.org\//\/clojure\/net\/coderextreme\/x3d_code\/www_web3d_org\//' 
ROOTTOJAVA='s/\/x3d_code\/www.web3d.org\//\/java\/net\/coderextreme\/x3d_code\/www_web3d_org\//' 
ROOTTONODE='s/\/x3d_code\/www.web3d.org\//\/node\/net\/coderextreme\/x3d_code\/www_web3d_org\//' 
ROOTTOGRAAL='s/\/x3d_code\/www.web3d.org\//\/graaljs\/net\/coderextreme\/x3d_code\/www_web3d_org\//' 
ROOTTOGRAALPY='s/\/x3d_code\/www.web3d.org\//\/graalpy\/net\/coderextreme\/x3d_code\/www_web3d_org\//' 
ROOTTOPYTHON='s/\/x3d_code\/www.web3d.org\//\/python\/net\/coderextreme\/x3d_code\/www_web3d_org\//' 
ROOTTOJRUBY='s/\/x3d_code\/www.web3d.org\//\/jruby\/net\/coderextreme\/x3d_code\/www_web3d_org\//' 

# OVERWRITE=
OVERWRITE=---overwrite
LOCALTOROOT='s/^\.\.\/x3d-code/\/c\/x3d-code/'
ROOTTOLOCAL='s/www.web3d.org/www_web3d_org/' 
export NODE_OPTIONS=--max-old-space-size=24576

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

# convert to first JSON,
# then overwrite with xml2all.js
# then create other files from second JSON
# ls -d "$@" | sed 's/\(.*\)/"\1"/' | grep -v intermediate | grep -v "\.new" | xargs "${NODE}" "../node/xml2all.js" | xargs -P "$PROCESSORS" "${NODE}" "../node/json2all.js
# ls -d "$@" | sed 's/\(.*\)/"\1"/' | grep -v intermediate | grep -v "\.new" | xargs -P "$PROCESSORS" java net.coderextreme.RunSaxon --- "${OVERWRITE}" --"${STYLESHEETDIR}/X3dToJson.xslt" -${JSONEXT} | xargs "${NODE}" "../node/xml2all.js" | xargs -P "$PROCESSORS" "${NODE}" "../node/json2all.js"
# ls -d "$@" | grep -v intermediate | grep -v "\.new" | tr '\n' '\0'| xargs -0 -P "$PROCESSORS" java net.coderextreme.RunSaxon --- "${OVERWRITE}" --"${STYLESHEETDIR}/X3dToJson.xslt" -${JSONEXT} | sed 's/^/Created /'
#echo  "ls -d $@ | grep -v intermediate | grep -v  '\.new'  | tr '\n' '\0'| xargs -0 -P $PROCESSORS java net.coderextreme.RunSaxon --- ${OVERWRITE} --${STYLESHEETDIR}/X3dToJson.xslt -${JSONEXT} | sed 's/^\(.*\)\$/\"\1\"/' | xargs -P $PROCESSORS ${NODE} ../node/json2all.js"
ls -d "$@" | grep -v intermediate | grep -v '\.new' | tr '\n' '\0'| xargs -0 -P "$PROCESSORS" java net.coderextreme.RunSaxon --- "${OVERWRITE}" --"${STYLESHEETDIR}/X3dToJson.xslt" -${JSONEXT} | sed 's/^\(.*\)$/"\1"/' | xargs -P "$PROCESSORS" "${NODE}" "../node/json2all.js"
# puts compoent after meta TODO
#ls -d "$@" | grep -v intermediate | grep -v '\.new' | tr '\n' '\0'| xargs -0 -L 33 -P "$PROCESSORS" bash runtidy.sh | sed 's/^\(.*\)$/"\1"/' | xargs -P "$PROCESSORS" "${NODE}" "../node/json2all.js"

echo Running Clojure
OLDCLASSPATH=${CLASSPATH}
unset CLASSPATH
for i in `ls -d "$@" | sed 's/\(.*\)/"\1"/' | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d/.clj/' -e 's/^\/c/../' -e "$EXTOCLOJURE" -e "$DATATOCLOJURE" -e "$ROOTTOCLOJURE" -e "$PERSONALTOCLOJURE" | sed -e 's/\(data\)\/\(.*\).clj/\1\/\2\/\1\/\2.clj/' | xargs ls -d`
do
	MODEL=`basename "$i" .clj`
	echo "Creating app $i"
	APPSFOLDER="../clojure/net/coderextreme/data"
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
ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d/.new.clojure.'${JSONEXT}'/' -e "$ROOTTOLOCAL" -e 's/^\/c/../' | sed -e 's/ /$/g' | tr '\n' '\0' | while read -d $'\0' -r i
do
	OLDJSON=`mydirname "$i" | sed -e "$LOCALTOROOT" `/`mybasename "$i" .new.clojure.${JSONEXT}`.${JSONEXT}
	echo "${NODE}" --trace-warnings "../node/jsondiff.js" "$OLDJSON" "$i"
	"${NODE}" --trace-warnings "../node/jsondiff.js" "$OLDJSON" "$i"
done

export CLASSPATH=${OLDCLASSPATH}

echo Running JRuby
pushd ../jruby
ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d/.rb/' -e 's/^\/c/../' -e "$EXTOJRUBY" -e "$DATATOJRUBY" -e "$ROOTTOJRUBY" -e "$PERSONALTOJRUBY"| sed -e 's/\(.*\)/'"\1"'/' -e 's/ /$/g'| tr '\n' '\0' | while read -d $'\0' -r i
do
	echo "$JRUBY -J-Xss1g -J-Xmx19g $i"
	$JRUBY -J-Xss1g -J-Xmx19g $i
done
popd
export CLASSPATH=${OLDCLASSPATH}

# ls -d "$@" | grep -v intermediate | grep -v "\.new" | tr '\n' '\0' | xargs -0 -L 1 bash runtidy.sh | sed '/^$/d' | sed 's/^\(.*\)$/"\1"/' | xargs -P "$PROCESSORS" "${NODE}" "../node/json2all.js"

echo "test JSON to XML convertion .${JSONEXT} to .x3d.new (temp xml)"
ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d/.x3d.new/' -e "$ROOTTOLOCAL" -e 's/^\/c/../' | sed 's/^\(.*\)$/"\1"/' | tr '\n' '\0' | while read -d $'\0' -r file
do
	#echo FILE "$file"
	#echo DIR `mydirname "$file" | sed -e "$LOCALTOROOT"`
	#echo BASE `mybasename "$file" .new`
	X3D=`mydirname "$file" | sed -e "$LOCALTOROOT"`/`mybasename "$file" .new`
	FILE=`mydirname "$file" | sed -e "$LOCALTOROOT"`/`mybasename "$file" | sed -e s/-/_/g`
	# echo X3D "$X3D"
	echo "${NODE}" --trace-warnings "../node/xmldiff.js" "$X3D" "$FILE"
	"${NODE}" --trace-warnings "../node/xmldiff.js" "$X3D" "$FILE"
done

echo compile java programs
ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d/.java/' -e 's/^\/c/../' -e "$EXTOJAVA" -e "$DATATOJAVA" -e "$ROOTTOJAVA" -e "$PERSONALTOJAVA"| sed -e 's/\(.*\)/'"\1"'/' -e 's/ /$/g'| tr '\n' '\0' | while read -d $'\0' -r i
do
	# echo JAVAC "$i"
	pushd `mydirname "$i"` 2> /dev/null
	echo javac -proc:full -J-Xss1g -J-Xmx4g `mybasename "$i" | sed -e s/-/_/g`
	javac -proc:full -J-Xss1g -J-Xmx4g `mybasename "$i" | sed -e s/-/_/g`
	popd 2> /dev/null
done

echo run java programs
ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d/.class/' -e 's/^\/c/../' -e "$EXTOJAVA" -e "$DATATOJAVA" -e "$ROOTTOJAVA" -e "$PERSONALTOJAVA" | sed -e 's/\.class$//' -e 's/^\.\.\/java\///' | sed -e 's/\(.*\)/'"\1"'/' -e 's/ /$/g' | sed -e s/-/_/g | tr '\n' '\0' | while read -d $'\0' -r i
do
	pushd ../java
	echo java -Xss1g -Xmx4g "$i"
	java -Xss1g -Xmx4g "$i" # sh runToError.sh || echo "Failed"
	popd
done

echo comparing java created json
ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d/.new.java.'${JSONEXT}'/' -e "$ROOTTOLOCAL" -e 's/^\/c/../' | sed -e 's/ /$/g' | sed -e s/-/_/g | tr '\n' '\0' | while read -d $'\0' -r i
do
	OLDJSON=`mydirname "$i" | sed -e "$LOCALTOROOT" `/`mybasename "$i" .new.java.${JSONEXT}`.${JSONEXT}
	echo "${NODE}" --trace-warnings "../node/jsondiff.js" "$OLDJSON" "$i"
	"${NODE}" --trace-warnings "../node/jsondiff.js" "$OLDJSON" "$i"
	# jsonlint "$i"
done

echo Comparing old xml and pretty printed intermediate xml
ls -d "$@" | grep -v intermediate | grep -v "\.new" |  sed -e 's/\.x3d/.new.javaPrettyPrint.intermediate.x3d/' -e "$ROOTTOLOCAL" -e 's/^\/c/../' | sed -e 's/ /$/g' | tr '\n' '\0' | while read -d $'\0' -r i
do
	X3D=`mydirname "$i" | sed -e "$LOCALTOROOT" `/`mybasename "$i" .new.javaPrettyPrint.intermediate.x3d | sed 's/\\$/ /g'`.x3d 
	# echo "$X3D" "$i"
	echo "${NODE}" --trace-warnings "../node/xmldiff.js" "$X3D" "$i"
	"${NODE}" --trace-warnings "../node/xmldiff.js" "$X3D" "$i"
done

echo Running Graal JavaScript
for i in `ls -d "$@" | sed 's/\(.*\)/"\1"/' | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d/.js/' -e 's/^\/c/../' -e "$EXTOGRAAL" -e "$DATATOGRAAL" -e "$ROOTTOGRAAL" -e "$PERSONALTOGRAAL" | xargs ls -d`
do
	pushd ../graaljs
	echo "../shell/jjs.sh $i"
	      ../shell/jjs.sh "$i"
	popd
done

echo Diffing .new.graal.x3d from graalvm with original x3d
ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d/.new.graal.x3d/' -e "$ROOTTOLOCAL" -e 's/^\/c/../' | tr '\n' '\0' | while read -d $'\0' -r i
do
	X3D=`mydirname "$i" | sed -e "$LOCALTOROOT" `/`mybasename "$i" .new.graal.x3d`.x3d
	echo "${NODE}" --trace-warnings "../node/xmldiff.js" "'$X3D'" "'$i'"
	"${NODE}" --trace-warnings "../node/xmldiff.js" "$X3D" "$i"
done

#echo Running Node JavaScript
#ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d/.js/' -e 's/^\/c/../' -e "$EXTONODE" -e "$DATATONODE" -e "$PERSONALTONODE" -e "$ROOTTONODE" | tr '\n' '\0' | while read -d $'\0' -r i
#do
#	pushd ../node
#	# We do have a node.js java module
#	echo "${NODE}" --trace-warnings "$i"
#	"${NODE}" --trace-warnings "$i"
#	popd
#done

#echo comparing SAXON and XSLT outputs
#ls -d "$@" | grep -v intermediate | grep -v "\.new"| tr '\n' '\0' | while read -d $'\0' -r i
#do
#	DIRBASE=`mydirname "$i"`/`mybasename "$i" x3d`
#	SAXGEND="$DIRBASE"${JSONEXT}
#	XSLTGEND="$DIRBASE"new2.${JSONEXT}
#	XSLT3=../../../node_modules/.bin/xslt3 
#	X3DTOJSON=/c/x3d-code/www.web3d.org/x3d/stylesheets/X3dToJson.xslt 
#	echo "$XSLT3" -xsl:"$X3DTOJSON" -s:"$i" -o:"$XSLTGEND"
#	     "$XSLT3" -xsl:"$X3DTOJSON" -s:"$i" -o:"$XSLTGEND"
#	echo "${NODE}" "../node/jsondiff.js" "$SAXGEND" "$XSLTGEND"
#	     "${NODE}" "../node/jsondiff.js" "$SAXGEND" "$XSLTGEND"
#done

echo Running graalpy code
ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e "s/\.x3d/.${JSONEXT}/" -e 's/^\/c/../' | tr '\n' '\0' | while read -d $'\0' -r i
do
	GPY=`echo "$i" | sed -e "$DATATOGRAALPY" -e "$PERSONALTOGRAALPY" -e "$ROOTTOGRAALPY" -e "s/\.${JSONEXT}/.py/"`
	X3D=`echo "$i" | sed -e "s/\.${JSONEXT}/.new.graalpy.x3d/"`
	echo "${GRAALPY}" --jvm --vm.cp="${CLASSPATH}" "$GPY"
	( "${GRAALPY}" --jvm --vm.cp="${CLASSPATH}" "$GPY") &
	JOB_PID=$!
	wait $JOB_PID
done

echo Diffing .new.graalpy.x3d .py with original x3d
ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d/.new.graalpy.x3d/' -e "$ROOTTOLOCAL" -e 's/^\/c/../' | tr '\n' '\0' | while read -d $'\0' -r i
do
	X3D=`mydirname "$i" | sed -e "$LOCALTOROOT" `/`mybasename "$i" .new.graalpy.x3d`.x3d
	echo "${NODE}" --trace-warnings "../node/xmldiff.js" "'$X3D'" "'$i'"
	"${NODE}" --trace-warnings "../node/xmldiff.js" "$X3D" "$i"
done

echo Running python code
ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e "s/\.x3d/.${JSONEXT}/" -e 's/^\/c/../' | tr '\n' '\0' | while read -d $'\0' -r i
do
	PY=`echo "$i" | sed -e "$DATATOPYTHON" -e "$PERSONALTOPYTHON" -e "$ROOTTOPYTHON" -e "s/\.${JSONEXT}/.py/"`
	X3D=`echo "$i" | sed -e "s/\.${JSONEXT}/.new.python.x3d/"`
	#echo ${PYTHON} ../python/x3djsonld.py "'$i'" ">" "'$PY'" and ${PYTHON} "'$PY'" ">" "'$X3D'"
	#${PYTHON} ../python/x3djsonld.py "$i" > "$PY" && ${PYTHON} "$PY" > "$X3D" && echo "$PY" "$X3D" || echo "Error: "$PY" failed to parse"
	echo "${PYTHON}" "$PY"
	"${PYTHON}" "$PY"
done

echo Diffing .new.python.x3d .py with original x3d
ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d/.new.python.x3d/' -e "$ROOTTOLOCAL" -e 's/^\/c/../' | tr '\n' '\0' | while read -d $'\0' -r i
do
	X3D=`mydirname "$i" | sed -e "$LOCALTOROOT" `/`mybasename "$i" .new.python.x3d`.x3d
	echo "${NODE}" --trace-warnings "../node/xmldiff.js" "'$X3D'" "'$i'"
	"${NODE}" --trace-warnings "../node/xmldiff.js" "$X3D" "$i"
done
