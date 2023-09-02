# x3d.py package 4.0.64.4 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
import json
model = (
X3D(profile="Immersive", version="4.0", 
head=head(
children=[
meta(name="title", content="abox.x3d"),
meta(name="creator", content="John Carlson"),
meta(name="generator", content="manual"),
meta(name="identifier", content="https://coderextreme.net/X3DJSONLD/src/main/data/abox.x3d"),
meta(name="description", content="a box"),
meta(name="converter", content="x3d-tidy V1.0.56, https://www.npmjs.com/package/x3d-tidy"),
meta(name="converted", content="Sat, 02 Sep 2023 10:56:46 GMT")
]), 
Scene=Scene(children=[
ProtoDeclare(name="anyShape", 
ProtoInterface=ProtoInterface(field=[field(accessType="inputOutput", type="MFNode", name="myShape", children=[
Shape(
geometry=
Sphere())])
]), 
ProtoBody=ProtoBody(children=[
Transform(
IS=IS(connect=[connect(nodeField="children", protoField="myShape")
]))])),
ProtoDeclare(name="one", 
ProtoInterface=ProtoInterface(field=[field(accessType="inputOutput", type="MFNode", name="myShape", children=[
Shape(
geometry=
Cylinder())])
]), 
ProtoBody=ProtoBody(children=[
Transform(children=[
ProtoInstance(name="anyShape", fieldValue=[], 
IS=IS(connect=[connect(nodeField="myShape", protoField="myShape")
]))])])),
ProtoInstance(name="one", fieldValue=[fieldValue(name="myShape", children=[
Shape(DEF="_1", 
geometry=
Box(size=((140,140,140))))])
])])))
output = model.JSON()
json.loads(output)
