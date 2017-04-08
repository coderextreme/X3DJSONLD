#!/bin/bash

# way to get list of non executed files and execute them

. ./classpath

ls *.class | sed 's/.class$//' | sed 's/\//./g' | xargs -L 1 -P 8 java -Xss16m -Xmx4096M
sh nonexecutedjs.sh | xargs -L 1 -P 8 jjs -Dnashorn.args="-classpath ${CLASSPATH}"
sh nonexecuted.sh | xargs -L 1 -P 8 java -Xss16m -Xmx4096M
