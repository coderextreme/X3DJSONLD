'''
x3d.py package 4.0.63.7 loaded, have fun with X3D Graphics!
'''
from x3d import *
from x3d import SFBool
print(
X3D(profile="Immersive", version="3.3", 
head=head(), 
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
