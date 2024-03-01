#!/bin/bash
set -euo pipefail
IFS=$'\n\t'

# way to get list of non executed files

. ../shell/classpath

find ../java -name '*.class' | grep -v '[$ "]'| sed 's/\.class$/.new.java.json/'| xargs ls 2>&1| grep "No such file or directory" | awk '{ print $4; }' | sed "s/^'\.\.\/java\///" | sed "s/\.new.java.json'://" | sed "s/^'//" | sed 's/\//./g'
