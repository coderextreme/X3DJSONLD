#!/bin/bash
for i in `find ../data -name '*.x3d' | grep -v new`; do java -cp ../../../X3DJSAIL.4.0.full.jar org.web3d.x3d.jsail.CommandLine -validate $i 2>&1 | egrep success >/dev/null|| echo $i; done
