#!/bin/bash

# process JSON files and look for error in JSON file so we won't report

while read
do
	if [ "$REPLY" = "================================================================================" ]
	then
		read
		FILE=${REPLY}
		if egrep -l '"@name".*:.*"error"|"@name".*:.*"warning"' $FILE > /dev/null
		then
			test
		else
			echo "$FILE"
		fi
	fi
done

