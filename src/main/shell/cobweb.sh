#!/bin/sh

. ./classpath

find ../Examples -name '*.x3d'| grep -v new  | xargs sh several.sh
