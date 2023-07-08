# x3d.py package 4.0.64.4 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
print(
X3D(profile="Immersive", version="3.3", 
head=head(children=[meta(name="title", content="rubikFurnace.x3d"),
meta(name="creator", content="John Carlson"),
meta(name="generator", content="manual"),
meta(name="identifier", content="https://coderextreme.net/X3DJSONLD/rubikFurnace.x3d"),
meta(name="description", content="a green rubik cube"),
meta(name="translated", content="03 July 2023"),
meta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
meta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")
]), 
Scene=Scene(children=[
NavigationInfo(type="\"EXAMINE\""),
Viewpoint(description="Rubiks Cube on Fire", position=((0,0,12))),
ProtoDeclare(name="anyShape", 
ProtoInterface=ProtoInterface(field=[field(name="xtranslation", accessType="inputOutput", type="SFVec3f", value=(0.0,0.0,0.0)),
field(name="myShape", accessType="inputOutput", type="MFNode", children=[
Shape(
geometry=
Sphere(), 
appearance=
Appearance(
material=
Material(diffuseColor=((1,1,1)))))])
]), 
ProtoBody=ProtoBody(children=[
Transform(
IS=IS(connect=[connect(nodeField="translation", protoField="xtranslation"),
connect(nodeField="children", protoField="myShape")
]))])),
ProtoDeclare(name="three", 
ProtoInterface=ProtoInterface(field=[field(name="ytranslation", accessType="inputOutput", type="SFVec3f", value=(0.0,0.0,0.0)),
field(name="myShape", accessType="inputOutput", type="MFNode", children=[
Shape(
geometry=
Sphere(), 
appearance=
Appearance(
material=
Material(diffuseColor=((1,1,1)))))])
]), 
ProtoBody=ProtoBody(children=[
Transform(
IS=IS(connect=[connect(nodeField="translation", protoField="ytranslation")
]), children=[
ProtoInstance(name="anyShape", fieldValue=[fieldValue(name="xtranslation", value=[0,0,0])
], 
IS=IS(connect=[connect(nodeField="myShape", protoField="myShape")
])),
ProtoInstance(name="anyShape", fieldValue=[fieldValue(name="xtranslation", value=[2,0,0])
], 
IS=IS(connect=[connect(nodeField="myShape", protoField="myShape")
])),
ProtoInstance(name="anyShape", fieldValue=[fieldValue(name="xtranslation", value=[-2,0,0])
], 
IS=IS(connect=[connect(nodeField="myShape", protoField="myShape")
]))])])),
ProtoDeclare(name="nine", 
ProtoInterface=ProtoInterface(field=[field(name="ztranslation", accessType="inputOutput", type="SFVec3f", value=(0.0,0.0,0.0)),
field(name="myShape", accessType="inputOutput", type="MFNode", children=[
Shape(
geometry=
Sphere(), 
appearance=
Appearance(
material=
Material(diffuseColor=((1,1,1)))))])
]), 
ProtoBody=ProtoBody(children=[
Transform(
IS=IS(connect=[connect(nodeField="translation", protoField="ztranslation")
]), children=[
ProtoInstance(name="three", fieldValue=[fieldValue(name="ytranslation", value=[0,0,0])
], 
IS=IS(connect=[connect(nodeField="myShape", protoField="myShape")
])),
ProtoInstance(name="three", fieldValue=[fieldValue(name="ytranslation", value=[0,2,0])
], 
IS=IS(connect=[connect(nodeField="myShape", protoField="myShape")
])),
ProtoInstance(name="three", fieldValue=[fieldValue(name="ytranslation", value=[0,-2,0])
], 
IS=IS(connect=[connect(nodeField="myShape", protoField="myShape")
]))])])),
ProtoDeclare(name="twentyseven", 
ProtoInterface=ProtoInterface(field=[field(name="ttranslation", accessType="inputOutput", type="SFVec3f", value=(0.0,0.0,0.0)),
field(name="myShape", accessType="inputOutput", type="MFNode", children=[
Shape(
geometry=
Sphere(), 
appearance=
Appearance(
material=
Material(diffuseColor=((1,1,1)))))])
]), 
ProtoBody=ProtoBody(children=[
Transform(
IS=IS(connect=[connect(nodeField="translation", protoField="ttranslation")
]), children=[
ProtoInstance(name="nine", fieldValue=[fieldValue(name="ztranslation", value=[0,0,0])
], 
IS=IS(connect=[connect(nodeField="myShape", protoField="myShape")
])),
ProtoInstance(name="nine", fieldValue=[fieldValue(name="ztranslation", value=[0,0,2])
], 
IS=IS(connect=[connect(nodeField="myShape", protoField="myShape")
])),
ProtoInstance(name="nine", fieldValue=[fieldValue(name="ztranslation", value=[0,0,-2])
], 
IS=IS(connect=[connect(nodeField="myShape", protoField="myShape")
]))])])),
ProtoInstance(name="twentyseven", fieldValue=[fieldValue(name="ttranslation", value=[0,0,0]),
fieldValue(name="myShape", children=[
Shape(
geometry=
Box(size=((1,1,1))), 
appearance=
Appearance(
material=
Material(diffuseColor=((0,1,0)))))])
])]))
.XML())
