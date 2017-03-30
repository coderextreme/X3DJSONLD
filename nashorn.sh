#!/bin/bash
. ./classpath

python classes.py

find . -name '*.sail.js' | xargs -L 1 jjs -Dnashorn.args="-classpath ${CLASSPATH}"
