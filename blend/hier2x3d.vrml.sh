#!/bin/bash
echo "input file is HierWS.txt"
perl hier2x3d.vrml.pl < HierWS.txt > GrampsSkeleton.x3dv
echo "output file is GrampsSkeleton.x3dv"
