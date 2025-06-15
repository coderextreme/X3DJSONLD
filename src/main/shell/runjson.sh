#!/bin/bash
set -euo pipefail
IFS=$'\n\t'


. ./classpath

export PROCESSORS=8

# javac RunSaxon.java

ls ../data/*.json| grep -v new | grep -v intermediate | grep -v package | xargs -P $PROCESSORS ${NODE} ../node/json2all.js 1> /dev/null
