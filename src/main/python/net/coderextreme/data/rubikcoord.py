'''
x3d.py package 4.0.63.7 loaded, have fun with X3D Graphics!
'''
from x3d import *
from x3d import SFBool
print(
X3D(profile="Immersive", version="3.3", 
head=head(), 
Scene=Scene(children=[
NavigationInfo(type="\"EXAMINE\""),
Viewpoint(description="Rubiks Cube", position=((0,0,12))),
Background(skyColor=[(1,1,1)]),
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
fieldValue(name="diffuseColor", value=[1,0,0], 
IS=IS(connect=[connect(nodeField="diffuseColor", protoField="diffuseColor")
]))
]),
ProtoInstance(name="boxproto", fieldValue=[fieldValue(name="xtranslation", value=[2,0,0]),
fieldValue(name="diffuseColor", value=[1,0,0], 
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
fieldValue(name="diffuseColor", value=[1,0,0], 
IS=IS(connect=[connect(nodeField="diffuseColor", protoField="x1diffuseColor")
]))
]),
ProtoInstance(name="two", fieldValue=[fieldValue(name="ytranslation", value=[0,2,0]),
fieldValue(name="diffuseColor", value=[0,1,0], 
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
]),
#Axes below <Group> <Group DEF='ArrowGreen'> <Shape> <Cylinder DEF='ArrowCylinder' radius='.025' top='false'/> <Appearance DEF='Green'> <Material diffuseColor='0 0 0'/> </Appearance> </Shape> <Transform translation='0 1 0'> <Shape> <Cone DEF='ArrowCone' bottomRadius='.05' height='.1'/> <Appearance USE='Green'/> </Shape> </Transform> </Group> <Transform translation='0 1.08 0'> <Billboard> <Shape> <Appearance DEF='LABEL_APPEARANCE'> <Material diffuseColor='0 0 0'/> </Appearance> <Text string='"Y"'> <FontStyle DEF='LABEL_FONT' family='"SANS"' justify='"MIDDLE" "MIDDLE"' size='.2'/> </Text> </Shape> </Billboard> </Transform> </Group> <Transform rotation='0 0 1 -1.57079'> <Group> <Group DEF='ArrowRed'> <Shape> <Cylinder USE='ArrowCylinder'/> <Appearance DEF='Red'> <Material diffuseColor='0 0 0'/> </Appearance> </Shape> <Transform translation='0 1 0'> <Shape> <Cone USE='ArrowCone'/> <Appearance USE='Red'/> </Shape> </Transform> </Group> <Transform rotation='0 0 1 1.57079' translation='.072 1.1 0'> <Billboard> <Shape> <Appearance USE='LABEL_APPEARANCE'/> <Text string='"X"'> <FontStyle USE='LABEL_FONT'/> </Text> </Shape> </Billboard> </Transform> </Group> </Transform> <Transform rotation='1 0 0 1.57079'> <Group> <Group DEF='ArrowBlue'> <Shape> <Cylinder USE='ArrowCylinder'/> <Appearance DEF='Blue'> <Material diffuseColor='0 0 0'/> </Appearance> </Shape> <Transform translation='0 1 0'> <Shape> <Cone USE='ArrowCone'/> <Appearance USE='Blue'/> </Shape> </Transform> </Group> <Transform rotation='1 0 0 -1.57079' translation='0 1.1 .072'> <Billboard> <Shape> <Appearance USE='LABEL_APPEARANCE'/> <Text string='"Z"'> <FontStyle USE='LABEL_FONT'/> </Text> </Shape> </Billboard> </Transform> </Group> </Transform>
]))
.XML())
