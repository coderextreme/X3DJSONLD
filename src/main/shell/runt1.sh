#!/bin/sh -x

# run the proto preprocessor

. ./classpath

echo ===================t1.json Local=================================== 1>&2
ls ../data/t1.json | xargs ${NODE} ${NODEDIR}/PPP.js

