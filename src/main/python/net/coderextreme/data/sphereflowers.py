print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.1"
head1 = x3d.head()
component2 = x3d.component()
component2.name = "EnvironmentalEffects"
component2.level = 3

head1.children.append(component2)
component3 = x3d.component()
component3.name = "Shaders"
component3.level = 1

head1.children.append(component3)
component4 = x3d.component()
component4.name = "CubeMapTexturing"
component4.level = 1

head1.children.append(component4)
component5 = x3d.component()
component5.name = "Grouping"
component5.level = 3

head1.children.append(component5)
meta6 = x3d.meta()
meta6.name = "title"
meta6.content = "sphereflowers.x3d"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "creator"
meta7.content = "John Carlson"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "created"
meta8.content = "Jan 17 2022"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "modified"
meta9.content = "Mon, 09 Feb 2026 07:13:20 GMT"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "description"
meta10.content = "5 or more prismatic flowers"

head1.children.append(meta10)

X3D0.head = head1
Scene11 = x3d.Scene()
ExternProtoDeclare12 = x3d.ExternProtoDeclare()
ExternProtoDeclare12.name = "FlowerProto"
ExternProtoDeclare12.url = ["../data/flowerproto.x3d#FlowerProto","https://coderextreme.net/X3DJSONLD/src/main/data/flowerproto.x3d#FlowerProto"]
field13 = x3d.field()
field13.accessType = "inputOutput"
field13.type = "MFString"
field13.name = "vertex"

ExternProtoDeclare12.field.append(field13)
field14 = x3d.field()
field14.accessType = "inputOutput"
field14.type = "MFString"
field14.name = "fragment"

ExternProtoDeclare12.field.append(field14)

Scene11.children.append(ExternProtoDeclare12)
ProtoDeclare15 = x3d.ProtoDeclare()
ProtoDeclare15.name = "flower"
ProtoInterface16 = x3d.ProtoInterface()

ProtoDeclare15.ProtoInterface = ProtoInterface16
ProtoBody17 = x3d.ProtoBody()
Group18 = x3d.Group()
ProtoInstance19 = x3d.ProtoInstance()
ProtoInstance19.name = "FlowerProto"
fieldValue20 = x3d.fieldValue()
fieldValue20.name = "vertex"
fieldValue20.value = "\"../shaders/x_ite_flowers_chromatic.vs\""

ProtoInstance19.fieldValue.append(fieldValue20)
fieldValue21 = x3d.fieldValue()
fieldValue21.name = "fragment"
fieldValue21.value = "\"../shaders/x_ite.fs\""

ProtoInstance19.fieldValue.append(fieldValue21)

Group18.children.append(ProtoInstance19)

ProtoBody17.children.append(Group18)

ProtoDeclare15.ProtoBody = ProtoBody17

Scene11.children.append(ProtoDeclare15)
NavigationInfo22 = x3d.NavigationInfo()

Scene11.children.append(NavigationInfo22)
Background23 = x3d.Background()
Background23.frontUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]
Background23.backUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]
Background23.leftUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]
Background23.rightUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]
Background23.topUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]
Background23.bottomUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]

Scene11.children.append(Background23)
Group24 = x3d.Group()
ProtoInstance25 = x3d.ProtoInstance()
ProtoInstance25.name = "flower"

Group24.children.append(ProtoInstance25)
ProtoInstance26 = x3d.ProtoInstance()
ProtoInstance26.name = "flower"

Group24.children.append(ProtoInstance26)
ProtoInstance27 = x3d.ProtoInstance()
ProtoInstance27.name = "flower"

Group24.children.append(ProtoInstance27)
ProtoInstance28 = x3d.ProtoInstance()
ProtoInstance28.name = "flower"

Group24.children.append(ProtoInstance28)
ProtoInstance29 = x3d.ProtoInstance()
ProtoInstance29.name = "flower"

Group24.children.append(ProtoInstance29)
ProtoInstance30 = x3d.ProtoInstance()
ProtoInstance30.name = "flower"

Group24.children.append(ProtoInstance30)
TimeSensor31 = x3d.TimeSensor(DEF="SongTime")
TimeSensor31.loop = True

Group24.children.append(TimeSensor31)
Sound32 = x3d.Sound()
Sound32.location = [0,1,0]
Sound32.minBack = 20
Sound32.minFront = 20
Sound32.maxBack = 100
Sound32.maxFront = 100
AudioClip33 = x3d.AudioClip(DEF="AudioClip")
AudioClip33.description = "Chandubabamusic #1"
AudioClip33.url = ["../resources/chandubabamusic1.wav","https://coderextreme.net/X3DJSONLD/src/main/resources/chandubabamusic1.wav"]
AudioClip33.startTime = 1770621200.309

Sound32.source = AudioClip33

Group24.children.append(Sound32)

Scene11.children.append(Group24)
ROUTE34 = x3d.ROUTE()
ROUTE34.fromNode = "SongTime"
ROUTE34.fromField = "cycleTime"
ROUTE34.toNode = "AudioClip"
ROUTE34.toField = "set_startTime"

Scene11.children.append(ROUTE34)

X3D0.Scene = Scene11
f = open("../data/sphereflowers.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/sphereflowers.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/sphereflowers.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
