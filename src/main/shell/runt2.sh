#!/bin/sh -x

# run the proto preprocessor

. ./classpath

echo ===================t2.json Local=================================== 1>&2
ls ../data/t2.json | xargs ${NODE} ${NODEDIR}/PPP.js

