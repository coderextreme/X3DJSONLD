#!/bin/sh
grep UNKNOWN *runerr* | sed -e 's/.*details: //' -e 's/ TO /\nTO /'| grep UNKNOWN|sort -u
