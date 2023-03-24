# x3d.py package 4.0.64.2 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
print(
X3D(profile="Interchange", version="3.3", 
head=head(children=[[component(name="Scripting", level=1),
][meta(name="title", content="sphere.x3d"),
meta(name="creator", content="John Carlson"),
meta(name="generator", content="manual"),
meta(name="identifier", content="https://coderextreme.net/X3DJSONLD/sphere.x3d"),
meta(name="description", content="a sphere"),
meta(name="translated", content="22 March 2023"),
meta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
meta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")
]]), 
Scene=Scene(children=[
Group(children=[
Shape(
appearance=
Appearance(
material=
Material(diffuseColor=((1,1,1)))), 
geometry=
Sphere())])]))
.XML())
