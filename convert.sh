#!/bin/sh
export CLASSPATH="saxon9B.jar;."
javac RunSaxon.java

rm *Canonical*
rm *roundtrip*

find . www_web3d_org/ -name '*.x3d' -type f -print0 | xargs -0 java RunSaxon
