#!/bin/bash
# set -euo pipefail
IFS=$'\n\t'

# Run the Test Suite

# accepts files with .x3d extension
export PROCESSORS=${PROCESSORS-8}

. ./classpath

JSONEXT=json

pushd ../java
echo "export CLASSPATH=$CLASSPATH"
# export CLASSPATH="C:/Users/jcarl/X3DJSONLD/X3DJSAIL.4.0.full.jar;C:/Users/jcarl/X3DJSONLD/saxon-he-12.8.jar;.;../java"
echo "export CLASSPATH=$CLASSPATH"
javac -proc:full -cp "${CLASSPATH}" net/coderextreme/RunSaxon.java net/coderextreme/X3DRoots.java
javac -proc:full -cp "${CLASSPATH}" net/coderextreme/RunSaxon.java net/coderextreme/X3DRoots.java
popd

echo translating to java
(ls "$@" | grep -v intermediate | grep -v "\.new") | xargs -P $PROCESSORS java -Xss1g -Xmx19g net.coderextreme.RunSaxon ---overwrite ---silent --../lib/stylesheets/X3dToJava.xslt -java ---../java/net/x3djsonld/data/

echo compiling
for FILE in $@
do
	X3D=`basename $FILE .x3d`
	JAVA=../java/net/x3djsonld/data/`basename $FILE .x3d`.java
	CLASS=net.x3djsonld.data."$X3D"
	pushd ../java # /net/x3djsonld/data
	#JAVA=../java/net/x3djsonld/`basename $FILE .x3d`.java
	#pushd ../java # /net/x3djsonld/data
	echo swapping class names
	perl -p -i -e "s/NeedClassName/$X3D/g" "$JAVA"
	perl -p -i -e "s/JohnBoy/$X3D/g" "$JAVA"

	find . -name `basename "${JAVA}"` | xargs -L 1 -P $PROCESSORS javac.exe -proc:full -J-Xss1g -J-Xmx19g -cp "${CLASSPATH}"

	echo running java
	echo java -Xss1g -Xmx19g -cp "${CLASSPATH}" ${CLASS}
	java -Xss1g -Xmx19g -cp "${CLASSPATH}" ${CLASS}
	popd
done

if false
then
echo comparing java created json
ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d/.new.java.json/' -e "$ROOTTOLOCAL" -e 's/^\/c/../' | sed -e 's/ /$/g' | tr '\n' '\0' | while read -d $'\0' -r i
do
	echo "OLDJSON=`mydirname $i | sed -e $LOCALTOROOT `/`mybasename $i .new.java.json`.${JSONEXT}"
	OLDJSON=`mydirname "$i" | sed -e "$LOCALTOROOT" `/`mybasename "$i" .new.java.json`.${JSONEXT}
	echo "${NODE}" --trace-warnings "${NODEDIR}/jsondiff.js" "$OLDJSON" "$i"
	"${NODE}" --trace-warnings "${NODEDIR}/jsondiff.js" "$OLDJSON" "$i"
done


echo comparing java created x3d
ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d/.new.java.x3d/' -e "$ROOTTOLOCAL" -e 's/^\/c/../' | sed -e 's/ /$/g' | tr '\n' '\0' | while read -d $'\0' -r i
do
	OLDX3D=`mydirname "$i" | sed -e "$LOCALTOROOT" `/`mybasename "$i" .new.java.x3d`.x3d
	echo "${NODE}" --trace-warnings "${NODEDIR}/xmldiff.js" "$OLDX3D" "$i"
	"${NODE}" --trace-warnings "${NODEDIR}/xmldiff.js" "$OLDX3D" "$i"
done
fi
