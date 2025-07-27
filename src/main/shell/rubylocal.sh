#!/bin/bash

. ./classpath

find ../data -name '*.x3d'| xargs bash runruby.sh
