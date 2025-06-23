import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
head1 = x3d.head()
component2 = x3d.component()
component2.setName("Scripting")
component2.setLevel(1)

head1.addComponent(component2)
component3 = x3d.component()
component3.setName("EnvironmentalEffects")
component3.setLevel(3)

head1.addComponent(component3)
component4 = x3d.component()
component4.setName("Shaders")
component4.setLevel(1)

head1.addComponent(component4)
component5 = x3d.component()
component5.setName("CubeMapTexturing")
component5.setLevel(1)

head1.addComponent(component5)
component6 = x3d.component()
component6.setName("Texturing")
component6.setLevel(1)

head1.addComponent(component6)
component7 = x3d.component()
component7.setName("Rendering")
component7.setLevel(1)

head1.addComponent(component7)
component8 = x3d.component()
component8.setName("Grouping")
component8.setLevel(3)

head1.addComponent(component8)
component9 = x3d.component()
component9.setName("Core")
component9.setLevel(1)

head1.addComponent(component9)
meta10 = x3d.meta()
meta10.setName("title")
meta10.setContent("x3domflowers.x3d")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("creator")
meta11.setContent("John Carlson")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("description")
meta12.setContent("5 or more prismatic flowers")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("generator")
meta13.setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("identifier")
meta14.setContent("https://coderextreme.net/X3DJSONLD/src/main/data/x3domflowers.x3d")

head1.addMeta(meta14)

X3D0.setHead(head1)
Scene15 = x3d.Scene()
NavigationInfo16 = x3d.NavigationInfo()

Scene15.addChildren(NavigationInfo16)
#Images courtesy of Paul Debevec's Light Probe Image Gallery
Background17 = x3d.Background()
Background17.setBackUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"])
Background17.setBottomUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"])
Background17.setFrontUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"])
Background17.setLeftUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"])
Background17.setRightUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"])
Background17.setTopUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"])

Scene15.addChildren(Background17)
Group18 = x3d.Group()
ExternProtoDeclare19 = x3d.ExternProtoDeclare()
ExternProtoDeclare19.setName("FlowerProto")
ExternProtoDeclare19.setUrl(["../data/flowerproto.json#FlowerProto"])
field20 = x3d.field()
field20.setName("vertex")
field20.setAccessType("inputOutput")
field20.setType("MFString")

ExternProtoDeclare19.addField(field20)
field21 = x3d.field()
field21.setName("fragment")
field21.setAccessType("inputOutput")
field21.setType("MFString")

ExternProtoDeclare19.addField(field21)

Group18.addChildren(ExternProtoDeclare19)
ProtoDeclare22 = x3d.ProtoDeclare()
ProtoDeclare22.setName("flower")
ProtoBody23 = x3d.ProtoBody()
Group24 = x3d.Group()
ProtoInstance25 = x3d.ProtoInstance()
ProtoInstance25.setName("FlowerProto")
fieldValue26 = x3d.fieldValue()
fieldValue26.setName("vertex")
fieldValue26.setValue("\"../shaders/x3dom_flowers_chromatic.vs\"")

ProtoInstance25.addFieldValue(fieldValue26)
fieldValue27 = x3d.fieldValue()
fieldValue27.setName("fragment")
fieldValue27.setValue("\"../shaders/common.fs\"")

ProtoInstance25.addFieldValue(fieldValue27)

Group24.addChildren(ProtoInstance25)

ProtoBody23.addChildren(Group24)

ProtoDeclare22.setProtoBody(ProtoBody23)

Group18.addChildren(ProtoDeclare22)
ProtoInstance28 = x3d.ProtoInstance()
ProtoInstance28.setName("flower")

Group18.addChildren(ProtoInstance28)
ProtoInstance29 = x3d.ProtoInstance()
ProtoInstance29.setName("flower")

Group18.addChildren(ProtoInstance29)
ProtoInstance30 = x3d.ProtoInstance()
ProtoInstance30.setName("flower")

Group18.addChildren(ProtoInstance30)
ProtoInstance31 = x3d.ProtoInstance()
ProtoInstance31.setName("flower")

Group18.addChildren(ProtoInstance31)
ProtoInstance32 = x3d.ProtoInstance()
ProtoInstance32.setName("flower")

Group18.addChildren(ProtoInstance32)
ProtoInstance33 = x3d.ProtoInstance()
ProtoInstance33.setName("flower")

Group18.addChildren(ProtoInstance33)

Scene15.addChildren(Group18)

X3D0.setScene(Scene15)
X3D0.toFileX3D("../data/x3domflowers.new.python.x3d")
X3D0.toFileJSON("../data/x3domflowers.new.python.json")
