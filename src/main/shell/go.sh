#!/usr/bin/env bash
bash tojson.sh "$@"

pushd ../go
for i in "$@"
do
echo "echo '$i' | grep -v intermediate | grep -v '\.new' | sed 's/\.x3d$/.go/' | tr '\n' '\0'| xargs -0 -L 1 go run"
echo "$i" | grep -v intermediate | grep -v '\.new' | sed 's/^\.\./net\/coderextreme/' | sed 's/\.x3d$/.go/' | tr '\n' '\0'| xargs -0 -L 1 go run
done
popd
