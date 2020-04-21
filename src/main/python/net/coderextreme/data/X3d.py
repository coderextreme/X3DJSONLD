# -*- coding: UTF-8 -*-
from x3dpsail import *
X3D0 = X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
head1 = head()
#comment #1
#comment #2
#comment #3
#comment #4
component2 = component()
component2.setName("Navigation")
component2.setLevel(3)

head1.addComponent(component2)
component3 = component()
component3.setName("Layering")
component3.setLevel(1)

head1.addComponent(component3)
unit4 = unit()
unit4.setName("AngleUnitConversion")
unit4.setCategory("angle")
unit4.setConversionFactor(1)

head1.addUnit(unit4)
unit5 = unit()
unit5.setName("LengthUnitConversion")
unit5.setCategory("length")
unit5.setConversionFactor(1)

head1.addUnit(unit5)
meta6 = meta()
meta6.setName("title")
meta6.setContent("Java.x3d")

head1.addMeta(meta6)
meta7 = meta()
meta7.setName("description")
meta7.setContent("Example HelloWorldProgram creates an X3D model using the X3D Java Scene Access Interface (SAI) Library")

head1.addMeta(meta7)
meta8 = meta()
meta8.setName("reference")
meta8.setContent("http://www.web3d.org/specifications/java/X3DJSAIL.html")

head1.addMeta(meta8)
meta9 = meta()
meta9.setName("generator")
meta9.setContent("Java.java")

head1.addMeta(meta9)
meta10 = meta()
meta10.setName("created")
meta10.setContent("6 September 2016")

head1.addMeta(meta10)
meta11 = meta()
meta11.setName("modified")
meta11.setContent("6 June 2018")

head1.addMeta(meta11)
meta12 = meta()
meta12.setName("generator")
meta12.setContent("X3D Java Scene Access Interface Library (X3DJSAIL)")

head1.addMeta(meta12)
meta13 = meta()
meta13.setName("generator")
meta13.setContent("http://www.web3d.org/specifications/java/examples/HelloWorldProgram.java")

head1.addMeta(meta13)
meta14 = meta()
meta14.setName("generator")
meta14.setContent("Netbeans http://www.netbeans.org")

head1.addMeta(meta14)
meta15 = meta()
meta15.setName("creator")
meta15.setContent("Don Brutzman")

head1.addMeta(meta15)
meta16 = meta()
meta16.setName("reference")
meta16.setContent("https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/java/examples/Java.x3d")

head1.addMeta(meta16)
meta17 = meta()
meta17.setName("reference")
meta17.setContent("Console output, ClassicVRML encoding, VRML97 encoding and pretty-print documentation:")

head1.addMeta(meta17)
meta18 = meta()
meta18.setName("reference")
meta18.setContent("Java.txt")

head1.addMeta(meta18)
meta19 = meta()
meta19.setName("reference")
meta19.setContent("Java.x3dv")

head1.addMeta(meta19)
meta20 = meta()
meta20.setName("reference")
meta20.setContent("Java.wrl")

head1.addMeta(meta20)
meta21 = meta()
meta21.setName("reference")
meta21.setContent("Java.html")

head1.addMeta(meta21)
meta22 = meta()
meta22.setName("X3dValidator")
meta22.setContent("https://savage.nps.edu/X3dValidator?url=http://www.web3d.org/specifications/java/examples/Java.x3d")

head1.addMeta(meta22)
meta23 = meta()
meta23.setName("identifier")
meta23.setContent("http://www.web3d.org/specifications/java/examples/Java.x3d")

head1.addMeta(meta23)
meta24 = meta()
meta24.setName("license")
meta24.setContent("../license.html")

head1.addMeta(meta24)
meta25 = meta()
meta25.setName("SpecialTest")
meta25.setContent("tested sat: name value cannot contain embedded space character")

head1.addMeta(meta25)

X3D0.setHead(head1)
Scene26 = Scene()
ViewpointGroup27 = ViewpointGroup()
ViewpointGroup27.setDescription("Available viewpoints")
Viewpoint28 = Viewpoint()
Viewpoint28.setDEF("DefaultView")
Viewpoint28.setDescription("Hello X3DJSAIL")

ViewpointGroup27.addChildren(Viewpoint28)
Viewpoint29 = Viewpoint()
Viewpoint29.setDEF("TopDownView")
Viewpoint29.setDescription("top-down view from above")
Viewpoint29.setOrientation([1,0,0,-1.570796])
Viewpoint29.setPosition([0,100,0])

ViewpointGroup27.addChildren(Viewpoint29)

Scene26.addChildren(ViewpointGroup27)
WorldInfo30 = WorldInfo()
WorldInfo30.setDEF("WorldInfoDEF")
WorldInfo30.setTitle("HelloWorldProgram produced by X3D Java SAI Library (X3DJSAIL)")

Scene26.addChildren(WorldInfo30)
WorldInfo31 = WorldInfo()
WorldInfo31.setUSE("WorldInfoDEF")

Scene26.addChildren(WorldInfo31)
WorldInfo32 = WorldInfo()
WorldInfo32.setUSE("WorldInfoDEF")

Scene26.addChildren(WorldInfo32)
MetadataString33 = MetadataString()
MetadataString33.setName("test")
MetadataString33.setDEF("scene.addChildMetadata")
MetadataString33.setValue(["Top-level root Metadata node beneath Scene needs to be one of '-children' in JSON encoding"])

Scene26.addMetadata(MetadataString33)
LayerSet34 = LayerSet()
LayerSet34.setDEF("scene.addChildLayerSetTest")

Scene26.addLayerSet(LayerSet34)
Transform35 = Transform()
Transform35.setDEF("LogoGeometryTransform")
Transform35.setTranslation([0,1.5,0])
Anchor36 = Anchor()
Anchor36.setDescription("select for X3D Java SAI Library (X3DJSAIL) description")
Anchor36.setUrl(["../X3DJSAIL.html","http://www.web3d.org/specifications/java/X3DJSAIL.html"])
Shape37 = Shape()
Shape37.setDEF("BoxShape")
Appearance38 = Appearance()
Material39 = Material()
Material39.setDEF("GreenMaterial")
Material39.setDiffuseColor([0,1,1])
Material39.setEmissiveColor([0.8,0,0])
Material39.setTransparency(0.1)

Appearance38.setMaterial(Material39)
ImageTexture40 = ImageTexture()
ImageTexture40.setUrl(["images/X3dJavaSceneAccessInterfaceSaiLibrary.png","http://www.web3d.org/specifications/java/examples/images/X3dJavaSceneAccessInterfaceSaiLibrary.png"])

Appearance38.setTexture(ImageTexture40)

Shape37.setAppearance(Appearance38)
Box41 = Box()
Box41.setDEF("test-NMTOKEN_regex.0123456789")
Box41.setClass("untextured")

Shape37.setGeometry(Box41)

Anchor36.addChildren(Shape37)

Transform35.addChildren(Anchor36)

Scene26.addChildren(Transform35)
Shape42 = Shape()
Shape42.setDEF("LineShape")
Appearance43 = Appearance()
Material44 = Material()
Material44.setEmissiveColor([0.6,0.19607843,0.8])

Appearance43.setMaterial(Material44)

Shape42.setAppearance(Appearance43)
IndexedLineSet45 = IndexedLineSet()
IndexedLineSet45.setCoordIndex([0,1,2,3,4,0])
#Coordinate 3-tuple point count: 6
Coordinate46 = Coordinate()
Coordinate46.setPoint([0,1.5,0,2,1.5,0,2,1.5,-2,-2,1.5,-2,-2,1.5,0,0,1.5,0])

IndexedLineSet45.setCoord(Coordinate46)

Shape42.setGeometry(IndexedLineSet45)

Scene26.addChildren(Shape42)
PositionInterpolator47 = PositionInterpolator()
PositionInterpolator47.setDEF("BoxPathAnimator")
PositionInterpolator47.setKey([0,0.125,0.375,0.625,0.875,1])
PositionInterpolator47.setKeyValue([0,1.5,0,2,1.5,0,2,1.5,-2,-2,1.5,-2,-2,1.5,0,0,1.5,0])

Scene26.addChildren(PositionInterpolator47)
TimeSensor48 = TimeSensor()
TimeSensor48.setDEF("OrbitClock")
TimeSensor48.setCycleInterval(8)
TimeSensor48.setLoop(True)

Scene26.addChildren(TimeSensor48)
ROUTE49 = ROUTE()
ROUTE49.setFromField("fraction_changed")
ROUTE49.setFromNode("OrbitClock")
ROUTE49.setToField("set_fraction")
ROUTE49.setToNode("BoxPathAnimator")

Scene26.addChildren(ROUTE49)
ROUTE50 = ROUTE()
ROUTE50.setFromField("value_changed")
ROUTE50.setFromNode("BoxPathAnimator")
ROUTE50.setToField("set_translation")
ROUTE50.setToNode("LogoGeometryTransform")

Scene26.addChildren(ROUTE50)
Transform51 = Transform()
Transform51.setDEF("TextTransform")
Transform51.setTranslation([0,-1.5,0])
Shape52 = Shape()
Appearance53 = Appearance()
Material54 = Material()
Material54.setUSE("GreenMaterial")

Appearance53.setMaterial(Material54)

Shape52.setAppearance(Appearance53)
Text55 = Text()
Text55.setString(["X3D Java","SAI Library","X3DJSAIL"])
#Comment example A, plain quotation marks: He said, \"Immel did it!\"
#Comment example B, XML character entities: He said, &quot;Immel did it!&quot;
MetadataSet56 = MetadataSet()
MetadataSet56.setName("EscapedQuotationMarksMetadataSet")
MetadataString57 = MetadataString()
MetadataString57.setName("quotesTestC")
MetadataString57.setValue(["MFString example C, backslash-escaped quotes: He said, \"Immel did it!\""])

MetadataSet56.addValue(MetadataString57)
MetadataString58 = MetadataString()
MetadataString58.setName("extraChildTest")
MetadataString58.setValue(["checks MetadataSetObject addValue() method"])

MetadataSet56.addValue(MetadataString58)

Text55.setMetadata(MetadataSet56)
FontStyle59 = FontStyle()
FontStyle59.setJustify(["MIDDLE","MIDDLE"])

Text55.setFontStyle(FontStyle59)

Shape52.setGeometry(Text55)

Transform51.addChildren(Shape52)
Collision60 = Collision()
#test containerField='proxy'
Shape61 = Shape()
Shape61.setDEF("ProxyShape")
#alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\"'
#alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\" \"\"'
#alternative Java source: .setString(new String [] {\"One, Two, Comment\", \"\", \"He said, \\\"\"Immel did it!\\\"\"\"})
#reference: http://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamplesIndex.html
Text62 = Text()
Text62.setString(["One, Two, Text","","He said, \"Immel did it!\" \"\""])

Shape61.setGeometry(Text62)

Collision60.setProxy(Shape61)

Transform51.addChildren(Collision60)
#It's a beautiful world
#... for you!
#https://en.wikipedia.org/wiki/Beautiful_World_(Devo_song)

Scene26.addChildren(Transform51)
#repeatedly spin 180 degrees as a readable special effect
OrientationInterpolator63 = OrientationInterpolator()
OrientationInterpolator63.setDEF("SpinInterpolator")
OrientationInterpolator63.setKey([0,0.5,1])
OrientationInterpolator63.setKeyValue([0,1,0,4.712389,0,1,0,0,0,1,0,1.5707964])

Scene26.addChildren(OrientationInterpolator63)
TimeSensor64 = TimeSensor()
TimeSensor64.setDEF("SpinClock")
TimeSensor64.setCycleInterval(5)
TimeSensor64.setLoop(True)

Scene26.addChildren(TimeSensor64)
ROUTE65 = ROUTE()
ROUTE65.setFromField("fraction_changed")
ROUTE65.setFromNode("SpinClock")
ROUTE65.setToField("set_fraction")
ROUTE65.setToNode("SpinInterpolator")

Scene26.addChildren(ROUTE65)
ROUTE66 = ROUTE()
ROUTE66.setFromField("value_changed")
ROUTE66.setFromNode("SpinInterpolator")
ROUTE66.setToField("rotation")
ROUTE66.setToNode("TextTransform")

Scene26.addChildren(ROUTE66)
Group67 = Group()
Group67.setDEF("BackgroundGroup")
Background68 = Background()
Background68.setDEF("GradualBackground")

Group67.addChildren(Background68)
Script69 = Script()
Script69.setDEF("colorTypeConversionScript")
field70 = field()
field70.setName("colorInput")
field70.setAccessType("inputOnly")
field70.setType("SFColor")

Script69.addField(field70)
field71 = field()
field71.setName("colorsOutput")
field71.setAccessType("outputOnly")
field71.setType("MFColor")

Script69.addField(field71)

Script69.setSourceCode('''ecmascript:\n"+
"\n"+
"function colorInput (eventValue) // Example source code\n"+
"{\n"+
"   colorsOutput = new MFColor(eventValue); // assigning value sends output event\n"+
"// Browser.print('colorInput=' + eventValue + ', colorsOutput=' + colorsOutput + '\\n');\n"+
"}''')

Group67.addChildren(Script69)
ColorInterpolator72 = ColorInterpolator()
ColorInterpolator72.setDEF("ColorAnimator")
ColorInterpolator72.setKey([0,0.5,1])
ColorInterpolator72.setKeyValue([0.9411765,1,1,0.29411766,0,0.50980395,0.9411765,1,1])
#AZURE to INDIGO and back again

Group67.addChildren(ColorInterpolator72)
TimeSensor73 = TimeSensor()
TimeSensor73.setDEF("ColorClock")
TimeSensor73.setCycleInterval(60)
TimeSensor73.setLoop(True)

Group67.addChildren(TimeSensor73)
ROUTE74 = ROUTE()
ROUTE74.setFromField("colorsOutput")
ROUTE74.setFromNode("colorTypeConversionScript")
ROUTE74.setToField("skyColor")
ROUTE74.setToNode("GradualBackground")

Group67.addChildren(ROUTE74)
ROUTE75 = ROUTE()
ROUTE75.setFromField("value_changed")
ROUTE75.setFromNode("ColorAnimator")
ROUTE75.setToField("colorInput")
ROUTE75.setToNode("colorTypeConversionScript")

Group67.addChildren(ROUTE75)
ROUTE76 = ROUTE()
ROUTE76.setFromField("fraction_changed")
ROUTE76.setFromNode("ColorClock")
ROUTE76.setToField("set_fraction")
ROUTE76.setToNode("ColorAnimator")

Group67.addChildren(ROUTE76)

Scene26.addChildren(Group67)
ProtoDeclare77 = ProtoDeclare()
ProtoDeclare77.setName("ArtDeco01Material")
ProtoDeclare77.setAppinfo("tooltip: ArtDeco01Material prototype is a Material node")
ProtoInterface78 = ProtoInterface()
field79 = field()
field79.setName("description")
field79.setAccessType("inputOutput")
field79.setAppinfo("tooltip for descriptionField")
field79.setType("SFString")
field79.setValue("ArtDeco01Material prototype is a Material node")

ProtoInterface78.addField(field79)
field80 = field()
field80.setName("enabled")
field80.setAccessType("inputOutput")
field80.setType("SFBool")
field80.setValue("true")

ProtoInterface78.addField(field80)

ProtoDeclare77.setProtoInterface(ProtoInterface78)
ProtoBody81 = ProtoBody()
#Initial node of ProtoBody determines prototype node type
Material82 = Material()
Material82.setAmbientIntensity(0.25)
Material82.setDiffuseColor([0.282435,0.085159,0.134462])
Material82.setShininess(0.127273)
Material82.setSpecularColor([0.276305,0.11431,0.139857])

ProtoBody81.addChildren(Material82)
#[HelloWorldProgram diagnostic] should be connected to scene graph: ArtDeco01ProtoDeclare.getNodeType()=\"Material\"
#presence of follow-on TouchSensor shows that additional nodes are allowed in ProtoBody after initial node, regardless of node types
TouchSensor83 = TouchSensor()
TouchSensor83.setDescription("within ProtoBody")
IS84 = IS()
connect85 = connect()
connect85.setNodeField("description")
connect85.setProtoField("description")

IS84.addConnect(connect85)
connect86 = connect()
connect86.setNodeField("enabled")
connect86.setProtoField("enabled")

IS84.addConnect(connect86)

TouchSensor83.setIS(IS84)

ProtoBody81.addChildren(TouchSensor83)

ProtoDeclare77.setProtoBody(ProtoBody81)

Scene26.addChildren(ProtoDeclare77)
ExternProtoDeclare87 = ExternProtoDeclare()
ExternProtoDeclare87.setName("ArtDeco02Material")
ExternProtoDeclare87.setAppinfo("this is a different Material node")
ExternProtoDeclare87.setUrl(["http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d#ArtDeco02Material","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3dv#ArtDeco02Material"])
#[HelloWorldProgram diagnostic] ArtDeco02ExternProtoDeclare.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time, TODO X3DJSAIL needs to add further capability.\"
field88 = field()
field88.setName("description")
field88.setAccessType("inputOutput")
field88.setAppinfo("tooltip for descriptionField")
field88.setType("SFString")

ExternProtoDeclare87.addField(field88)

Scene26.addChildren(ExternProtoDeclare87)
#Tested ArtDeco01ProtoInstance, ArtDeco02ProtoInstance for improper node type when ProtoInstance is added in wrong place
Shape89 = Shape()
Shape89.setDEF("TestShape1")
Appearance90 = Appearance()
Appearance90.setDEF("TestAppearance1")
#ArtDeco01Material prototype goes here... TODO ensure setContainerField is handled in exported Java
ProtoInstance91 = ProtoInstance()
ProtoInstance91.setName("ArtDeco01Material")
#[HelloWorldProgram diagnostic] ArtDeco01ProtoInstance.getNodeType()=\"Material\"
fieldValue92 = fieldValue()
fieldValue92.setName("description")
fieldValue92.setValue("ArtDeco01Material can substitute for a Material node")

ProtoInstance91.addFieldValue(fieldValue92)

Appearance90.setMaterial(ProtoInstance91)

Shape89.setAppearance(Appearance90)
Sphere93 = Sphere()
Sphere93.setRadius(0.001)

Shape89.setGeometry(Sphere93)

Scene26.addChildren(Shape89)
Shape94 = Shape()
Shape94.setDEF("TestShape2")
Appearance95 = Appearance()
Appearance95.setDEF("TestAppearance2")
#ArtDeco02Material prototype goes here... TODO ensure setContainerField is handled in exported Java
ProtoInstance96 = ProtoInstance()
ProtoInstance96.setName("ArtDeco02Material")
ProtoInstance96.setDEF("ArtDeco02MaterialDEF")
#[HelloWorldProgram diagnostic] ArtDeco02ProtoInstance.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time, TODO X3DJSAIL needs to add further capability.\"
fieldValue97 = fieldValue()
fieldValue97.setName("description")
fieldValue97.setValue("ArtDeco02Material can substitute for another Material node")

ProtoInstance96.addFieldValue(fieldValue97)

Appearance95.setMaterial(ProtoInstance96)

Shape94.setAppearance(Appearance95)
Cone98 = Cone()
Cone98.setBottomRadius(0.001)
Cone98.setHeight(0.001)

Shape94.setGeometry(Cone98)

Scene26.addChildren(Shape94)
Shape99 = Shape()
Shape99.setDEF("TestShape3")
Appearance100 = Appearance()
Appearance100.setDEF("TestAppearance3")
#ArtDeco02Material ProtoInstance USE goes here...
ProtoInstance101 = ProtoInstance()
ProtoInstance101.setUSE("ArtDeco02MaterialDEF")

Appearance100.setMaterial(ProtoInstance101)

Shape99.setAppearance(Appearance100)
Cylinder102 = Cylinder()
Cylinder102.setHeight(0.001)
Cylinder102.setRadius(0.001)

Shape99.setGeometry(Cylinder102)

Scene26.addChildren(Shape99)
Inline103 = Inline()
Inline103.setDEF("inlineSceneDef")
Inline103.setUrl(["someOtherScene.x3d"])

Scene26.addChildren(Inline103)
IMPORT104 = IMPORT()
IMPORT104.setAS("WorldInfoDEF2")
IMPORT104.setImportedDEF("WorldInfoDEF")
IMPORT104.setInlineDEF("inlineSceneDef")

Scene26.addChildren(IMPORT104)
EXPORT105 = EXPORT()
EXPORT105.setAS("WorldInfoDEF3")
EXPORT105.setLocalDEF("WorldInfoDEF")

Scene26.addChildren(EXPORT105)
ProtoDeclare106 = ProtoDeclare()
ProtoDeclare106.setName("MaterialModulator")
ProtoDeclare106.setAppinfo("mimic a Material node and modulate fields as an animation effect")
ProtoDeclare106.setDocumentation("http://x3dgraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorIndex.html")
ProtoInterface107 = ProtoInterface()
field108 = field()
field108.setName("enabled")
field108.setAccessType("inputOutput")
field108.setType("SFBool")
field108.setValue("true")

ProtoInterface107.addField(field108)
field109 = field()
field109.setName("diffuseColor")
field109.setAccessType("inputOutput")
field109.setType("SFColor")
field109.setValue("0 0 0")

ProtoInterface107.addField(field109)
field110 = field()
field110.setName("emissiveColor")
field110.setAccessType("inputOutput")
field110.setType("SFColor")
field110.setValue("0.05 0.05 0.5")

ProtoInterface107.addField(field110)
field111 = field()
field111.setName("specularColor")
field111.setAccessType("inputOutput")
field111.setType("SFColor")
field111.setValue("0 0 0")

ProtoInterface107.addField(field111)
field112 = field()
field112.setName("transparency")
field112.setAccessType("inputOutput")
field112.setType("SFFloat")
field112.setValue("0")

ProtoInterface107.addField(field112)
field113 = field()
field113.setName("shininess")
field113.setAccessType("inputOutput")
field113.setType("SFFloat")
field113.setValue("0")

ProtoInterface107.addField(field113)
field114 = field()
field114.setName("ambientIntensity")
field114.setAccessType("inputOutput")
field114.setType("SFFloat")
field114.setValue("0")

ProtoInterface107.addField(field114)

ProtoDeclare106.setProtoInterface(ProtoInterface107)
ProtoBody115 = ProtoBody()
Material116 = Material()
Material116.setDEF("MaterialNode")
IS117 = IS()
connect118 = connect()
connect118.setNodeField("diffuseColor")
connect118.setProtoField("diffuseColor")

IS117.addConnect(connect118)
connect119 = connect()
connect119.setNodeField("emissiveColor")
connect119.setProtoField("emissiveColor")

IS117.addConnect(connect119)
connect120 = connect()
connect120.setNodeField("specularColor")
connect120.setProtoField("specularColor")

IS117.addConnect(connect120)
connect121 = connect()
connect121.setNodeField("transparency")
connect121.setProtoField("transparency")

IS117.addConnect(connect121)
connect122 = connect()
connect122.setNodeField("shininess")
connect122.setProtoField("shininess")

IS117.addConnect(connect122)
connect123 = connect()
connect123.setNodeField("ambientIntensity")
connect123.setProtoField("ambientIntensity")

IS117.addConnect(connect123)

Material116.setIS(IS117)

ProtoBody115.addChildren(Material116)
#Only first node (the node type) is renderable, others are along for the ride
Script124 = Script()
Script124.setDEF("MaterialModulatorScript")
field125 = field()
field125.setName("enabled")
field125.setAccessType("inputOutput")
field125.setType("SFBool")

Script124.addField(field125)
field126 = field()
field126.setName("diffuseColor")
field126.setAccessType("inputOutput")
field126.setType("SFColor")

Script124.addField(field126)
field127 = field()
field127.setName("newColor")
field127.setAccessType("outputOnly")
field127.setType("SFColor")

Script124.addField(field127)
field128 = field()
field128.setName("clockTrigger")
field128.setAccessType("inputOnly")
field128.setType("SFTime")

Script124.addField(field128)
IS129 = IS()
connect130 = connect()
connect130.setNodeField("enabled")
connect130.setProtoField("enabled")

IS129.addConnect(connect130)
connect131 = connect()
connect131.setNodeField("diffuseColor")
connect131.setProtoField("diffuseColor")

IS129.addConnect(connect131)

Script124.setIS(IS129)

Script124.setSourceCode('''ecmascript:\n"+
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
"\n"+
"    // note different modulation rates for each color component, % is modulus operator\n"+
"    newColor = new SFColor ((red + 0.02) % 1, (green + 0.03) % 1, (blue + 0.04) % 1);\n"+
"	if (enabled)\n"+
"	{\n"+
"		Browser.print ('diffuseColor=(' + red + ',' + green + ',' + blue + ') newColor=' + newColor.toString() + '\\n');\n"+
"	}\n"+
"}''')

ProtoBody115.addChildren(Script124)

ProtoDeclare106.setProtoBody(ProtoBody115)

Scene26.addChildren(ProtoDeclare106)
#Test success: declarative statement createDeclarativeShapeTests()
Group132 = Group()
Group132.setDEF("DeclarativeGroupExample")
Shape133 = Shape()
MetadataString134 = MetadataString()
MetadataString134.setName("findThisNameValue")
MetadataString134.setDEF("FindableMetadataStringTest")
MetadataString134.setValue(["test case"])

Shape133.setMetadata(MetadataString134)
Appearance135 = Appearance()
Appearance135.setDEF("DeclarativeAppearanceExample")
#DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance
ProtoInstance136 = ProtoInstance()
ProtoInstance136.setName("MaterialModulator")
ProtoInstance136.setDEF("MyMaterialModulator")

Appearance135.setMaterial(ProtoInstance136)

Shape133.setAppearance(Appearance135)
Cone137 = Cone()
Cone137.setBottom(False)
Cone137.setBottomRadius(0.05)
Cone137.setHeight(0.1)

Shape133.setGeometry(Cone137)

Group132.addChildren(Shape133)
#Test success: declarativeGroup.addChild() singleton pipeline method

Scene26.addChildren(Group132)
#Test success: declarative statement addChild()
#Test success: x3dModel.findNodeByDEF(DeclarativeAppearanceExample) = <Appearance DEF='DeclarativeAppearanceExample'/> i.e. <Appearance DEF='DeclarativeAppearanceExample'> <!- - DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance - -> <ProtoInstance DEF='MyMaterialModulator' name='MaterialModulator' containerField='material'/> </Appearance>
#Test success: x3dModel.findElementByNameValue(findThisNameValue) = <MetadataString DEF='FindableMetadataStringTest' name='findThisNameValue' value='\"test case\"'/>
#Test success: x3dModel.findElementByNameValue(\"ArtDeco01Material\", \"ProtoDeclare\") found
#Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoDeclare\") found
#Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoInstance\") found
Group138 = Group()
Group138.setDEF("TestFieldObjectsGroup")
#testFieldObjects() results
#SFBool default=true, true=true, false=false, negate()=true
#MFBool default=, initial=true false true, negate()=false true false
#SFFloat default=0.0, initial=1.0, setValue(2)=2.0, setValue(3.0f)=3.0, setValue(4.0)=4.0
#MFFloat default=, initial=1 2 3, append(5)=1 2 3 5, inserts(3,4)(0,0)=0 1 2 3 4 5, append(6)=0 1 2 3 4 5 6, size()=7
#... get1Value[3]=3.0, remove[1]=0 2 3 4 5 6, set1Value(0,10)=10 2 3 4 5 6, multiply(2)=20 4 6 8 10 12, clear=
#SFVec3f default=0 0 0, initial=1 2 3, setValue=4 5 6, multiply(2)=8 10 12, normalize()=0.45584232 0.5698029 0.68376344

Scene26.addChildren(Group138)
Sound139 = Sound()
Sound139.setLocation([0,1.6,0])
#set sound-ellipsoid location height at 1.6m to match typical avatar height
AudioClip140 = AudioClip()
AudioClip140.setDescription("chimes")
AudioClip140.setUrl(["chimes.wav","http://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav"])
#Scene example fragment from http://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/default.x3d

Sound139.setSource(AudioClip140)

Scene26.addChildren(Sound139)
Sound141 = Sound()
Sound141.setLocation([0,1.6,0])
#set sound-ellipsoid location height at 1.6m to match typical avatar height
MovieTexture142 = MovieTexture()
MovieTexture142.setDescription("mpgsys.mpg from ConformanceNist suite")
MovieTexture142.setUrl(["mpgsys.mpg","http://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpgsys.mpg"])
#Scene example fragment from http://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpeg1-systems.x3d
#Expected containerField='source', allowed containerField values=\"texture\" \"source\" \"back\" \"bottom\" \"front\" \"left\" \"right\" \"top\" \"backTexture\" \"bottomTexture\" \"frontTexture\" \"leftTexture\" \"rightTexture\" \"topTexture\"

Sound141.setSource(MovieTexture142)

Scene26.addChildren(Sound141)
#Test success: AnchorObject.isNode()=true, siteAnchor.isNode()=true
#Test success: AnchorObject.isStatement()=false, siteAnchor.isStatement()=false
#Test success: ROUTEObject.isNode()=false, orbitPositionROUTE.isNode()=false
#Test success: ROUTEObject.isStatement()=true, orbitPositionROUTE.isStatement()=true
#Test success: CommentsBlock.isNode()=false, testComments.isNode()=false
#Test failure: CommentsBlock.isStatement()=true, testComments.isStatement()=true
Shape143 = Shape()
Shape143.setDEF("ExtrusionShape")
#ExampleExtrusion isCrossSectionClosed()=true, crossSection='[1.0, 1.0, 1.0, -1.0, -1.0, -1.0, -1.0, 1.0, 1.0, 1.0]'
#ExampleExtrusion isSpineClosed()=false, spine='[0.0, 0.0, 0.0, 0.0, 1.0, 0.0]'
Appearance144 = Appearance()
Appearance144.setDEF("TransparentAppearance")
Material145 = Material()
Material145.setTransparency(1)

Appearance144.setMaterial(Material145)

Shape143.setAppearance(Appearance144)
Extrusion146 = Extrusion()
Extrusion146.setDEF("ExampleExtrusion")

Shape143.setGeometry(Extrusion146)

Scene26.addChildren(Shape143)

X3D0.setScene(Scene26)
X3D0.toFileX3D("../data/X3d.new.x3d")
