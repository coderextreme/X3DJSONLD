# x3d.py package 4.0.64.2 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
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
