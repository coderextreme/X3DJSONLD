#x3d.py package 4.0.60 loaded, have fun with X3D Graphics!
from x3d import *
from x3d import SFBool
print(
X3D(profile="Immersive", version="3.3", 
head=head(), 
Scene=Scene(children=[
NavigationInfo(type="\"EXAMINE\""),
Viewpoint(description="Rubiks Cube on Fire", position=((0,0,12))),
ProtoDeclare(name="anyShape", 
ProtoInterface=ProtoInterface(field=[field(name="xtranslation", accessType="inputOutput", type="SFVec3f", value=(0.0,0.0,0.0)),
field(name="myShape", accessType="inputOutput", type="SFNode", children=[
Sphere()])
]), 
ProtoBody=ProtoBody(children=[
Transform(
IS=IS(connect=[connect(nodeField="translation", protoField="xtranslation")
]), children=[
Shape(
IS=IS(connect=[connect(nodeField="geometry", protoField="myShape")
]), 
appearance=
Appearance(
material=
Material(diffuseColor=((1,1,1)))))])])),
ProtoDeclare(name="three", 
ProtoInterface=ProtoInterface(field=[field(name="ytranslation", accessType="inputOutput", type="SFVec3f", value=(0.0,0.0,0.0)),
field(name="myShape", accessType="inputOutput", type="SFNode", children=[
Sphere()])
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
field(name="myShape", accessType="inputOutput", type="SFNode", children=[
Sphere()])
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
field(name="myShape", accessType="inputOutput", type="SFNode", children=[
Sphere()])
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
Box(size=((1,1,1)))])
])]))
.XML())
