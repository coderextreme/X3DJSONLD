#!/bin/bash
. ./classpath

python classes.py

find . -name '*.sail.js' | sed 's/\.sail\.js/.new.x3d/' | xargs ls 2>&1| grep "No such file or directory" | awk '{ print $4; }'| sed "s/^'\.\///" | sed "s/\.new\.x3d':/.sail.js/" | sed "s/^'//" | xargs -L 1 -P 8 jjs -Dnashorn.args="-classpath ${CLASSPATH}"
