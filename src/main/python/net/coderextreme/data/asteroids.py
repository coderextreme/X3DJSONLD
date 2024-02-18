# x3d.py package 4.0.64.4 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
import json
model = (
X3D(profile="Immersive", version="3.3", 
head=Pyhead(
children=[
Pymeta(name="title", content="asteroids.x3d"),
Pymeta(name="creator", content="John Carlson"),
Pymeta(name="generator", content="manual"),
Pymeta(name="identifier", content="https://coderextreme.net/X3DJSONLD/src/main/data/asteroids.x3d"),
Pymeta(name="description", content="asteroids"),
Pymeta(name="translated", content="30 December 2023"),
Pymeta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
Pymeta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")
]), 
Scene=PyScene(children=[
ProtoDeclare(name="anyShape", 
ProtoInterface=PyProtoInterface(field=[Pyfield(name="myShape", accessType="inputOutput", type="MFNode", children=[
Shape(
geometry=
Sphere())])
]), 
ProtoBody=PyProtoBody(children=[
Transform(
IS=PyIS(connect=[Pyconnect(nodeField="children", protoField="myShape")
]))])),
ProtoInstance(name="anyShape")])))
output = model.JSON()
json.loads(output)
