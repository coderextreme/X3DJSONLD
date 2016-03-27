#!/bin/sh

for i in "$@"
do
	export DIRNAME=`dirname "$i"`
 	export ORIGINAL=`basename "$i" -roundtrip.x3d`.x3d
 	export CANON=`basename "$i" -roundtrip.x3d`Canonical.x3d
	export ROUNDTRIP=`basename "$i"`
	export RTCANON=`basename "$i" .x3d`Canonical.x3d
	
	java -cp /Users/johncarlson/Downloads/www.web3d.org/x3d/tools/canonical/dist/lib/log4j-1.2.15.jar:/Users/johncarlson/Downloads/www.web3d.org/x3d/tools/canonical/dist/lib/xercesImpl.jar:/Users/johncarlson/Downloads/www.web3d.org/x3d/tools/canonical/dist/lib/X3dC14n.jar org.web3d.x3d.tools.x3db.X3dCanonicalizer "$DIRNAME/$ORIGINAL"
	java -cp /Users/johncarlson/Downloads/www.web3d.org/x3d/tools/canonical/dist/lib/log4j-1.2.15.jar:/Users/johncarlson/Downloads/www.web3d.org/x3d/tools/canonical/dist/lib/xercesImpl.jar:/Users/johncarlson/Downloads/www.web3d.org/x3d/tools/canonical/dist/lib/X3dC14n.jar org.web3d.x3d.tools.x3db.X3dCanonicalizer "$DIRNAME/$ROUNDTRIP"
	node xmldiff.js "$DIRNAME/$CANON" "$DIRNAME/$RTCANON" 2>&1 | tee -a  diffresults.txt
done
