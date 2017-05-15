#!/bin/sh
ls *runerr* | xargs grep UNKNOWN | sed -e 's/.*details: //' -e 's/ TO /\nTO /'| grep UNKNOWN|sort -u
