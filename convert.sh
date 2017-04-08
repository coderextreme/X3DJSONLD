#!/bin/sh

# convert files from X3D to JSON

export CLASSPATH="saxon9he.jar;."
javac RunSaxon.java

rm *Canonical*
rm *roundtrip*

find *.x3d /c/x3d-code/www.web3d.org/x3d/content/examples/ -name '*.x3d' -type f -print0 | xargs -0 -P 8 java RunSaxon
