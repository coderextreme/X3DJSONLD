print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "freewrlflowers.x3d"

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
meta6.content = "https://coderextreme.net/X3DJSONLD/src/main/data/freewrlflowers.x3d"

head1.children.append(meta6)

X3D0.head = head1
Scene7 = x3d.Scene()
NavigationInfo8 = x3d.NavigationInfo()

Scene7.children.append(NavigationInfo8)
Viewpoint9 = x3d.Viewpoint()
Viewpoint9.description = "Tour Views"
Viewpoint9.position = [0,0,50]

Scene7.children.append(Viewpoint9)
Background10 = x3d.Background()
Background10.backUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]
Background10.bottomUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]
Background10.frontUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]
Background10.leftUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]
Background10.rightUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]
Background10.topUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]

Scene7.children.append(Background10)
Group11 = x3d.Group()
ExternProtoDeclare12 = x3d.ExternProtoDeclare()
ExternProtoDeclare12.name = "FlowerProto"
ExternProtoDeclare12.url = ["../data/flowerprotofreewrl.x3d#FlowerProto","https://coderextreme.net/X3DJSONLD/src/main/data/flowerprotofreewrl.x3d#FlowerProto"]
field13 = x3d.field()
field13.name = "vertex"
field13.accessType = "inputOutput"
field13.type = "MFString"

ExternProtoDeclare12.field.append(field13)
field14 = x3d.field()
field14.name = "fragment"
field14.accessType = "inputOutput"
field14.type = "MFString"

ExternProtoDeclare12.field.append(field14)

Group11.children.append(ExternProtoDeclare12)
ProtoDeclare15 = x3d.ProtoDeclare()
ProtoDeclare15.name = "flower"
ProtoBody16 = x3d.ProtoBody()
Group17 = x3d.Group()
ProtoInstance18 = x3d.ProtoInstance()
ProtoInstance18.name = "FlowerProto"
fieldValue19 = x3d.fieldValue()
fieldValue19.name = "vertex"
fieldValue19.value = "\"../shaders/freewrl_flowers_chromatic.vs\""

ProtoInstance18.fieldValue.append(fieldValue19)
fieldValue20 = x3d.fieldValue()
fieldValue20.name = "fragment"
fieldValue20.value = "\"../shaders/freewrl.fs\""

ProtoInstance18.fieldValue.append(fieldValue20)

Group17.children.append(ProtoInstance18)

ProtoBody16.children.append(Group17)

ProtoDeclare15.ProtoBody = ProtoBody16

Group11.children.append(ProtoDeclare15)
ProtoInstance21 = x3d.ProtoInstance()
ProtoInstance21.name = "flower"

Group11.children.append(ProtoInstance21)
ProtoInstance22 = x3d.ProtoInstance()
ProtoInstance22.name = "flower"

Group11.children.append(ProtoInstance22)
ProtoInstance23 = x3d.ProtoInstance()
ProtoInstance23.name = "flower"

Group11.children.append(ProtoInstance23)
ProtoInstance24 = x3d.ProtoInstance()
ProtoInstance24.name = "flower"

Group11.children.append(ProtoInstance24)
ProtoInstance25 = x3d.ProtoInstance()
ProtoInstance25.name = "flower"

Group11.children.append(ProtoInstance25)
ProtoInstance26 = x3d.ProtoInstance()
ProtoInstance26.name = "flower"

Group11.children.append(ProtoInstance26)

Scene7.children.append(Group11)

X3D0.Scene = Scene7
f = open("../data/freewrlflowers.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/freewrlflowers.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/freewrlflowers.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
