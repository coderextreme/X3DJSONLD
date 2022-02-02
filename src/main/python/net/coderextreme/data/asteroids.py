#x3d.py package loaded, have fun with X3D Graphics!
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
ProtoInstance(name="anyShape")]))
.XML())
