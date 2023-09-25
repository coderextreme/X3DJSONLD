#!/bin/bash
cat centers.txt
grep 'class="Code"' $HANIMCODE/standards/A.10.txt | sed -e 's/.*class="Code">//' -e 's/<.*//'
