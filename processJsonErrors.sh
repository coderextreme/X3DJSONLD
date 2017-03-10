#!/bin/bash
while read
do
	if [ "$REPLY" = "===================================================================================" ]
	then
		read
		if grep '"@name".*:.*"error"' $REPLY > /dev/null
		then
			echo ERROR VALUE FOUND $REPLY
		else
			echo ERROR VALUE NOT FOUND $REPLY
		fi
	fi
done
