#!/bin/sh

# clean up test files

rm -f `ls *py | grep -v classes.py` *.sail.js *.x3d.new `ls *.class | grep -v RunSaxon` *.new.x3d *.intermediate.* *.diff *.x3d*.json *three.js *.java.bak *roundtrip* *Canonical* *.run*.txt
