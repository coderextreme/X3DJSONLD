import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.0")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("title")
meta2.setContent("Figure31_9SpinGroupPrototype.x3d")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setName("creator")
meta3.setContent("Figure 31.9, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("reference")
meta4.setContent("http://www.wiley.com/legacy/compbooks/vrml2sbk/ch31/31fig09.htm")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("translator")
meta5.setContent("Don Brutzman")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("created")
meta6.setContent("24 October 2000")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("modified")
meta7.setContent("20 October 2019")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("description")
meta8.setContent("The SpinGroup prototype is used to automatically spin a group of three long rectangular boxes. Click on blue crossbar to activate second SpinGroup.")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("identifier")
meta9.setContent("https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_9SpinGroupPrototype.x3d")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("generator")
meta10.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("license")
meta11.setContent("../../license.html")

head1.addMeta(meta11)

X3D0.setHead(head1)
Scene12 = x3d.Scene()
WorldInfo13 = x3d.WorldInfo()
WorldInfo13.setTitle("Figure31_9SpinGroupPrototype.x3d")

Scene12.addChildren(WorldInfo13)
ProtoDeclare14 = x3d.ProtoDeclare()
ProtoDeclare14.setName("SpinGroup")
ProtoInterface15 = x3d.ProtoInterface()
field16 = x3d.field()
field16.setName("children")
field16.setAccessType("inputOutput")
field16.setType("MFNode")
#NULL node initialization

ProtoInterface15.addField(field16)
field17 = x3d.field()
field17.setName("cycleInterval")
field17.setAccessType("inputOutput")
field17.setType("SFTime")
field17.setValue("1")

ProtoInterface15.addField(field17)
field18 = x3d.field()
field18.setName("loop")
field18.setAccessType("inputOutput")
field18.setType("SFBool")
field18.setValue("false")

ProtoInterface15.addField(field18)
field19 = x3d.field()
field19.setName("startTime")
field19.setAccessType("inputOutput")
field19.setType("SFTime")
field19.setValue("0")

ProtoInterface15.addField(field19)
field20 = x3d.field()
field20.setName("stopTime")
field20.setAccessType("inputOutput")
field20.setType("SFTime")
field20.setValue("0")

ProtoInterface15.addField(field20)

ProtoDeclare14.setProtoInterface(ProtoInterface15)
ProtoBody21 = x3d.ProtoBody()
Transform22 = x3d.Transform()
Transform22.setDEF("SpinGroupTransform")
IS23 = x3d.IS()
connect24 = x3d.connect()
connect24.setNodeField("children")
connect24.setProtoField("children")

IS23.addConnect(connect24)

Transform22.setIS(IS23)

ProtoBody21.addChildren(Transform22)
#following nodes will not be rendered, only the first node of a ProtoBody is drawn
TimeSensor25 = x3d.TimeSensor()
TimeSensor25.setDEF("SpinGroupClock")
IS26 = x3d.IS()
connect27 = x3d.connect()
connect27.setNodeField("cycleInterval")
connect27.setProtoField("cycleInterval")

IS26.addConnect(connect27)
connect28 = x3d.connect()
connect28.setNodeField("loop")
connect28.setProtoField("loop")

IS26.addConnect(connect28)
connect29 = x3d.connect()
connect29.setNodeField("startTime")
connect29.setProtoField("startTime")

IS26.addConnect(connect29)
connect30 = x3d.connect()
connect30.setNodeField("stopTime")
connect30.setProtoField("stopTime")

IS26.addConnect(connect30)

TimeSensor25.setIS(IS26)

ProtoBody21.addChildren(TimeSensor25)
OrientationInterpolator31 = x3d.OrientationInterpolator()
OrientationInterpolator31.setDEF("Spinner")
OrientationInterpolator31.setKey([0,0.5,1])
OrientationInterpolator31.setKeyValue([0,1,0,0,0,1,0,3.14,0,1,0,6.28])

ProtoBody21.addChildren(OrientationInterpolator31)
ROUTE32 = x3d.ROUTE()
ROUTE32.setFromField("fraction_changed")
ROUTE32.setFromNode("SpinGroupClock")
ROUTE32.setToField("set_fraction")
ROUTE32.setToNode("Spinner")

ProtoBody21.addChildren(ROUTE32)
ROUTE33 = x3d.ROUTE()
ROUTE33.setFromField("value_changed")
ROUTE33.setFromNode("Spinner")
ROUTE33.setToField("set_rotation")
ROUTE33.setToNode("SpinGroupTransform")

ProtoBody21.addChildren(ROUTE33)

ProtoDeclare14.setProtoBody(ProtoBody21)

Scene12.addChildren(ProtoDeclare14)
#Now the scene proper begins. Nothing renders in a ProtoDeclare (or ExternProtoDeclare).
Viewpoint34 = x3d.Viewpoint()
Viewpoint34.setDescription("Click on blue crossbar to activate second SpinGroup")
Viewpoint34.setOrientation([1,0,0,-0.52])
Viewpoint34.setPosition([0,18,30])

Scene12.addChildren(Viewpoint34)
#Create an instance, meaning actual nodes that render
ProtoInstance35 = x3d.ProtoInstance()
ProtoInstance35.setName("SpinGroup")
fieldValue36 = x3d.fieldValue()
fieldValue36.setName("cycleInterval")
fieldValue36.setValue("8")

ProtoInstance35.addFieldValue(fieldValue36)
fieldValue37 = x3d.fieldValue()
fieldValue37.setName("loop")
fieldValue37.setValue("true")

ProtoInstance35.addFieldValue(fieldValue37)
fieldValue38 = x3d.fieldValue()
fieldValue38.setName("children")
Shape39 = x3d.Shape()
Box40 = x3d.Box()
Box40.setSize([25,2,2])

Shape39.setGeometry(Box40)
Appearance41 = x3d.Appearance()
Appearance41.setDEF("Green")
Material42 = x3d.Material()
Material42.setDiffuseColor([0,1,0.3])

Appearance41.setMaterial(Material42)

Shape39.setAppearance(Appearance41)

fieldValue38.addChildren(Shape39)
Shape43 = x3d.Shape()
Box44 = x3d.Box()
Box44.setSize([2,25,2])

Shape43.setGeometry(Box44)
Appearance45 = x3d.Appearance()
Appearance45.setUSE("Green")

Shape43.setAppearance(Appearance45)

fieldValue38.addChildren(Shape43)
ProtoInstance46 = x3d.ProtoInstance()
ProtoInstance46.setName("SpinGroup")
ProtoInstance46.setDEF("SecondSpinGroup")
fieldValue47 = x3d.fieldValue()
fieldValue47.setName("cycleInterval")
fieldValue47.setValue("4")

ProtoInstance46.addFieldValue(fieldValue47)
fieldValue48 = x3d.fieldValue()
fieldValue48.setName("loop")
fieldValue48.setValue("true")

ProtoInstance46.addFieldValue(fieldValue48)
fieldValue49 = x3d.fieldValue()
fieldValue49.setName("stopTime")
fieldValue49.setValue("1")

ProtoInstance46.addFieldValue(fieldValue49)
fieldValue50 = x3d.fieldValue()
fieldValue50.setName("children")
TouchSensor51 = x3d.TouchSensor()
TouchSensor51.setDEF("ActivateSecondSpinGroup")
TouchSensor51.setDescription("Activate second SpinGroup by clicking blue bar")

fieldValue50.addChildren(TouchSensor51)
Shape52 = x3d.Shape()
Box53 = x3d.Box()
Box53.setSize([2,2.05,25])

Shape52.setGeometry(Box53)
Appearance54 = x3d.Appearance()
Material55 = x3d.Material()
Material55.setDiffuseColor([0,0.3,1])

Appearance54.setMaterial(Material55)

Shape52.setAppearance(Appearance54)

fieldValue50.addChildren(Shape52)

ProtoInstance46.addFieldValue(fieldValue50)
#stopTime > startTime ensures that initial state is stopped

fieldValue38.addChildren(ProtoInstance46)

ProtoInstance35.addFieldValue(fieldValue38)

Scene12.addChildren(ProtoInstance35)
ROUTE56 = x3d.ROUTE()
ROUTE56.setFromField("touchTime")
ROUTE56.setFromNode("ActivateSecondSpinGroup")
ROUTE56.setToField("startTime")
ROUTE56.setToNode("SecondSpinGroup")

Scene12.addChildren(ROUTE56)

X3D0.setScene(Scene12)
X3D0.toFileX3D("../data/Figure31_9SpinGroupPrototype_RoundTrip.x3d")
