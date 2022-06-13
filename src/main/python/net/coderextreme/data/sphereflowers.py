'''
x3d.py package 4.0.64.1 loaded, have fun with X3D Graphics!
'''
from x3d import *
from x3d import SFBool
print(
X3D(profile="Immersive", version="4.0", 
head=head(), 
Scene=Scene(children=[
NavigationInfo(),
Background(backUrl=["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resourcesimages/all_probes/stpeters_cross/stpeters_back.png"], bottomUrl=["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resourcesimages/all_probes/stpeters_cross/stpeters_bottom.png"], frontUrl=["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resourcesimages/all_probes/stpeters_cross/stpeters_front.png"], leftUrl=["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resourcesimages/all_probes/stpeters_cross/stpeters_left.png"], rightUrl=["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resourcesimages/all_probes/stpeters_cross/stpeters_right.png"], topUrl=["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/src/main/resourcesall_probes/stpeters_cross/stpeters_top.png"]),
Group(children=[
ExternProtoDeclare(name="FlowerProto", url=["../personal/flowerproto.json#FlowerProto","https://coderextreme.net/X3DJSONLD/src/main/personal/flowerproto.json#FlowerProto","https://localhost:3000/src/main/personal/flowerproto.json#FlowerProto"], field=[field(name="vertex", accessType="inputOutput", type="MFString"),
field(name="fragment", accessType="inputOutput", type="MFString")
]),
ProtoDeclare(name="flower", 
ProtoBody=ProtoBody(children=[
Group(children=[
ProtoInstance(name="FlowerProto", fieldValue=[fieldValue(name="vertex", value=["../shaders/x_ite_flowers_chromatic.vs"]),
fieldValue(name="fragment", value=["../shaders/x_ite.fs"])
])])])),
ProtoInstance(name="flower"),
ProtoInstance(name="flower"),
ProtoInstance(name="flower"),
ProtoInstance(name="flower"),
ProtoInstance(name="flower"),
ProtoInstance(name="flower"),
TimeSensor(DEF="SongTime", loop=True),
Sound(maxBack=100, maxFront=100, minBack=20, minFront=20, 
source=
AudioClip(DEF="AudioClip", description="Chandubabamusic #1", url=["../resources/chandubabamusic1.wav"])),
ROUTE(fromField="cycleTime", fromNode="SongTime", toField="startTime", toNode="AudioClip")])]))
.XML())
