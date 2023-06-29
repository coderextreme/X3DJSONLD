# x3d.py package 4.0.64.4 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
print(
X3D(profile="Interchange", version="3.3", 
head=head(children=[meta(name="title", content="ifscube.x3d"),
meta(name="identifier", content="http://coderextreme.net/X3DJSONLD/src/main/data/ifscube.x3d"),
meta(name="description", content="Template for an Indexed Face Set"),
meta(name="creator", content="John Carlson"),
meta(name="created", content="4 April 2017"),
meta(name="translated", content="29 June 2023"),
meta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
meta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")
]), 
Scene=Scene(children=[
Group(children=[
Shape(
geometry=
IndexedFaceSet(creaseAngle=1.57, DEF="IndexedFaceSet", coordIndex=[0,0,1,-1,0,1,1,-1,2,2,3,3,-1,0,3,3,0,-1,0,3,2,1,-1,1,2,2,1,-1,1,2,3,0,-1], normalIndex=[0,-1,0,-1,1,-1,2,-1,3,-1,4,-1,5,-1], normalPerVertex=False, colorIndex=[0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1], 
coord=
Coordinate(point=[(0,0,1),(0,1,1),(1,1,1),(1,0,1)]), 
normal=
Normal(vector=[(1,0,0),(-1,0,0),(0,1,0),(0,0,-1),(0,-1,0),(0,0,1)]), 
color=(
Color(color=[(0,1,0)]))))])]))
.XML())
