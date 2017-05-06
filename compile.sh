#!/bin/bash

# way to get list of non compile files and compile them

. ./classpath

ls *.java | xargs -L 1 -P 8 javac -J-Xss1g -J-Xmx4g
sh noncompiled.sh | xargs -L 1 -P 8 javac -J-Xss1g -J-Xmx4g
