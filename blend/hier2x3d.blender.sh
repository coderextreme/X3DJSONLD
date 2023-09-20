#!/bin/bash
echo "input file is Hierarchy.txt"
perl hier2x3d.blender.pl < Hierarchy.txt > blenderskeleton.py
echo "output file is blenderskeleton.py"
