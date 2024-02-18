# x3d.py package 4.0.64.4 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
import json
model = (
X3D(profile="Immersive", version="3.3", 
head=Pyhead(
children=[
Pymeta(name="title", content="glflowers.x3d"),
Pymeta(name="creator", content="John Carlson"),
Pymeta(name="description", content="5 or more prismatic flowers"),
Pymeta(name="generator", content="X3D-Edit, https://savage.nps.edu/X3D-Edit"),
Pymeta(name="identifier", content="https://coderextreme.net/X3DJSONLD/src/main/data/glflowers.x3d"),
Pymeta(name="translated", content="30 December 2023"),
Pymeta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
Pymeta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")
]), 
Scene=PyScene(children=[
NavigationInfo(),
Background(backUrl=["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"], bottomUrl=["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"], frontUrl=["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"], leftUrl=["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"], rightUrl=["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"], topUrl=["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]),
Group(children=[
ExternProtoDeclare(name="FlowerProto", url=["../data/flowerproto.x3d#FlowerProto"], field=[Pyfield(name="vertex", accessType="inputOutput", type="MFString"),
Pyfield(name="fragment", accessType="inputOutput", type="MFString")
]),
ProtoDeclare(name="flower", 
ProtoBody=PyProtoBody(children=[
Group(children=[
ProtoInstance(name="FlowerProto", fieldValue=[PyfieldValue(name="vertex", value=["../shaders/gl_flowers_chromatic.vs"]),
PyfieldValue(name="fragment", value=["../shaders/common.fs"])
])])])),
ProtoInstance(name="flower"),
ProtoInstance(name="flower"),
ProtoInstance(name="flower"),
ProtoInstance(name="flower"),
ProtoInstance(name="flower"),
ProtoInstance(name="flower")])])))
output = model.JSON()
json.loads(output)
