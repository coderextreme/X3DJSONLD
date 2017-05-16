#!/bin/sh
find . -name '*runerr.txt' -type f | xargs grep UNKNOWN | sed -e 's/.*details: //' -e 's/ TO /\nTO /'| grep UNKNOWN|sort -u
