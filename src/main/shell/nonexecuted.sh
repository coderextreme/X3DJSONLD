#!/bin/bash

# way to get list of non executed files

. ../shell/classpath

find ../java -name '*.class' | grep -v '[$ "]'| sed 's/\.class$/.new.json/'| xargs ls 2>&1| grep "No such file or directory" | awk '{ print $4; }' | sed "s/^'\.\.\/java\///" | sed "s/\.new.json'://" | sed "s/^'//" | sed 's/\//./g'
