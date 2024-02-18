# x3d.py package 4.0.64.4 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
import json
model = (
X3D(profile="Immersive", version="3.3", 
head=Pyhead(
children=[
Pymeta(name="title", content="BoxEm2.x3d"),
Pymeta(name="creator", content="John Carlson"),
Pymeta(name="generator", content="manual"),
Pymeta(name="identifier", content="https://coderextreme.net/X3DJSONLD/src/main/data/BoxEm2.x3d"),
Pymeta(name="description", content="3 boxes"),
Pymeta(name="translated", content="30 December 2023"),
Pymeta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
Pymeta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")
]), 
Scene=PyScene(children=[
NavigationInfo(type="\"EXAMINE\""),
Viewpoint(description="Cubes on Fire", position=((0,0,12))),
ProtoDeclare(name="anyShape", 
ProtoInterface=PyProtoInterface(field=[Pyfield(name="xtranslation", accessType="inputOutput", type="SFVec3f", value=(0,0,0)),
Pyfield(name="myShape", accessType="inputOutput", type="MFNode", children=[
Shape(
geometry=
Sphere(), 
appearance=
Appearance(
material=
Material(diffuseColor=((1,1,1)))))])
]), 
ProtoBody=PyProtoBody(children=[
Transform(
IS=PyIS(connect=[Pyconnect(nodeField="translation", protoField="xtranslation"),
Pyconnect(nodeField="children", protoField="myShape")
]))])),
ProtoDeclare(name="three", 
ProtoInterface=PyProtoInterface(field=[Pyfield(name="ytranslation", accessType="inputOutput", type="SFVec3f", value=(0,0,0)),
Pyfield(name="myShape", accessType="inputOutput", type="MFNode", children=[
Shape(
geometry=
Cylinder(), 
appearance=
Appearance(
material=
Material(diffuseColor=((1,1,1)))))])
]), 
ProtoBody=PyProtoBody(children=[
Transform(
IS=PyIS(connect=[Pyconnect(nodeField="translation", protoField="ytranslation")
]), children=[
ProtoInstance(name="anyShape", fieldValue=[PyfieldValue(name="xtranslation", value=[0,0,0])
], 
IS=PyIS(connect=[Pyconnect(nodeField="myShape", protoField="myShape")
])),
ProtoInstance(name="anyShape", fieldValue=[PyfieldValue(name="xtranslation", value=[2,0,0])
], 
IS=PyIS(connect=[Pyconnect(nodeField="myShape", protoField="myShape")
])),
ProtoInstance(name="anyShape", fieldValue=[PyfieldValue(name="xtranslation", value=[-2,0,0])
], 
IS=PyIS(connect=[Pyconnect(nodeField="myShape", protoField="myShape")
]))])])),
ProtoInstance(name="three", DEF="threepi", fieldValue=[PyfieldValue(name="ytranslation", value=[0,0,0]),
PyfieldValue(name="myShape", children=[
Shape(DEF="box", 
geometry=
Box(size=((1,1,1))), 
appearance=
Appearance(
material=
Material(diffuseColor=((0,1,0)))))])
]),
Transform(translation=((0,2,0)), children=[
Shape(USE="box")])])))
output = model.JSON()
json.loads(output)
