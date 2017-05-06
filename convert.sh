#!/bin/sh

# convert files from X3D to JSON

. ./classpath
javac RunSaxon.java

sh nonconverted.sh | xargs -0 -P 8 java RunSaxon
