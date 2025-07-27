print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "3.3"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "glflowers.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "creator"
meta3.content = "John Carlson"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "description"
meta4.content = "5 or more prismatic flowers"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "generator"
meta5.content = "X3D-Edit, https://savage.nps.edu/X3D-Edit"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "identifier"
meta6.content = "https://coderextreme.net/X3DJSONLD/src/main/personal/glflowers.x3d"

head1.children.append(meta6)

X3D0.head = head1
Scene7 = x3d.Scene()
NavigationInfo8 = x3d.NavigationInfo()

Scene7.children.append(NavigationInfo8)
Background9 = x3d.Background()
Background9.backUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]
Background9.bottomUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]
Background9.frontUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]
Background9.leftUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]
Background9.rightUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]
Background9.topUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]

Scene7.children.append(Background9)
Group10 = x3d.Group()
ExternProtoDeclare11 = x3d.ExternProtoDeclare()
ExternProtoDeclare11.name = "FlowerProto"
ExternProtoDeclare11.url = ["../personal/flowerproto.x3d#FlowerProto"]
field12 = x3d.field()
field12.name = "vertex"
field12.accessType = "inputOutput"
field12.type = "MFString"

ExternProtoDeclare11.field.append(field12)
field13 = x3d.field()
field13.name = "fragment"
field13.accessType = "inputOutput"
field13.type = "MFString"

ExternProtoDeclare11.field.append(field13)

Group10.children.append(ExternProtoDeclare11)
ProtoDeclare14 = x3d.ProtoDeclare()
ProtoDeclare14.name = "flower"
ProtoBody15 = x3d.ProtoBody()
Group16 = x3d.Group()
ProtoInstance17 = x3d.ProtoInstance()
ProtoInstance17.name = "FlowerProto"
fieldValue18 = x3d.fieldValue()
fieldValue18.name = "vertex"
fieldValue18.value = "\"../shaders/gl_flowers_chromatic.vs\""

ProtoInstance17.fieldValue.append(fieldValue18)
fieldValue19 = x3d.fieldValue()
fieldValue19.name = "fragment"
fieldValue19.value = "\"../shaders/common.fs\""

ProtoInstance17.fieldValue.append(fieldValue19)

Group16.children.append(ProtoInstance17)

ProtoBody15.children.append(Group16)

ProtoDeclare14.ProtoBody = ProtoBody15

Group10.children.append(ProtoDeclare14)
ProtoInstance20 = x3d.ProtoInstance()
ProtoInstance20.name = "flower"

Group10.children.append(ProtoInstance20)
ProtoInstance21 = x3d.ProtoInstance()
ProtoInstance21.name = "flower"

Group10.children.append(ProtoInstance21)
ProtoInstance22 = x3d.ProtoInstance()
ProtoInstance22.name = "flower"

Group10.children.append(ProtoInstance22)
ProtoInstance23 = x3d.ProtoInstance()
ProtoInstance23.name = "flower"

Group10.children.append(ProtoInstance23)
ProtoInstance24 = x3d.ProtoInstance()
ProtoInstance24.name = "flower"

Group10.children.append(ProtoInstance24)
ProtoInstance25 = x3d.ProtoInstance()
ProtoInstance25.name = "flower"

Group10.children.append(ProtoInstance25)

Scene7.children.append(Group10)

X3D0.Scene = Scene7
f = open("../personal/glflowers.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../personal/glflowers.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
