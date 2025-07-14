#!/bin/bash
find ../data -name '*.x3d'|grep -v new | xargs bash python0.sh
