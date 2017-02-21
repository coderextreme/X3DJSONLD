#!/bin/sh
export CLASSPATH="saxon9B.jar;."
javac RunSaxon.java

rm *Canonical*
rm *roundtrip*

find . /c/x3d-code/www.web3d.org/x3d/content/examples/ -name '*.x3d' -type f -print0 | xargs -0 java RunSaxon
