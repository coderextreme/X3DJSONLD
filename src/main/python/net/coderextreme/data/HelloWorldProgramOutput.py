# -*- coding: UTF-8 -*-
from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")

head1 = headObject()

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
meta11.setContent("11 December 2017")

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

head1.addComments(CommentsBlock("""comment #1"""))

head1.addComments(CommentsBlock("""comment #2"""))

head1.addComments(CommentsBlock("""comment #3"""))

head1.addComments(CommentsBlock("""comment #4"""))
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

MetadataSet55 = MetadataSetObject()
MetadataSet55.setName("EscapedQuotationMarksMetadataSet")

MetadataString56 = MetadataStringObject()
MetadataString56.setName("escapedQuotesTest2")
MetadataString56.setValue(["escaped quotation marks example 2: He said, &quot;Immel did it!&quot;"])

MetadataSet55.setMetadata(MetadataString56)
Text54.setMetadata(MetadataSet55)
FontStyle57 = FontStyleObject()
FontStyle57.setJustify(["MIDDLE","MIDDLE"])

Text54.setFontStyle(FontStyle57)

Text54.addComments(CommentsBlock("""escaped quotation marks example 3: He said, \"Immel did it!\""""))

Text54.addComments(CommentsBlock("""escaped quotation marks example 4: He said, &quot;Immel did it!&quot;"""))
Shape51.setGeometry(Text54)
Transform50.addChild(Shape51)
Collision58 = CollisionObject()


Collision58.addComments(CommentsBlock("""test containerField='proxy'"""))
Shape59 = ShapeObject()
Shape59.setDEF("ProxyShape")

Text60 = TextObject()
Text60.setString(["One, Two, Three","","He said, \"Immel did it!\""])

Shape59.setGeometry(Text60)

Shape59.addComments(CommentsBlock("""alternative XML encoding: Text string='\"One, Two, Three\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\"'"""))

Shape59.addComments(CommentsBlock("""alternative Java source: .setString(new String [] {\"One, Two, Three\", \"\", \"He said, \\\"Immel did it!\\\"\"})"""))

Shape59.addComments(CommentsBlock("""reference: http://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamplesIndex.html"""))
Collision58.addChild(Shape59)
Transform50.addChild(Collision58)

Transform50.addComments(CommentsBlock("""It's a beautiful world"""))

Transform50.addComments(CommentsBlock("""... for you!"""))

Transform50.addComments(CommentsBlock("""https://en.wikipedia.org/wiki/Beautiful_World_(Devo_song)"""))
Scene26.addChild(Transform50)

Scene26.addComments(CommentsBlock("""repeatedly spin 180 degrees as a readable special effect"""))
OrientationInterpolator61 = OrientationInterpolatorObject()
OrientationInterpolator61.setDEF("SpinInterpolator")
OrientationInterpolator61.setKey([0,0.5,1])
OrientationInterpolator61.setKeyValue([0,1,0,4.712389,0,1,0,0,0,1,0,1.5707964])

Scene26.addChild(OrientationInterpolator61)
TimeSensor62 = TimeSensorObject()
TimeSensor62.setDEF("SpinClock")
TimeSensor62.setCycleInterval(5)
TimeSensor62.setLoop(True)

Scene26.addChild(TimeSensor62)
ROUTE63 = ROUTEObject()
ROUTE63.setFromField("fraction_changed")
ROUTE63.setFromNode("SpinClock")
ROUTE63.setToField("set_fraction")
ROUTE63.setToNode("SpinInterpolator")

Scene26.addChild(ROUTE63)
ROUTE64 = ROUTEObject()
ROUTE64.setFromField("value_changed")
ROUTE64.setFromNode("SpinInterpolator")
ROUTE64.setToField("rotation")
ROUTE64.setToNode("TextTransform")

Scene26.addChild(ROUTE64)
Group65 = GroupObject()
Group65.setDEF("BackgroundGroup")

Background66 = BackgroundObject()
Background66.setDEF("GradualBackground")

Group65.addChild(Background66)
Script67 = ScriptObject()
Script67.setDEF("colorTypeConversionScript")

field68 = fieldObject()
field68.setType(fieldObject.TYPE_SFCOLOR)
field68.setName("colorInput")
field68.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script67.addField(field68)
field69 = fieldObject()
field69.setType(fieldObject.TYPE_MFCOLOR)
field69.setName("colorsOutput")
field69.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)

Script67.addField(field69)

Script67.setSourceCode("ecmascript:\n"+
"\n"+
"function colorInput (eventValue) // Example source code\n"+
"{\n"+
"   colorsOutput = new MFColor(eventValue); // assigning value sends output event\n"+
"// Browser.print('colorInput=' + eventValue + ', colorsOutput=' + colorsOutput + '\\n');\n"+
"}\n"+
"")
Group65.addChild(Script67)
ColorInterpolator70 = ColorInterpolatorObject()
ColorInterpolator70.setDEF("ColorAnimator")
ColorInterpolator70.setKey([0,0.5,1])
ColorInterpolator70.setKeyValue([0.9411765,1,1,0.29411766,0,0.50980395,0.9411765,1,1])


ColorInterpolator70.addComments(CommentsBlock("""AZURE to INDIGO and back again"""))
Group65.addChild(ColorInterpolator70)
TimeSensor71 = TimeSensorObject()
TimeSensor71.setDEF("ColorClock")
TimeSensor71.setCycleInterval(60)
TimeSensor71.setLoop(True)

Group65.addChild(TimeSensor71)
ROUTE72 = ROUTEObject()
ROUTE72.setFromField("colorsOutput")
ROUTE72.setFromNode("colorTypeConversionScript")
ROUTE72.setToField("skyColor")
ROUTE72.setToNode("GradualBackground")

Group65.addChild(ROUTE72)
ROUTE73 = ROUTEObject()
ROUTE73.setFromField("value_changed")
ROUTE73.setFromNode("ColorAnimator")
ROUTE73.setToField("colorInput")
ROUTE73.setToNode("colorTypeConversionScript")

Group65.addChild(ROUTE73)
ROUTE74 = ROUTEObject()
ROUTE74.setFromField("fraction_changed")
ROUTE74.setFromNode("ColorClock")
ROUTE74.setToField("set_fraction")
ROUTE74.setToNode("ColorAnimator")

Group65.addChild(ROUTE74)
Scene26.addChild(Group65)
ProtoDeclare75 = ProtoDeclareObject()
ProtoDeclare75.setName("ArtDeco01Material")
ProtoDeclare75.setAppinfo("tooltip: ArtDeco01Material prototype is a Material node")

ProtoInterface76 = ProtoInterfaceObject()

field77 = fieldObject()
field77.setType(fieldObject.TYPE_SFSTRING)
field77.setName("description")
field77.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field77.setAppinfo("tooltip for descriptionField")
field77.setValue("ArtDeco01Material prototype is a Material node")

ProtoInterface76.addField(field77)
field78 = fieldObject()
field78.setType(fieldObject.TYPE_SFBOOL)
field78.setName("enabled")
field78.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field78.setValue("true")

ProtoInterface76.addField(field78)
ProtoDeclare75.setProtoInterface(ProtoInterface76)
ProtoBody79 = ProtoBodyObject()


ProtoBody79.addComments(CommentsBlock("""Initial node of ProtoBody determines prototype node type"""))
Material80 = MaterialObject()
Material80.setAmbientIntensity(0.25)
Material80.setDiffuseColor([0.282435,0.085159,0.134462])
Material80.setShininess(0.127273)
Material80.setSpecularColor([0.276305,0.11431,0.139857])

ProtoBody79.addChild(Material80)

ProtoBody79.addComments(CommentsBlock("""[HelloWorldProgram diagnostic] should be connected to scene graph: ArtDeco01ProtoDeclare.getNodeType()=\"Material\""""))

ProtoBody79.addComments(CommentsBlock("""presence of follow-on TouchSensor shows that additional nodes are allowed in ProtoBody after initial node, regardless of node types"""))
TouchSensor81 = TouchSensorObject()
TouchSensor81.setDescription("within ProtoBody")

IS82 = ISObject()

connect83 = connectObject()
connect83.setNodeField("description")
connect83.setProtoField("description")

IS82.addConnect(connect83)
connect84 = connectObject()
connect84.setNodeField("enabled")
connect84.setProtoField("enabled")

IS82.addConnect(connect84)
TouchSensor81.setIS(IS82)
ProtoBody79.addChild(TouchSensor81)
ProtoDeclare75.setProtoBody(ProtoBody79)
Scene26.addChild(ProtoDeclare75)
ExternProtoDeclare85 = ExternProtoDeclareObject()
ExternProtoDeclare85.setName("ArtDeco02Material")
ExternProtoDeclare85.setAppinfo("this is a different Material node")
ExternProtoDeclare85.setUrl(["http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d#ArtDeco02Material","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3dv#ArtDeco02Material"])

field86 = fieldObject()
field86.setType(fieldObject.TYPE_SFSTRING)
field86.setName("description")
field86.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field86.setAppinfo("tooltip for descriptionField")

ExternProtoDeclare85.addField(field86)

ExternProtoDeclare85.addComments(CommentsBlock("""[HelloWorldProgram diagnostic] ArtDeco02ExternProtoDeclare.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time, TODO X3DJSAIL needs to add further capability.\""""))
Scene26.addChild(ExternProtoDeclare85)

Scene26.addComments(CommentsBlock("""Tested ArtDeco01ProtoInstance, ArtDeco02ProtoInstance for improper node type when ProtoInstance is added in wrong place"""))
Shape87 = ShapeObject()
Shape87.setDEF("TestShape1")

Appearance88 = AppearanceObject()
Appearance88.setDEF("TestAppearance1")

ProtoInstance89 = ProtoInstanceObject()
ProtoInstance89.setName("ArtDeco01Material")

fieldValue90 = fieldValueObject()
fieldValue90.setName("description")
fieldValue90.setValue("ArtDeco01Material can substitute for a Material node")

ProtoInstance89.addFieldValue(fieldValue90)

ProtoInstance89.addComments(CommentsBlock("""[HelloWorldProgram diagnostic] ArtDeco01ProtoInstance.getNodeType()=\"Material\""""))
Appearance88.setProtoInstance(ProtoInstance89)

Appearance88.addComments(CommentsBlock("""ArtDeco01Material prototype goes here..."""))
Shape87.setAppearance(Appearance88)
Sphere91 = SphereObject()
Sphere91.setRadius(0.001)

Shape87.setGeometry(Sphere91)
Scene26.addChild(Shape87)
Shape92 = ShapeObject()
Shape92.setDEF("TestShape2")

Appearance93 = AppearanceObject()
Appearance93.setDEF("TestAppearance2")

ProtoInstance94 = ProtoInstanceObject()
ProtoInstance94.setName("ArtDeco02Material")

fieldValue95 = fieldValueObject()
fieldValue95.setName("description")
fieldValue95.setValue("ArtDeco02Material can substitute for another Material node")

ProtoInstance94.addFieldValue(fieldValue95)

ProtoInstance94.addComments(CommentsBlock("""[HelloWorldProgram diagnostic] ArtDeco02ProtoInstance.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time, TODO X3DJSAIL needs to add further capability.\""""))
Appearance93.setProtoInstance(ProtoInstance94)

Appearance93.addComments(CommentsBlock("""ArtDeco02Material prototype goes here..."""))
Shape92.setAppearance(Appearance93)
Cone96 = ConeObject()
Cone96.setBottomRadius(0.001)
Cone96.setHeight(0.001)

Shape92.setGeometry(Cone96)
Scene26.addChild(Shape92)
Inline97 = InlineObject()
Inline97.setDEF("inlineSceneDef")
Inline97.setUrl(["someOtherScene.x3d"])

Scene26.addChild(Inline97)
IMPORT98 = IMPORTObject()
IMPORT98.setAS("WorldInfoDEF2")
IMPORT98.setImportedDEF("WorldInfoDEF")
IMPORT98.setInlineDEF("inlineSceneDef")

Scene26.addChild(IMPORT98)
EXPORT99 = EXPORTObject()
EXPORT99.setAS("WorldInfoDEF3")
EXPORT99.setLocalDEF("WorldInfoDEF")

Scene26.addChild(EXPORT99)
ProtoDeclare100 = ProtoDeclareObject()
ProtoDeclare100.setName("MaterialModulator")
ProtoDeclare100.setAppinfo("mimic a Material node and modulate fields as an animation effect")
ProtoDeclare100.setDocumentation("http://x3dgraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorIndex.html")

ProtoInterface101 = ProtoInterfaceObject()

field102 = fieldObject()
field102.setType(fieldObject.TYPE_SFBOOL)
field102.setName("enabled")
field102.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field102.setValue("true")

ProtoInterface101.addField(field102)
field103 = fieldObject()
field103.setType(fieldObject.TYPE_SFCOLOR)
field103.setName("diffuseColor")
field103.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field103.setValue("0 0 0")

ProtoInterface101.addField(field103)
field104 = fieldObject()
field104.setType(fieldObject.TYPE_SFCOLOR)
field104.setName("emissiveColor")
field104.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field104.setValue("0.05 0.05 0.5")

ProtoInterface101.addField(field104)
field105 = fieldObject()
field105.setType(fieldObject.TYPE_SFCOLOR)
field105.setName("specularColor")
field105.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field105.setValue("0 0 0")

ProtoInterface101.addField(field105)
field106 = fieldObject()
field106.setType(fieldObject.TYPE_SFFLOAT)
field106.setName("transparency")
field106.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field106.setValue("0")

ProtoInterface101.addField(field106)
field107 = fieldObject()
field107.setType(fieldObject.TYPE_SFFLOAT)
field107.setName("shininess")
field107.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field107.setValue("0")

ProtoInterface101.addField(field107)
field108 = fieldObject()
field108.setType(fieldObject.TYPE_SFFLOAT)
field108.setName("ambientIntensity")
field108.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
field108.setValue("0")

ProtoInterface101.addField(field108)
ProtoDeclare100.setProtoInterface(ProtoInterface101)
ProtoBody109 = ProtoBodyObject()

Material110 = MaterialObject()
Material110.setDEF("MaterialNode")

IS111 = ISObject()

connect112 = connectObject()
connect112.setNodeField("diffuseColor")
connect112.setProtoField("diffuseColor")

IS111.addConnect(connect112)
connect113 = connectObject()
connect113.setNodeField("emissiveColor")
connect113.setProtoField("emissiveColor")

IS111.addConnect(connect113)
connect114 = connectObject()
connect114.setNodeField("specularColor")
connect114.setProtoField("specularColor")

IS111.addConnect(connect114)
connect115 = connectObject()
connect115.setNodeField("transparency")
connect115.setProtoField("transparency")

IS111.addConnect(connect115)
connect116 = connectObject()
connect116.setNodeField("shininess")
connect116.setProtoField("shininess")

IS111.addConnect(connect116)
connect117 = connectObject()
connect117.setNodeField("ambientIntensity")
connect117.setProtoField("ambientIntensity")

IS111.addConnect(connect117)
Material110.setIS(IS111)
ProtoBody109.addChild(Material110)

ProtoBody109.addComments(CommentsBlock("""Only first node (the node type) is renderable, others are along for the ride"""))
Script118 = ScriptObject()
Script118.setDEF("MaterialModulatorScript")

field119 = fieldObject()
field119.setType(fieldObject.TYPE_SFBOOL)
field119.setName("enabled")
field119.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)

Script118.addField(field119)
field120 = fieldObject()
field120.setType(fieldObject.TYPE_SFCOLOR)
field120.setName("diffuseColor")
field120.setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)

Script118.addField(field120)
field121 = fieldObject()
field121.setType(fieldObject.TYPE_SFCOLOR)
field121.setName("newColor")
field121.setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)

Script118.addField(field121)
field122 = fieldObject()
field122.setType(fieldObject.TYPE_SFTIME)
field122.setName("clockTrigger")
field122.setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)

Script118.addField(field122)
IS123 = ISObject()

connect124 = connectObject()
connect124.setNodeField("enabled")
connect124.setProtoField("enabled")

IS123.addConnect(connect124)
connect125 = connectObject()
connect125.setNodeField("diffuseColor")
connect125.setProtoField("diffuseColor")

IS123.addConnect(connect125)
Script118.setIS(IS123)

Script118.setSourceCode("ecmascript:\n"+
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
ProtoBody109.addChild(Script118)
ProtoDeclare100.setProtoBody(ProtoBody109)
Scene26.addChild(ProtoDeclare100)

Scene26.addComments(CommentsBlock("""Test success: declarative statement createDeclarativeShapeTests()"""))
Group126 = GroupObject()
Group126.setDEF("DeclarativeGroupExample")

Shape127 = ShapeObject()

MetadataString128 = MetadataStringObject()
MetadataString128.setName("findThisNameValue")
MetadataString128.setDEF("FindableMetadataStringTest")
MetadataString128.setValue(["test case"])

Shape127.setMetadata(MetadataString128)
Appearance129 = AppearanceObject()
Appearance129.setDEF("DeclarativeAppearanceExample")

ProtoInstance130 = ProtoInstanceObject()
ProtoInstance130.setName("MaterialModulator")
ProtoInstance130.setDEF("MyMaterialModulator")

Appearance129.setProtoInstance(ProtoInstance130)

Appearance129.addComments(CommentsBlock("""DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance"""))
Shape127.setAppearance(Appearance129)
Cone131 = ConeObject()
Cone131.setBottom(False)
Cone131.setBottomRadius(0.05)
Cone131.setHeight(0.1)

Shape127.setGeometry(Cone131)
Group126.addChild(Shape127)

Group126.addComments(CommentsBlock("""Test success: declarativeGroup.addChild() singleton pipeline method"""))
Scene26.addChild(Group126)

Scene26.addComments(CommentsBlock("""Test success: declarative statement addChild()"""))

Scene26.addComments(CommentsBlock("""Test success: x3dModel.findNodeByDEF(DeclarativeAppearanceExample) = <Appearance DEF='DeclarativeAppearanceExample'></Appearance> i.e. <Appearance DEF='DeclarativeAppearanceExample'> <ProtoInstance DEF='MyMaterialModulator' name='MaterialModulator' containerField='material'></ProtoInstance> <!- - DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance - -> </Appearance>"""))

Scene26.addComments(CommentsBlock("""Test success: x3dModel.findElementByNameValue(findThisNameValue) = <MetadataString DEF='FindableMetadataStringTest' name='findThisNameValue' value='\"test case\"'></MetadataString>"""))

Scene26.addComments(CommentsBlock("""Test success: x3dModel.findElementByNameValue(\"ArtDeco01Material\", \"ProtoDeclare\") found"""))

Scene26.addComments(CommentsBlock("""Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoDeclare\") found"""))

Scene26.addComments(CommentsBlock("""Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoInstance\") found"""))
Group132 = GroupObject()
Group132.setDEF("TestFieldObjectsGroup")


Group132.addComments(CommentsBlock("""testFieldObjects() results"""))

Group132.addComments(CommentsBlock("""SFBool default=true, true=true, false=false, negate()=true"""))

Group132.addComments(CommentsBlock("""MFBool default=, initial=true false true, negate()=false true false"""))

Group132.addComments(CommentsBlock("""SFFloat default=0.0, initial=1.0, setValue(2)=2.0, setValue(3.0f)=3.0, setValue(4.0)=4.0"""))

Group132.addComments(CommentsBlock("""MFFloat default=, initial=1 2 3, append(5)=1 2 3 5, inserts(3,4)(0,0)=0 1 2 3 4 5, append(6)=0 1 2 3 4 5 6, size()=7"""))

Group132.addComments(CommentsBlock("""... get1Value[3]=3.0, remove[1]=0 2 3 4 5 6, set1Value(0,10)=10 2 3 4 5 6, multiply(2)=20 4 6 8 10 12, clear="""))

Group132.addComments(CommentsBlock("""SFVec3f default=0 0 0, initial=1 2 3, setValue=4 5 6, multiply(2)=8 10 12, normalize()=0.45584232 0.5698029 0.68376344"""))
Scene26.addChild(Group132)
Sound133 = SoundObject()
Sound133.setLocation([0,1.6,0])

AudioClip134 = AudioClipObject()
AudioClip134.setDescription("chimes")
AudioClip134.setUrl(["chimes.wav","http://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav"])


AudioClip134.addComments(CommentsBlock("""Scene example fragment from http://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/default.x3d"""))
Sound133.setSource(AudioClip134)

Sound133.addComments(CommentsBlock("""set sound-ellipsoid location height at 1.6m to match typical avatar height"""))
Scene26.addChild(Sound133)
Sound135 = SoundObject()
Sound135.setLocation([0,1.6,0])

MovieTexture136 = MovieTextureObject()
MovieTexture136.setDescription("mpgsys.mpg from ConformanceNist suite")
MovieTexture136.setUrl(["mpgsys.mpg","http://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpgsys.mpg"])


MovieTexture136.addComments(CommentsBlock("""Scene example fragment from http://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpeg1-systems.x3d"""))

MovieTexture136.addComments(CommentsBlock("""Expected containerField='source', allowed containerField values=\"texture\" \"source\" \"back\" \"bottom\" \"front\" \"left\" \"right\" \"top\" \"backTexture\" \"bottomTexture\" \"frontTexture\" \"leftTexture\" \"rightTexture\" \"topTexture\""""))
Sound135.setSource(MovieTexture136)

Sound135.addComments(CommentsBlock("""set sound-ellipsoid location height at 1.6m to match typical avatar height"""))
Scene26.addChild(Sound135)

Scene26.addComments(CommentsBlock("""Test success: AnchorObject.isNode()=true, siteAnchor.isNode()=true"""))

Scene26.addComments(CommentsBlock("""Test success: AnchorObject.isStatement()=false, siteAnchor.isStatement()=false"""))

Scene26.addComments(CommentsBlock("""Test success: ROUTEObject.isNode()=false, orbitPositionROUTE.isNode()=false"""))

Scene26.addComments(CommentsBlock("""Test success: ROUTEObject.isStatement()=true, orbitPositionROUTE.isStatement()=true"""))

Scene26.addComments(CommentsBlock("""Test success: CommentsBlock.isNode()=false, testComments.isNode()=false"""))

Scene26.addComments(CommentsBlock("""Test success: CommentsBlock.isStatement()=false, testComments.isStatement()=false"""))
Shape137 = ShapeObject()
Shape137.setDEF("ExtrusionShape")

Appearance138 = AppearanceObject()
Appearance138.setDEF("TransparentAppearance")

Material139 = MaterialObject()
Material139.setTransparency(1)

Appearance138.setMaterial(Material139)
Shape137.setAppearance(Appearance138)
Extrusion140 = ExtrusionObject()
Extrusion140.setDEF("ExampleExtrusion")

Shape137.setGeometry(Extrusion140)

Shape137.addComments(CommentsBlock("""ExampleExtrusion isCrossSectionClosed()=true, crossSection='[1.0, 1.0, 1.0, -1.0, -1.0, -1.0, -1.0, 1.0, 1.0, 1.0]'"""))

Shape137.addComments(CommentsBlock("""ExampleExtrusion isSpineClosed()=false, spine='[0.0, 0.0, 0.0, 0.0, 1.0, 0.0]'"""))
Scene26.addChild(Shape137)
X3D0.setScene(Scene26)

X3D0.toFileX3D("../data/HelloWorldProgramOutput.new.x3d")
