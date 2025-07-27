#!/bin/bash
# set -euo pipefail
IFS=$'\n\t'

# Run the JRuby Test Suite

# accepts files with .x3d extension

. ./classpath

DATATOJRUBY='s/\/data\//\/jruby\/net\/coderextreme\/data\//' 
PERSONALTOJRUBY='s/\/personal\//\/jruby\/net\/coderextreme\/personal\//' 
EXTOJRUBY='s/\/Library\//\/jruby\/net\/coderextreme\/Library\//' 
ROOTTOJRUBY='s/\/x3d_code\/www.web3d.org\//\/jruby\/net\/coderextreme\/x3d_code\/www_web3d_org\//' 

echo Running JRuby
pushd ../jruby
ls -d "$@" | grep -v intermediate | grep -v "\.new" | sed -e 's/\.x3d/.rb/' -e 's/^\/c/../' -e "$EXTOJRUBY" -e "$DATATOJRUBY" -e "$ROOTTOJRUBY" -e "$PERSONALTOJRUBY"| sed -e 's/\(.*\)/'"\1"'/' -e 's/ /$/g'| tr '\n' '\0' | while read -d $'\0' -r i
do
	echo "$JRUBY -J-Xss1g -J-Xmx19g $i"
	$JRUBY -J-Xss1g -J-Xmx19g $i
done
popd
