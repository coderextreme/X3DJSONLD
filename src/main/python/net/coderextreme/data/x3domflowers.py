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
meta6.content = "x3domflowers.x3d"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "creator"
meta7.content = "John Carlson"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "description"
meta8.content = "5 or more prismatic flowers"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "generator"
meta9.content = "x3d-tidy V3.0.2, https://www.npmjs.com/package/x3d-tidy"

head1.children.append(meta9)

X3D0.head = head1
Scene10 = x3d.Scene()
ExternProtoDeclare11 = x3d.ExternProtoDeclare()
ExternProtoDeclare11.name = "FlowerProto"
ExternProtoDeclare11.url = ["../data/flowerproto.json#FlowerProto"]
field12 = x3d.field()
field12.accessType = "inputOutput"
field12.type = "MFString"
field12.name = "vertex"

ExternProtoDeclare11.field.append(field12)
field13 = x3d.field()
field13.accessType = "inputOutput"
field13.type = "MFString"
field13.name = "fragment"

ExternProtoDeclare11.field.append(field13)

Scene10.children.append(ExternProtoDeclare11)
ProtoDeclare14 = x3d.ProtoDeclare()
ProtoDeclare14.name = "flower"
ProtoInterface15 = x3d.ProtoInterface()

ProtoDeclare14.ProtoInterface = ProtoInterface15
ProtoBody16 = x3d.ProtoBody()
Group17 = x3d.Group()
ProtoInstance18 = x3d.ProtoInstance()
ProtoInstance18.name = "FlowerProto"
fieldValue19 = x3d.fieldValue()
fieldValue19.name = "vertex"
fieldValue19.value = "\"../shaders/x3dom_flowers_chromatic.vs\""

ProtoInstance18.fieldValue.append(fieldValue19)
fieldValue20 = x3d.fieldValue()
fieldValue20.name = "fragment"
fieldValue20.value = "\"../shaders/common.fs\""

ProtoInstance18.fieldValue.append(fieldValue20)

Group17.children.append(ProtoInstance18)

ProtoBody16.children.append(Group17)

ProtoDeclare14.ProtoBody = ProtoBody16

Scene10.children.append(ProtoDeclare14)
NavigationInfo21 = x3d.NavigationInfo()

Scene10.children.append(NavigationInfo21)
Background22 = x3d.Background()
Background22.frontUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]
Background22.backUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]
Background22.leftUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]
Background22.rightUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]
Background22.topUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]
Background22.bottomUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]

Scene10.children.append(Background22)
Group23 = x3d.Group()
ProtoInstance24 = x3d.ProtoInstance()
ProtoInstance24.name = "flower"

Group23.children.append(ProtoInstance24)
ProtoInstance25 = x3d.ProtoInstance()
ProtoInstance25.name = "flower"

Group23.children.append(ProtoInstance25)
ProtoInstance26 = x3d.ProtoInstance()
ProtoInstance26.name = "flower"

Group23.children.append(ProtoInstance26)
ProtoInstance27 = x3d.ProtoInstance()
ProtoInstance27.name = "flower"

Group23.children.append(ProtoInstance27)
ProtoInstance28 = x3d.ProtoInstance()
ProtoInstance28.name = "flower"

Group23.children.append(ProtoInstance28)
ProtoInstance29 = x3d.ProtoInstance()
ProtoInstance29.name = "flower"

Group23.children.append(ProtoInstance29)

Scene10.children.append(Group23)

X3D0.Scene = Scene10
f = open("../data/x3domflowers.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/x3domflowers.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/x3domflowers.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
