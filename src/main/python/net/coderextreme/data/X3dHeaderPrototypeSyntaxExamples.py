# -*- coding: UTF-8 -*-
from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")

head1 = headObject()

component2 = componentObject()
component2.setName("Geospatial")
component2.setLevel(1)

head1.addComponent(component2)
component3 = componentObject()
component3.setName("NURBS")
component3.setLevel(2)

head1.addComponent(component3)
component4 = componentObject()
component4.setName("Core")
component4.setLevel(2)

head1.addComponent(component4)
component5 = componentObject()
component5.setName("Navigation")
component5.setLevel(1)

head1.addComponent(component5)
component6 = componentObject()
component6.setName("Text")
component6.setLevel(1)

head1.addComponent(component6)
meta7 = metaObject()
meta7.setName("title")
meta7.setContent("X3dHeaderPrototypeSyntaxExamples.x3d")

head1.addMeta(meta7)
meta8 = metaObject()
meta8.setName("description")
meta8.setContent("X3D scene header and prototype syntax examples. This example header indicates that the content is XML encoded, follows the Interactive Profile and explicitly lists additional necessary components. The X3D header may also contain additional semantic information. Used for specification EXAMPLE excerpts in 19776:1 XML Encoding.")

head1.addMeta(meta8)
meta9 = metaObject()
meta9.setName("created")
meta9.setContent("14 October 2002")

head1.addMeta(meta9)
meta10 = metaObject()
meta10.setName("modified")
meta10.setContent("7 May 2017")

head1.addMeta(meta10)
meta11 = metaObject()
meta11.setName("creator")
meta11.setContent("Don Brutzman")

head1.addMeta(meta11)
meta12 = metaObject()
meta12.setName("specificationSection")
meta12.setContent("X3D encodings, ISO/IEC 19776-1.3, Part 1: XML encoding, 4.3 XML file syntax")

head1.addMeta(meta12)
meta13 = metaObject()
meta13.setName("specificationUrl")
meta13.setContent("http://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/concepts.html#XMLFileSyntax")

head1.addMeta(meta13)
meta14 = metaObject()
meta14.setName("identifier")
meta14.setContent("http://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/X3dHeaderPrototypeSyntaxExamples.x3d")

head1.addMeta(meta14)
meta15 = metaObject()
meta15.setName("generator")
meta15.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta15)
meta16 = metaObject()
meta16.setName("license")
meta16.setContent("../license.html")

head1.addMeta(meta16)
X3D0.setHead(head1)
Scene17 = SceneObject()

ExternProtoDeclare18 = ExternProtoDeclareObject()
ExternProtoDeclare18.setName("ViewPositionOrientation")
ExternProtoDeclare18.setUrl(["../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation"])

field19 = fieldObject()
field19.setType(fieldObject.TYPE_SFBOOL)
field19.setName("enabled")
field19.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)

ExternProtoDeclare18.addField(field19)
field20 = fieldObject()
field20.setType(fieldObject.TYPE_SFBOOL)
field20.setName("traceEnabled")
field20.setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)

ExternProtoDeclare18.addField(field20)
field21 = fieldObject()
field21.setType(fieldObject.TYPE_SFBOOL)
field21.setName("set_traceEnabled")
field21.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

ExternProtoDeclare18.addField(field21)
field22 = fieldObject()
field22.setType(fieldObject.TYPE_SFVEC3F)
field22.setName("position_changed")
field22.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)

ExternProtoDeclare18.addField(field22)
field23 = fieldObject()
field23.setType(fieldObject.TYPE_SFROTATION)
field23.setName("orientation_changed")
field23.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)

ExternProtoDeclare18.addField(field23)
field24 = fieldObject()
field24.setType(fieldObject.TYPE_MFSTRING)
field24.setName("outputViewpointString")
field24.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)

ExternProtoDeclare18.addField(field24)
Scene17.addChild(ExternProtoDeclare18)
ProtoDeclare25 = ProtoDeclareObject()
ProtoDeclare25.setName("NewWorldInfoNode")

ProtoBody26 = ProtoBodyObject()

WorldInfo27 = WorldInfoObject()
WorldInfo27.setDEF("ExamplePrototypeBody")

ProtoBody26.addChild(WorldInfo27)
ProtoDeclare25.setProtoBody(ProtoBody26)
Scene17.addChild(ProtoDeclare25)
ProtoInstance28 = ProtoInstanceObject()
ProtoInstance28.setName("NewWorldInfoNode")

Scene17.addChild(ProtoInstance28)
ProtoDeclare29 = ProtoDeclareObject()
ProtoDeclare29.setName("EmissiveMaterial")

ProtoInterface30 = ProtoInterfaceObject()

field31 = fieldObject()
field31.setType(fieldObject.TYPE_SFCOLOR)
field31.setName("onlyColor")
field31.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field31.setValue("1 0 0")

ProtoInterface30.addField(field31)
ProtoDeclare29.setProtoInterface(ProtoInterface30)
ProtoBody32 = ProtoBodyObject()


ProtoBody32.addComments(CommentsBlock("""Override default diffuseColor value 0.8 0.8 0.8"""))
Material33 = MaterialObject()
Material33.setDiffuseColor([0,0,0])


Material33.addComments(CommentsBlock("""Connect emissiveColor field of current node to onlyColor field of parent ProtoDeclare."""))
IS34 = ISObject()

connect35 = connectObject()
connect35.setNodeField("emissiveColor")
connect35.setProtoField("onlyColor")

IS34.addConnect(connect35)
Material33.setIS(IS34)
ProtoBody32.addChild(Material33)
ProtoDeclare29.setProtoBody(ProtoBody32)
Scene17.addChild(ProtoDeclare29)
ProtoDeclare36 = ProtoDeclareObject()
ProtoDeclare36.setName("ShiftGroupUp2m")

ProtoInterface37 = ProtoInterfaceObject()

field38 = fieldObject()
field38.setType(fieldObject.TYPE_MFNODE)
field38.setName("children")
field38.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)

Group39 = GroupObject()
Group39.setDEF("DefaultNodeValue")
Group39.setBboxSize([2,2,2])


Group39.addComments(CommentsBlock("""Authors need to override this node when creating the ProtoInstance fieldValue name=\"children\""""))
field38.addChild(Group39)
ProtoInterface37.addField(field38)
ProtoDeclare36.setProtoInterface(ProtoInterface37)
ProtoBody40 = ProtoBodyObject()

Transform41 = TransformObject()
Transform41.setTranslation([0,2,0])

Group42 = GroupObject()

IS43 = ISObject()

connect44 = connectObject()
connect44.setNodeField("children")
connect44.setProtoField("children")

IS43.addConnect(connect44)
Group42.setIS(IS43)
Transform41.addChild(Group42)
ProtoBody40.addChild(Transform41)
ProtoDeclare36.setProtoBody(ProtoBody40)
Scene17.addChild(ProtoDeclare36)
ProtoInstance45 = ProtoInstanceObject()
ProtoInstance45.setName("ShiftGroupUp2m")

Scene17.addChild(ProtoInstance45)

Scene17.addComments(CommentsBlock("""===================="""))
Viewpoint46 = ViewpointObject()
Viewpoint46.setDEF("ExampleSingleElement")
Viewpoint46.setDescription("Hello syntax")

Scene17.addChild(Viewpoint46)
Group47 = GroupObject()
Group47.setDEF("ExampleChildElement")

Shape48 = ShapeObject()

Box49 = BoxObject()

Shape48.setGeometry(Box49)
Appearance50 = AppearanceObject()

Material51 = MaterialObject()
Material51.setDiffuseColor([0.6,0.4,0.2])

Appearance50.setMaterial(Material51)
Shape48.setAppearance(Appearance50)
Group47.addChild(Shape48)
Scene17.addChild(Group47)
Transform52 = TransformObject()
Transform52.setDEF("TransformExampleUSE")
Transform52.setRotation([0,1,0,0.78])
Transform52.setTranslation([0,2.5,0])

Group53 = GroupObject()
Group53.setUSE("ExampleChildElement")

Transform52.addChild(Group53)
Scene17.addChild(Transform52)
Collision54 = CollisionObject()

Shape55 = ShapeObject()


Shape55.addComments(CommentsBlock("""note that Collision proxy Shape is not rendered"""))

Shape55.addComments(CommentsBlock("""alternative: Text string='\"He said, \\&quot;Immel did it!\\&quot;\"'"""))
Text56 = TextObject()
Text56.setString(["He said, \"Immel did it!\""])

Shape55.setGeometry(Text56)
Appearance57 = AppearanceObject()

Material58 = MaterialObject()

Appearance57.setMaterial(Material58)
Shape55.setAppearance(Appearance57)
Collision54.setProxy(Shape55)
Group59 = GroupObject()
Group59.setUSE("ExampleChildElement")

Collision54.addChild(Group59)
Scene17.addChild(Collision54)
Transform60 = TransformObject()
Transform60.setTranslation([0,-2.5,0])

Shape61 = ShapeObject()

Appearance62 = AppearanceObject()

ProtoInstance63 = ProtoInstanceObject()
ProtoInstance63.setName("EmissiveMaterial")

fieldValue64 = fieldValueObject()
fieldValue64.setName("onlyColor")
fieldValue64.setValue("0.2 0.6 0.6")

ProtoInstance63.addFieldValue(fieldValue64)
Appearance62.setMaterial(ProtoInstance63)
Shape61.setAppearance(Appearance62)
Text65 = TextObject()
Text65.setString(["X3D Header Prototype syntax examples","(view console for EXTERNPROTO output)"])

FontStyle66 = FontStyleObject()
FontStyle66.setJustify(["MIDDLE","MIDDLE"])
FontStyle66.setSize(0.6)

Text65.setFontStyle(FontStyle66)
Shape61.setGeometry(Text65)
Transform60.addChild(Shape61)
Scene17.addChild(Transform60)
ProtoInstance67 = ProtoInstanceObject()
ProtoInstance67.setName("ViewPositionOrientation")

fieldValue68 = fieldValueObject()
fieldValue68.setName("enabled")
fieldValue68.setValue("true")

ProtoInstance67.addFieldValue(fieldValue68)
Scene17.addChild(ProtoInstance67)
TimeSensor69 = TimeSensorObject()
TimeSensor69.setDEF("Clock")
TimeSensor69.setCycleInterval(4)
TimeSensor69.setLoop(True)

Scene17.addChild(TimeSensor69)
OrientationInterpolator70 = OrientationInterpolatorObject()
OrientationInterpolator70.setDEF("Spinner")
OrientationInterpolator70.setKey([0,0.5,1])
OrientationInterpolator70.setKeyValue([0,1,0,0,0,1,0,3.14159,0,1,0,6.28318])

Scene17.addChild(OrientationInterpolator70)
ROUTE71 = ROUTEObject()
ROUTE71.setFromField("fraction_changed")
ROUTE71.setFromNode("Clock")
ROUTE71.setToField("set_fraction")
ROUTE71.setToNode("Spinner")

Scene17.addChild(ROUTE71)
ROUTE72 = ROUTEObject()
ROUTE72.setFromField("value_changed")
ROUTE72.setFromNode("Spinner")
ROUTE72.setToField("rotation")
ROUTE72.setToNode("TransformExampleUSE")

Scene17.addChild(ROUTE72)
Inline73 = InlineObject()
Inline73.setDEF("someInline")
Inline73.setUrl(["someUrl.x3d","http://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/someUrl.x3d"])

Scene17.addChild(Inline73)
IMPORT74 = IMPORTObject()
IMPORT74.setAS("someInlineRoot")
IMPORT74.setImportedDEF("someName")
IMPORT74.setInlineDEF("someInline")

Scene17.addChild(IMPORT74)
PositionInterpolator75 = PositionInterpolatorObject()
PositionInterpolator75.setDEF("StayInPlace")
PositionInterpolator75.setKey([0,1])
PositionInterpolator75.setKeyValue([0,0,0,0,0,0])

Scene17.addChild(PositionInterpolator75)
ROUTE76 = ROUTEObject()
ROUTE76.setFromField("fraction_changed")
ROUTE76.setFromNode("Clock")
ROUTE76.setToField("set_fraction")
ROUTE76.setToNode("StayInPlace")

Scene17.addChild(ROUTE76)
ROUTE77 = ROUTEObject()
ROUTE77.setFromField("value_changed")
ROUTE77.setFromNode("StayInPlace")
ROUTE77.setToField("set_translation")
ROUTE77.setToNode("someInlineRoot")

Scene17.addChild(ROUTE77)
X3D0.setScene(Scene17)

X3D0.toFileX3D("../data/X3dHeaderPrototypeSyntaxExamples.new.x3d")
