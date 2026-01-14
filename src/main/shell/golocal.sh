#!/usr/bin/env bash

. ./classpath

# find ../data -name '*.'${JSONEXT} | grep -v intermediate | grep -v '\.new' | xargs -P "${PROCESSORS}" "${NODE}" "${NODEDIR}/json2all.js"
find ../data -name '*.x3d' | grep -v intermediate | grep -v '\.new' | tr '\n' '\0'| xargs -0 -P "$PROCESSORS" bash runtidy.sh | sed 's/^\(.*\)$/"\1"/' | xargs -P "$PROCESSORS" "${NODE}" "${NODEDIR}/json2all.js"

pushd ../go
find net/coderextreme/data -name '*.go' | grep -v intermediate | grep -v '\.new' | xargs -P "${PROCESSORS}" -L 1 go run
popd
