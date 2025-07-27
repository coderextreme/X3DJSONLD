#!/bin/bash -x 
set -euo pipefail
IFS=$'\n\t'

# process JSON files and look for error in JSON file so we won't report


while read
do
	FILE=`echo ${REPLY} | sed 's/^File: //'`
	if egrep -l '"@name".*:.*"error"|"@name".*:.*"warning"' $FILE > /dev/null
	then
		test
	else
		echo "$FILE"
	fi
done

