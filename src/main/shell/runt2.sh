#!/bin/bash -x
set -euo pipefail
IFS=$'\n\t'

# run the proto preprocessor

. ./classpath

echo ===================t2.${JSONEXT} Local=================================== 1>&2
ls ../data/t2.${JSONEXT} | xargs ${NODE} ${NODEDIR}/PPP.js

