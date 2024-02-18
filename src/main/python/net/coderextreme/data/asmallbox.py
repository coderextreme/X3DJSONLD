# x3d.py package 4.0.64.4 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
import json
model = (
X3D(profile="Immersive", version="3.3", 
head=Pyhead(
children=[
Pymeta(name="title", content="asmallbox.x3d"),
Pymeta(name="creator", content="John Carlson"),
Pymeta(name="generator", content="manual"),
Pymeta(name="identifier", content="https://coderextreme.net/X3DJSONLD/src/main/data/abox.x3d"),
Pymeta(name="description", content="a box"),
Pymeta(name="translated", content="30 December 2023"),
Pymeta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
Pymeta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")
]), 
Scene=PyScene(children=[
ProtoDeclare(name="anyShape", 
ProtoInterface=PyProtoInterface(field=[Pyfield(name="myShape", accessType="inputOutput", type="MFNode", children=[
Shape(
geometry=
Sphere())])
]), 
ProtoBody=PyProtoBody(children=[
Transform(
IS=PyIS(connect=[Pyconnect(nodeField="children", protoField="myShape")
]))])),
ProtoDeclare(name="one", 
ProtoInterface=PyProtoInterface(field=[Pyfield(name="myShape", accessType="inputOutput", type="MFNode", children=[
Shape(
geometry=
Cylinder())])
]), 
ProtoBody=PyProtoBody(children=[
Transform(children=[
ProtoInstance(name="anyShape", 
IS=PyIS(connect=[Pyconnect(nodeField="myShape", protoField="myShape")
]))])])),
ProtoInstance(name="one", fieldValue=[PyfieldValue(name="myShape", children=[
Shape(
geometry=
Box())])
])])))
output = model.JSON()
json.loads(output)
