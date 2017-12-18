# -*- coding: UTF-8 -*-
from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")

head1 = headObject()


head1.addComments(CommentsBlock("""comment #1"""))

head1.addComments(CommentsBlock("""comment #2"""))

head1.addComments(CommentsBlock("""comment #3"""))

head1.addComments(CommentsBlock("""comment #4"""))
component2 = componentObject()
component2.setName("Navigation")
component2.setLevel(3)

head1.addComponent(component2)
component3 = componentObject()
component3.setName("Layering")
component3.setLevel(1)

head1.addComponent(component3)
unit4 = unitObject()
unit4.setName("AngleUnitConversion")
unit4.setCategory("angle")
unit4.setConversionFactor(1)

head1.addUnit(unit4)
unit5 = unitObject()
unit5.setName("LengthUnitConversion")
unit5.setCategory("length")
unit5.setConversionFactor(1)

head1.addUnit(unit5)
meta6 = metaObject()
meta6.setName("title")
meta6.setContent("HelloWorldProgramOutput.x3d")

head1.addMeta(meta6)
meta7 = metaObject()
meta7.setName("description")
meta7.setContent("Example HelloWorldProgram creates an X3D model using the X3D Java Scene Access Interface (SAI) Library")

head1.addMeta(meta7)
meta8 = metaObject()
meta8.setName("reference")
meta8.setContent("http://www.web3d.org/specifications/java/X3DJSAIL.html")

head1.addMeta(meta8)
meta9 = metaObject()
meta9.setName("generator")
meta9.setContent("HelloWorldProgramOutput.java")

head1.addMeta(meta9)
meta10 = metaObject()
meta10.setName("created")
meta10.setContent("6 September 2016")

head1.addMeta(meta10)
meta11 = metaObject()
meta11.setName("modified")
meta11.setContent("18 December 2017")

head1.addMeta(meta11)
meta12 = metaObject()
meta12.setName("generator")
meta12.setContent("X3D Java Scene Access Interface Library (X3DJSAIL)")

head1.addMeta(meta12)
meta13 = metaObject()
meta13.setName("generator")
meta13.setContent("http://www.web3d.org/specifications/java/examples/HelloWorldProgram.java")

head1.addMeta(meta13)
meta14 = metaObject()
meta14.setName("generator")
meta14.setContent("Netbeans http://www.netbeans.org")

head1.addMeta(meta14)
meta15 = metaObject()
meta15.setName("creator")
meta15.setContent("Don Brutzman")

head1.addMeta(meta15)
meta16 = metaObject()
meta16.setName("reference")
meta16.setContent("https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/java/examples/HelloWorldProgramOutput.x3d")

head1.addMeta(meta16)
meta17 = metaObject()
meta17.setName("reference")
meta17.setContent("Console output, ClassicVRML encoding, VRML97 encoding and pretty-print documentation:")

head1.addMeta(meta17)
meta18 = metaObject()
meta18.setName("reference")
meta18.setContent("HelloWorldProgramOutput.txt")

head1.addMeta(meta18)
meta19 = metaObject()
meta19.setName("reference")
meta19.setContent("HelloWorldProgramOutput.x3dv")

head1.addMeta(meta19)
meta20 = metaObject()
meta20.setName("reference")
meta20.setContent("HelloWorldProgramOutput.wrl")

head1.addMeta(meta20)
meta21 = metaObject()
meta21.setName("reference")
meta21.setContent("HelloWorldProgramOutput.html")

head1.addMeta(meta21)
meta22 = metaObject()
meta22.setName("X3dValidator")
meta22.setContent("https://savage.nps.edu/X3dValidator?url=http://www.web3d.org/specifications/java/examples/HelloWorldProgramOutput.x3d")

head1.addMeta(meta22)
meta23 = metaObject()
meta23.setName("identifier")
meta23.setContent("http://www.web3d.org/specifications/java/examples/HelloWorldProgramOutput.x3d")

head1.addMeta(meta23)
meta24 = metaObject()
meta24.setName("license")
meta24.setContent("../license.html")

head1.addMeta(meta24)
meta25 = metaObject()
meta25.setName("SpecialTest")
meta25.setContent("tested sat: name value cannot contain embedded space character")

head1.addMeta(meta25)
X3D0.setHead(head1)
Scene26 = SceneObject()

ViewpointGroup27 = ViewpointGroupObject()
ViewpointGroup27.setDescription("Available viewpoints")

Viewpoint28 = ViewpointObject()
Viewpoint28.setDEF("DefaultView")
Viewpoint28.setDescription("Hello X3DJSAIL")

ViewpointGroup27.addChild(Viewpoint28)
Viewpoint29 = ViewpointObject()
Viewpoint29.setDEF("TopDownView")
Viewpoint29.setDescription("top-down view from above")
Viewpoint29.setOrientation([1,0,0,-1.570796])
Viewpoint29.setPosition([0,100,0])

ViewpointGroup27.addChild(Viewpoint29)
Scene26.addChild(ViewpointGroup27)
WorldInfo30 = WorldInfoObject()
WorldInfo30.setDEF("WorldInfoDEF")
WorldInfo30.setTitle("HelloWorldProgram produced by X3D Java SAI Library (X3DJSAIL)")

Scene26.addChild(WorldInfo30)
WorldInfo31 = WorldInfoObject()
WorldInfo31.setUSE("WorldInfoDEF")

Scene26.addChild(WorldInfo31)
WorldInfo32 = WorldInfoObject()
WorldInfo32.setUSE("WorldInfoDEF")

Scene26.addChild(WorldInfo32)
LayerSet33 = LayerSetObject()
LayerSet33.setDEF("scene.addChildLayerSetObjectTest")

Scene26.addChild(LayerSet33)
Transform34 = TransformObject()
Transform34.setDEF("LogoGeometryTransform")
Transform34.setTranslation([0,1.5,0])

Anchor35 = AnchorObject()
Anchor35.setDescription("select for X3D Java SAI Library (X3DJSAIL) description")
Anchor35.setUrl(["../X3DJSAIL.html","http://www.web3d.org/specifications/java/X3DJSAIL.html"])

Shape36 = ShapeObject()
Shape36.setDEF("BoxShape")

Appearance37 = AppearanceObject()

Material38 = MaterialObject()
Material38.setDEF("GreenMaterial")
Material38.setDiffuseColor([0,1,1])
Material38.setEmissiveColor([0.8,0,0])
Material38.setTransparency(0.1)

Appearance37.setMaterial(Material38)
ImageTexture39 = ImageTextureObject()
ImageTexture39.setUrl(["images/X3dJavaSceneAccessInterfaceSaiLibrary.png","http://www.web3d.org/specifications/java/examples/images/X3dJavaSceneAccessInterfaceSaiLibrary.png"])

Appearance37.setTexture(ImageTexture39)
Shape36.setAppearance(Appearance37)
Box40 = BoxObject()
Box40.setDEF("test-NMTOKEN_regex.0123456789")
Box40.setCssClass("textured")

Shape36.setGeometry(Box40)
Anchor35.addChild(Shape36)
Transform34.addChild(Anchor35)
Scene26.addChild(Transform34)
Shape41 = ShapeObject()
Shape41.setDEF("LineShape")

Appearance42 = AppearanceObject()

Material43 = MaterialObject()
Material43.setEmissiveColor([0.6,0.19607843,0.8])

Appearance42.setMaterial(Material43)
Shape41.setAppearance(Appearance42)
IndexedLineSet44 = IndexedLineSetObject()
IndexedLineSet44.setCoordIndex([0,1,2,3,4,0])

Coordinate45 = CoordinateObject()
Coordinate45.setPoint([0,1.5,0,2,1.5,0,2,1.5,-2,-2,1.5,-2,-2,1.5,0,0,1.5,0])

IndexedLineSet44.setCoord(Coordinate45)
Shape41.setGeometry(IndexedLineSet44)
Scene26.addChild(Shape41)
PositionInterpolator46 = PositionInterpolatorObject()
PositionInterpolator46.setDEF("BoxPathAnimator")
PositionInterpolator46.setKey([0,0.125,0.375,0.625,0.875,1])
PositionInterpolator46.setKeyValue([0,1.5,0,2,1.5,0,2,1.5,-2,-2,1.5,-2,-2,1.5,0,0,1.5,0])

Scene26.addChild(PositionInterpolator46)
TimeSensor47 = TimeSensorObject()
TimeSensor47.setDEF("OrbitClock")
TimeSensor47.setCycleInterval(8)
TimeSensor47.setLoop(True)

Scene26.addChild(TimeSensor47)
ROUTE48 = ROUTEObject()
ROUTE48.setFromField("fraction_changed")
ROUTE48.setFromNode("OrbitClock")
ROUTE48.setToField("set_fraction")
ROUTE48.setToNode("BoxPathAnimator")

Scene26.addChild(ROUTE48)
ROUTE49 = ROUTEObject()
ROUTE49.setFromField("value_changed")
ROUTE49.setFromNode("BoxPathAnimator")
ROUTE49.setToField("set_translation")
ROUTE49.setToNode("LogoGeometryTransform")

Scene26.addChild(ROUTE49)
Transform50 = TransformObject()
Transform50.setDEF("TextTransform")
Transform50.setTranslation([0,-1.5,0])

Shape51 = ShapeObject()

Appearance52 = AppearanceObject()

Material53 = MaterialObject()
Material53.setUSE("GreenMaterial")

Appearance52.setMaterial(Material53)
Shape51.setAppearance(Appearance52)
Text54 = TextObject()
Text54.setString(["X3D Java","SAI Library","X3DJSAIL"])


Text54.addComments(CommentsBlock("""escaped quotation marks example 3: He said, \"Immel did it!\""""))

Text54.addComments(CommentsBlock("""escaped quotation marks example 4: He said, &quot;Immel did it!&quot;"""))
MetadataSet55 = MetadataSetObject()
MetadataSet55.setName("EscapedQuotationMarksMetadataSet")

MetadataString56 = MetadataStringObject()
MetadataString56.setName("escapedQuotesTest1")
MetadataString56.setValue(["escaped quotation marks example 1: He said, \"Immel did it!\""])

MetadataSet55.addValue(MetadataString56)
MetadataString57 = MetadataStringObject()
MetadataString57.setName("escapedQuotesTest2")
MetadataString57.setValue(["escaped quotation marks example 2: He said, &quot;Immel did it!&quot;"])

MetadataSet55.addValue(MetadataString57)
Text54.setMetadata(MetadataSet55)
FontStyle58 = FontStyleObject()
FontStyle58.setJustify(["MIDDLE","MIDDLE"])

Text54.setFontStyle(FontStyle58)
Shape51.setGeometry(Text54)
Transform50.addChild(Shape51)
Collision59 = CollisionObject()


Collision59.addComments(CommentsBlock("""test containerField='proxy'"""))
Shape60 = ShapeObject()
Shape60.setDEF("ProxyShape")


Shape60.addComments(CommentsBlock("""alternative XML encoding: Text string='\"One, Two, Three\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\"'"""))

Shape60.addComments(CommentsBlock("""alternative Java source: .setString(new String [] {\"One, Two, Three\", \"\", \"He said, \\\"Immel did it!\\\"\"})"""))

Shape60.addComments(CommentsBlock("""reference: http://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamplesIndex.html"""))
Text61 = TextObject()
Text61.setString(["One, Two, Three","","He said, \"Immel did it!\""])

Shape60.setGeometry(Text61)
Collision59.setProxy(Shape60)
Transform50.addChild(Collision59)

Transform50.addComments(CommentsBlock("""It's a beautiful world"""))

Transform50.addComments(CommentsBlock("""... for you!"""))

Transform50.addComments(CommentsBlock("""https://en.wikipedia.org/wiki/Beautiful_World_(Devo_song)"""))
Scene26.addChild(Transform50)

Scene26.addComments(CommentsBlock("""repeatedly spin 180 degrees as a readable special effect"""))
OrientationInterpolator62 = OrientationInterpolatorObject()
OrientationInterpolator62.setDEF("SpinInterpolator")
OrientationInterpolator62.setKey([0,0.5,1])
OrientationInterpolator62.setKeyValue([0,1,0,4.712389,0,1,0,0,0,1,0,1.5707964])

Scene26.addChild(OrientationInterpolator62)
TimeSensor63 = TimeSensorObject()
TimeSensor63.setDEF("SpinClock")
TimeSensor63.setCycleInterval(5)
TimeSensor63.setLoop(True)

Scene26.addChild(TimeSensor63)
ROUTE64 = ROUTEObject()
ROUTE64.setFromField("fraction_changed")
ROUTE64.setFromNode("SpinClock")
ROUTE64.setToField("set_fraction")
ROUTE64.setToNode("SpinInterpolator")

Scene26.addChild(ROUTE64)
ROUTE65 = ROUTEObject()
ROUTE65.setFromField("value_changed")
ROUTE65.setFromNode("SpinInterpolator")
ROUTE65.setToField("rotation")
ROUTE65.setToNode("TextTransform")

Scene26.addChild(ROUTE65)
Group66 = GroupObject()
Group66.setDEF("BackgroundGroup")

Background67 = BackgroundObject()
Background67.setDEF("GradualBackground")

Group66.addChild(Background67)
Script68 = ScriptObject()
Script68.setDEF("colorTypeConversionScript")

field69 = fieldObject()
field69.setType(fieldObject.TYPE_SFCOLOR)
field69.setName("colorInput")
field69.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script68.addField(field69)
field70 = fieldObject()
field70.setType(fieldObject.TYPE_MFCOLOR)
field70.setName("colorsOutput")
field70.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)

Script68.addField(field70)

Script68.setSourceCode("ecmascript:\n"+
"\n"+
"function colorInput (eventValue) // Example source code\n"+
"{\n"+
"   colorsOutput = new MFColor(eventValue); // assigning value sends output event\n"+
"// Browser.print('colorInput=' + eventValue + ', colorsOutput=' + colorsOutput + '\\n');\n"+
"}\n"+
"")
Group66.addChild(Script68)
ColorInterpolator71 = ColorInterpolatorObject()
ColorInterpolator71.setDEF("ColorAnimator")
ColorInterpolator71.setKey([0,0.5,1])
ColorInterpolator71.setKeyValue([0.9411765,1,1,0.29411766,0,0.50980395,0.9411765,1,1])


ColorInterpolator71.addComments(CommentsBlock("""AZURE to INDIGO and back again"""))
Group66.addChild(ColorInterpolator71)
TimeSensor72 = TimeSensorObject()
TimeSensor72.setDEF("ColorClock")
TimeSensor72.setCycleInterval(60)
TimeSensor72.setLoop(True)

Group66.addChild(TimeSensor72)
ROUTE73 = ROUTEObject()
ROUTE73.setFromField("colorsOutput")
ROUTE73.setFromNode("colorTypeConversionScript")
ROUTE73.setToField("skyColor")
ROUTE73.setToNode("GradualBackground")

Group66.addChild(ROUTE73)
ROUTE74 = ROUTEObject()
ROUTE74.setFromField("value_changed")
ROUTE74.setFromNode("ColorAnimator")
ROUTE74.setToField("colorInput")
ROUTE74.setToNode("colorTypeConversionScript")

Group66.addChild(ROUTE74)
ROUTE75 = ROUTEObject()
ROUTE75.setFromField("fraction_changed")
ROUTE75.setFromNode("ColorClock")
ROUTE75.setToField("set_fraction")
ROUTE75.setToNode("ColorAnimator")

Group66.addChild(ROUTE75)
Scene26.addChild(Group66)
ProtoDeclare76 = ProtoDeclareObject()
ProtoDeclare76.setName("ArtDeco01Material")
ProtoDeclare76.setAppinfo("tooltip: ArtDeco01Material prototype is a Material node")

ProtoInterface77 = ProtoInterfaceObject()

field78 = fieldObject()
field78.setType(fieldObject.TYPE_SFSTRING)
field78.setName("description")
field78.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field78.setAppinfo("tooltip for descriptionField")
field78.setValue("ArtDeco01Material prototype is a Material node")

ProtoInterface77.addField(field78)
field79 = fieldObject()
field79.setType(fieldObject.TYPE_SFBOOL)
field79.setName("enabled")
field79.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field79.setValue("true")

ProtoInterface77.addField(field79)
ProtoDeclare76.setProtoInterface(ProtoInterface77)
ProtoBody80 = ProtoBodyObject()


ProtoBody80.addComments(CommentsBlock("""Initial node of ProtoBody determines prototype node type"""))
Material81 = MaterialObject()
Material81.setAmbientIntensity(0.25)
Material81.setDiffuseColor([0.282435,0.085159,0.134462])
Material81.setShininess(0.127273)
Material81.setSpecularColor([0.276305,0.11431,0.139857])

ProtoBody80.addChild(Material81)

ProtoBody80.addComments(CommentsBlock("""[HelloWorldProgram diagnostic] should be connected to scene graph: ArtDeco01ProtoDeclare.getNodeType()=\"Material\""""))

ProtoBody80.addComments(CommentsBlock("""presence of follow-on TouchSensor shows that additional nodes are allowed in ProtoBody after initial node, regardless of node types"""))
TouchSensor82 = TouchSensorObject()
TouchSensor82.setDescription("within ProtoBody")

IS83 = ISObject()

connect84 = connectObject()
connect84.setNodeField("description")
connect84.setProtoField("description")

IS83.addConnect(connect84)
connect85 = connectObject()
connect85.setNodeField("enabled")
connect85.setProtoField("enabled")

IS83.addConnect(connect85)
TouchSensor82.setIS(IS83)
ProtoBody80.addChild(TouchSensor82)
ProtoDeclare76.setProtoBody(ProtoBody80)
Scene26.addChild(ProtoDeclare76)
ExternProtoDeclare86 = ExternProtoDeclareObject()
ExternProtoDeclare86.setName("ArtDeco02Material")
ExternProtoDeclare86.setAppinfo("this is a different Material node")
ExternProtoDeclare86.setUrl(["http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d#ArtDeco02Material","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3dv#ArtDeco02Material"])


ExternProtoDeclare86.addComments(CommentsBlock("""[HelloWorldProgram diagnostic] ArtDeco02ExternProtoDeclare.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time, TODO X3DJSAIL needs to add further capability.\""""))
field87 = fieldObject()
field87.setType(fieldObject.TYPE_SFSTRING)
field87.setName("description")
field87.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field87.setAppinfo("tooltip for descriptionField")

ExternProtoDeclare86.addField(field87)
Scene26.addChild(ExternProtoDeclare86)

Scene26.addComments(CommentsBlock("""Tested ArtDeco01ProtoInstance, ArtDeco02ProtoInstance for improper node type when ProtoInstance is added in wrong place"""))
Shape88 = ShapeObject()
Shape88.setDEF("TestShape1")

Appearance89 = AppearanceObject()
Appearance89.setDEF("TestAppearance1")


Appearance89.addComments(CommentsBlock("""ArtDeco01Material prototype goes here..."""))
ProtoInstance90 = ProtoInstanceObject()
ProtoInstance90.setName("ArtDeco01Material")


ProtoInstance90.addComments(CommentsBlock("""[HelloWorldProgram diagnostic] ArtDeco01ProtoInstance.getNodeType()=\"Material\""""))
fieldValue91 = fieldValueObject()
fieldValue91.setName("description")
fieldValue91.setValue("ArtDeco01Material can substitute for a Material node")

ProtoInstance90.addFieldValue(fieldValue91)
Appearance89.setMaterial(ProtoInstance90)
Shape88.setAppearance(Appearance89)
Sphere92 = SphereObject()
Sphere92.setRadius(0.001)

Shape88.setGeometry(Sphere92)
Scene26.addChild(Shape88)
Shape93 = ShapeObject()
Shape93.setDEF("TestShape2")

Appearance94 = AppearanceObject()
Appearance94.setDEF("TestAppearance2")


Appearance94.addComments(CommentsBlock("""ArtDeco02Material prototype goes here..."""))
ProtoInstance95 = ProtoInstanceObject()
ProtoInstance95.setName("ArtDeco02Material")
ProtoInstance95.setDEF("ArtDeco02MaterialDEF")


ProtoInstance95.addComments(CommentsBlock("""[HelloWorldProgram diagnostic] ArtDeco02ProtoInstance.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time, TODO X3DJSAIL needs to add further capability.\""""))
fieldValue96 = fieldValueObject()
fieldValue96.setName("description")
fieldValue96.setValue("ArtDeco02Material can substitute for another Material node")

ProtoInstance95.addFieldValue(fieldValue96)
Appearance94.setMaterial(ProtoInstance95)
Shape93.setAppearance(Appearance94)
Cone97 = ConeObject()
Cone97.setBottomRadius(0.001)
Cone97.setHeight(0.001)

Shape93.setGeometry(Cone97)
Scene26.addChild(Shape93)
Shape98 = ShapeObject()
Shape98.setDEF("TestShape3")

Appearance99 = AppearanceObject()
Appearance99.setDEF("TestAppearance3")


Appearance99.addComments(CommentsBlock("""ArtDeco02Material ProtoInstance USE goes here..."""))
ProtoInstance100 = ProtoInstanceObject()
ProtoInstance100.setUSE("ArtDeco02MaterialDEF")

Appearance99.setMaterial(ProtoInstance100)
Shape98.setAppearance(Appearance99)
Cylinder101 = CylinderObject()
Cylinder101.setHeight(0.001)
Cylinder101.setRadius(0.001)

Shape98.setGeometry(Cylinder101)
Scene26.addChild(Shape98)
Inline102 = InlineObject()
Inline102.setDEF("inlineSceneDef")
Inline102.setUrl(["someOtherScene.x3d"])

Scene26.addChild(Inline102)
IMPORT103 = IMPORTObject()
IMPORT103.setAS("WorldInfoDEF2")
IMPORT103.setImportedDEF("WorldInfoDEF")
IMPORT103.setInlineDEF("inlineSceneDef")

Scene26.addChild(IMPORT103)
EXPORT104 = EXPORTObject()
EXPORT104.setAS("WorldInfoDEF3")
EXPORT104.setLocalDEF("WorldInfoDEF")

Scene26.addChild(EXPORT104)
ProtoDeclare105 = ProtoDeclareObject()
ProtoDeclare105.setName("MaterialModulator")
ProtoDeclare105.setAppinfo("mimic a Material node and modulate fields as an animation effect")
ProtoDeclare105.setDocumentation("http://x3dgraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorIndex.html")

ProtoInterface106 = ProtoInterfaceObject()

field107 = fieldObject()
field107.setType(fieldObject.TYPE_SFBOOL)
field107.setName("enabled")
field107.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field107.setValue("true")

ProtoInterface106.addField(field107)
field108 = fieldObject()
field108.setType(fieldObject.TYPE_SFCOLOR)
field108.setName("diffuseColor")
field108.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field108.setValue("0 0 0")

ProtoInterface106.addField(field108)
field109 = fieldObject()
field109.setType(fieldObject.TYPE_SFCOLOR)
field109.setName("emissiveColor")
field109.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field109.setValue("0.05 0.05 0.5")

ProtoInterface106.addField(field109)
field110 = fieldObject()
field110.setType(fieldObject.TYPE_SFCOLOR)
field110.setName("specularColor")
field110.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field110.setValue("0 0 0")

ProtoInterface106.addField(field110)
field111 = fieldObject()
field111.setType(fieldObject.TYPE_SFFLOAT)
field111.setName("transparency")
field111.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field111.setValue("0")

ProtoInterface106.addField(field111)
field112 = fieldObject()
field112.setType(fieldObject.TYPE_SFFLOAT)
field112.setName("shininess")
field112.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field112.setValue("0")

ProtoInterface106.addField(field112)
field113 = fieldObject()
field113.setType(fieldObject.TYPE_SFFLOAT)
field113.setName("ambientIntensity")
field113.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field113.setValue("0")

ProtoInterface106.addField(field113)
ProtoDeclare105.setProtoInterface(ProtoInterface106)
ProtoBody114 = ProtoBodyObject()

Material115 = MaterialObject()
Material115.setDEF("MaterialNode")

IS116 = ISObject()

connect117 = connectObject()
connect117.setNodeField("diffuseColor")
connect117.setProtoField("diffuseColor")

IS116.addConnect(connect117)
connect118 = connectObject()
connect118.setNodeField("emissiveColor")
connect118.setProtoField("emissiveColor")

IS116.addConnect(connect118)
connect119 = connectObject()
connect119.setNodeField("specularColor")
connect119.setProtoField("specularColor")

IS116.addConnect(connect119)
connect120 = connectObject()
connect120.setNodeField("transparency")
connect120.setProtoField("transparency")

IS116.addConnect(connect120)
connect121 = connectObject()
connect121.setNodeField("shininess")
connect121.setProtoField("shininess")

IS116.addConnect(connect121)
connect122 = connectObject()
connect122.setNodeField("ambientIntensity")
connect122.setProtoField("ambientIntensity")

IS116.addConnect(connect122)
Material115.setIS(IS116)
ProtoBody114.addChild(Material115)

ProtoBody114.addComments(CommentsBlock("""Only first node (the node type) is renderable, others are along for the ride"""))
Script123 = ScriptObject()
Script123.setDEF("MaterialModulatorScript")

field124 = fieldObject()
field124.setType(fieldObject.TYPE_SFBOOL)
field124.setName("enabled")
field124.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)

Script123.addField(field124)
field125 = fieldObject()
field125.setType(fieldObject.TYPE_SFCOLOR)
field125.setName("diffuseColor")
field125.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)

Script123.addField(field125)
field126 = fieldObject()
field126.setType(fieldObject.TYPE_SFCOLOR)
field126.setName("newColor")
field126.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)

Script123.addField(field126)
field127 = fieldObject()
field127.setType(fieldObject.TYPE_SFTIME)
field127.setName("clockTrigger")
field127.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script123.addField(field127)
IS128 = ISObject()

connect129 = connectObject()
connect129.setNodeField("enabled")
connect129.setProtoField("enabled")

IS128.addConnect(connect129)
connect130 = connectObject()
connect130.setNodeField("diffuseColor")
connect130.setProtoField("diffuseColor")

IS128.addConnect(connect130)
Script123.setIS(IS128)

Script123.setSourceCode("ecmascript:\n"+
"function initialize ()\n"+
"{\n"+
"    newColor = diffuseColor; // start with correct color\n"+
"}\n"+
"function set_enabled (newValue)\n"+
"{\n"+
"	enabled = newValue;\n"+
"}\n"+
"function clockTrigger (timeValue)\n"+
"{\n"+
"    if (!enabled) return;\n"+
"    red   = newColor.r;\n"+
"    green = newColor.g;\n"+
"    blue  = newColor.b;\n"+
"    \n"+
"    // note different modulation rates for each color component, % is modulus operator\n"+
"    newColor = new SFColor ((red + 0.02) % 1, (green + 0.03) % 1, (blue + 0.04) % 1);\n"+
"	if (enabled)\n"+
"	{\n"+
"		Browser.print ('diffuseColor=(' + red + ',' + green + ',' + blue + ') newColor=' + newColor.toString() + '\\n');\n"+
"	}\n"+
"}\n"+
"")
ProtoBody114.addChild(Script123)
ProtoDeclare105.setProtoBody(ProtoBody114)
Scene26.addChild(ProtoDeclare105)

Scene26.addComments(CommentsBlock("""Test success: declarative statement createDeclarativeShapeTests()"""))
Group131 = GroupObject()
Group131.setDEF("DeclarativeGroupExample")

Shape132 = ShapeObject()

MetadataString133 = MetadataStringObject()
MetadataString133.setName("findThisNameValue")
MetadataString133.setDEF("FindableMetadataStringTest")
MetadataString133.setValue(["test case"])

Shape132.setMetadata(MetadataString133)
Appearance134 = AppearanceObject()
Appearance134.setDEF("DeclarativeAppearanceExample")


Appearance134.addComments(CommentsBlock("""DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance"""))
ProtoInstance135 = ProtoInstanceObject()
ProtoInstance135.setName("MaterialModulator")
ProtoInstance135.setDEF("MyMaterialModulator")

Appearance134.setMaterial(ProtoInstance135)
Shape132.setAppearance(Appearance134)
Cone136 = ConeObject()
Cone136.setBottom(False)
Cone136.setBottomRadius(0.05)
Cone136.setHeight(0.1)

Shape132.setGeometry(Cone136)
Group131.addChild(Shape132)

Group131.addComments(CommentsBlock("""Test success: declarativeGroup.addChild() singleton pipeline method"""))
Scene26.addChild(Group131)

Scene26.addComments(CommentsBlock("""Test success: declarative statement addChild()"""))

Scene26.addComments(CommentsBlock("""Test success: x3dModel.findNodeByDEF(DeclarativeAppearanceExample) = <Appearance DEF='DeclarativeAppearanceExample'/> i.e."""))

Scene26.addComments(CommentsBlock("""<Appearance DEF='DeclarativeAppearanceExample'>"""))

Scene26.addComments(CommentsBlock("""<!- - DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance - ->"""))

Scene26.addComments(CommentsBlock("""<ProtoInstance DEF='MyMaterialModulator' name='MaterialModulator' containerField='material'/>"""))

Scene26.addComments(CommentsBlock("""</Appearance>"""))

Scene26.addComments(CommentsBlock("""Test success: x3dModel.findElementByNameValue(findThisNameValue) = <MetadataString DEF='FindableMetadataStringTest' name='findThisNameValue' value='\"test case\"'/>"""))

Scene26.addComments(CommentsBlock("""Test success: x3dModel.findElementByNameValue(\"ArtDeco01Material\", \"ProtoDeclare\") found"""))

Scene26.addComments(CommentsBlock("""Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoDeclare\") found"""))

Scene26.addComments(CommentsBlock("""Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoInstance\") found"""))
Group137 = GroupObject()
Group137.setDEF("TestFieldObjectsGroup")


Group137.addComments(CommentsBlock("""testFieldObjects() results"""))

Group137.addComments(CommentsBlock("""SFBool default=true, true=true, false=false, negate()=true"""))

Group137.addComments(CommentsBlock("""MFBool default=, initial=true false true, negate()=false true false"""))

Group137.addComments(CommentsBlock("""SFFloat default=0.0, initial=1.0, setValue(2)=2.0, setValue(3.0f)=3.0, setValue(4.0)=4.0"""))

Group137.addComments(CommentsBlock("""MFFloat default=, initial=1 2 3, append(5)=1 2 3 5, inserts(3,4)(0,0)=0 1 2 3 4 5, append(6)=0 1 2 3 4 5 6, size()=7"""))

Group137.addComments(CommentsBlock("""... get1Value[3]=3.0, remove[1]=0 2 3 4 5 6, set1Value(0,10)=10 2 3 4 5 6, multiply(2)=20 4 6 8 10 12, clear="""))

Group137.addComments(CommentsBlock("""SFVec3f default=0 0 0, initial=1 2 3, setValue=4 5 6, multiply(2)=8 10 12, normalize()=0.45584232 0.5698029 0.68376344"""))
Scene26.addChild(Group137)
Sound138 = SoundObject()
Sound138.setLocation([0,1.6,0])


Sound138.addComments(CommentsBlock("""set sound-ellipsoid location height at 1.6m to match typical avatar height"""))
AudioClip139 = AudioClipObject()
AudioClip139.setDescription("chimes")
AudioClip139.setUrl(["chimes.wav","http://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav"])


AudioClip139.addComments(CommentsBlock("""Scene example fragment from http://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/default.x3d"""))
Sound138.setSource(AudioClip139)
Scene26.addChild(Sound138)
Sound140 = SoundObject()
Sound140.setLocation([0,1.6,0])


Sound140.addComments(CommentsBlock("""set sound-ellipsoid location height at 1.6m to match typical avatar height"""))
MovieTexture141 = MovieTextureObject()
MovieTexture141.setDescription("mpgsys.mpg from ConformanceNist suite")
MovieTexture141.setUrl(["mpgsys.mpg","http://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpgsys.mpg"])


MovieTexture141.addComments(CommentsBlock("""Scene example fragment from http://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpeg1-systems.x3d"""))

MovieTexture141.addComments(CommentsBlock("""Expected containerField='source', allowed containerField values=\"texture\" \"source\" \"back\" \"bottom\" \"front\" \"left\" \"right\" \"top\" \"backTexture\" \"bottomTexture\" \"frontTexture\" \"leftTexture\" \"rightTexture\" \"topTexture\""""))
Sound140.setSource(MovieTexture141)
Scene26.addChild(Sound140)

Scene26.addComments(CommentsBlock("""Test success: AnchorObject.isNode()=true, siteAnchor.isNode()=true"""))

Scene26.addComments(CommentsBlock("""Test success: AnchorObject.isStatement()=false, siteAnchor.isStatement()=false"""))

Scene26.addComments(CommentsBlock("""Test success: ROUTEObject.isNode()=false, orbitPositionROUTE.isNode()=false"""))

Scene26.addComments(CommentsBlock("""Test success: ROUTEObject.isStatement()=true, orbitPositionROUTE.isStatement()=true"""))

Scene26.addComments(CommentsBlock("""Test success: CommentsBlock.isNode()=false, testComments.isNode()=false"""))

Scene26.addComments(CommentsBlock("""Test success: CommentsBlock.isStatement()=false, testComments.isStatement()=false"""))
Shape142 = ShapeObject()
Shape142.setDEF("ExtrusionShape")


Shape142.addComments(CommentsBlock("""ExampleExtrusion isCrossSectionClosed()=true, crossSection='[1.0, 1.0, 1.0, -1.0, -1.0, -1.0, -1.0, 1.0, 1.0, 1.0]'"""))

Shape142.addComments(CommentsBlock("""ExampleExtrusion isSpineClosed()=false, spine='[0.0, 0.0, 0.0, 0.0, 1.0, 0.0]'"""))
Appearance143 = AppearanceObject()
Appearance143.setDEF("TransparentAppearance")

Material144 = MaterialObject()
Material144.setTransparency(1)

Appearance143.setMaterial(Material144)
Shape142.setAppearance(Appearance143)
Extrusion145 = ExtrusionObject()
Extrusion145.setDEF("ExampleExtrusion")

Shape142.setGeometry(Extrusion145)
Scene26.addChild(Shape142)
X3D0.setScene(Scene26)

X3D0.toFileX3D("../data/HelloWorldProgramOutput.new.x3d")
