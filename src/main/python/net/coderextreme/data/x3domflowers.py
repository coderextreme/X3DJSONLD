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
meta10.content = "x3domflowers.x3d"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "creator"
meta11.content = "John Carlson"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "description"
meta12.content = "5 or more prismatic flowers"

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "generator"
meta13.content = "X3D-Edit, https://savage.nps.edu/X3D-Edit"

head1.children.append(meta13)
meta14 = x3d.meta()
meta14.name = "identifier"
meta14.content = "https://coderextreme.net/X3DJSONLD/src/main/data/x3domflowers.x3d"

head1.children.append(meta14)

X3D0.head = head1
Scene15 = x3d.Scene()
NavigationInfo16 = x3d.NavigationInfo()

Scene15.children.append(NavigationInfo16)
"""Images courtesy of Paul Debevec's Light Probe Image Gallery"""
Background17 = x3d.Background()
Background17.backUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]
Background17.bottomUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]
Background17.frontUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]
Background17.leftUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]
Background17.rightUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]
Background17.topUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]

Scene15.children.append(Background17)
Group18 = x3d.Group()
ExternProtoDeclare19 = x3d.ExternProtoDeclare()
ExternProtoDeclare19.name = "FlowerProto"
ExternProtoDeclare19.url = ["../data/flowerproto.json#FlowerProto"]
field20 = x3d.field()
field20.name = "vertex"
field20.accessType = "inputOutput"
field20.type = "MFString"

ExternProtoDeclare19.field.append(field20)
field21 = x3d.field()
field21.name = "fragment"
field21.accessType = "inputOutput"
field21.type = "MFString"

ExternProtoDeclare19.field.append(field21)

Group18.children.append(ExternProtoDeclare19)
ProtoDeclare22 = x3d.ProtoDeclare()
ProtoDeclare22.name = "flower"
ProtoBody23 = x3d.ProtoBody()
Group24 = x3d.Group()
ProtoInstance25 = x3d.ProtoInstance()
ProtoInstance25.name = "FlowerProto"
fieldValue26 = x3d.fieldValue()
fieldValue26.name = "vertex"
fieldValue26.value = "\"../shaders/x3dom_flowers_chromatic.vs\""

ProtoInstance25.fieldValue.append(fieldValue26)
fieldValue27 = x3d.fieldValue()
fieldValue27.name = "fragment"
fieldValue27.value = "\"../shaders/common.fs\""

ProtoInstance25.fieldValue.append(fieldValue27)

Group24.children.append(ProtoInstance25)

ProtoBody23.children.append(Group24)

ProtoDeclare22.ProtoBody = ProtoBody23

Group18.children.append(ProtoDeclare22)
ProtoInstance28 = x3d.ProtoInstance()
ProtoInstance28.name = "flower"

Group18.children.append(ProtoInstance28)
ProtoInstance29 = x3d.ProtoInstance()
ProtoInstance29.name = "flower"

Group18.children.append(ProtoInstance29)
ProtoInstance30 = x3d.ProtoInstance()
ProtoInstance30.name = "flower"

Group18.children.append(ProtoInstance30)
ProtoInstance31 = x3d.ProtoInstance()
ProtoInstance31.name = "flower"

Group18.children.append(ProtoInstance31)
ProtoInstance32 = x3d.ProtoInstance()
ProtoInstance32.name = "flower"

Group18.children.append(ProtoInstance32)
ProtoInstance33 = x3d.ProtoInstance()
ProtoInstance33.name = "flower"

Group18.children.append(ProtoInstance33)

Scene15.children.append(Group18)

X3D0.Scene = Scene15
f = open("../data/x3domflowers.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/x3domflowers.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
