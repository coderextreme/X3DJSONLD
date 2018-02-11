#!/bin/sh

. ./classpath

find ../Library -name '*.x3d'| grep -v new  | xargs sh several.sh
