import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("title")
meta2.setContent("glflowers.x3d")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setName("creator")
meta3.setContent("John Carlson")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("description")
meta4.setContent("5 or more prismatic flowers")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("generator")
meta5.setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("identifier")
meta6.setContent("https://coderextreme.net/X3DJSONLD/src/main/personal/glflowers.x3d")

head1.addMeta(meta6)

X3D0.setHead(head1)
Scene7 = x3d.Scene()
NavigationInfo8 = x3d.NavigationInfo()

Scene7.addChildren(NavigationInfo8)
Background9 = x3d.Background()
Background9.setBackUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"])
Background9.setBottomUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"])
Background9.setFrontUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"])
Background9.setLeftUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"])
Background9.setRightUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"])
Background9.setTopUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"])

Scene7.addChildren(Background9)
Group10 = x3d.Group()
ExternProtoDeclare11 = x3d.ExternProtoDeclare()
ExternProtoDeclare11.setName("FlowerProto")
ExternProtoDeclare11.setUrl(["../personal/flowerproto.x3d#FlowerProto"])
field12 = x3d.field()
field12.setName("vertex")
field12.setAccessType("inputOutput")
field12.setType("MFString")

ExternProtoDeclare11.addField(field12)
field13 = x3d.field()
field13.setName("fragment")
field13.setAccessType("inputOutput")
field13.setType("MFString")

ExternProtoDeclare11.addField(field13)

Group10.addChildren(ExternProtoDeclare11)
ProtoDeclare14 = x3d.ProtoDeclare()
ProtoDeclare14.setName("flower")
ProtoBody15 = x3d.ProtoBody()
Group16 = x3d.Group()
ProtoInstance17 = x3d.ProtoInstance()
ProtoInstance17.setName("FlowerProto")
fieldValue18 = x3d.fieldValue()
fieldValue18.setName("vertex")
fieldValue18.setValue("\"../shaders/gl_flowers_chromatic.vs\"")

ProtoInstance17.addFieldValue(fieldValue18)
fieldValue19 = x3d.fieldValue()
fieldValue19.setName("fragment")
fieldValue19.setValue("\"../shaders/common.fs\"")

ProtoInstance17.addFieldValue(fieldValue19)

Group16.addChildren(ProtoInstance17)

ProtoBody15.addChildren(Group16)

ProtoDeclare14.setProtoBody(ProtoBody15)

Group10.addChildren(ProtoDeclare14)
ProtoInstance20 = x3d.ProtoInstance()
ProtoInstance20.setName("flower")

Group10.addChildren(ProtoInstance20)
ProtoInstance21 = x3d.ProtoInstance()
ProtoInstance21.setName("flower")

Group10.addChildren(ProtoInstance21)
ProtoInstance22 = x3d.ProtoInstance()
ProtoInstance22.setName("flower")

Group10.addChildren(ProtoInstance22)
ProtoInstance23 = x3d.ProtoInstance()
ProtoInstance23.setName("flower")

Group10.addChildren(ProtoInstance23)
ProtoInstance24 = x3d.ProtoInstance()
ProtoInstance24.setName("flower")

Group10.addChildren(ProtoInstance24)
ProtoInstance25 = x3d.ProtoInstance()
ProtoInstance25.setName("flower")

Group10.addChildren(ProtoInstance25)

Scene7.addChildren(Group10)

X3D0.setScene(Scene7)
X3D0.toFileX3D("../personal/glflowers.new.python.x3d")
X3D0.toFileJSON("../personal/glflowers.new.python.json")
