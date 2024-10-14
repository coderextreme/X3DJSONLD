#!/bin/bash
echo "input file is HierWS.txt"
perl hier2x3d.blender.pl < Hierarchy.txt > blenderskeleton.py
echo "output file is blenderskeleton.py"
echo "loading into Blender"
c:/Program\ Files/Blender\ Foundation/Blender\ 4.2/blender.exe --python blenderskeleton.py
