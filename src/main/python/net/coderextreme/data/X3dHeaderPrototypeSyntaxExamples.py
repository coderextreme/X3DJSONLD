import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
head1 = x3d.head()
component2 = x3d.component()
component2.setName("Geospatial")
component2.setLevel(1)

head1.addComponent(component2)
component3 = x3d.component()
component3.setName("NURBS")
component3.setLevel(2)

head1.addComponent(component3)
component4 = x3d.component()
component4.setName("Core")
component4.setLevel(2)

head1.addComponent(component4)
component5 = x3d.component()
component5.setName("Navigation")
component5.setLevel(1)

head1.addComponent(component5)
component6 = x3d.component()
component6.setName("Text")
component6.setLevel(1)

head1.addComponent(component6)
meta7 = x3d.meta()
meta7.setName("title")
meta7.setContent("X3dHeaderPrototypeSyntaxExamples.x3d")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("description")
meta8.setContent("X3D scene header and prototype syntax examples. This example header indicates that the content is XML encoded, follows the Interactive Profile and explicitly lists additional necessary components. The X3D header may also contain additional semantic information. Used for specification EXAMPLE excerpts in 19776:1 XML Encoding.")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("created")
meta9.setContent("14 October 2002")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("modified")
meta10.setContent("27 May 2017")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("creator")
meta11.setContent("Don Brutzman")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("specificationSection")
meta12.setContent("X3D encodings, ISO/IEC 19776-1.3, Part 1: XML encoding, 4.3 XML file syntax")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("specificationUrl")
meta13.setContent("http://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/concepts.html#XMLFileSyntax")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("identifier")
meta14.setContent("http://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/X3dHeaderPrototypeSyntaxExamples.x3d")

head1.addMeta(meta14)
meta15 = x3d.meta()
meta15.setName("generator")
meta15.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta15)
meta16 = x3d.meta()
meta16.setName("license")
meta16.setContent("../license.html")

head1.addMeta(meta16)

X3D0.setHead(head1)
Scene17 = x3d.Scene()
ExternProtoDeclare18 = x3d.ExternProtoDeclare()
ExternProtoDeclare18.setName("ViewPositionOrientation")
ExternProtoDeclare18.setUrl(["../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation"])
field19 = x3d.field()
field19.setName("enabled")
field19.setAccessType("inputOutput")
field19.setType("SFBool")

ExternProtoDeclare18.addField(field19)
field20 = x3d.field()
field20.setName("traceEnabled")
field20.setAccessType("initializeOnly")
field20.setType("SFBool")

ExternProtoDeclare18.addField(field20)
field21 = x3d.field()
field21.setName("set_traceEnabled")
field21.setAccessType("inputOnly")
field21.setType("SFBool")

ExternProtoDeclare18.addField(field21)
field22 = x3d.field()
field22.setName("position_changed")
field22.setAccessType("outputOnly")
field22.setType("SFVec3f")

ExternProtoDeclare18.addField(field22)
field23 = x3d.field()
field23.setName("orientation_changed")
field23.setAccessType("outputOnly")
field23.setType("SFRotation")

ExternProtoDeclare18.addField(field23)
field24 = x3d.field()
field24.setName("outputViewpointString")
field24.setAccessType("outputOnly")
field24.setType("MFString")

ExternProtoDeclare18.addField(field24)

Scene17.addChildren(ExternProtoDeclare18)
ProtoDeclare25 = x3d.ProtoDeclare()
ProtoDeclare25.setName("NewWorldInfoNode")
ProtoBody26 = x3d.ProtoBody()
WorldInfo27 = x3d.WorldInfo()
WorldInfo27.setDEF("ExamplePrototypeBody")

ProtoBody26.addChildren(WorldInfo27)

ProtoDeclare25.setProtoBody(ProtoBody26)

Scene17.addChildren(ProtoDeclare25)
ProtoInstance28 = x3d.ProtoInstance()
ProtoInstance28.setName("NewWorldInfoNode")

Scene17.addChildren(ProtoInstance28)
ProtoDeclare29 = x3d.ProtoDeclare()
ProtoDeclare29.setName("EmissiveMaterial")
ProtoInterface30 = x3d.ProtoInterface()
field31 = x3d.field()
field31.setName("onlyColor")
field31.setAccessType("inputOutput")
field31.setType("SFColor")
field31.setValue("1 0 0")

ProtoInterface30.addField(field31)

ProtoDeclare29.setProtoInterface(ProtoInterface30)
ProtoBody32 = x3d.ProtoBody()
#Override default diffuseColor value 0.8 0.8 0.8
Material33 = x3d.Material()
Material33.setDiffuseColor([0,0,0])
#Connect emissiveColor field of current node to onlyColor field of parent ProtoDeclare.
IS34 = x3d.IS()
connect35 = x3d.connect()
connect35.setNodeField("emissiveColor")
connect35.setProtoField("onlyColor")

IS34.addConnect(connect35)

Material33.setIS(IS34)

ProtoBody32.addChildren(Material33)

ProtoDeclare29.setProtoBody(ProtoBody32)

Scene17.addChildren(ProtoDeclare29)
ProtoDeclare36 = x3d.ProtoDeclare()
ProtoDeclare36.setName("ShiftGroupUp2m")
ProtoInterface37 = x3d.ProtoInterface()
field38 = x3d.field()
field38.setName("children")
field38.setAccessType("inputOutput")
field38.setType("MFNode")
Group39 = x3d.Group()
Group39.setDEF("DefaultNodeValue")
Group39.setBboxSize([2,2,2])
#Authors need to override this node when creating the ProtoInstance fieldValue name=\"children\"

field38.addChildren(Group39)

ProtoInterface37.addField(field38)

ProtoDeclare36.setProtoInterface(ProtoInterface37)
ProtoBody40 = x3d.ProtoBody()
Transform41 = x3d.Transform()
Transform41.setTranslation([0,2,0])
Group42 = x3d.Group()
IS43 = x3d.IS()
connect44 = x3d.connect()
connect44.setNodeField("children")
connect44.setProtoField("children")

IS43.addConnect(connect44)

Group42.setIS(IS43)

Transform41.addChildren(Group42)

ProtoBody40.addChildren(Transform41)

ProtoDeclare36.setProtoBody(ProtoBody40)

Scene17.addChildren(ProtoDeclare36)
ProtoInstance45 = x3d.ProtoInstance()
ProtoInstance45.setName("ShiftGroupUp2m")

Scene17.addChildren(ProtoInstance45)
#====================
Viewpoint46 = x3d.Viewpoint()
Viewpoint46.setDEF("ExampleSingleElement")
Viewpoint46.setDescription("Hello syntax")

Scene17.addChildren(Viewpoint46)
Group47 = x3d.Group()
Group47.setDEF("ExampleChildElement")
Shape48 = x3d.Shape()
Box49 = x3d.Box()

Shape48.setGeometry(Box49)
Appearance50 = x3d.Appearance()
Material51 = x3d.Material()
Material51.setDiffuseColor([0.6,0.4,0.2])

Appearance50.setMaterial(Material51)

Shape48.setAppearance(Appearance50)

Group47.addChildren(Shape48)

Scene17.addChildren(Group47)
Transform52 = x3d.Transform()
Transform52.setDEF("TransformExampleUSE")
Transform52.setRotation([0,1,0,0.78])
Transform52.setTranslation([0,2.5,0])
Group53 = x3d.Group()
Group53.setUSE("ExampleChildElement")

Transform52.addChildren(Group53)

Scene17.addChildren(Transform52)
Collision54 = x3d.Collision()
Shape55 = x3d.Shape()
#note that Collision proxy Shape is not rendered
Sphere56 = x3d.Sphere()

Shape55.setGeometry(Sphere56)
Appearance57 = x3d.Appearance()
Material58 = x3d.Material()

Appearance57.setMaterial(Material58)

Shape55.setAppearance(Appearance57)

Collision54.setProxy(Shape55)
Group59 = x3d.Group()
Group59.setUSE("ExampleChildElement")

Collision54.setProxy(Group59)

Scene17.addChildren(Collision54)
Transform60 = x3d.Transform()
Transform60.setTranslation([0,-2.5,0])
Shape61 = x3d.Shape()
Appearance62 = x3d.Appearance()
ProtoInstance63 = x3d.ProtoInstance()
ProtoInstance63.setName("EmissiveMaterial")
fieldValue64 = x3d.fieldValue()
fieldValue64.setName("onlyColor")
fieldValue64.setValue("0.2 0.6 0.6")

ProtoInstance63.addFieldValue(fieldValue64)

Appearance62.setMaterial(ProtoInstance63)

Shape61.setAppearance(Appearance62)
Text65 = x3d.Text()
Text65.setString(["X3D Header Prototype syntax examples","(view console for EXTERNPROTO output)"])
FontStyle66 = x3d.FontStyle()
FontStyle66.setJustify(["MIDDLE","MIDDLE"])
FontStyle66.setSize(0.6)

Text65.setFontStyle(FontStyle66)

Shape61.setGeometry(Text65)

Transform60.addChildren(Shape61)

Scene17.addChildren(Transform60)
ProtoInstance67 = x3d.ProtoInstance()
ProtoInstance67.setName("ViewPositionOrientation")
fieldValue68 = x3d.fieldValue()
fieldValue68.setName("enabled")
fieldValue68.setValue("true")

ProtoInstance67.addFieldValue(fieldValue68)

Scene17.addChildren(ProtoInstance67)
TimeSensor69 = x3d.TimeSensor()
TimeSensor69.setDEF("Clock")
TimeSensor69.setCycleInterval(4)
TimeSensor69.setLoop(True)

Scene17.addChildren(TimeSensor69)
OrientationInterpolator70 = x3d.OrientationInterpolator()
OrientationInterpolator70.setDEF("Spinner")
OrientationInterpolator70.setKey([0,0.5,1])
OrientationInterpolator70.setKeyValue([0,1,0,0,0,1,0,3.14159,0,1,0,6.28318])

Scene17.addChildren(OrientationInterpolator70)
ROUTE71 = x3d.ROUTE()
ROUTE71.setFromField("fraction_changed")
ROUTE71.setFromNode("Clock")
ROUTE71.setToField("set_fraction")
ROUTE71.setToNode("Spinner")

Scene17.addChildren(ROUTE71)
ROUTE72 = x3d.ROUTE()
ROUTE72.setFromField("value_changed")
ROUTE72.setFromNode("Spinner")
ROUTE72.setToField("rotation")
ROUTE72.setToNode("TransformExampleUSE")

Scene17.addChildren(ROUTE72)
Inline73 = x3d.Inline()
Inline73.setDEF("someInline")
Inline73.setUrl(["someUrl.x3d","http://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/someUrl.x3d"])

Scene17.addChildren(Inline73)
IMPORT74 = x3d.IMPORT()
IMPORT74.setAS("someInlineRoot")
IMPORT74.setImportedDEF("someName")
IMPORT74.setInlineDEF("someInline")

Scene17.addChildren(IMPORT74)
PositionInterpolator75 = x3d.PositionInterpolator()
PositionInterpolator75.setDEF("StayInPlace")
PositionInterpolator75.setKey([0,1])
PositionInterpolator75.setKeyValue([0,0,0,0,0,0])

Scene17.addChildren(PositionInterpolator75)
ROUTE76 = x3d.ROUTE()
ROUTE76.setFromField("fraction_changed")
ROUTE76.setFromNode("Clock")
ROUTE76.setToField("set_fraction")
ROUTE76.setToNode("StayInPlace")

Scene17.addChildren(ROUTE76)
ROUTE77 = x3d.ROUTE()
ROUTE77.setFromField("value_changed")
ROUTE77.setFromNode("StayInPlace")
ROUTE77.setToField("set_translation")
ROUTE77.setToNode("someInlineRoot")

Scene17.addChildren(ROUTE77)

X3D0.setScene(Scene17)
X3D0.toFileX3D("../data/X3dHeaderPrototypeSyntaxExamples_RoundTrip.x3d")
