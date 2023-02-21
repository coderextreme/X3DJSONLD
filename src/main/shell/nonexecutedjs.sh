#!/bin/bash

# way to get list of non executed js files

. ../shell/classpath

find ../nashorn -name '*.mjs' | grep -v " " | sed -e 's/\.\.\/nashorn\/net\/x3djsonld\///' -e 's/\.\.\/nashorn\/net\/coderextreme\///' -e 's/\.mjs$/.new.x3d/' | xargs ls 2>&1| grep "No such file or directory" | awk '{ print $4; }' | sed -e "s/^'//" -e "s/\.new.x3d':/.mjs/" -e 's/^/net\/coderextreme\//'
