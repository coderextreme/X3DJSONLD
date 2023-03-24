# x3d.py package 4.0.64.2 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
print(
X3D(profile="Immersive", version="4.0", 
head=head(children=[[component(name="H-Anim", level=1),
][meta(name="title", content="JohnBoy.x3d"),
meta(name="identifier", content="http://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnBoy.x3d"),
meta(name="description", content="An attempt at a standard LOA-4 skeleton"),
meta(name="generator", content="h.pl"),
meta(name="creator", content="John Carlson"),
meta(name="created", content="12 June 2020"),
meta(name="license", content="../license.html"),
meta(name="translated", content="22 March 2023"),
meta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
meta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")
]]), 
Scene=Scene(children=[
Transform(children=[
#DEF for markerfor XYZ axes

Shape(DEF="AxisLinesShape", 
geometry=
IndexedLineSet(colorIndex=[0,1,2], colorPerVertex=False, coordIndex=[0,1,-1,0,2,-1,0,3,-1], 
coord=
Coordinate(point=[(0,0,0),(0.1,0,0),(0,0.1,0),(0,0,0.1)]), 
color=(
Color(color=[(1,0,0),(0,0.6,0),(0,0,1)])))),]),
Group(children=[
#DEFS for markers of skeleton joints, segments, and sites

Transform(children=[
Transform(translation=((0,2,0)), children=[
Shape(DEF="HAnimRootShape", 
geometry=
Sphere(radius=0.02), 
appearance=
Appearance(
material=
Material(DEF="HAnimRootMaterial", diffuseColor=((0.8,0,0)), transparency=0.3)))]),
Transform(translation=((0,2.1,0)), children=[
Shape(DEF="HAnimJointShape", 
geometry=
Sphere(radius=0.02), 
appearance=
Appearance(
material=
Material(DEF="HAnimJointMaterial", diffuseColor=((0,0,0.8)), transparency=0.3)))]),
Transform(translation=((0,2.05,0)), children=[
Shape(DEF="HAnimSegmentLine", 
geometry=
LineSet(vertexCount=[2], 
color=(
ColorRGBA(DEF="HAnimSegmentLineColorRGBA", color=[(1,1,0,1),(1,1,0,0.1)])), 
coord=
Coordinate(point=[(-0.05,0,0),(0.05,0,0)])))]),
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
Material(diffuseColor=((1,1,0)), transparency=0.3)))])]),]),
NavigationInfo(speed=1.5),
Viewpoint(description="default")]))
.XML())
