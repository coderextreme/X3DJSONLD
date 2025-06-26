#!/bin/bash
set -euo pipefail
IFS=$'\n\t'


. ./classpath

export PROCESSORS=8

# javac RunSaxon.java

ls ../data/*.json| grep -v new | grep -v intermediate | grep -v roundtrip | grep -v package | xargs -P $PROCESSORS ${NODE} ../node/json2all.js
ls ../data/*.json| grep -v new | grep -v intermediate | grep -v roundtrip | grep -v package | xargs -P $PROCESSORS ${NODE} ../node/json2py.js
ls ../data/*.json| grep -v new | grep -v intermediate | grep -v roundtrip | grep -v package | xargs -P $PROCESSORS ${NODE} ../node/json2x3d.js
ls ../data/*.json| grep -v new | grep -v intermediate | grep -v roundtrip | grep -v package | xargs -P $PROCESSORS ${NODE} ../node/json2json.js
ls ../data/*.json| grep -v new | grep -v intermediate | grep -v roundtrip | grep -v package | xargs -P $PROCESSORS ${NODE} ../node/json23.js
ls ../data/*.json| grep -v new | grep -v intermediate | grep -v roundtrip | grep -v package | xargs -P $PROCESSORS ${NODE} ../node/json2aframe.js
ls ../data/*.json| grep -v new | grep -v intermediate | grep -v roundtrip | grep -v package | xargs -P $PROCESSORS ${NODE} ../node/json2cpp.js
ls ../data/*.json| grep -v new | grep -v intermediate | grep -v roundtrip | grep -v package | xargs -P $PROCESSORS ${NODE} ../node/json2ecma.js
ls ../data/*.json| grep -v new | grep -v intermediate | grep -v roundtrip | grep -v package | xargs -P $PROCESSORS ${NODE} ../node/json2java.js
ls ../data/*.json| grep -v new | grep -v intermediate | grep -v roundtrip | grep -v package | xargs -P $PROCESSORS ${NODE} ../node/json2js.js
