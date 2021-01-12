#!/bin/bash

. ./classpath

find ../Library -name '*.x3d'| grep -v new  | xargs bash several.sh
