#!/bin/bash

# way to get list of non executed files and execute them

. ../shell/classpath


pushd ../java
sh ../shell/nonexecuted.sh | xargs -L 1 -P 8 java -Xss16m -Xmx4096M
popd
pushd ../nashorn
sh ../shell/nonexecutedjs.sh | xargs -L 1 -P 8 jjs -J-Xss1g -J-Xmx4g -cp "${NASHORN_CLASSPATH}"
popd
