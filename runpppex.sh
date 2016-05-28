#!/bin/sh
for i in box.json
# for i in `find examples/X3dForWebAuthors/Chapter14-Prototypes examples/Vrml2.0Sourcebook/Chapter31-Prototypes examples/Basic/UniversalMediaMaterials -type f -name '*json' | xargs grep -ilw ProtoInstance`
do
	echo "=========================$i====================="
	mkdir -p ppp/`dirname $i`
	node PPP.js $i > ppp/`dirname $i`/ppp`basename $i`
done
