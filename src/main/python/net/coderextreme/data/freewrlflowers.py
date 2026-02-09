print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.1"
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
meta5.content = "x3d-tidy V3.0.2, https://www.npmjs.com/package/x3d-tidy"

head1.children.append(meta5)

X3D0.head = head1
Scene6 = x3d.Scene()
ExternProtoDeclare7 = x3d.ExternProtoDeclare()
ExternProtoDeclare7.name = "FlowerProto"
ExternProtoDeclare7.url = ["../data/flowerprotofreewrl.x3d#FlowerProto","https://coderextreme.net/X3DJSONLD/src/main/data/flowerprotofreewrl.x3d#FlowerProto"]
field8 = x3d.field()
field8.accessType = "inputOutput"
field8.type = "MFString"
field8.name = "vertex"

ExternProtoDeclare7.field.append(field8)
field9 = x3d.field()
field9.accessType = "inputOutput"
field9.type = "MFString"
field9.name = "fragment"

ExternProtoDeclare7.field.append(field9)

Scene6.children.append(ExternProtoDeclare7)
ProtoDeclare10 = x3d.ProtoDeclare()
ProtoDeclare10.name = "flower"
ProtoInterface11 = x3d.ProtoInterface()

ProtoDeclare10.ProtoInterface = ProtoInterface11
ProtoBody12 = x3d.ProtoBody()
Group13 = x3d.Group()
ProtoInstance14 = x3d.ProtoInstance()
ProtoInstance14.name = "FlowerProto"
fieldValue15 = x3d.fieldValue()
fieldValue15.name = "vertex"
fieldValue15.value = "\"../shaders/freewrl_flowers_chromatic.vs\""

ProtoInstance14.fieldValue.append(fieldValue15)
fieldValue16 = x3d.fieldValue()
fieldValue16.name = "fragment"
fieldValue16.value = "\"../shaders/freewrl.fs\""

ProtoInstance14.fieldValue.append(fieldValue16)

Group13.children.append(ProtoInstance14)

ProtoBody12.children.append(Group13)

ProtoDeclare10.ProtoBody = ProtoBody12

Scene6.children.append(ProtoDeclare10)
NavigationInfo17 = x3d.NavigationInfo()

Scene6.children.append(NavigationInfo17)
Viewpoint18 = x3d.Viewpoint()
Viewpoint18.description = "Tour Views"
Viewpoint18.position = [0,0,50]

Scene6.children.append(Viewpoint18)
Background19 = x3d.Background()
Background19.frontUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]
Background19.backUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]
Background19.leftUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]
Background19.rightUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]
Background19.topUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]
Background19.bottomUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]

Scene6.children.append(Background19)
Group20 = x3d.Group()
ProtoInstance21 = x3d.ProtoInstance()
ProtoInstance21.name = "flower"

Group20.children.append(ProtoInstance21)
ProtoInstance22 = x3d.ProtoInstance()
ProtoInstance22.name = "flower"

Group20.children.append(ProtoInstance22)
ProtoInstance23 = x3d.ProtoInstance()
ProtoInstance23.name = "flower"

Group20.children.append(ProtoInstance23)
ProtoInstance24 = x3d.ProtoInstance()
ProtoInstance24.name = "flower"

Group20.children.append(ProtoInstance24)
ProtoInstance25 = x3d.ProtoInstance()
ProtoInstance25.name = "flower"

Group20.children.append(ProtoInstance25)
ProtoInstance26 = x3d.ProtoInstance()
ProtoInstance26.name = "flower"

Group20.children.append(ProtoInstance26)

Scene6.children.append(Group20)

X3D0.Scene = Scene6
f = open("../data/freewrlflowers.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/freewrlflowers.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/freewrlflowers.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
