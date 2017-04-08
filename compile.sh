#!/bin/bash

# way to get list of non compile files and compile them

. ./classpath

ls *.java | xargs -L 1 -P 8 javac -J-Xss16m -J-Xmx4096M
sh noncompiled.sh | xargs -L 1 -P 8 javac -J-Xss16m -J-Xmx4096M
