# x3d.py package 4.0.64.2 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
print(
X3D(profile="Immersive", version="3.3", 
head=head(), 
Scene=Scene(children=[
NavigationInfo(),
Background(backUrl=["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"], bottomUrl=["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"], frontUrl=["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"], leftUrl=["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"], rightUrl=["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"], topUrl=["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"]),
Group(children=[
ExternProtoDeclare(name="FlowerProto", url=["../data/flowerproto.x3d#FlowerProto"], field=[field(name="vertex", accessType="inputOutput", type="MFString"),
field(name="fragment", accessType="inputOutput", type="MFString")
]),
ProtoDeclare(name="flower", 
ProtoBody=ProtoBody(children=[
Group(children=[
ProtoInstance(name="FlowerProto", fieldValue=[fieldValue(name="vertex", value=["../shaders/x_ite_flowers_plain.vs"]),
fieldValue(name="fragment", value=["../shaders/plain.fs"])
])])])),
ProtoInstance(name="flower"),
ProtoInstance(name="flower"),
ProtoInstance(name="flower"),
ProtoInstance(name="flower"),
ProtoInstance(name="flower"),
ProtoInstance(name="flower")])]))
.XML())
