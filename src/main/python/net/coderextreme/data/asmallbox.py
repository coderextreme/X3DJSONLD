# x3d.py package 4.0.64.4 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
print(
X3D(profile="Immersive", version="3.3", 
head=head(children=[meta(name="title", content="asmallbox.x3d"),
meta(name="creator", content="John Carlson"),
meta(name="generator", content="manual"),
meta(name="identifier", content="https://coderextreme.net/X3DJSONLD/abox.x3d"),
meta(name="description", content="a box"),
meta(name="translated", content="29 June 2023"),
meta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
meta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")
]), 
Scene=Scene(children=[
ProtoDeclare(name="anyShape", 
ProtoInterface=ProtoInterface(field=[field(name="myShape", accessType="inputOutput", type="MFNode", children=[
Shape(
geometry=
Sphere())])
]), 
ProtoBody=ProtoBody(children=[
Transform(
IS=IS(connect=[connect(nodeField="children", protoField="myShape")
]))])),
ProtoDeclare(name="one", 
ProtoInterface=ProtoInterface(field=[field(name="myShape", accessType="inputOutput", type="MFNode", children=[
Shape(
geometry=
Cylinder())])
]), 
ProtoBody=ProtoBody(children=[
Transform(children=[
ProtoInstance(name="anyShape", 
IS=IS(connect=[connect(nodeField="myShape", protoField="myShape")
]))])])),
ProtoInstance(name="one", fieldValue=[fieldValue(name="myShape", children=[
Shape(
geometry=
Box())])
])]))
.XML())
