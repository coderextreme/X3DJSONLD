#!/bin/bash

. ../shell/classpath

for i in `find . -name '*gltf'`; do echo $i; npx x3d-tidy -i `pwd`/$i -o `pwd`/`dirname $i`/`basename $i .gltf`.${JSONEXT}; done
