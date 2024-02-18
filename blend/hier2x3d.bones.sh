#!/bin/bash
echo "input file is Hierarchy.txt"
perl hier2x3d.bones.pl < Hierarchy.txt > blenderbones.py
echo "output file is blenderbones.py"
echo "loading into Blender"
c:/Program\ Files/Blender\ Foundation/Blender\ 4.0/blender.exe --background --python blenderbones.py
