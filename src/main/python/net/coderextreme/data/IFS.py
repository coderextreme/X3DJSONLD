# x3d.py package 4.0.64.2 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
print(
X3D(profile="Immersive", version="4.0", 
head=head(), 
Scene=Scene(children=[
Group(children=[
#DEFS for markers of skeleton joints, segments, and sites

Transform(translation=((0,2.1,0)), children=[
Shape(DEF="HAnimSiteShape", 
geometry=
IndexedFaceSet(DEF="DiamondIFS", creaseAngle=0.5, solid=False, coordIndex=[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1], 
color=(
ColorRGBA(DEF="HAnimSiteColorRGBA", color=[(1,1,0,1),(1,1,0,0.1)])), 
coord=
Coordinate(point=[(0,0.01,0),(-0.01,0,0),(0,0,0.01),(0.01,0,0),(0,0,-0.01),(0,-0.01,0)])), 
appearance=
Appearance(
material=
Material(diffuseColor=((1,1,0)), transparency=0.3)))]),]),
NavigationInfo(speed=1.5),
Viewpoint(description="default")]))
.XML())
