#!/bin/bash

. ./classpath

find ../Library -type f -name '*.x3d' -print0 | grep -zv new  | xargs -0 bash several.sh
