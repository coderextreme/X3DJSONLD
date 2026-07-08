import x3dpsail as x3d

x3d.ConfigurationProperties.setXsltEngine(x3d.ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA)
x3d.ConfigurationProperties.setDeleteIntermediateFiles(False)
x3d.ConfigurationProperties.setStripTrailingZeroes(True)
x3d.ConfigurationProperties.setStripDefaultAttributes(True)
X3D0 = x3d.X3D()
X3D0.setCssClass("x3dModel.class")
X3D0.setProfile("Full")
X3D0.setStyle("x3dModel.style")
X3D0.setVersion("4.0")

X3D0.addComments(x3d.CommentsBlock("""X3D model top-level comment"""))
head1 = x3d.head()

head1.addComments(x3d.CommentsBlock("""comment #1"""))

head1.addComments(x3d.CommentsBlock("""comment #2"""))

head1.addComments(x3d.CommentsBlock("""comment #3"""))

head1.addComments(x3d.CommentsBlock("""comment #4"""))
component2 = x3d.component()
component2.setName("Navigation")
component2.setLevel(3)

head1.addComponent(component2)
component3 = x3d.component()
component3.setName("Shaders")
component3.setLevel(1)

head1.addComponent(component3)
component4 = x3d.component()
component4.setName("CADGeometry")
component4.setLevel(2)

head1.addComponent(component4)
component5 = x3d.component()
component5.setName("DIS")
component5.setLevel(2)

head1.addComponent(component5)
component6 = x3d.component()
component6.setName("HAnim")
component6.setLevel(1)

head1.addComponent(component6)
component7 = x3d.component()
component7.setName("Grouping")
component7.setLevel(1)

head1.addComponent(component7)
component8 = x3d.component()
component8.setName("Layering")
component8.setLevel(1)

head1.addComponent(component8)
unit9 = x3d.unit()
unit9.setName("AngleUnitConversion")
unit9.setCategory("angle")
unit9.setConversionFactor(1)

head1.addUnit(unit9)
unit10 = x3d.unit()
unit10.setName("LengthUnitConversion")
unit10.setCategory("length")
unit10.setConversionFactor(1)

head1.addUnit(unit10)
unit11 = x3d.unit()
unit11.setName("ForceFromPoundsToNewtons")
unit11.setCategory("force")
unit11.setConversionFactor(4.4482)

head1.addUnit(unit11)
meta12 = x3d.meta()
meta12.setName("title")
meta12.setContent("SmokeTestProgramOutput.x3d")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("info")
meta13.setContent("continued development and testing in progress")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("description")
meta14.setContent("Example SmokeTestProgram creates an X3D model using the X3D Java Scene Access Interface Library (X3DJSAIL)")

head1.addMeta(meta14)
meta15 = x3d.meta()
meta15.setName("reference")
meta15.setContent("https://www.web3d.org/specifications/java/X3DJSAIL.html")

head1.addMeta(meta15)
meta16 = x3d.meta()
meta16.setName("generator")
meta16.setContent("SmokeTestProgramOutput.java")

head1.addMeta(meta16)
meta17 = x3d.meta()
meta17.setName("created")
meta17.setContent("6 September 2016")

head1.addMeta(meta17)
meta18 = x3d.meta()
meta18.setName("modified")
meta18.setContent("20 June 2026")

head1.addMeta(meta18)
meta19 = x3d.meta()
meta19.setName("generator")
meta19.setContent("X3D Java Scene Access Interface Library (X3DJSAIL)")

head1.addMeta(meta19)
meta20 = x3d.meta()
meta20.setName("generator")
meta20.setContent("https://www.web3d.org/specifications/java/examples/SmokeTestProgram.java")

head1.addMeta(meta20)
meta21 = x3d.meta()
meta21.setName("generator")
meta21.setContent("Netbeans https://www.netbeans.org")

head1.addMeta(meta21)
meta22 = x3d.meta()
meta22.setName("creator")
meta22.setContent("Don Brutzman")

head1.addMeta(meta22)
meta23 = x3d.meta()
meta23.setName("reference")
meta23.setContent("https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/java/examples/SmokeTestProgramOutput.x3d")

head1.addMeta(meta23)
meta24 = x3d.meta()
meta24.setName("reference")
meta24.setContent("Console output, ClassicVRML encoding, VRML97 encoding and pretty-print documentation:")

head1.addMeta(meta24)
meta25 = x3d.meta()
meta25.setName("reference")
meta25.setContent("SmokeTestProgramOutput.txt")

head1.addMeta(meta25)
meta26 = x3d.meta()
meta26.setName("reference")
meta26.setContent("SmokeTestProgramOutput.x3dv")

head1.addMeta(meta26)
meta27 = x3d.meta()
meta27.setName("reference")
meta27.setContent("SmokeTestProgramOutput.wrl")

head1.addMeta(meta27)
meta28 = x3d.meta()
meta28.setName("reference")
meta28.setContent("SmokeTestProgramOutput.html")

head1.addMeta(meta28)
meta29 = x3d.meta()
meta29.setName("reference")
meta29.setContent("https://savage.nps.edu/X3dValidator?url=https://www.web3d.org/specifications/java/examples/SmokeTestProgramOutput.x3d")

head1.addMeta(meta29)
meta30 = x3d.meta()
meta30.setName("identifier")
meta30.setContent("https://www.web3d.org/specifications/java/examples/SmokeTestProgramOutput.x3d")

head1.addMeta(meta30)
meta31 = x3d.meta()
meta31.setName("license")
meta31.setContent("../license.html")

head1.addMeta(meta31)

X3D0.setHead(head1)
Scene32 = x3d.Scene()
ViewpointGroup33 = x3d.ViewpointGroup()
ViewpointGroup33.setDescription("Available viewpoints")
Viewpoint34 = x3d.Viewpoint()
Viewpoint34.setDEF("DefaultView")
Viewpoint34.setDescription("Hello X3DJSAIL")
NavigationInfo35 = x3d.NavigationInfo()
NavigationInfo35.setDEF("ViewpointChildNavigationInfo")

Viewpoint34.setNavigationInfo(NavigationInfo35)

ViewpointGroup33.addChild(Viewpoint34)
Viewpoint36 = x3d.Viewpoint()
Viewpoint36.setDEF("TopDownView")
Viewpoint36.setDescription("top-down view from above")
Viewpoint36.setOrientation(x3d.doubleToFloat([1,0,0,-1.5708]))
Viewpoint36.setPosition(x3d.doubleToFloat([0,100,0]))

ViewpointGroup33.addChild(Viewpoint36)

Scene32.addChild(ViewpointGroup33)
NavigationInfo37 = x3d.NavigationInfo()
NavigationInfo37.setType(["EXAMINE","FLY","ANY"])

Scene32.addChild(NavigationInfo37)
WorldInfo38 = x3d.WorldInfo()
WorldInfo38.setDEF("WorldInfoDEF")
WorldInfo38.setCssClass("worldInfoNode.class")
WorldInfo38.setStyle("worldInfoNode.style")
WorldInfo38.setTitle("SmokeTestProgram produced by X3D Java SAI Library (X3DJSAIL)")

Scene32.addChild(WorldInfo38)
WorldInfo39 = x3d.WorldInfo()
WorldInfo39.setUSE("WorldInfoDEF")

Scene32.addChild(WorldInfo39)
WorldInfo40 = x3d.WorldInfo()
WorldInfo40.setUSE("WorldInfoDEF")

Scene32.addChild(WorldInfo40)
MetadataString41 = x3d.MetadataString()
MetadataString41.setName("test")
MetadataString41.setDEF("scene.addChildMetadata")
MetadataString41.setValue(["Top-level root Metadata node beneath Scene needs to be one of '-children' in JSON encoding"])

Scene32.addMetadata(MetadataString41)
LayerSet42 = x3d.LayerSet()
LayerSet42.setDEF("scene.addChildLayerSetTest")

Scene32.addLayerSet(LayerSet42)
Transform43 = x3d.Transform()
Transform43.setDEF("LogoGeometryTransform")
Transform43.setTranslation(x3d.doubleToFloat([0,1.5,0]))
Anchor44 = x3d.Anchor()
Anchor44.setDEF("siteAnchor")
Anchor44.setDescription("select for X3D Java SAI Library (X3DJSAIL) description")
Anchor44.setUrl(["../X3DJSAIL.html","https://www.web3d.org/specifications/java/X3DJSAIL.html"])
Shape45 = x3d.Shape()
Shape45.setDEF("BoxShape")
Appearance46 = x3d.Appearance()
Material47 = x3d.Material()
Material47.setDEF("GreenMaterial")
Material47.setDiffuseColor(x3d.doubleToFloat([0,1,1]))
Material47.setEmissiveColor(x3d.doubleToFloat([0.8,0,0]))
Material47.setTransparency(0.1)

Appearance46.setMaterial(Material47)
ImageTexture48 = x3d.ImageTexture()
ImageTexture48.setUrl(["images/X3dJavaSceneAccessInterfaceSaiLibrary.png","https://www.web3d.org/specifications/java/examples/images/X3dJavaSceneAccessInterfaceSaiLibrary.png"])

Appearance46.setTexture(ImageTexture48)

Shape45.setAppearance(Appearance46)
Box49 = x3d.Box()
Box49.setDEF("test-NMTOKEN_regex.0123456789")
Box49.setCssClass("untextured")

Shape45.setGeometry(Box49)

Anchor44.addChild(Shape45)

Transform43.addChild(Anchor44)

Scene32.addChild(Transform43)
Shape50 = x3d.Shape()
Shape50.setDEF("LineShape")
Appearance51 = x3d.Appearance()
Material52 = x3d.Material()
Material52.setEmissiveColor(x3d.doubleToFloat([0.6,0.1961,0.8]))

Appearance51.setMaterial(Material52)

Shape50.setAppearance(Appearance51)
IndexedLineSet53 = x3d.IndexedLineSet()
IndexedLineSet53.setCoordIndex([0,1,2,3,4,0])

IndexedLineSet53.addComments(x3d.CommentsBlock("""Coordinate 3-tuple point count: 6"""))
Coordinate54 = x3d.Coordinate()
Coordinate54.setPoint(x3d.doubleToFloat([0,1.5,0,2,1.5,0,2,1.5,-2,-2,1.5,-2,-2,1.5,0,0,1.5,0]))

IndexedLineSet53.setCoord(Coordinate54)

Shape50.setGeometry(IndexedLineSet53)

Scene32.addChild(Shape50)
PositionInterpolator55 = x3d.PositionInterpolator()
PositionInterpolator55.setDEF("BoxPathAnimator")
PositionInterpolator55.setKey(x3d.doubleToFloat([0,0.125,0.375,0.625,0.875,1]))
PositionInterpolator55.setKeyValue(x3d.doubleToFloat([0,1.5,0,2,1.5,0,2,1.5,-2,-2,1.5,-2,-2,1.5,0,0,1.5,0]))

Scene32.addChild(PositionInterpolator55)
TimeSensor56 = x3d.TimeSensor()
TimeSensor56.setDEF("OrbitClock")
TimeSensor56.setCycleInterval(8)
TimeSensor56.setLoop(True)

Scene32.addChild(TimeSensor56)
ROUTE57 = x3d.ROUTE()
ROUTE57.setFromField("fraction_changed")
ROUTE57.setFromNode("OrbitClock")
ROUTE57.setToField("set_fraction")
ROUTE57.setToNode("BoxPathAnimator")

Scene32.addChild(ROUTE57)
ROUTE58 = x3d.ROUTE()
ROUTE58.setFromField("value_changed")
ROUTE58.setFromNode("BoxPathAnimator")
ROUTE58.setToField("set_translation")
ROUTE58.setToNode("LogoGeometryTransform")

Scene32.addChild(ROUTE58)
Transform59 = x3d.Transform()
Transform59.setDEF("TextTransform")
Transform59.setTranslation(x3d.doubleToFloat([0,-1.5,0]))
Shape60 = x3d.Shape()
Appearance61 = x3d.Appearance()
Material62 = x3d.Material()
Material62.setUSE("GreenMaterial")

Appearance61.setMaterial(Material62)

Shape60.setAppearance(Appearance61)
Text63 = x3d.Text()
Text63.setString(["X3D Java","SAI Library","X3DJSAIL"])

Text63.addComments(x3d.CommentsBlock("""Comment example A, plain quotation marks: He said, \"Immel did it!\""""))

Text63.addComments(x3d.CommentsBlock("""Comment example B, XML character entities: He said, &quot;Immel did it!&quot;"""))
MetadataSet64 = x3d.MetadataSet()
MetadataSet64.setName("EscapedQuotationMarksMetadataSet")
MetadataString65 = x3d.MetadataString()
MetadataString65.setName("quotesTestC")
MetadataString65.setValue(["MFString example C, backslash-escaped quotes: He said, \"Immel did it!\""])

MetadataSet64.setMetadata(MetadataString65)
MetadataString66 = x3d.MetadataString()
MetadataString66.setName("extraChildTest")
MetadataString66.setValue(["checks MetadataSet addValue() method"])

MetadataSet64.setMetadata(MetadataString66)

Text63.setMetadata(MetadataSet64)
FontStyle67 = x3d.FontStyle()
FontStyle67.setJustify(["MIDDLE","MIDDLE"])

Text63.setFontStyle(FontStyle67)

Shape60.setGeometry(Text63)

Transform59.addChild(Shape60)
Collision68 = x3d.Collision()

Collision68.addComments(x3d.CommentsBlock("""test containerField='proxy'"""))
Shape69 = x3d.Shape()
Shape69.setDEF("ProxyShape")

Shape69.addComments(x3d.CommentsBlock("""alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\"'"""))

Shape69.addComments(x3d.CommentsBlock("""alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\" \"\"'"""))

Shape69.addComments(x3d.CommentsBlock("""alternative Java source: .setString(new String [] {\"One, Two, Comment\", \"\", \"He said, \\\"\"Immel did it!\\\"\"\"})"""))

Shape69.addComments(x3d.CommentsBlock("""reference: https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamplesIndex.html"""))
Text70 = x3d.Text()
Text70.setString(["One, Two, Text","He said, \"Immel did it!\" \"\""])

Shape69.setGeometry(Text70)

Collision68.setProxy(Shape69)

Transform59.addChild(Collision68)

Transform59.addComments(x3d.CommentsBlock("""It's a beautiful world"""))

Transform59.addComments(x3d.CommentsBlock("""... for you!"""))

Transform59.addComments(x3d.CommentsBlock("""https://en.wikipedia.org/wiki/Beautiful_World_(Devo_song)"""))

Scene32.addChild(Transform59)

Scene32.addComments(x3d.CommentsBlock("""repeatedly spin 180 degrees as a readable special effect"""))
OrientationInterpolator71 = x3d.OrientationInterpolator()
OrientationInterpolator71.setDEF("SpinInterpolator")
OrientationInterpolator71.setKey(x3d.doubleToFloat([0,0.5,1]))
OrientationInterpolator71.setKeyValue(x3d.doubleToFloat([0,1,0,4.7124,0,1,0,0,0,1,0,1.5708]))

Scene32.addChild(OrientationInterpolator71)
TimeSensor72 = x3d.TimeSensor()
TimeSensor72.setDEF("SpinClock")
TimeSensor72.setCycleInterval(5)
TimeSensor72.setLoop(True)

Scene32.addChild(TimeSensor72)
ROUTE73 = x3d.ROUTE()
ROUTE73.setFromField("fraction_changed")
ROUTE73.setFromNode("SpinClock")
ROUTE73.setToField("set_fraction")
ROUTE73.setToNode("SpinInterpolator")

Scene32.addChild(ROUTE73)
ROUTE74 = x3d.ROUTE()
ROUTE74.setFromField("value_changed")
ROUTE74.setFromNode("SpinInterpolator")
ROUTE74.setToField("rotation")
ROUTE74.setToNode("TextTransform")

Scene32.addChild(ROUTE74)
Group75 = x3d.Group()
Group75.setDEF("BackgroundGroup")
Background76 = x3d.Background()
Background76.setDEF("GradualBackground")

Group75.addChild(Background76)
Script77 = x3d.Script()
Script77.setDEF("colorTypeConversionScript")
field78 = x3d.field()
field78.setName("colorInput")
field78.setAccessType("inputOnly")
field78.setType("SFColor")

Script77.addField(field78)
field79 = x3d.field()
field79.setName("colorsOutput")
field79.setAccessType("outputOnly")
field79.setType("MFColor")

Script77.addField(field79)

Script77.setSourceCode('''ecmascript:

function colorInput (eventValue) // Example source code
{
   colorsOutput = new MFColor(eventValue); // assigning value sends output event
// Browser.print('colorInput=' + eventValue + ',
//                colorsOutput=' + colorsOutput + '
');
// TODO check line wrapping when exporting/converting
}''')

Group75.addChild(Script77)
ColorInterpolator80 = x3d.ColorInterpolator()
ColorInterpolator80.setDEF("ColorAnimator")
ColorInterpolator80.setKey(x3d.doubleToFloat([0,0.5,1]))
ColorInterpolator80.setKeyValue(x3d.doubleToFloat([0.9412,1,1,0.2941,0,0.5098,0.9412,1,1]))

ColorInterpolator80.addComments(x3d.CommentsBlock("""AZURE to INDIGO and back again"""))

Group75.addChild(ColorInterpolator80)
TimeSensor81 = x3d.TimeSensor()
TimeSensor81.setDEF("ColorClock")
TimeSensor81.setCycleInterval(60)
TimeSensor81.setLoop(True)

Group75.addChild(TimeSensor81)
ROUTE82 = x3d.ROUTE()
ROUTE82.setFromField("colorsOutput")
ROUTE82.setFromNode("colorTypeConversionScript")
ROUTE82.setToField("skyColor")
ROUTE82.setToNode("GradualBackground")

Group75.addChild(ROUTE82)
ROUTE83 = x3d.ROUTE()
ROUTE83.setFromField("value_changed")
ROUTE83.setFromNode("ColorAnimator")
ROUTE83.setToField("colorInput")
ROUTE83.setToNode("colorTypeConversionScript")

Group75.addChild(ROUTE83)
ROUTE84 = x3d.ROUTE()
ROUTE84.setFromField("fraction_changed")
ROUTE84.setFromNode("ColorClock")
ROUTE84.setToField("set_fraction")
ROUTE84.setToNode("ColorAnimator")

Group75.addChild(ROUTE84)

Scene32.addChild(Group75)
ProtoDeclare85 = x3d.ProtoDeclare()
ProtoDeclare85.setName("ArtDeco01")
ProtoDeclare85.setAppinfo("tooltip: ArtDeco01Material prototype is a Material node")
ProtoInterface86 = x3d.ProtoInterface()
field87 = x3d.field()
field87.setName("description")
field87.setAccessType("inputOutput")
field87.setAppinfo("tooltip for descriptionField")
field87.setType("SFString")
field87.setValue("ArtDeco01Material prototype is a Material node")

ProtoInterface86.addField(field87)
field88 = x3d.field()
field88.setName("enabled")
field88.setAccessType("inputOutput")
field88.setType("SFBool")
field88.setValue("true")

ProtoInterface86.addField(field88)

ProtoDeclare85.setProtoInterface(ProtoInterface86)
ProtoBody89 = x3d.ProtoBody()

ProtoBody89.addComments(x3d.CommentsBlock("""Initial node of ProtoBody determines prototype node type"""))
Material90 = x3d.Material()
Material90.setAmbientIntensity(0.25)
Material90.setDiffuseColor(x3d.doubleToFloat([0.2824,0.0852,0.1345]))
Material90.setShininess(0.1273)
Material90.setSpecularColor(x3d.doubleToFloat([0.2763,0.1143,0.1399]))

ProtoBody89.addChild(Material90)

ProtoBody89.addComments(x3d.CommentsBlock("""[SmokeTestProgram diagnostic] should be connected to scene graph: artDeco01ProtoDeclare.getNodeType()=\"Material\""""))

ProtoBody89.addComments(x3d.CommentsBlock("""presence of follow-on TouchSensor shows that additional nodes are allowed in ProtoBody after initial node, regardless of node types"""))
TouchSensor91 = x3d.TouchSensor()
TouchSensor91.setDescription("within ProtoBody")
IS92 = x3d.IS()
connect93 = x3d.connect()
connect93.setNodeField("description")
connect93.setProtoField("description")

IS92.addConnect(connect93)
connect94 = x3d.connect()
connect94.setNodeField("enabled")
connect94.setProtoField("enabled")

IS92.addConnect(connect94)

TouchSensor91.setIS(IS92)

ProtoBody89.addChild(TouchSensor91)

ProtoDeclare85.setProtoBody(ProtoBody89)

Scene32.addChild(ProtoDeclare85)
ExternProtoDeclare95 = x3d.ExternProtoDeclare()
ExternProtoDeclare95.setName("ArtDeco02")
ExternProtoDeclare95.setAppinfo("this is a different Material node")
ExternProtoDeclare95.setUrl(["https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d#ArtDeco02","https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3dv#ArtDeco02"])

ExternProtoDeclare95.addComments(x3d.CommentsBlock("""[SmokeTestProgram diagnostic] artDeco02ExternProtoDeclare.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02' type cannot be remotely accessed at run time. TODO X3DJSAIL needs to add further capability that retrieves the ExternProtoDeclare file.\""""))
field96 = x3d.field()
field96.setName("description")
field96.setAccessType("inputOutput")
field96.setAppinfo("tooltip for descriptionField")
field96.setType("SFString")

ExternProtoDeclare95.addField(field96)

Scene32.addChild(ExternProtoDeclare95)

Scene32.addComments(x3d.CommentsBlock("""Tested ArtDeco01ProtoInstance, ArtDeco02ProtoInstance for improper node type when ProtoInstance is added in wrong place"""))
Shape97 = x3d.Shape()
Shape97.setDEF("TestShape1")
Appearance98 = x3d.Appearance()
Appearance98.setDEF("TestAppearance1")

Appearance98.addComments(x3d.CommentsBlock("""ArtDeco01Material prototype goes here..."""))
ProtoInstance99 = x3d.ProtoInstance()
ProtoInstance99.setName("ArtDeco01")

ProtoInstance99.addComments(x3d.CommentsBlock("""[SmokeTestProgram diagnostic] ArtDeco01ProtoInstance.getNodeType()=\"Material\""""))
fieldValue100 = x3d.fieldValue()
fieldValue100.setName("description")
fieldValue100.setValue("ArtDeco01Material can substitute for a Material node")

ProtoInstance99.addFieldValue(fieldValue100)

Appearance98.setMaterial(ProtoInstance99)

Shape97.setAppearance(Appearance98)
Sphere101 = x3d.Sphere()
Sphere101.setRadius(0.001)

Shape97.setGeometry(Sphere101)

Scene32.addChild(Shape97)
Shape102 = x3d.Shape()
Shape102.setDEF("TestShape2")
Appearance103 = x3d.Appearance()
Appearance103.setDEF("TestAppearance2")

Appearance103.addComments(x3d.CommentsBlock("""ArtDeco02Material ProtoInstance goes here..."""))
ProtoInstance104 = x3d.ProtoInstance()
ProtoInstance104.setName("ArtDeco02")
ProtoInstance104.setDEF("ArtDeco02MaterialDEF")

ProtoInstance104.addComments(x3d.CommentsBlock("""[SmokeTestProgram diagnostic] ArtDeco02ProtoInstance.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02' type cannot be remotely accessed at run time. TODO X3DJSAIL needs to add further capability that retrieves the ExternProtoDeclare file.\""""))

Appearance103.setMaterial(ProtoInstance104)

Shape102.setAppearance(Appearance103)
Cone105 = x3d.Cone()
Cone105.setBottomRadius(0.001)
Cone105.setHeight(0.001)

Shape102.setGeometry(Cone105)

Scene32.addChild(Shape102)
Shape106 = x3d.Shape()
Shape106.setDEF("TestShape3")
Appearance107 = x3d.Appearance()
Appearance107.setDEF("TestAppearance3")

Appearance107.addComments(x3d.CommentsBlock("""ArtDeco02Material ProtoInstance USE goes here. Note that name field is REQUIRED as part of ProtoInstance USE."""))
ProtoInstance108 = x3d.ProtoInstance()
ProtoInstance108.setName("ArtDeco02")
ProtoInstance108.setUSE("ArtDeco02MaterialDEF")

Appearance107.setMaterial(ProtoInstance108)

Shape106.setAppearance(Appearance107)
Cylinder109 = x3d.Cylinder()
Cylinder109.setHeight(0.001)
Cylinder109.setRadius(0.001)

Shape106.setGeometry(Cylinder109)

Scene32.addChild(Shape106)
Inline110 = x3d.Inline()
Inline110.setDEF("inlineScene")
Inline110.setUrl(["newScene.x3d","https://www.web3d.org/specifications/java/examples/newScene.x3d"])

Scene32.addChild(Inline110)
IMPORT111 = x3d.IMPORT()
IMPORT111.setAS("WorldInfoDEF2")
IMPORT111.setImportedDEF("WorldInfoDEF")
IMPORT111.setInlineDEF("inlineScene")

Scene32.addChild(IMPORT111)
EXPORT112 = x3d.EXPORT()
EXPORT112.setAS("WorldInfoDEF3")
EXPORT112.setLocalDEF("WorldInfoDEF")

Scene32.addChild(EXPORT112)
ProtoDeclare113 = x3d.ProtoDeclare()
ProtoDeclare113.setName("MaterialModulator")
ProtoDeclare113.setAppinfo("mimic a Material node and modulate fields as an animation effect")
ProtoDeclare113.setDocumentation("https://x3dgraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorIndex.html")
ProtoInterface114 = x3d.ProtoInterface()
field115 = x3d.field()
field115.setName("enabled")
field115.setAccessType("inputOutput")
field115.setType("SFBool")
field115.setValue("true")

ProtoInterface114.addField(field115)
field116 = x3d.field()
field116.setName("diffuseColor")
field116.setAccessType("inputOutput")
field116.setType("SFColor")
field116.setValue("0 0 0")

ProtoInterface114.addField(field116)
field117 = x3d.field()
field117.setName("emissiveColor")
field117.setAccessType("inputOutput")
field117.setType("SFColor")
field117.setValue("0.05 0.05 0.5")

ProtoInterface114.addField(field117)
field118 = x3d.field()
field118.setName("specularColor")
field118.setAccessType("inputOutput")
field118.setType("SFColor")
field118.setValue("0 0 0")

ProtoInterface114.addField(field118)
field119 = x3d.field()
field119.setName("transparency")
field119.setAccessType("inputOutput")
field119.setType("SFFloat")
field119.setValue("0")

ProtoInterface114.addField(field119)
field120 = x3d.field()
field120.setName("shininess")
field120.setAccessType("inputOutput")
field120.setType("SFFloat")
field120.setValue("0")

ProtoInterface114.addField(field120)
field121 = x3d.field()
field121.setName("ambientIntensity")
field121.setAccessType("inputOutput")
field121.setType("SFFloat")
field121.setValue("0")

ProtoInterface114.addField(field121)

ProtoDeclare113.setProtoInterface(ProtoInterface114)
ProtoBody122 = x3d.ProtoBody()
Material123 = x3d.Material()
Material123.setDEF("MaterialNode")
IS124 = x3d.IS()
connect125 = x3d.connect()
connect125.setNodeField("diffuseColor")
connect125.setProtoField("diffuseColor")

IS124.addConnect(connect125)
connect126 = x3d.connect()
connect126.setNodeField("emissiveColor")
connect126.setProtoField("emissiveColor")

IS124.addConnect(connect126)
connect127 = x3d.connect()
connect127.setNodeField("specularColor")
connect127.setProtoField("specularColor")

IS124.addConnect(connect127)
connect128 = x3d.connect()
connect128.setNodeField("transparency")
connect128.setProtoField("transparency")

IS124.addConnect(connect128)
connect129 = x3d.connect()
connect129.setNodeField("shininess")
connect129.setProtoField("shininess")

IS124.addConnect(connect129)
connect130 = x3d.connect()
connect130.setNodeField("ambientIntensity")
connect130.setProtoField("ambientIntensity")

IS124.addConnect(connect130)

Material123.setIS(IS124)

ProtoBody122.addChild(Material123)

ProtoBody122.addComments(x3d.CommentsBlock("""Only first node (the node type for the prototype) is renderable, others are along for the ride"""))
Script131 = x3d.Script()
Script131.setDEF("MaterialModulatorScript")
field132 = x3d.field()
field132.setName("enabled")
field132.setAccessType("inputOutput")
field132.setType("SFBool")

Script131.addField(field132)
field133 = x3d.field()
field133.setName("diffuseColor")
field133.setAccessType("inputOutput")
field133.setType("SFColor")

Script131.addField(field133)
field134 = x3d.field()
field134.setName("newColor")
field134.setAccessType("outputOnly")
field134.setType("SFColor")

Script131.addField(field134)
field135 = x3d.field()
field135.setName("clockTrigger")
field135.setAccessType("inputOnly")
field135.setType("SFTime")

Script131.addField(field135)
IS136 = x3d.IS()
connect137 = x3d.connect()
connect137.setNodeField("enabled")
connect137.setProtoField("enabled")

IS136.addConnect(connect137)
connect138 = x3d.connect()
connect138.setNodeField("diffuseColor")
connect138.setProtoField("diffuseColor")

IS136.addConnect(connect138)

Script131.setIS(IS136)

Script131.setSourceCode('''ecmascript:
function initialize ()
{
    newColor = diffuseColor; // start with correct color
}
function set_enabled (newValue)
{
	enabled = newValue;
}
function clockTrigger (timeValue)
{
    if (!enabled) return;
    red   = newColor.r;
    green = newColor.g;
    blue  = newColor.b;

    // note different modulation rates for each color component, % is modulus operator
    newColor = new SFColor ((red + 0.02) % 1, (green + 0.03) % 1, (blue + 0.04) % 1);
	if (enabled)
	{
		Browser.print ('diffuseColor=(' + red + ',' + green + ',' + blue + ') newColor=' + newColor.toString() + '\\n');
	}
}''')

ProtoBody122.addChild(Script131)

ProtoDeclare113.setProtoBody(ProtoBody122)

Scene32.addChild(ProtoDeclare113)

Scene32.addComments(x3d.CommentsBlock("""Test success: declarative statement createDeclarativeShapeTests()"""))
Group139 = x3d.Group()
Group139.setDEF("DeclarativeGroupExample")
Shape140 = x3d.Shape()
MetadataString141 = x3d.MetadataString()
MetadataString141.setName("findThisNameValue")
MetadataString141.setDEF("FindableMetadataStringTest")
MetadataString141.setValue(["test case"])

Shape140.setMetadata(MetadataString141)
Appearance142 = x3d.Appearance()
Appearance142.setDEF("DeclarativeAppearanceExample")

Appearance142.addComments(x3d.CommentsBlock("""DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance"""))
ProtoInstance143 = x3d.ProtoInstance()
ProtoInstance143.setName("MaterialModulator")
ProtoInstance143.setDEF("MyMaterialModulator")

Appearance142.setMaterial(ProtoInstance143)

Shape140.setAppearance(Appearance142)
Cone144 = x3d.Cone()
Cone144.setBottom(False)
Cone144.setBottomRadius(0.05)
Cone144.setHeight(0.1)

Shape140.setGeometry(Cone144)

Group139.addChild(Shape140)

Group139.addComments(x3d.CommentsBlock("""Test success: declarativeGroup.addChild() singleton pipeline method"""))

Scene32.addChild(Group139)

Scene32.addComments(x3d.CommentsBlock("""Test success: declarative statement addChild()"""))

Scene32.addComments(x3d.CommentsBlock("""Test success: x3dModel.findNodeByDEF(DeclarativeAppearanceExample) = <Appearance DEF='DeclarativeAppearanceExample'/> i.e. <Appearance DEF='DeclarativeAppearanceExample'> <!- - DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance - -> <ProtoInstance DEF='MyMaterialModulator' containerField='material' name='MaterialModulator'/> </Appearance>"""))

Scene32.addComments(x3d.CommentsBlock("""Test success: x3dModel.findElementByNameValue(findThisNameValue) = <MetadataString DEF='FindableMetadataStringTest' name='findThisNameValue' value='\"test case\"'/>"""))

Scene32.addComments(x3d.CommentsBlock("""Test success: x3dModel.findElementByNameValue(\"ArtDeco01\", \"ProtoDeclare\") found"""))

Scene32.addComments(x3d.CommentsBlock("""Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoDeclare\") found"""))

Scene32.addComments(x3d.CommentsBlock("""Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoInstance\") found"""))
Group145 = x3d.Group()
Group145.setDEF("TestFieldObjectsGroup")

Group145.addComments(x3d.CommentsBlock("""testFieldObjects() results"""))

Group145.addComments(x3d.CommentsBlock("""SFBool default=false, true=true, false=false, negate()=true"""))

Group145.addComments(x3d.CommentsBlock("""MFBool default=, initial=true false true, negate()=false true false"""))

Group145.addComments(x3d.CommentsBlock("""SFFloat default=0.0, initial=1, setValue(2)=2, setValue(3.0f)=3, setValue(4.0)=4"""))

Group145.addComments(x3d.CommentsBlock("""MFFloat default=, initial=1 2 3, append(5)=1 2 3 5, inserts(3,4)(0,0)=0 1 2 3 4 5, append(6)=0 1 2 3 4 5 6, size()=7"""))

Group145.addComments(x3d.CommentsBlock("""... get1Value[3]=3.0, remove[1]=0 2 3 4 5 6, set1Value(0,10)=10 2 3 4 5 6, multiply(2)=20 4 6 8 10 12, clear="""))

Group145.addComments(x3d.CommentsBlock("""SFVec3f default=0 0 0, initial=1 2 3, setValue=4 5 6, multiply(2)=8 10 12, normalize()=0.4558 0.5698 0.6838, regex matches()=true"""))

Group145.addComments(x3d.CommentsBlock("""regex test SFVec3f().matches(\"1 2 3\")=true, regex test SFVec3f().matches(\"1 2 3 4\")=false, regex test (SFRotation.matches(\"0 0 0 0\")=true, failure detecting illegal (zero axis) rotation value"""))

Scene32.addChild(Group145)
Sound146 = x3d.Sound()
Sound146.setLocation(x3d.doubleToFloat([0,1.6,0]))

Sound146.addComments(x3d.CommentsBlock("""set sound-ellipsoid location height at 1.6m to match typical avatar height"""))
AudioClip147 = x3d.AudioClip()
AudioClip147.setDescription("chimes")
AudioClip147.setUrl(["chimes.wav","https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav"])

AudioClip147.addComments(x3d.CommentsBlock("""Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/default.x3d"""))

Sound146.setSource(AudioClip147)

Scene32.addChild(Sound146)
Sound148 = x3d.Sound()
Sound148.setLocation(x3d.doubleToFloat([0,1.6,0]))

Sound148.addComments(x3d.CommentsBlock("""set sound-ellipsoid location height at 1.6m to match typical avatar height"""))
MovieTexture149 = x3d.MovieTexture()
MovieTexture149.setDescription("mpgsys.mpg from ConformanceNist suite")
MovieTexture149.setUrl(["mpgsys.mpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpgsys.mpg"])

MovieTexture149.addComments(x3d.CommentsBlock("""Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpeg1-systems.x3d"""))

MovieTexture149.addComments(x3d.CommentsBlock("""Expected containerField='source', allowed containerField values=\"texture\" \"source\" \"back\" \"bottom\" \"front\" \"left\" \"right\" \"top\" \"backTexture\" \"bottomTexture\" \"frontTexture\" \"leftTexture\" \"rightTexture\" \"topTexture\" \"children\""""))

Sound148.setSource(MovieTexture149)

Scene32.addChild(Sound148)

Scene32.addComments(x3d.CommentsBlock("""Test success: Anchor.isNode()=true, siteAnchor.isNode()=true"""))

Scene32.addComments(x3d.CommentsBlock("""Test success: Anchor.isStatement()=false, siteAnchor.isStatement()=false"""))

Scene32.addComments(x3d.CommentsBlock("""Test success: ROUTE.isNode()=false, orbitPositionROUTE.isNode()=false"""))

Scene32.addComments(x3d.CommentsBlock("""Test success: ROUTE.isStatement()=true, orbitPositionROUTE.isStatement()=true"""))

Scene32.addComments(x3d.CommentsBlock("""Test success: CommentsBlock.isNode()=false, testComments.isNode()=false"""))

Scene32.addComments(x3d.CommentsBlock("""Test failure: CommentsBlock.isStatement()=true, testComments.isStatement()=true"""))
Shape150 = x3d.Shape()
Shape150.setDEF("ExtrusionShape")

Shape150.addComments(x3d.CommentsBlock("""ExampleExtrusion isCrossSectionClosed()=true, crossSection='[1.0, 1.0, 1.0, -1.0, -1.0, -1.0, -1.0, 1.0, 1.0, 1.0]'"""))

Shape150.addComments(x3d.CommentsBlock("""ExampleExtrusion isSpineClosed()=false, spine='[0.0, 0.0, 0.0, 0.0, 1.0, 0.0]'"""))
Appearance151 = x3d.Appearance()
Appearance151.setDEF("TransparentAppearance")
Material152 = x3d.Material()
Material152.setTransparency(1)

Appearance151.setMaterial(Material152)

Shape150.setAppearance(Appearance151)
Extrusion153 = x3d.Extrusion()
Extrusion153.setDEF("ExampleExtrusion")

Shape150.setGeometry(Extrusion153)

Scene32.addChild(Shape150)
Group154 = x3d.Group()

Group154.addComments(x3d.CommentsBlock("""Test MFNode children array as an ordered list consisting of comments, statements, ProtoInstance and nodes"""))
ProtoDeclare155 = x3d.ProtoDeclare()
ProtoDeclare155.setName("NewWorldInfo")
ProtoInterface156 = x3d.ProtoInterface()
field157 = x3d.field()
field157.setName("description")
field157.setAccessType("initializeOnly")
field157.setType("SFString")

ProtoInterface156.addField(field157)

ProtoDeclare155.setProtoInterface(ProtoInterface156)
ProtoBody158 = x3d.ProtoBody()
WorldInfo159 = x3d.WorldInfo()

ProtoBody158.addChild(WorldInfo159)

ProtoDeclare155.setProtoBody(ProtoBody158)

Group154.addChild(ProtoDeclare155)
ProtoInstance160 = x3d.ProtoInstance()
ProtoInstance160.setName("NewWorldInfo")
ProtoInstance160.setDEF("Proto1")
fieldValue161 = x3d.fieldValue()
fieldValue161.setName("description")
fieldValue161.setValue("testing 1 2 3")

ProtoInstance160.addFieldValue(fieldValue161)

Group154.addChild(ProtoInstance160)
Group162 = x3d.Group()
Group162.setDEF("Node2")

Group162.addComments(x3d.CommentsBlock("""intentionally empty"""))

Group154.addChild(Group162)
ProtoInstance163 = x3d.ProtoInstance()
ProtoInstance163.setName("NewWorldInfo")
ProtoInstance163.setDEF("Proto3")

Group154.addChild(ProtoInstance163)
Transform164 = x3d.Transform()
Transform164.setDEF("Node4")

Transform164.addComments(x3d.CommentsBlock("""intentionally empty"""))

Group154.addChild(Transform164)

Group154.addComments(x3d.CommentsBlock("""Test satisfactorily creates MFNode children array as an ordered list with mixed content"""))

Scene32.addChild(Group154)
ProtoDeclare165 = x3d.ProtoDeclare()
ProtoDeclare165.setName("ShaderProto")
ProtoBody166 = x3d.ProtoBody()
ProgramShader167 = x3d.ProgramShader()

ProtoBody166.addChild(ProgramShader167)

ProtoDeclare165.setProtoBody(ProtoBody166)

Scene32.addChild(ProtoDeclare165)
Shape168 = x3d.Shape()
Appearance169 = x3d.Appearance()

Appearance169.addComments(x3d.CommentsBlock("""Test MFNode shaders array as an ordered list consisting of comments, ProtoInstance and nodes"""))

Appearance169.addComments(x3d.CommentsBlock("""Test satisfactorily creates MFNode shaders array as an ordered list with mixed content"""))
ProgramShader170 = x3d.ProgramShader()
ProgramShader170.setDEF("TestShader1")
ShaderProgram171 = x3d.ShaderProgram()
ShaderProgram171.setDEF("TestShader2")
ShaderProgram171.setType("VERTEX")

ProgramShader170.addPrograms(ShaderProgram171)

Appearance169.addShaders(ProgramShader170)
ProtoInstance172 = x3d.ProtoInstance()
ProtoInstance172.setName("ShaderProto")
ProtoInstance172.setDEF("TestShader3")

Appearance169.addShaders(ProtoInstance172)
ComposedShader173 = x3d.ComposedShader()
ComposedShader173.setDEF("TestShader4")
ShaderPart174 = x3d.ShaderPart()
ShaderPart174.setDEF("TestShader5")
ShaderPart174.setType("VERTEX")

ComposedShader173.addParts(ShaderPart174)

Appearance169.addShaders(ComposedShader173)

Shape168.setAppearance(Appearance169)

Scene32.addChild(Shape168)
Transform175 = x3d.Transform()
Transform175.setDEF("SpecialtyNodes")
CADLayer176 = x3d.CADLayer()
CADAssembly177 = x3d.CADAssembly()
CADPart178 = x3d.CADPart()
CADFace179 = x3d.CADFace()

CADPart178.addChild(CADFace179)

CADAssembly177.addChild(CADPart178)

CADLayer176.addChild(CADAssembly177)

Transform175.addChild(CADLayer176)
EspduTransform180 = x3d.EspduTransform()

Transform175.addChild(EspduTransform180)
ReceiverPdu181 = x3d.ReceiverPdu()

Transform175.addChild(ReceiverPdu181)
SignalPdu182 = x3d.SignalPdu()

Transform175.addChild(SignalPdu182)
TransmitterPdu183 = x3d.TransmitterPdu()

Transform175.addChild(TransmitterPdu183)
DISEntityManager184 = x3d.DISEntityManager()
DISEntityTypeMapping185 = x3d.DISEntityTypeMapping()

DISEntityManager184.addChild(DISEntityTypeMapping185)

Transform175.addChild(DISEntityManager184)

Scene32.addChild(Transform175)
EspduTransform186 = x3d.EspduTransform()
WorldInfo187 = x3d.WorldInfo()

EspduTransform186.addChild(WorldInfo187)

Scene32.addChild(EspduTransform186)
ReceiverPdu188 = x3d.ReceiverPdu()

Scene32.addChild(ReceiverPdu188)
SignalPdu189 = x3d.SignalPdu()

Scene32.addChild(SignalPdu189)
TransmitterPdu190 = x3d.TransmitterPdu()

Scene32.addChild(TransmitterPdu190)
DISEntityManager191 = x3d.DISEntityManager()
DISEntityTypeMapping192 = x3d.DISEntityTypeMapping()

DISEntityManager191.addChild(DISEntityTypeMapping192)

Scene32.addChild(DISEntityManager191)
LoadSensor193 = x3d.LoadSensor()

LoadSensor193.addComments(x3d.CommentsBlock("""Contained nodes typically must be USE references for nodes previously DEFined in the scene"""))

LoadSensor193.addComments(x3d.CommentsBlock("""The following nodes are test cases for all X3DUrlObject nodes"""))
Anchor194 = x3d.Anchor()
Anchor194.setUSE("siteAnchor")

LoadSensor193.addChild(Anchor194)
Inline195 = x3d.Inline()
Inline195.setUSE("inlineScene")

LoadSensor193.addChild(Inline195)
DISEntityTypeMapping196 = x3d.DISEntityTypeMapping()

LoadSensor193.addChild(DISEntityTypeMapping196)
GeoMetadata197 = x3d.GeoMetadata()

LoadSensor193.addChild(GeoMetadata197)
AudioClip198 = x3d.AudioClip()

LoadSensor193.addChild(AudioClip198)
ImageCubeMapTexture199 = x3d.ImageCubeMapTexture()

LoadSensor193.addChild(ImageCubeMapTexture199)
ImageTexture3D200 = x3d.ImageTexture3D()

LoadSensor193.addChild(ImageTexture3D200)
ImageTexture201 = x3d.ImageTexture()

LoadSensor193.addChild(ImageTexture201)
MovieTexture202 = x3d.MovieTexture()

LoadSensor193.addChild(MovieTexture202)
Script203 = x3d.Script()
Script203.setDEF("DummyScript")

Script203.setSourceCode('''ecmascript:
/* dummy test source code */''')

LoadSensor193.addChild(Script203)
PackagedShader204 = x3d.PackagedShader()

LoadSensor193.addChild(PackagedShader204)
ShaderPart205 = x3d.ShaderPart()
ShaderPart205.setType("VERTEX")

LoadSensor193.addChild(ShaderPart205)
ShaderProgram206 = x3d.ShaderProgram()
ShaderProgram206.setType("VERTEX")

LoadSensor193.addChild(ShaderProgram206)

Scene32.addChild(LoadSensor193)
OrthoViewpoint207 = x3d.OrthoViewpoint()
OrthoViewpoint207.setDEF("SpecialTestOrthoViewpoint")
OrthoViewpoint207.setFieldOfView(x3d.doubleToFloat([1,3,2,4]))

Scene32.addChild(OrthoViewpoint207)

X3D0.setScene(Scene32)
X3D0.toFileX3D("../data/SmokeTestProgramOutput.new.graalpy.x3d")
X3D0.toFileJSON("../data/SmokeTestProgramOutput.new.graalpy.x3dj")
