#!env bash
set -x
for i in `find . -name '*.gltf'`; do echo $i; npx x3d-tidy@2.0.6 -i file:`pwd| sed 's/\/c//'`/$i -o `pwd`/`dirname $i`/`basename $i .gltf`.x3dj; done
