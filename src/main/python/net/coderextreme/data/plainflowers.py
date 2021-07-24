from x3dpsail import *
X3D0 = X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
head1 = head()
meta2 = meta()
meta2.setName("title")
meta2.setContent("plainflowers.x3d")

head1.addMeta(meta2)
meta3 = meta()
meta3.setName("creator")
meta3.setContent("John Carlson")

head1.addMeta(meta3)
meta4 = meta()
meta4.setName("description")
meta4.setContent("5 or more prismatic flowers")

head1.addMeta(meta4)
meta5 = meta()
meta5.setName("generator")
meta5.setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta5)
meta6 = meta()
meta6.setName("identifier")
meta6.setContent("https://coderextreme.net/X3DJSONLD/src/main/data/plainflowers.x3d")

head1.addMeta(meta6)

X3D0.setHead(head1)
Scene7 = Scene()
NavigationInfo8 = NavigationInfo()

Scene7.addChildren(NavigationInfo8)
Background9 = Background()
Background9.setBackUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"])
Background9.setBottomUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"])
Background9.setFrontUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"])
Background9.setLeftUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"])
Background9.setRightUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"])
Background9.setTopUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"])

Scene7.addChildren(Background9)
Group10 = Group()
ExternProtoDeclare11 = ExternProtoDeclare()
ExternProtoDeclare11.setName("FlowerProto")
ExternProtoDeclare11.setUrl(["../data/flowerproto.x3d#FlowerProto"])
field12 = field()
field12.setName("vertex")
field12.setAccessType("inputOutput")
field12.setType("MFString")

ExternProtoDeclare11.addField(field12)
field13 = field()
field13.setName("fragment")
field13.setAccessType("inputOutput")
field13.setType("MFString")

ExternProtoDeclare11.addField(field13)

Group10.addChildren(ExternProtoDeclare11)
ProtoDeclare14 = ProtoDeclare()
ProtoDeclare14.setName("flower")
ProtoBody15 = ProtoBody()
Group16 = Group()
ProtoInstance17 = ProtoInstance()
ProtoInstance17.setName("FlowerProto")
fieldValue18 = fieldValue()
fieldValue18.setName("vertex")
fieldValue18.setValue("\"../shaders/x_ite_flowers_plain.vs\"")

ProtoInstance17.addFieldValue(fieldValue18)
fieldValue19 = fieldValue()
fieldValue19.setName("fragment")
fieldValue19.setValue("\"../shaders/plain.fs\"")

ProtoInstance17.addFieldValue(fieldValue19)

Group16.addChildren(ProtoInstance17)

ProtoBody15.addChildren(Group16)

ProtoDeclare14.setProtoBody(ProtoBody15)

Group10.addChildren(ProtoDeclare14)
ProtoInstance20 = ProtoInstance()
ProtoInstance20.setName("flower")

Group10.addChildren(ProtoInstance20)
ProtoInstance21 = ProtoInstance()
ProtoInstance21.setName("flower")

Group10.addChildren(ProtoInstance21)
ProtoInstance22 = ProtoInstance()
ProtoInstance22.setName("flower")

Group10.addChildren(ProtoInstance22)
ProtoInstance23 = ProtoInstance()
ProtoInstance23.setName("flower")

Group10.addChildren(ProtoInstance23)
ProtoInstance24 = ProtoInstance()
ProtoInstance24.setName("flower")

Group10.addChildren(ProtoInstance24)
ProtoInstance25 = ProtoInstance()
ProtoInstance25.setName("flower")

Group10.addChildren(ProtoInstance25)

Scene7.addChildren(Group10)

X3D0.setScene(Scene7)
X3D0.toFileX3D("../data/plainflowers_RoundTrip.x3d")
