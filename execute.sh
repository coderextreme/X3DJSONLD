#!/bin/bash

# way to get list of non executed files and execute them

. ./classpath


ls *.class | grep -v '\$' | grep -v RunSaxon | sed 's/.class$//' | sed 's/\//./g' | xargs -L 1 -P 8 java -Xss16m -Xmx4096M
sh nonexecuted.sh | xargs -L 1 -P 8 java -Xss16m -Xmx4096M
sh nonexecutedjs.sh | xargs -L 1 -P 8 jjs -J-Xss1g -J-Xmx4g -cp "${NASHORN_CLASSPATH}"
