#!/bin/bash
set -euo pipefail
IFS=$'\n\t'


. ./classpath

# javac RunSaxon.java

ls ../data/*.${JSONEXT}| grep -v new | grep -v intermediate | grep -v roundtrip | grep -v package | xargs -P $PROCESSORS ${NODE} ../node/json2all.js
ls ../data/*.${JSONEXT}| grep -v new | grep -v intermediate | grep -v roundtrip | grep -v package | xargs -P $PROCESSORS ${NODE} ../node/json2py.js
ls ../data/*.${JSONEXT}| grep -v new | grep -v intermediate | grep -v roundtrip | grep -v package | xargs -P $PROCESSORS ${NODE} ../node/json2x3d.js
ls ../data/*.${JSONEXT}| grep -v new | grep -v intermediate | grep -v roundtrip | grep -v package | xargs -P $PROCESSORS ${NODE} ../node/json2json.js
ls ../data/*.${JSONEXT}| grep -v new | grep -v intermediate | grep -v roundtrip | grep -v package | xargs -P $PROCESSORS ${NODE} ../node/json23.js
ls ../data/*.${JSONEXT}| grep -v new | grep -v intermediate | grep -v roundtrip | grep -v package | xargs -P $PROCESSORS ${NODE} ../node/json2aframe.js
ls ../data/*.${JSONEXT}| grep -v new | grep -v intermediate | grep -v roundtrip | grep -v package | xargs -P $PROCESSORS ${NODE} ../node/json2cpp.js
ls ../data/*.${JSONEXT}| grep -v new | grep -v intermediate | grep -v roundtrip | grep -v package | xargs -P $PROCESSORS ${NODE} ../node/json2ecma.js
ls ../data/*.${JSONEXT}| grep -v new | grep -v intermediate | grep -v roundtrip | grep -v package | xargs -P $PROCESSORS ${NODE} ../node/json2java.js
ls ../data/*.${JSONEXT}| grep -v new | grep -v intermediate | grep -v roundtrip | grep -v package | xargs -P $PROCESSORS ${NODE} ../node/json2js.js
