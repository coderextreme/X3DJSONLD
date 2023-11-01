#!/bin/bash -x
set -euo pipefail
IFS=$'\n\t'

# run the proto preprocessor

. ./classpath

echo ===================t3.json Local=================================== 1>&2
ls ../data/t3.json | xargs ${NODE} ${NODEDIR}/PPP.js

