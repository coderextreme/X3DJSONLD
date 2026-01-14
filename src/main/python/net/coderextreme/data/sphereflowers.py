print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
head1 = x3d.head()
component2 = x3d.component()
component2.name = "Scripting"
component2.level = 1

head1.children.append(component2)
component3 = x3d.component()
component3.name = "EnvironmentalEffects"
component3.level = 3

head1.children.append(component3)
component4 = x3d.component()
component4.name = "Shaders"
component4.level = 1

head1.children.append(component4)
component5 = x3d.component()
component5.name = "CubeMapTexturing"
component5.level = 1

head1.children.append(component5)
component6 = x3d.component()
component6.name = "Texturing"
component6.level = 1

head1.children.append(component6)
component7 = x3d.component()
component7.name = "Rendering"
component7.level = 1

head1.children.append(component7)
component8 = x3d.component()
component8.name = "Grouping"
component8.level = 3

head1.children.append(component8)
component9 = x3d.component()
component9.name = "Core"
component9.level = 1

head1.children.append(component9)
meta10 = x3d.meta()
meta10.name = "title"
meta10.content = "sphereflowers.x3d"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "creator"
meta11.content = "John Carlson"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "created"
meta12.content = "Jan 17 2022"

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "modified"
meta13.content = "Sep 3 2023"

head1.children.append(meta13)
meta14 = x3d.meta()
meta14.name = "description"
meta14.content = "5 or more prismatic flowers"

head1.children.append(meta14)
meta15 = x3d.meta()
meta15.name = "generator"
meta15.content = "X3D-Edit, https://savage.nps.edu/X3D-Edit"

head1.children.append(meta15)
meta16 = x3d.meta()
meta16.name = "identifier"
meta16.content = "https://coderextreme.net/X3DJSONLD/src/main/data/sphereflowers.x3d"

head1.children.append(meta16)

X3D0.head = head1
Scene17 = x3d.Scene()
NavigationInfo18 = x3d.NavigationInfo()

Scene17.children.append(NavigationInfo18)
Background19 = x3d.Background()
Background19.backUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]
Background19.bottomUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]
Background19.frontUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]
Background19.leftUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]
Background19.rightUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]
Background19.topUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]

Scene17.children.append(Background19)
Group20 = x3d.Group()
ExternProtoDeclare21 = x3d.ExternProtoDeclare()
ExternProtoDeclare21.name = "FlowerProto"
ExternProtoDeclare21.url = ["../data/flowerproto.x3d#FlowerProto","https://coderextreme.net/X3DJSONLD/src/main/data/flowerproto.x3d#FlowerProto"]
field22 = x3d.field()
field22.name = "vertex"
field22.accessType = "inputOutput"
field22.type = "MFString"

ExternProtoDeclare21.field.append(field22)
field23 = x3d.field()
field23.name = "fragment"
field23.accessType = "inputOutput"
field23.type = "MFString"

ExternProtoDeclare21.field.append(field23)

Group20.children.append(ExternProtoDeclare21)
ProtoDeclare24 = x3d.ProtoDeclare()
ProtoDeclare24.name = "flower"
ProtoBody25 = x3d.ProtoBody()
Group26 = x3d.Group()
ProtoInstance27 = x3d.ProtoInstance()
ProtoInstance27.name = "FlowerProto"
fieldValue28 = x3d.fieldValue()
fieldValue28.name = "vertex"
fieldValue28.value = "\"../shaders/x_ite_flowers_chromatic.vs\""

ProtoInstance27.fieldValue.append(fieldValue28)
fieldValue29 = x3d.fieldValue()
fieldValue29.name = "fragment"
fieldValue29.value = "\"../shaders/x_ite.fs\""

ProtoInstance27.fieldValue.append(fieldValue29)

Group26.children.append(ProtoInstance27)

ProtoBody25.children.append(Group26)

ProtoDeclare24.ProtoBody = ProtoBody25

Group20.children.append(ProtoDeclare24)
ProtoInstance30 = x3d.ProtoInstance()
ProtoInstance30.name = "flower"

Group20.children.append(ProtoInstance30)
ProtoInstance31 = x3d.ProtoInstance()
ProtoInstance31.name = "flower"

Group20.children.append(ProtoInstance31)
ProtoInstance32 = x3d.ProtoInstance()
ProtoInstance32.name = "flower"

Group20.children.append(ProtoInstance32)
ProtoInstance33 = x3d.ProtoInstance()
ProtoInstance33.name = "flower"

Group20.children.append(ProtoInstance33)
ProtoInstance34 = x3d.ProtoInstance()
ProtoInstance34.name = "flower"

Group20.children.append(ProtoInstance34)
ProtoInstance35 = x3d.ProtoInstance()
ProtoInstance35.name = "flower"

Group20.children.append(ProtoInstance35)
TimeSensor36 = x3d.TimeSensor()
TimeSensor36.DEF = "SongTime"
TimeSensor36.loop = True

Group20.children.append(TimeSensor36)
Sound37 = x3d.Sound()
Sound37.maxBack = 100
Sound37.maxFront = 100
Sound37.minBack = 20
Sound37.minFront = 20
Sound37.location = [0,1,0]
AudioClip38 = x3d.AudioClip()
AudioClip38.DEF = "AudioClip"
AudioClip38.description = "Chandubabamusic #1"
AudioClip38.url = ["../resources/chandubabamusic1.wav","https://coderextreme.net/X3DJSONLD/src/main/resources/chandubabamusic1.wav"]

Sound37.source = AudioClip38

Group20.children.append(Sound37)
ROUTE39 = x3d.ROUTE()
ROUTE39.fromField = "cycleTime"
ROUTE39.fromNode = "SongTime"
ROUTE39.toField = "startTime"
ROUTE39.toNode = "AudioClip"

Group20.children.append(ROUTE39)

Scene17.children.append(Group20)

X3D0.Scene = Scene17
f = open("../data/sphereflowers.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/sphereflowers.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/sphereflowers.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
