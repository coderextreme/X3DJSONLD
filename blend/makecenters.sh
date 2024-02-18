#!/bin/bash
echo "converting with into Blender"
c:/Program\ Files/Blender\ Foundation/Blender\ 4.0/blender.exe --background --python  centersGramps.py
egrep 'HAnimJoint|center' blenderGramps_centers.x3dv | sed 's/^[ \t]*//'| awk '/^DEF/ { print $2; } /^center/ { print $2/40, $3/40, $4/40; }' | sed 's/hanim_//' > centersWS.txt
