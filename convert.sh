#!/bin/sh
export CLASSPATH="saxon9B.jar;."
javac RunSaxon.java

rm *Canonical*
rm *roundtrip*

find . examples/ www.web3d.org/ -name '*.x3d' -type f -print0 | xargs -0 java RunSaxon
