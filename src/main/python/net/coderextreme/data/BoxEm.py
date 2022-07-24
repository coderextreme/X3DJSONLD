'''
x3d.py package 4.0.64.2 loaded, have fun with X3D Graphics!
'''
from x3d import *
print(
X3D(profile="Immersive", version="3.3", 
head=head(), 
Scene=Scene(children=[
NavigationInfo(type="\"EXAMINE\""),
Viewpoint(description="Cubes on Fire", position=((0,0,12))),
ProtoDeclare(name="anyShape", 
ProtoInterface=ProtoInterface(field=[field(name="xtranslation", accessType="inputOutput", type="SFVec3f", value=(0,0,0)),
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
ProtoInterface=ProtoInterface(field=[field(name="ytranslation", accessType="inputOutput", type="SFVec3f", value=(0,0,0)),
field(name="myShape", accessType="inputOutput", type="MFNode", children=[
Shape(
geometry=
Cylinder(), 
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
ProtoInstance(name="three", DEF="threepi", fieldValue=[fieldValue(name="ytranslation", value=[0,0,0]),
fieldValue(name="myShape", children=[
Shape(DEF="box", 
geometry=
Box(size=((1,1,1))), 
appearance=
Appearance(
material=
Material(diffuseColor=((0,1,0)))))])
]),
Transform(translation=((0,2,0)), children=[
Shape(USE="box")])]))
.XML())
