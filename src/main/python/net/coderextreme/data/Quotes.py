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
meta6.setContent("Quotes.x3d")

head1.addMeta(meta6)
meta7 = meta()
meta7.setName("description")
meta7.setContent("Example HelloWorldProgram creates an X3D model using the X3D Java Scene Access Interface (SAI) Library")

head1.addMeta(meta7)
meta8 = meta()
meta8.setName("reference")
meta8.setContent("https://www.web3d.org/specifications/java/X3DJSAIL.html")

head1.addMeta(meta8)
meta9 = meta()
meta9.setName("generator")
meta9.setContent("HelloWorldProgramOutput.java")

head1.addMeta(meta9)
meta10 = meta()
meta10.setName("created")
meta10.setContent("6 September 2016")

head1.addMeta(meta10)
meta11 = meta()
meta11.setName("modified")
meta11.setContent("7 April 2018")

head1.addMeta(meta11)
meta12 = meta()
meta12.setName("generator")
meta12.setContent("X3D Java Scene Access Interface Library (X3DJSAIL)")

head1.addMeta(meta12)
meta13 = meta()
meta13.setName("generator")
meta13.setContent("https://www.web3d.org/specifications/java/examples/HelloWorldProgram.java")

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
meta16.setContent("https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/java/examples/HelloWorldProgramOutput.x3d")

head1.addMeta(meta16)
meta17 = meta()
meta17.setName("reference")
meta17.setContent("Console output, ClassicVRML encoding, VRML97 encoding and pretty-print documentation:")

head1.addMeta(meta17)
meta18 = meta()
meta18.setName("reference")
meta18.setContent("HelloWorldProgramOutput.txt")

head1.addMeta(meta18)
meta19 = meta()
meta19.setName("reference")
meta19.setContent("HelloWorldProgramOutput.x3dv")

head1.addMeta(meta19)
meta20 = meta()
meta20.setName("reference")
meta20.setContent("HelloWorldProgramOutput.wrl")

head1.addMeta(meta20)
meta21 = meta()
meta21.setName("reference")
meta21.setContent("HelloWorldProgramOutput.html")

head1.addMeta(meta21)
meta22 = meta()
meta22.setName("reference")
meta22.setContent("X3dValidator https://savage.nps.edu/X3dValidator?url=https://www.web3d.org/specifications/java/examples/HelloWorldProgramOutput.x3d")

head1.addMeta(meta22)
meta23 = meta()
meta23.setName("identifier")
meta23.setContent("https://www.web3d.org/specifications/java/examples/HelloWorldProgramOutput.x3d")

head1.addMeta(meta23)
meta24 = meta()
meta24.setName("license")
meta24.setContent("../license.html")

head1.addMeta(meta24)
meta25 = meta()
meta25.setName("info")
meta25.setContent("tested sat: name value cannot contain embedded space character")

head1.addMeta(meta25)
meta26 = meta()
meta26.setName("translated")
meta26.setContent("30 April 2018")

head1.addMeta(meta26)
meta27 = meta()
meta27.setName("generator")
meta27.setContent("X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html")

head1.addMeta(meta27)
meta28 = meta()
meta28.setName("reference")
meta28.setContent("X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")

head1.addMeta(meta28)

X3D0.setHead(head1)
Scene29 = Scene()
ViewpointGroup30 = ViewpointGroup()
ViewpointGroup30.setDescription("Available viewpoints")
Viewpoint31 = Viewpoint()
Viewpoint31.setDEF("DefaultView")
Viewpoint31.setDescription("Hello X3DJSAIL")

ViewpointGroup30.addChildren(Viewpoint31)
Viewpoint32 = Viewpoint()
Viewpoint32.setDEF("TopDownView")
Viewpoint32.setDescription("top-down view from above")
Viewpoint32.setOrientation([1,0,0,-1.570796])
Viewpoint32.setPosition([0,100,0])

ViewpointGroup30.addChildren(Viewpoint32)

Scene29.addChildren(ViewpointGroup30)
WorldInfo33 = WorldInfo()
WorldInfo33.setDEF("WorldInfoDEF")
WorldInfo33.setTitle("HelloWorldProgram produced by X3D Java SAI Library (X3DJSAIL)")

Scene29.addChildren(WorldInfo33)
WorldInfo34 = WorldInfo()
WorldInfo34.setUSE("WorldInfoDEF")

Scene29.addChildren(WorldInfo34)
WorldInfo35 = WorldInfo()
WorldInfo35.setUSE("WorldInfoDEF")

Scene29.addChildren(WorldInfo35)
MetadataString36 = MetadataString()
MetadataString36.setName("test")
MetadataString36.setDEF("scene.addChildMetadata")
MetadataString36.setValue(["Top-level root Metadata node beneath Scene needs to be one of '-children' in JSON encoding"])

Scene29.addMetadata(MetadataString36)
LayerSet37 = LayerSet()
LayerSet37.setDEF("scene.addChildLayerSetTest")

Scene29.addLayerSet(LayerSet37)
Transform38 = Transform()
Transform38.setDEF("LogoGeometryTransform")
Transform38.setTranslation([0,1.5,0])
Anchor39 = Anchor()
Anchor39.setDescription("select for X3D Java SAI Library (X3DJSAIL) description")
Anchor39.setUrl(["../X3DJSAIL.html","https://www.web3d.org/specifications/java/X3DJSAIL.html"])
Shape40 = Shape()
Shape40.setDEF("BoxShape")
Appearance41 = Appearance()
Material42 = Material()
Material42.setDEF("GreenMaterial")
Material42.setDiffuseColor([0,1,1])
Material42.setEmissiveColor([0.8,0,0])
Material42.setTransparency(0.1)

Appearance41.setMaterial(Material42)
ImageTexture43 = ImageTexture()
ImageTexture43.setUrl(["images/X3dJavaSceneAccessInterfaceSaiLibrary.png","https://www.web3d.org/specifications/java/examples/images/X3dJavaSceneAccessInterfaceSaiLibrary.png"])

Appearance41.setTexture(ImageTexture43)

Shape40.setAppearance(Appearance41)
Box44 = Box()
Box44.setDEF("test-NMTOKEN_regex.0123456789")
Box44.setCssClass("untextured")

Shape40.setGeometry(Box44)

Anchor39.addChildren(Shape40)

Transform38.addChildren(Anchor39)

Scene29.addChildren(Transform38)
Shape45 = Shape()
Shape45.setDEF("LineShape")
Appearance46 = Appearance()
Material47 = Material()
Material47.setEmissiveColor([0.6,0.19607843,0.8])

Appearance46.setMaterial(Material47)

Shape45.setAppearance(Appearance46)
IndexedLineSet48 = IndexedLineSet()
IndexedLineSet48.setCoordIndex([0,1,2,3,4,0])
#Coordinate 3-tuple point count: 6
Coordinate49 = Coordinate()
Coordinate49.setPoint([0,1.5,0,2,1.5,0,2,1.5,-2,-2,1.5,-2,-2,1.5,0,0,1.5,0])

IndexedLineSet48.setCoord(Coordinate49)

Shape45.setGeometry(IndexedLineSet48)

Scene29.addChildren(Shape45)
PositionInterpolator50 = PositionInterpolator()
PositionInterpolator50.setDEF("BoxPathAnimator")
PositionInterpolator50.setKey([0,0.125,0.375,0.625,0.875,1])
PositionInterpolator50.setKeyValue([0,1.5,0,2,1.5,0,2,1.5,-2,-2,1.5,-2,-2,1.5,0,0,1.5,0])

Scene29.addChildren(PositionInterpolator50)
TimeSensor51 = TimeSensor()
TimeSensor51.setDEF("OrbitClock")
TimeSensor51.setCycleInterval(8)
TimeSensor51.setLoop(True)

Scene29.addChildren(TimeSensor51)
ROUTE52 = ROUTE()
ROUTE52.setFromField("fraction_changed")
ROUTE52.setFromNode("OrbitClock")
ROUTE52.setToField("set_fraction")
ROUTE52.setToNode("BoxPathAnimator")

Scene29.addChildren(ROUTE52)
ROUTE53 = ROUTE()
ROUTE53.setFromField("value_changed")
ROUTE53.setFromNode("BoxPathAnimator")
ROUTE53.setToField("set_translation")
ROUTE53.setToNode("LogoGeometryTransform")

Scene29.addChildren(ROUTE53)
Transform54 = Transform()
Transform54.setDEF("TextTransform")
Transform54.setTranslation([0,-1.5,0])
Shape55 = Shape()
Appearance56 = Appearance()
Material57 = Material()
Material57.setUSE("GreenMaterial")

Appearance56.setMaterial(Material57)

Shape55.setAppearance(Appearance56)
Text58 = Text()
Text58.setString(["X3D Java","SAI Library","X3DJSAIL"])
#Comment example A, plain quotation marks: He said, \"Immel did it!\"
#Comment example B, XML character entities: He said, &quot;Immel did it!&quot;
MetadataSet59 = MetadataSet()
MetadataSet59.setName("EscapedQuotationMarksMetadataSet")
MetadataString60 = MetadataString()
MetadataString60.setName("quotesTestC")
MetadataString60.setValue(["MFString example C, backslash-escaped quotes: He said, \"Immel did it!\""])

MetadataSet59.setValue(MetadataString60)
MetadataString61 = MetadataString()
MetadataString61.setName("extraChildTest")
MetadataString61.setValue(["checks MetadataSetObject addValue() method"])

MetadataSet59.addValue(MetadataString61)

Text58.setMetadata(MetadataSet59)
FontStyle62 = FontStyle()
FontStyle62.setJustify(["MIDDLE","MIDDLE"])

Text58.setFontStyle(FontStyle62)

Shape55.setGeometry(Text58)

Transform54.addChildren(Shape55)
Collision63 = Collision()
#test containerField='proxy'
Shape64 = Shape()
Shape64.setDEF("ProxyShape")
#alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\"'
#alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\" \"\"'
#alternative Java source: .setString(new String [] {\"One, Two, Comment\", \"\", \"He said, \\\"\"\"Immel did it!\\\"\"\\\"\"})
#reference: https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamplesIndex.html
Text65 = Text()
Text65.setString(["One, Two, Text","","He said, \"Immel did it!\" \"\""])

Shape64.setGeometry(Text65)

Collision63.setProxy(Shape64)

Transform54.addChildren(Collision63)
#It's a beautiful world
#... for you!
#https://en.wikipedia.org/wiki/Beautiful_World_(Devo_song)

Scene29.addChildren(Transform54)
#repeatedly spin 180 degrees as a readable special effect
OrientationInterpolator66 = OrientationInterpolator()
OrientationInterpolator66.setDEF("SpinInterpolator")
OrientationInterpolator66.setKey([0,0.5,1])
OrientationInterpolator66.setKeyValue([0,1,0,4.712389,0,1,0,0,0,1,0,1.5707964])

Scene29.addChildren(OrientationInterpolator66)
TimeSensor67 = TimeSensor()
TimeSensor67.setDEF("SpinClock")
TimeSensor67.setCycleInterval(5)
TimeSensor67.setLoop(True)

Scene29.addChildren(TimeSensor67)
ROUTE68 = ROUTE()
ROUTE68.setFromField("fraction_changed")
ROUTE68.setFromNode("SpinClock")
ROUTE68.setToField("set_fraction")
ROUTE68.setToNode("SpinInterpolator")

Scene29.addChildren(ROUTE68)
ROUTE69 = ROUTE()
ROUTE69.setFromField("value_changed")
ROUTE69.setFromNode("SpinInterpolator")
ROUTE69.setToField("rotation")
ROUTE69.setToNode("TextTransform")

Scene29.addChildren(ROUTE69)
Group70 = Group()
Group70.setDEF("BackgroundGroup")
Background71 = Background()
Background71.setDEF("GradualBackground")

Group70.addChildren(Background71)
Script72 = Script()
Script72.setDEF("colorTypeConversionScript")
field73 = field()
field73.setName("colorInput")
field73.setAccessType("inputOnly")
field73.setType("SFColor")

Script72.addField(field73)
field74 = field()
field74.setName("colorsOutput")
field74.setAccessType("outputOnly")
field74.setType("MFColor")

Script72.addField(field74)

Script72.setSourceCode('''ecmascript:\n"+
"\n"+
"function colorInput (eventValue) // Example source code\n"+
"{\n"+
"   colorsOutput = new MFColor(eventValue); // assigning value sends output event\n"+
"// Browser.print('colorInput=' + eventValue + ', colorsOutput=' + colorsOutput + '\\n');\n"+
"}''')

Group70.addChildren(Script72)
ColorInterpolator75 = ColorInterpolator()
ColorInterpolator75.setDEF("ColorAnimator")
ColorInterpolator75.setKey([0,0.5,1])
ColorInterpolator75.setKeyValue([0.9411765,1,1,0.29411766,0,0.50980395,0.9411765,1,1])
#AZURE to INDIGO and back again

Group70.addChildren(ColorInterpolator75)
TimeSensor76 = TimeSensor()
TimeSensor76.setDEF("ColorClock")
TimeSensor76.setCycleInterval(60)
TimeSensor76.setLoop(True)

Group70.addChildren(TimeSensor76)
ROUTE77 = ROUTE()
ROUTE77.setFromField("colorsOutput")
ROUTE77.setFromNode("colorTypeConversionScript")
ROUTE77.setToField("skyColor")
ROUTE77.setToNode("GradualBackground")

Group70.addChildren(ROUTE77)
ROUTE78 = ROUTE()
ROUTE78.setFromField("value_changed")
ROUTE78.setFromNode("ColorAnimator")
ROUTE78.setToField("colorInput")
ROUTE78.setToNode("colorTypeConversionScript")

Group70.addChildren(ROUTE78)
ROUTE79 = ROUTE()
ROUTE79.setFromField("fraction_changed")
ROUTE79.setFromNode("ColorClock")
ROUTE79.setToField("set_fraction")
ROUTE79.setToNode("ColorAnimator")

Group70.addChildren(ROUTE79)

Scene29.addChildren(Group70)
ProtoDeclare80 = ProtoDeclare()
ProtoDeclare80.setName("ArtDeco01Material")
ProtoDeclare80.setAppinfo("tooltip: ArtDeco01Material prototype is a Material node")
ProtoInterface81 = ProtoInterface()
field82 = field()
field82.setName("description")
field82.setAccessType("inputOutput")
field82.setAppinfo("tooltip for descriptionField")
field82.setType("SFString")
field82.setValue("ArtDeco01Material prototype is a Material node")

ProtoInterface81.addField(field82)
field83 = field()
field83.setName("enabled")
field83.setAccessType("inputOutput")
field83.setType("SFBool")
field83.setValue("true")

ProtoInterface81.addField(field83)

ProtoDeclare80.setProtoInterface(ProtoInterface81)
ProtoBody84 = ProtoBody()
#Initial node of ProtoBody determines prototype node type
Material85 = Material()
Material85.setAmbientIntensity(0.25)
Material85.setDiffuseColor([0.282435,0.085159,0.134462])
Material85.setShininess(0.127273)
Material85.setSpecularColor([0.276305,0.11431,0.139857])

ProtoBody84.addChildren(Material85)
#[HelloWorldProgram diagnostic] should be connected to scene graph: ArtDeco01ProtoDeclare.getNodeType()=\"Material\"
#presence of follow-on TouchSensor shows that additional nodes are allowed in ProtoBody after initial node, regardless of node types
TouchSensor86 = TouchSensor()
TouchSensor86.setDescription("within ProtoBody")
IS87 = IS()
connect88 = connect()
connect88.setNodeField("description")
connect88.setProtoField("description")

IS87.addConnect(connect88)
connect89 = connect()
connect89.setNodeField("enabled")
connect89.setProtoField("enabled")

IS87.addConnect(connect89)

TouchSensor86.setIS(IS87)

ProtoBody84.addChildren(TouchSensor86)

ProtoDeclare80.setProtoBody(ProtoBody84)

Scene29.addChildren(ProtoDeclare80)
ExternProtoDeclare90 = ExternProtoDeclare()
ExternProtoDeclare90.setName("ArtDeco02Material")
ExternProtoDeclare90.setAppinfo("this is a different Material node")
ExternProtoDeclare90.setUrl(["http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d#ArtDeco02Material","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3dv#ArtDeco02Material"])
#[HelloWorldProgram diagnostic] ArtDeco02ExternProtoDeclare.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time, TODO X3DJSAIL needs to add further capability.\"
field91 = field()
field91.setName("description")
field91.setAccessType("inputOutput")
field91.setAppinfo("tooltip for descriptionField")
field91.setType("SFString")

ExternProtoDeclare90.addField(field91)

Scene29.addChildren(ExternProtoDeclare90)
#Tested ArtDeco01ProtoInstance, ArtDeco02ProtoInstance for improper node type when ProtoInstance is added in wrong place
Shape92 = Shape()
Shape92.setDEF("TestShape1")
Appearance93 = Appearance()
Appearance93.setDEF("TestAppearance1")
#ArtDeco01Material prototype goes here... TODO ensure setContainerField is handled in exported Java
ProtoInstance94 = ProtoInstance()
ProtoInstance94.setName("ArtDeco01Material")
#[HelloWorldProgram diagnostic] ArtDeco01ProtoInstance.getNodeType()=\"Material\"
fieldValue95 = fieldValue()
fieldValue95.setName("description")
fieldValue95.setValue("ArtDeco01Material can substitute for a Material node")

ProtoInstance94.addFieldValue(fieldValue95)

Appearance93.setMaterial(ProtoInstance94)

Shape92.setAppearance(Appearance93)
Sphere96 = Sphere()
Sphere96.setRadius(0.001)

Shape92.setGeometry(Sphere96)

Scene29.addChildren(Shape92)
Shape97 = Shape()
Shape97.setDEF("TestShape2")
Appearance98 = Appearance()
Appearance98.setDEF("TestAppearance2")
#ArtDeco02Material prototype goes here... TODO ensure setContainerField is handled in exported Java
ProtoInstance99 = ProtoInstance()
ProtoInstance99.setName("ArtDeco02Material")
ProtoInstance99.setDEF("ArtDeco02MaterialDEF")
#[HelloWorldProgram diagnostic] ArtDeco02ProtoInstance.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time, TODO X3DJSAIL needs to add further capability.\"
fieldValue100 = fieldValue()
fieldValue100.setName("description")
fieldValue100.setValue("ArtDeco02Material can substitute for another Material node")

ProtoInstance99.addFieldValue(fieldValue100)

Appearance98.setMaterial(ProtoInstance99)

Shape97.setAppearance(Appearance98)
Cone101 = Cone()
Cone101.setBottomRadius(0.001)
Cone101.setHeight(0.001)

Shape97.setGeometry(Cone101)

Scene29.addChildren(Shape97)
Shape102 = Shape()
Shape102.setDEF("TestShape3")
Appearance103 = Appearance()
Appearance103.setDEF("TestAppearance3")
#ArtDeco02Material ProtoInstance USE goes here...
ProtoInstance104 = ProtoInstance()
ProtoInstance104.setUSE("ArtDeco02MaterialDEF")

Appearance103.setMaterial(ProtoInstance104)

Shape102.setAppearance(Appearance103)
Cylinder105 = Cylinder()
Cylinder105.setHeight(0.001)
Cylinder105.setRadius(0.001)

Shape102.setGeometry(Cylinder105)

Scene29.addChildren(Shape102)
Inline106 = Inline()
Inline106.setDEF("inlineSceneDef")
Inline106.setUrl(["someOtherScene.x3d"])

Scene29.addChildren(Inline106)
IMPORT107 = IMPORT()
IMPORT107.setAS("WorldInfoDEF2")
IMPORT107.setImportedDEF("WorldInfoDEF")
IMPORT107.setInlineDEF("inlineSceneDef")

Scene29.addChildren(IMPORT107)
EXPORT108 = EXPORT()
EXPORT108.setAS("WorldInfoDEF3")
EXPORT108.setLocalDEF("WorldInfoDEF")

Scene29.addChildren(EXPORT108)
ProtoDeclare109 = ProtoDeclare()
ProtoDeclare109.setName("MaterialModulator")
ProtoDeclare109.setAppinfo("mimic a Material node and modulate fields as an animation effect")
ProtoDeclare109.setDocumentation("http://x3dgraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorIndex.html")
ProtoInterface110 = ProtoInterface()
field111 = field()
field111.setName("enabled")
field111.setAccessType("inputOutput")
field111.setType("SFBool")
field111.setValue("true")

ProtoInterface110.addField(field111)
field112 = field()
field112.setName("diffuseColor")
field112.setAccessType("inputOutput")
field112.setType("SFColor")
field112.setValue("0 0 0")

ProtoInterface110.addField(field112)
field113 = field()
field113.setName("emissiveColor")
field113.setAccessType("inputOutput")
field113.setType("SFColor")
field113.setValue("0.05 0.05 0.5")

ProtoInterface110.addField(field113)
field114 = field()
field114.setName("specularColor")
field114.setAccessType("inputOutput")
field114.setType("SFColor")
field114.setValue("0 0 0")

ProtoInterface110.addField(field114)
field115 = field()
field115.setName("transparency")
field115.setAccessType("inputOutput")
field115.setType("SFFloat")
field115.setValue("0")

ProtoInterface110.addField(field115)
field116 = field()
field116.setName("shininess")
field116.setAccessType("inputOutput")
field116.setType("SFFloat")
field116.setValue("0")

ProtoInterface110.addField(field116)
field117 = field()
field117.setName("ambientIntensity")
field117.setAccessType("inputOutput")
field117.setType("SFFloat")
field117.setValue("0")

ProtoInterface110.addField(field117)

ProtoDeclare109.setProtoInterface(ProtoInterface110)
ProtoBody118 = ProtoBody()
Material119 = Material()
Material119.setDEF("MaterialNode")
IS120 = IS()
connect121 = connect()
connect121.setNodeField("diffuseColor")
connect121.setProtoField("diffuseColor")

IS120.addConnect(connect121)
connect122 = connect()
connect122.setNodeField("emissiveColor")
connect122.setProtoField("emissiveColor")

IS120.addConnect(connect122)
connect123 = connect()
connect123.setNodeField("specularColor")
connect123.setProtoField("specularColor")

IS120.addConnect(connect123)
connect124 = connect()
connect124.setNodeField("transparency")
connect124.setProtoField("transparency")

IS120.addConnect(connect124)
connect125 = connect()
connect125.setNodeField("shininess")
connect125.setProtoField("shininess")

IS120.addConnect(connect125)
connect126 = connect()
connect126.setNodeField("ambientIntensity")
connect126.setProtoField("ambientIntensity")

IS120.addConnect(connect126)

Material119.setIS(IS120)

ProtoBody118.addChildren(Material119)
#Only first node (the node type) is renderable, others are along for the ride
Script127 = Script()
Script127.setDEF("MaterialModulatorScript")
field128 = field()
field128.setName("enabled")
field128.setAccessType("inputOutput")
field128.setType("SFBool")

Script127.addField(field128)
field129 = field()
field129.setName("diffuseColor")
field129.setAccessType("inputOutput")
field129.setType("SFColor")

Script127.addField(field129)
field130 = field()
field130.setName("newColor")
field130.setAccessType("outputOnly")
field130.setType("SFColor")

Script127.addField(field130)
field131 = field()
field131.setName("clockTrigger")
field131.setAccessType("inputOnly")
field131.setType("SFTime")

Script127.addField(field131)
IS132 = IS()
connect133 = connect()
connect133.setNodeField("enabled")
connect133.setProtoField("enabled")

IS132.addConnect(connect133)
connect134 = connect()
connect134.setNodeField("diffuseColor")
connect134.setProtoField("diffuseColor")

IS132.addConnect(connect134)

Script127.setIS(IS132)

Script127.setSourceCode('''ecmascript:\n"+
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

ProtoBody118.addChildren(Script127)

ProtoDeclare109.setProtoBody(ProtoBody118)

Scene29.addChildren(ProtoDeclare109)
#Test success: declarative statement createDeclarativeShapeTests()
Group135 = Group()
Group135.setDEF("DeclarativeGroupExample")
Shape136 = Shape()
MetadataString137 = MetadataString()
MetadataString137.setName("findThisNameValue")
MetadataString137.setDEF("FindableMetadataStringTest")
MetadataString137.setValue(["test case"])

Shape136.setMetadata(MetadataString137)
Appearance138 = Appearance()
Appearance138.setDEF("DeclarativeAppearanceExample")
#DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance
ProtoInstance139 = ProtoInstance()
ProtoInstance139.setName("MaterialModulator")
ProtoInstance139.setDEF("MyMaterialModulator")

Appearance138.setMaterial(ProtoInstance139)

Shape136.setAppearance(Appearance138)
Cone140 = Cone()
Cone140.setBottom(False)
Cone140.setBottomRadius(0.05)
Cone140.setHeight(0.1)

Shape136.setGeometry(Cone140)

Group135.addChildren(Shape136)
#Test success: declarativeGroup.addChild() singleton pipeline method

Scene29.addChildren(Group135)
#Test success: declarative statement addChild()
#Test success: x3dModel.findNodeByDEF(DeclarativeAppearanceExample) = <Appearance DEF='DeclarativeAppearanceExample'/> i.e. <Appearance DEF='DeclarativeAppearanceExample'> <!- - DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance - -> <ProtoInstance DEF='MyMaterialModulator' name='MaterialModulator' containerField='material'/> </Appearance>
#Test success: x3dModel.findElementByNameValue(findThisNameValue) = <MetadataString DEF='FindableMetadataStringTest' name='findThisNameValue' value='\"test case\"'/>
#Test success: x3dModel.findElementByNameValue(\"ArtDeco01Material\", \"ProtoDeclare\") found
#Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoDeclare\") found
#Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoInstance\") found
Group141 = Group()
Group141.setDEF("TestFieldObjectsGroup")
#testFieldObjects() results
#SFBool default=true, true=true, false=false, negate()=true
#MFBool default=, initial=true false true, negate()=false true false
#SFFloat default=0.0, initial=1.0, setValue(2)=2.0, setValue(3.0f)=3.0, setValue(4.0)=4.0
#MFFloat default=, initial=1 2 3, append(5)=1 2 3 5, inserts(3,4)(0,0)=0 1 2 3 4 5, append(6)=0 1 2 3 4 5 6, size()=7
#... get1Value[3]=3.0, remove[1]=0 2 3 4 5 6, set1Value(0,10)=10 2 3 4 5 6, multiply(2)=20 4 6 8 10 12, clear=
#SFVec3f default=0 0 0, initial=1 2 3, setValue=4 5 6, multiply(2)=8 10 12, normalize()=0.45584232 0.5698029 0.68376344

Scene29.addChildren(Group141)
Sound142 = Sound()
Sound142.setLocation([0,1.6,0])
#set sound-ellipsoid location height at 1.6m to match typical avatar height
AudioClip143 = AudioClip()
AudioClip143.setDescription("chimes")
AudioClip143.setUrl(["chimes.wav","https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav"])
#Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/default.x3d

Sound142.setSource(AudioClip143)

Scene29.addChildren(Sound142)
Sound144 = Sound()
Sound144.setLocation([0,1.6,0])
#set sound-ellipsoid location height at 1.6m to match typical avatar height
MovieTexture145 = MovieTexture()
MovieTexture145.setDescription("mpgsys.mpg from ConformanceNist suite")
MovieTexture145.setUrl(["mpgsys.mpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpgsys.mpg"])
#Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpeg1-systems.x3d
#Expected containerField='source', allowed containerField values=\"texture\" \"source\" \"back\" \"bottom\" \"front\" \"left\" \"right\" \"top\" \"backTexture\" \"bottomTexture\" \"frontTexture\" \"leftTexture\" \"rightTexture\" \"topTexture\"

Sound144.setSource(MovieTexture145)

Scene29.addChildren(Sound144)
#Test success: AnchorObject.isNode()=true, siteAnchor.isNode()=true
#Test success: AnchorObject.isStatement()=false, siteAnchor.isStatement()=false
#Test success: ROUTEObject.isNode()=false, orbitPositionROUTE.isNode()=false
#Test success: ROUTEObject.isStatement()=true, orbitPositionROUTE.isStatement()=true
#Test success: CommentsBlock.isNode()=false, testComments.isNode()=false
#Test failure: CommentsBlock.isStatement()=true, testComments.isStatement()=true
Shape146 = Shape()
Shape146.setDEF("ExtrusionShape")
#ExampleExtrusion isCrossSectionClosed()=true, crossSection='[1.0, 1.0, 1.0, -1.0, -1.0, -1.0, -1.0, 1.0, 1.0, 1.0]'
#ExampleExtrusion isSpineClosed()=false, spine='[0.0, 0.0, 0.0, 0.0, 1.0, 0.0]'
Appearance147 = Appearance()
Appearance147.setDEF("TransparentAppearance")
Material148 = Material()
Material148.setTransparency(1)

Appearance147.setMaterial(Material148)

Shape146.setAppearance(Appearance147)
Extrusion149 = Extrusion()
Extrusion149.setDEF("ExampleExtrusion")

Shape146.setGeometry(Extrusion149)

Scene29.addChildren(Shape146)

X3D0.setScene(Scene29)
X3D0.toFileX3D("../data/Quotes_RoundTrip.x3d")
