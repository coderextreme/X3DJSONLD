import x3dpsail as x3d

x3d.ConfigurationProperties.setXsltEngine(x3d.ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA)
x3d.ConfigurationProperties.setDeleteIntermediateFiles(False)
x3d.ConfigurationProperties.setStripTrailingZeroes(True)
x3d.ConfigurationProperties.setStripDefaultAttributes(True)
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("4.0")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("title")
meta2.setContent("freewrlflowers.x3d")

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
meta6.setContent("https://coderextreme.net/X3DJSONLD/src/main/data/freewrlflowers.x3d")

head1.addMeta(meta6)

X3D0.setHead(head1)
Scene7 = x3d.Scene()
NavigationInfo8 = x3d.NavigationInfo()

Scene7.addChild(NavigationInfo8)
Viewpoint9 = x3d.Viewpoint()
Viewpoint9.setDescription("Tour Views")
Viewpoint9.setPosition(x3d.doubleToFloat([0,0,50]))

Scene7.addChild(Viewpoint9)
Background10 = x3d.Background()
Background10.setBackUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"])
Background10.setBottomUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"])
Background10.setFrontUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"])
Background10.setLeftUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"])
Background10.setRightUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"])
Background10.setTopUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"])

Scene7.addChild(Background10)
Group11 = x3d.Group()
ExternProtoDeclare12 = x3d.ExternProtoDeclare()
ExternProtoDeclare12.setName("FlowerProto")
ExternProtoDeclare12.setUrl(["../data/flowerprotofreewrl.x3d#FlowerProto","https://coderextreme.net/X3DJSONLD/src/main/data/flowerprotofreewrl.x3d#FlowerProto"])
field13 = x3d.field()
field13.setName("vertex")
field13.setAccessType("inputOutput")
field13.setType("MFString")

ExternProtoDeclare12.addField(field13)
field14 = x3d.field()
field14.setName("fragment")
field14.setAccessType("inputOutput")
field14.setType("MFString")

ExternProtoDeclare12.addField(field14)

Group11.addChild(ExternProtoDeclare12)
ProtoDeclare15 = x3d.ProtoDeclare()
ProtoDeclare15.setName("flower")
ProtoBody16 = x3d.ProtoBody()
Group17 = x3d.Group()
ProtoInstance18 = x3d.ProtoInstance()
ProtoInstance18.setName("FlowerProto")
fieldValue19 = x3d.fieldValue()
fieldValue19.setName("vertex")
fieldValue19.setValue("\"../shaders/freewrl_flowers_chromatic.vs\"")

ProtoInstance18.addFieldValue(fieldValue19)
fieldValue20 = x3d.fieldValue()
fieldValue20.setName("fragment")
fieldValue20.setValue("\"../shaders/freewrl.fs\"")

ProtoInstance18.addFieldValue(fieldValue20)

Group17.addChild(ProtoInstance18)

ProtoBody16.addChild(Group17)

ProtoDeclare15.setProtoBody(ProtoBody16)

Group11.addChild(ProtoDeclare15)
ProtoInstance21 = x3d.ProtoInstance()
ProtoInstance21.setName("flower")

Group11.addChild(ProtoInstance21)
ProtoInstance22 = x3d.ProtoInstance()
ProtoInstance22.setName("flower")

Group11.addChild(ProtoInstance22)
ProtoInstance23 = x3d.ProtoInstance()
ProtoInstance23.setName("flower")

Group11.addChild(ProtoInstance23)
ProtoInstance24 = x3d.ProtoInstance()
ProtoInstance24.setName("flower")

Group11.addChild(ProtoInstance24)
ProtoInstance25 = x3d.ProtoInstance()
ProtoInstance25.setName("flower")

Group11.addChild(ProtoInstance25)
ProtoInstance26 = x3d.ProtoInstance()
ProtoInstance26.setName("flower")

Group11.addChild(ProtoInstance26)

Scene7.addChild(Group11)

X3D0.setScene(Scene7)
X3D0.toFileX3D("../data/freewrlflowers.new.graalpy.x3d")
X3D0.toFileJSON("../data/freewrlflowers.new.graalpy.x3dj")
