#!/usr/bin/env bash
(find ../data |grep "\.go\."; find ../data -name '*.x3d'| grep -v new)|xargs ls -1 | sed 's/.*\///' | sed 's/\..*//'|sort | uniq -c|sort -n |grep " 1 "| awk '{ print $2; }'| sort
