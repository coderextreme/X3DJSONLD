#!/bin/bash
echo "input file is HierWS.txt"
perl hier2x3d.blender.pl < HierWS.txt > blenderskeleton.py
echo "output file is blenderskeleton.py"
echo "loading into Blender"
c:/Program\ Files/Blender\ Foundation/Blender\ 3.6/blender.exe --python  blenderskeleton.py