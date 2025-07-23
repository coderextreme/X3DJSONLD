#!/bin/bash
set -euo pipefail
IFS=$'\n\t'

# used with:
# egrep '^ file|^ version' jsonerrors.txt | sh combine.sh | grep "3\.3" | grep -v originals| awk '{ print $2; }'
# egrep '^ file|^ version' jsonerrors.txt | sh combine.sh | grep -v originals | awk '{ print $2; }'

# used to find 3.3 schema validation errors
while read f
do
	read v
	echo $f $v
done
