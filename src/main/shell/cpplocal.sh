#!/bin/bash
#
# convert local json files to cpp
#

. ../shell/classpath

find ../data -name '*.'${JSONEXT} |grep -v new | xargs bash cpp.sh
