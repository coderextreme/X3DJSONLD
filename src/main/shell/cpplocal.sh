#!/bin/bash
#
# convert local json files to cpp
#
find ../data -name '*.json' |grep -v new | xargs bash cpp.sh
