'''
x3d.py package 4.0.64.1 loaded, have fun with X3D Graphics!
'''
from x3d import *
print(
X3D(profile="Interchange", version="3.3", 
head=head(), 
Scene=Scene(children=[
WorldInfo(title="ifscubeworks.x3d"),
Group(children=[
Shape(
geometry=
IndexedFaceSet(DEF="IndexedFaceSet", coordIndex=[0,0,1,-1,0,1,1,-1,2,2,3,3,-1,0,3,3,0,-1,0,3,2,1,-1,1,2,2,1,-1,1,2,3,0,-1], normalIndex=[0,0,1,2,3,4,5], normalPerVertex=False, colorIndex=[0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1], 
coord=
Coordinate(point=[(0,0,1),(0,1,1),(1,1,1),(1,0,1)]), 
normal=
Normal(vector=[(1,0,0),(-1,0,0),(0,1,0),(0,0,-1),(0,-1,0),(0,0,1)]), 
color=(
Color(color=[(0,1,0)]))))])]))
.XML())
