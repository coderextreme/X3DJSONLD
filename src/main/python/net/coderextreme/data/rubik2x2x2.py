'''
x3d.py package 4.0.64.1 loaded, have fun with X3D Graphics!
'''
from x3d import *
from x3d import SFBool
print((
X3D(profile="Immersive", version="3.3", 
head=head(), 
Scene=Scene(children=[
NavigationInfo(type="\"EXAMINE\""),
Viewpoint(description="Rubiks Cube", position=((0,0,12))),
ProtoDeclare(name="boxproto", 
ProtoInterface=ProtoInterface(field=[field(name="xtranslation", accessType="inputOutput", type="SFVec3f", value=(0.0,0.0,0.0)),
field(name="diffuseColor", accessType="inputOutput", type="SFColor", value=(1,1,1))
]), 
ProtoBody=ProtoBody(children=[
Transform(
IS=IS(connect=[connect(nodeField="translation", protoField="xtranslation")
]), children=[
Shape(
geometry=
Box(), 
appearance=
Appearance(
material=
Material(diffuseColor=((1,1,1)), 
IS=IS(connect=[connect(nodeField="diffuseColor", protoField="diffuseColor")
]))))])])),
ProtoDeclare(name="two", 
ProtoInterface=ProtoInterface(field=[field(name="ytranslation", accessType="inputOutput", type="SFVec3f", value=(0.0,0.0,0.0)),
field(name="diffuseColor", accessType="inputOutput", type="SFColor", value=(1,0,0))
]), 
ProtoBody=ProtoBody(children=[
Transform(
IS=IS(connect=[connect(nodeField="translation", protoField="ytranslation")
]), children=[
ProtoInstance(name="boxproto", fieldValue=[fieldValue(name="xtranslation", value=[0,0,0]),
fieldValue(name="diffuseColor", 
IS=IS(connect=[connect(nodeField="diffuseColor", protoField="diffuseColor")
]))
]),
ProtoInstance(name="boxproto", fieldValue=[fieldValue(name="xtranslation", value=[2,0,0]),
fieldValue(name="diffuseColor", 
IS=IS(connect=[connect(nodeField="diffuseColor", protoField="diffuseColor")
]))
])])])),
ProtoDeclare(name="four", 
ProtoInterface=ProtoInterface(field=[field(name="ztranslation", accessType="inputOutput", type="SFVec3f", value=(0.0,0.0,0.0)),
field(name="x1diffuseColor", accessType="inputOutput", type="SFColor", value=(1,0,0)),
field(name="x2diffuseColor", accessType="inputOutput", type="SFColor", value=(0,1,0))
]), 
ProtoBody=ProtoBody(children=[
Transform(
IS=IS(connect=[connect(nodeField="translation", protoField="ztranslation")
]), children=[
ProtoInstance(name="two", fieldValue=[fieldValue(name="ytranslation", value=[0,0,0]),
fieldValue(name="diffuseColor", 
IS=IS(connect=[connect(nodeField="diffuseColor", protoField="x1diffuseColor")
]))
]),
ProtoInstance(name="two", fieldValue=[fieldValue(name="ytranslation", value=[0,2,0]),
fieldValue(name="diffuseColor", 
IS=IS(connect=[connect(nodeField="diffuseColor", protoField="x2diffuseColor")
]))
])])])),
ProtoDeclare(name="eight", 
ProtoInterface=ProtoInterface(field=[field(name="ttranslation", accessType="inputOutput", type="SFVec3f", value=(0.0,0.0,0.0))
]), 
ProtoBody=ProtoBody(children=[
Transform(
IS=IS(connect=[connect(nodeField="translation", protoField="ttranslation")
]), children=[
ProtoInstance(name="four", fieldValue=[fieldValue(name="ztranslation", value=[0,0,0]),
fieldValue(name="x1diffuseColor", value=[1,0,0]),
fieldValue(name="x2diffuseColor", value=[0,1,0])
]),
ProtoInstance(name="four", fieldValue=[fieldValue(name="ztranslation", value=[0,0,2]),
fieldValue(name="x1diffuseColor", value=[0,0,1]),
fieldValue(name="x2diffuseColor", value=[1,1,0])
])])])),
ProtoInstance(name="eight", fieldValue=[fieldValue(name="ttranslation", value=[0,0,0])
])]))
.XML()))
