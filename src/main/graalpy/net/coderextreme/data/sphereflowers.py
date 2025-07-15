import x3dpsail as x3d

x3d.ConfigurationProperties.setXsltEngine(x3d.ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
x3d.ConfigurationProperties.setDeleteIntermediateFiles(False);
x3d.ConfigurationProperties.setStripTrailingZeroes(True);
x3d.ConfigurationProperties.setStripDefaultAttributes(True);
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("4.0")
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
meta10.setContent("sphereflowers.x3d")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("creator")
meta11.setContent("John Carlson")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("created")
meta12.setContent("Jan 17 2022")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("modified")
meta13.setContent("Sep 3 2023")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("description")
meta14.setContent("5 or more prismatic flowers")

head1.addMeta(meta14)
meta15 = x3d.meta()
meta15.setName("generator")
meta15.setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta15)
meta16 = x3d.meta()
meta16.setName("identifier")
meta16.setContent("https://coderextreme.net/X3DJSONLD/src/main/data/sphereflowers.x3d")

head1.addMeta(meta16)

X3D0.setHead(head1)
Scene17 = x3d.Scene()
NavigationInfo18 = x3d.NavigationInfo()

Scene17.addChild(NavigationInfo18)
Background19 = x3d.Background()
Background19.setBackUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"])
Background19.setBottomUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"])
Background19.setFrontUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"])
Background19.setLeftUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"])
Background19.setRightUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"])
Background19.setTopUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"])

Scene17.addChild(Background19)
Group20 = x3d.Group()
ExternProtoDeclare21 = x3d.ExternProtoDeclare()
ExternProtoDeclare21.setName("FlowerProto")
ExternProtoDeclare21.setUrl(["../data/flowerproto.x3d#FlowerProto","https://coderextreme.net/X3DJSONLD/src/main/data/flowerproto.x3d#FlowerProto"])
field22 = x3d.field()
field22.setName("vertex")
field22.setAccessType("inputOutput")
field22.setType("MFString")

ExternProtoDeclare21.addField(field22)
field23 = x3d.field()
field23.setName("fragment")
field23.setAccessType("inputOutput")
field23.setType("MFString")

ExternProtoDeclare21.addField(field23)

Group20.addChild(ExternProtoDeclare21)
ProtoDeclare24 = x3d.ProtoDeclare()
ProtoDeclare24.setName("flower")
ProtoBody25 = x3d.ProtoBody()
Group26 = x3d.Group()
ProtoInstance27 = x3d.ProtoInstance()
ProtoInstance27.setName("FlowerProto")
fieldValue28 = x3d.fieldValue()
fieldValue28.setName("vertex")
fieldValue28.setValue("\"../shaders/x_ite_flowers_chromatic.vs\"")

ProtoInstance27.addFieldValue(fieldValue28)
fieldValue29 = x3d.fieldValue()
fieldValue29.setName("fragment")
fieldValue29.setValue("\"../shaders/x_ite.fs\"")

ProtoInstance27.addFieldValue(fieldValue29)

Group26.addChild(ProtoInstance27)

ProtoBody25.addChild(Group26)

ProtoDeclare24.setProtoBody(ProtoBody25)

Group20.addChild(ProtoDeclare24)
ProtoInstance30 = x3d.ProtoInstance()
ProtoInstance30.setName("flower")

Group20.addChild(ProtoInstance30)
ProtoInstance31 = x3d.ProtoInstance()
ProtoInstance31.setName("flower")

Group20.addChild(ProtoInstance31)
ProtoInstance32 = x3d.ProtoInstance()
ProtoInstance32.setName("flower")

Group20.addChild(ProtoInstance32)
ProtoInstance33 = x3d.ProtoInstance()
ProtoInstance33.setName("flower")

Group20.addChild(ProtoInstance33)
ProtoInstance34 = x3d.ProtoInstance()
ProtoInstance34.setName("flower")

Group20.addChild(ProtoInstance34)
ProtoInstance35 = x3d.ProtoInstance()
ProtoInstance35.setName("flower")

Group20.addChild(ProtoInstance35)
TimeSensor36 = x3d.TimeSensor()
TimeSensor36.setDEF("SongTime")
TimeSensor36.setLoop(True)

Group20.addChild(TimeSensor36)
Sound37 = x3d.Sound()
Sound37.setMaxBack(100)
Sound37.setMaxFront(100)
Sound37.setMinBack(20)
Sound37.setMinFront(20)
Sound37.setLocation(x3d.doubleToFloat([0,1,0]))
AudioClip38 = x3d.AudioClip()
AudioClip38.setDEF("AudioClip")
AudioClip38.setDescription("Chandubabamusic #1")
AudioClip38.setUrl(["../resources/chandubabamusic1.wav","https://coderextreme.net/X3DJSONLD/src/main/resources/chandubabamusic1.wav"])

Sound37.setSource(AudioClip38)

Group20.addChild(Sound37)
ROUTE39 = x3d.ROUTE()
ROUTE39.setFromField("cycleTime")
ROUTE39.setFromNode("SongTime")
ROUTE39.setToField("startTime")
ROUTE39.setToNode("AudioClip")

Group20.addChild(ROUTE39)

Scene17.addChild(Group20)

X3D0.setScene(Scene17)
X3D0.toFileX3D("../data/sphereflowers.new.graalpy.x3d")
X3D0.toFileJSON("../data/sphereflowers.new.graalpy.json")
