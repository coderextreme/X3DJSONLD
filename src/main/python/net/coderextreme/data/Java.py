import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
head1 = x3d.head()
# comment #1 
# comment #2 
# comment #3 
# comment #4 
component2 = x3d.component()
component2.setName("Navigation")
component2.setLevel(3)

head1.addComponent(component2)
component3 = x3d.component()
component3.setName("Layering")
component3.setLevel(1)

head1.addComponent(component3)
unit4 = x3d.unit()
unit4.setName("AngleUnitConversion")
unit4.setCategory("angle")
unit4.setConversionFactor(1)

head1.addUnit(unit4)
unit5 = x3d.unit()
unit5.setName("LengthUnitConversion")
unit5.setCategory("length")
unit5.setConversionFactor(1)

head1.addUnit(unit5)
meta6 = x3d.meta()
meta6.setName("title")
meta6.setContent("Java.x3d")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("description")
meta7.setContent("Example HelloWorldProgram creates an X3D model using the X3D Java Scene Access Interface (SAI) Library")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("reference")
meta8.setContent("http://www.web3d.org/specifications/java/X3DJSAIL.html")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("generator")
meta9.setContent("Java.java")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("created")
meta10.setContent("6 September 2016")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("modified")
meta11.setContent("6 June 2018")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("generator")
meta12.setContent("X3D Java Scene Access Interface Library (X3DJSAIL)")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("generator")
meta13.setContent("http://www.web3d.org/specifications/java/examples/HelloWorldProgram.java")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("generator")
meta14.setContent("Netbeans http://www.netbeans.org")

head1.addMeta(meta14)
meta15 = x3d.meta()
meta15.setName("creator")
meta15.setContent("Don Brutzman")

head1.addMeta(meta15)
meta16 = x3d.meta()
meta16.setName("reference")
meta16.setContent("https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/java/examples/Java.x3d")

head1.addMeta(meta16)
meta17 = x3d.meta()
meta17.setName("reference")
meta17.setContent("Console output, ClassicVRML encoding, VRML97 encoding and pretty-print documentation:")

head1.addMeta(meta17)
meta18 = x3d.meta()
meta18.setName("reference")
meta18.setContent("Java.txt")

head1.addMeta(meta18)
meta19 = x3d.meta()
meta19.setName("reference")
meta19.setContent("Java.x3dv")

head1.addMeta(meta19)
meta20 = x3d.meta()
meta20.setName("reference")
meta20.setContent("Java.wrl")

head1.addMeta(meta20)
meta21 = x3d.meta()
meta21.setName("reference")
meta21.setContent("Java.html")

head1.addMeta(meta21)
meta22 = x3d.meta()
meta22.setName("reference")
meta22.setContent("X3dValidator https://savage.nps.edu/X3dValidator?url=http://www.web3d.org/specifications/java/examples/Java.x3d")

head1.addMeta(meta22)
meta23 = x3d.meta()
meta23.setName("identifier")
meta23.setContent("http://www.web3d.org/specifications/java/examples/Java.x3d")

head1.addMeta(meta23)
meta24 = x3d.meta()
meta24.setName("license")
meta24.setContent("../license.html")

head1.addMeta(meta24)
meta25 = x3d.meta()
meta25.setName("info")
meta25.setContent("tested sat: name value cannot contain embedded space character")

head1.addMeta(meta25)
meta26 = x3d.meta()
meta26.setName("translated")
meta26.setContent("06 June 2018")

head1.addMeta(meta26)
meta27 = x3d.meta()
meta27.setName("generator")
meta27.setContent("X3dToJson.xslt, http://www.web3d.org/x3d/stylesheets/X3dToJson.html")

head1.addMeta(meta27)
meta28 = x3d.meta()
meta28.setName("reference")
meta28.setContent("X3D JSON encoding: http://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")

head1.addMeta(meta28)

X3D0.setHead(head1)
Scene29 = x3d.Scene()
ViewpointGroup30 = x3d.ViewpointGroup()
ViewpointGroup30.setDescription("Available viewpoints")

Scene29.addChildren(ViewpointGroup30)
WorldInfo31 = x3d.WorldInfo()
WorldInfo31.setDEF("WorldInfoDEF")
WorldInfo31.setTitle("HelloWorldProgram produced by X3D Java SAI Library (X3DJSAIL)")

Scene29.addChildren(WorldInfo31)
WorldInfo32 = x3d.WorldInfo()
WorldInfo32.setUSE("WorldInfoDEF")

Scene29.addChildren(WorldInfo32)
WorldInfo33 = x3d.WorldInfo()
WorldInfo33.setUSE("WorldInfoDEF")

Scene29.addChildren(WorldInfo33)
Transform34 = x3d.Transform()
Transform34.setDEF("LogoGeometryTransform")
Transform34.setTranslation([0,1.5,0])
Anchor35 = x3d.Anchor()
Anchor35.setDescription("select for X3D Java SAI Library (X3DJSAIL) description")
Anchor35.setUrl(["../X3DJSAIL.html","http://www.web3d.org/specifications/java/X3DJSAIL.html"])
Shape36 = x3d.Shape()
Shape36.setDEF("BoxShape")
Appearance37 = x3d.Appearance()
Material38 = x3d.Material()
Material38.setDEF("GreenMaterial")
Material38.setDiffuseColor([0,1,1])
Material38.setEmissiveColor([0.8,0,0])
Material38.setTransparency(0.1)

Appearance37.setMaterial(Material38)
ImageTexture39 = x3d.ImageTexture()
ImageTexture39.setUrl(["images/X3dJavaSceneAccessInterfaceSaiLibrary.png","http://www.web3d.org/specifications/java/examples/images/X3dJavaSceneAccessInterfaceSaiLibrary.png"])

Appearance37.setTexture(ImageTexture39)

Shape36.setAppearance(Appearance37)
Box40 = x3d.Box()
Box40.setDEF("test-NMTOKEN_regex.0123456789")
Box40.setCssClass("untextured")

Shape36.setGeometry(Box40)

Anchor35.addChildren(Shape36)

Transform34.addChildren(Anchor35)

Scene29.addChildren(Transform34)
Shape41 = x3d.Shape()
Shape41.setDEF("LineShape")
Appearance42 = x3d.Appearance()
Material43 = x3d.Material()
Material43.setEmissiveColor([0.6,0.19607843,0.8])

Appearance42.setMaterial(Material43)

Shape41.setAppearance(Appearance42)
IndexedLineSet44 = x3d.IndexedLineSet()
IndexedLineSet44.setCoordIndex([0,1,2,3,4,0])
# Coordinate 3-tuple point count: 6 
Coordinate45 = x3d.Coordinate()
Coordinate45.setPoint([0,1.5,0,2,1.5,0,2,1.5,-2,-2,1.5,-2,-2,1.5,0,0,1.5,0])

IndexedLineSet44.setCoord(Coordinate45)

Shape41.setGeometry(IndexedLineSet44)

Scene29.addChildren(Shape41)
PositionInterpolator46 = x3d.PositionInterpolator()
PositionInterpolator46.setDEF("BoxPathAnimator")
PositionInterpolator46.setKey([0,0.125,0.375,0.625,0.875,1])
PositionInterpolator46.setKeyValue([0,1.5,0,2,1.5,0,2,1.5,-2,-2,1.5,-2,-2,1.5,0,0,1.5,0])

Scene29.addChildren(PositionInterpolator46)
TimeSensor47 = x3d.TimeSensor()
TimeSensor47.setDEF("OrbitClock")
TimeSensor47.setCycleInterval(8)
TimeSensor47.setLoop(True)

Scene29.addChildren(TimeSensor47)
ROUTE48 = x3d.ROUTE()
ROUTE48.setFromField("fraction_changed")
ROUTE48.setFromNode("OrbitClock")
ROUTE48.setToField("set_fraction")
ROUTE48.setToNode("BoxPathAnimator")

Scene29.addChildren(ROUTE48)
ROUTE49 = x3d.ROUTE()
ROUTE49.setFromField("value_changed")
ROUTE49.setFromNode("BoxPathAnimator")
ROUTE49.setToField("set_translation")
ROUTE49.setToNode("LogoGeometryTransform")

Scene29.addChildren(ROUTE49)
Transform50 = x3d.Transform()
Transform50.setDEF("TextTransform")
Transform50.setTranslation([0,-1.5,0])
Shape51 = x3d.Shape()
Appearance52 = x3d.Appearance()
Material53 = x3d.Material()
Material53.setUSE("GreenMaterial")

Appearance52.setMaterial(Material53)

Shape51.setAppearance(Appearance52)
Text54 = x3d.Text()
Text54.setString(["X3D Java","SAI Library","X3DJSAIL"])
# Comment example A, plain quotation marks: He said, \"Immel did it!\" 
# Comment example B, XML character entities: He said, &quot;Immel did it!&quot; 
MetadataSet55 = x3d.MetadataSet()
MetadataSet55.setName("EscapedQuotationMarksMetadataSet")
MetadataString56 = x3d.MetadataString()
MetadataString56.setName("quotesTestC")
MetadataString56.setValue(["MFString example C, backslash-escaped quotes: He said, \"Immel did it!\""])

MetadataSet55.addValue(MetadataString56)
MetadataString57 = x3d.MetadataString()
MetadataString57.setName("extraChildTest")
MetadataString57.setValue(["checks MetadataSetObject addValue() method"])

MetadataSet55.addValue(MetadataString57)

Text54.setMetadata(MetadataSet55)
FontStyle58 = x3d.FontStyle()
FontStyle58.setFamily(["SERIF"])
FontStyle58.setJustify(["MIDDLE","MIDDLE"])

Text54.setFontStyle(FontStyle58)

Shape51.setGeometry(Text54)

Transform50.addChildren(Shape51)
Collision59 = x3d.Collision()
# test containerField='proxy' 
Shape60 = x3d.Shape()
Shape60.setDEF("ProxyShape")
# alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\"' 
# alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\" \"\"' 
# alternative Java source: .setString(new String [] {\"One, Two, Comment\", \"\", \"He said, \\\"Immel did it!\\\"\"}) 
# reference: http://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamplesIndex.html 
Text61 = x3d.Text()
Text61.setString(["One, Two, Text","","He said, \"Immel did it!","\""])

Shape60.setGeometry(Text61)

Collision59.setProxy(Shape60)

Transform50.addChildren(Collision59)
# It's a beautiful world 
# ... for you! 
# https://en.wikipedia.org/wiki/Beautiful_World_(Devo_song) 

Scene29.addChildren(Transform50)
# repeatedly spin 180 degrees as a readable special effect 
OrientationInterpolator62 = x3d.OrientationInterpolator()
OrientationInterpolator62.setDEF("SpinInterpolator")
OrientationInterpolator62.setKey([0,0.5,1])
OrientationInterpolator62.setKeyValue([0,1,0,4.712389,0,1,0,0,0,1,0,1.5707964])

Scene29.addChildren(OrientationInterpolator62)
TimeSensor63 = x3d.TimeSensor()
TimeSensor63.setDEF("SpinClock")
TimeSensor63.setCycleInterval(5)
TimeSensor63.setLoop(True)

Scene29.addChildren(TimeSensor63)
ROUTE64 = x3d.ROUTE()
ROUTE64.setFromField("fraction_changed")
ROUTE64.setFromNode("SpinClock")
ROUTE64.setToField("set_fraction")
ROUTE64.setToNode("SpinInterpolator")

Scene29.addChildren(ROUTE64)
ROUTE65 = x3d.ROUTE()
ROUTE65.setFromField("value_changed")
ROUTE65.setFromNode("SpinInterpolator")
ROUTE65.setToField("rotation")
ROUTE65.setToNode("TextTransform")

Scene29.addChildren(ROUTE65)
Group66 = x3d.Group()
Group66.setDEF("BackgroundGroup")
Background67 = x3d.Background()
Background67.setDEF("GradualBackground")

Group66.addChildren(Background67)
Script68 = x3d.Script()
Script68.setDEF("colorTypeConversionScript")
field69 = x3d.field()
field69.setName("colorInput")
field69.setAccessType("inputOnly")
field69.setType("SFColor")

Script68.addField(field69)
field70 = x3d.field()
field70.setName("colorsOutput")
field70.setAccessType("outputOnly")
field70.setType("MFColor")

Script68.addField(field70)

Script68.setSourceCode('''ecmascript:\n"+
"\n"+
"function colorInput (eventValue) // Example source code\n"+
"{\n"+
"   colorsOutput = new MFColor(eventValue); // assigning value sends output event\n"+
"// Browser.print('colorInput=' + eventValue + ', colorsOutput=' + colorsOutput + '\\n');\n"+
"}''')

Group66.addChildren(Script68)
ColorInterpolator71 = x3d.ColorInterpolator()
ColorInterpolator71.setDEF("ColorAnimator")
ColorInterpolator71.setKey([0,0.5,1])
ColorInterpolator71.setKeyValue([0.9411765,1,1,0.29411766,0,0.50980395,0.9411765,1,1])
# AZURE to INDIGO and back again 

Group66.addChildren(ColorInterpolator71)
TimeSensor72 = x3d.TimeSensor()
TimeSensor72.setDEF("ColorClock")
TimeSensor72.setCycleInterval(60)
TimeSensor72.setLoop(True)

Group66.addChildren(TimeSensor72)
ROUTE73 = x3d.ROUTE()
ROUTE73.setFromField("colorsOutput")
ROUTE73.setFromNode("colorTypeConversionScript")
ROUTE73.setToField("skyColor")
ROUTE73.setToNode("GradualBackground")

Group66.addChildren(ROUTE73)
ROUTE74 = x3d.ROUTE()
ROUTE74.setFromField("value_changed")
ROUTE74.setFromNode("ColorAnimator")
ROUTE74.setToField("colorInput")
ROUTE74.setToNode("colorTypeConversionScript")

Group66.addChildren(ROUTE74)
ROUTE75 = x3d.ROUTE()
ROUTE75.setFromField("fraction_changed")
ROUTE75.setFromNode("ColorClock")
ROUTE75.setToField("set_fraction")
ROUTE75.setToNode("ColorAnimator")

Group66.addChildren(ROUTE75)

Scene29.addChildren(Group66)
ProtoDeclare76 = x3d.ProtoDeclare()
ProtoDeclare76.setName("ArtDeco01Material")
ProtoDeclare76.setAppinfo("tooltip: ArtDeco01Material prototype is a Material node")
ProtoInterface77 = x3d.ProtoInterface()
field78 = x3d.field()
field78.setName("description")
field78.setAccessType("inputOutput")
field78.setAppinfo("tooltip for descriptionField")
field78.setType("SFString")
field78.setValue("ArtDeco01Material prototype is a Material node")

ProtoInterface77.addField(field78)
field79 = x3d.field()
field79.setName("enabled")
field79.setAccessType("inputOutput")
field79.setType("SFBool")
field79.setValue("true")

ProtoInterface77.addField(field79)

ProtoDeclare76.setProtoInterface(ProtoInterface77)
ProtoBody80 = x3d.ProtoBody()
# Initial node of ProtoBody determines prototype node type 
Material81 = x3d.Material()
Material81.setAmbientIntensity(0.25)
Material81.setDiffuseColor([0.282435,0.085159,0.134462])
Material81.setShininess(0.127273)
Material81.setSpecularColor([0.276305,0.11431,0.139857])

ProtoBody80.addChildren(Material81)
# [HelloWorldProgram diagnostic] should be connected to scene graph: ArtDeco01ProtoDeclare.getNodeType()=\"Material\" 
# presence of follow-on TouchSensor shows that additional nodes are allowed in ProtoBody after initial node, regardless of node types 
TouchSensor82 = x3d.TouchSensor()
TouchSensor82.setDescription("within ProtoBody")
IS83 = x3d.IS()
connect84 = x3d.connect()
connect84.setNodeField("description")
connect84.setProtoField("description")

IS83.addConnect(connect84)
connect85 = x3d.connect()
connect85.setNodeField("enabled")
connect85.setProtoField("enabled")

IS83.addConnect(connect85)

TouchSensor82.setIS(IS83)

ProtoBody80.addChildren(TouchSensor82)

ProtoDeclare76.setProtoBody(ProtoBody80)

Scene29.addChildren(ProtoDeclare76)
ExternProtoDeclare86 = x3d.ExternProtoDeclare()
ExternProtoDeclare86.setName("ArtDeco02Material")
ExternProtoDeclare86.setAppinfo("this is a different Material node")
ExternProtoDeclare86.setUrl(["http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d#ArtDeco02Material","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3dv#ArtDeco02Material"])
# [HelloWorldProgram diagnostic] ArtDeco02ExternProtoDeclare.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time, TODO X3DJSAIL needs to add further capability.\" 
field87 = x3d.field()
field87.setName("description")
field87.setAccessType("inputOutput")
field87.setAppinfo("tooltip for descriptionField")
field87.setType("SFString")

ExternProtoDeclare86.addField(field87)

Scene29.addChildren(ExternProtoDeclare86)
# Tested ArtDeco01ProtoInstance, ArtDeco02ProtoInstance for improper node type when ProtoInstance is added in wrong place 
Shape88 = x3d.Shape()
Shape88.setDEF("TestShape1")
Appearance89 = x3d.Appearance()
Appearance89.setDEF("TestAppearance1")
# ArtDeco01Material prototype goes here... TODO ensure setContainerField is handled in exported Java 
ProtoInstance90 = x3d.ProtoInstance()
ProtoInstance90.setName("ArtDeco01Material")
# [HelloWorldProgram diagnostic] ArtDeco01ProtoInstance.getNodeType()=\"Material\" 
fieldValue91 = x3d.fieldValue()
fieldValue91.setName("description")
fieldValue91.setValue("ArtDeco01Material can substitute for a Material node")

ProtoInstance90.addFieldValue(fieldValue91)

Appearance89.setMaterial(ProtoInstance90)

Shape88.setAppearance(Appearance89)
Sphere92 = x3d.Sphere()
Sphere92.setRadius(0.001)

Shape88.setGeometry(Sphere92)

Scene29.addChildren(Shape88)
Shape93 = x3d.Shape()
Shape93.setDEF("TestShape2")
Appearance94 = x3d.Appearance()
Appearance94.setDEF("TestAppearance2")
# ArtDeco02Material prototype goes here... TODO ensure setContainerField is handled in exported Java 
ProtoInstance95 = x3d.ProtoInstance()
ProtoInstance95.setDEF("ArtDeco02MaterialDEF")
ProtoInstance95.setName("ArtDeco02Material")
# [HelloWorldProgram diagnostic] ArtDeco02ProtoInstance.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time, TODO X3DJSAIL needs to add further capability.\" 
fieldValue96 = x3d.fieldValue()
fieldValue96.setName("description")
fieldValue96.setValue("ArtDeco02Material can substitute for another Material node")

ProtoInstance95.addFieldValue(fieldValue96)

Appearance94.setMaterial(ProtoInstance95)

Shape93.setAppearance(Appearance94)
Cone97 = x3d.Cone()
Cone97.setBottomRadius(0.001)
Cone97.setHeight(0.001)

Shape93.setGeometry(Cone97)

Scene29.addChildren(Shape93)
Shape98 = x3d.Shape()
Shape98.setDEF("TestShape3")
Appearance99 = x3d.Appearance()
Appearance99.setDEF("TestAppearance3")
# ArtDeco02Material ProtoInstance USE goes here... 
ProtoInstance100 = x3d.ProtoInstance()
ProtoInstance100.setUSE("ArtDeco02MaterialDEF")

Appearance99.setMaterial(ProtoInstance100)

Shape98.setAppearance(Appearance99)
Cylinder101 = x3d.Cylinder()
Cylinder101.setHeight(0.001)
Cylinder101.setRadius(0.001)

Shape98.setGeometry(Cylinder101)

Scene29.addChildren(Shape98)
Inline102 = x3d.Inline()
Inline102.setDEF("inlineSceneDef")
Inline102.setUrl(["someOtherScene.x3d"])

Scene29.addChildren(Inline102)
IMPORT103 = x3d.IMPORT()
IMPORT103.setAS("WorldInfoDEF2")
IMPORT103.setImportedDEF("WorldInfoDEF")
IMPORT103.setInlineDEF("inlineSceneDef")

Scene29.addChildren(IMPORT103)
EXPORT104 = x3d.EXPORT()
EXPORT104.setAS("WorldInfoDEF3")
EXPORT104.setLocalDEF("WorldInfoDEF")

Scene29.addChildren(EXPORT104)
ProtoDeclare105 = x3d.ProtoDeclare()
ProtoDeclare105.setName("MaterialModulator")
ProtoDeclare105.setAppinfo("mimic a Material node and modulate fields as an animation effect")
ProtoDeclare105.setDocumentation("http://x3dgraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorIndex.html")
ProtoInterface106 = x3d.ProtoInterface()
field107 = x3d.field()
field107.setName("enabled")
field107.setAccessType("inputOutput")
field107.setType("SFBool")
field107.setValue("true")

ProtoInterface106.addField(field107)
field108 = x3d.field()
field108.setName("diffuseColor")
field108.setAccessType("inputOutput")
field108.setType("SFColor")
field108.setValue("0 0 0")

ProtoInterface106.addField(field108)
field109 = x3d.field()
field109.setName("emissiveColor")
field109.setAccessType("inputOutput")
field109.setType("SFColor")
field109.setValue("0.05 0.05 0.5")

ProtoInterface106.addField(field109)
field110 = x3d.field()
field110.setName("specularColor")
field110.setAccessType("inputOutput")
field110.setType("SFColor")
field110.setValue("0 0 0")

ProtoInterface106.addField(field110)
field111 = x3d.field()
field111.setName("transparency")
field111.setAccessType("inputOutput")
field111.setType("SFFloat")
field111.setValue("0")

ProtoInterface106.addField(field111)
field112 = x3d.field()
field112.setName("shininess")
field112.setAccessType("inputOutput")
field112.setType("SFFloat")
field112.setValue("0")

ProtoInterface106.addField(field112)
field113 = x3d.field()
field113.setName("ambientIntensity")
field113.setAccessType("inputOutput")
field113.setType("SFFloat")
field113.setValue("0")

ProtoInterface106.addField(field113)

ProtoDeclare105.setProtoInterface(ProtoInterface106)
ProtoBody114 = x3d.ProtoBody()
Material115 = x3d.Material()
Material115.setDEF("MaterialNode")
IS116 = x3d.IS()
connect117 = x3d.connect()
connect117.setNodeField("diffuseColor")
connect117.setProtoField("diffuseColor")

IS116.addConnect(connect117)
connect118 = x3d.connect()
connect118.setNodeField("emissiveColor")
connect118.setProtoField("emissiveColor")

IS116.addConnect(connect118)
connect119 = x3d.connect()
connect119.setNodeField("specularColor")
connect119.setProtoField("specularColor")

IS116.addConnect(connect119)
connect120 = x3d.connect()
connect120.setNodeField("transparency")
connect120.setProtoField("transparency")

IS116.addConnect(connect120)
connect121 = x3d.connect()
connect121.setNodeField("shininess")
connect121.setProtoField("shininess")

IS116.addConnect(connect121)
connect122 = x3d.connect()
connect122.setNodeField("ambientIntensity")
connect122.setProtoField("ambientIntensity")

IS116.addConnect(connect122)

Material115.setIS(IS116)

ProtoBody114.addChildren(Material115)
# Only first node (the node type) is renderable, others are along for the ride 
Script123 = x3d.Script()
Script123.setDEF("MaterialModulatorScript")
field124 = x3d.field()
field124.setName("enabled")
field124.setAccessType("inputOutput")
field124.setType("SFBool")

Script123.addField(field124)
field125 = x3d.field()
field125.setName("diffuseColor")
field125.setAccessType("inputOutput")
field125.setType("SFColor")

Script123.addField(field125)
field126 = x3d.field()
field126.setName("newColor")
field126.setAccessType("outputOnly")
field126.setType("SFColor")

Script123.addField(field126)
field127 = x3d.field()
field127.setName("clockTrigger")
field127.setAccessType("inputOnly")
field127.setType("SFTime")

Script123.addField(field127)
IS128 = x3d.IS()
connect129 = x3d.connect()
connect129.setNodeField("enabled")
connect129.setProtoField("enabled")

IS128.addConnect(connect129)
connect130 = x3d.connect()
connect130.setNodeField("diffuseColor")
connect130.setProtoField("diffuseColor")

IS128.addConnect(connect130)

Script123.setIS(IS128)

Script123.setSourceCode('''ecmascript:\n"+
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

ProtoBody114.addChildren(Script123)

ProtoDeclare105.setProtoBody(ProtoBody114)

Scene29.addChildren(ProtoDeclare105)
# Test success: declarative statement createDeclarativeShapeTests() 
Group131 = x3d.Group()
Group131.setDEF("DeclarativeGroupExample")
Shape132 = x3d.Shape()
MetadataString133 = x3d.MetadataString()
MetadataString133.setDEF("FindableMetadataStringTest")
MetadataString133.setName("findThisNameValue")
MetadataString133.setValue(["test case"])

Shape132.setMetadata(MetadataString133)
Appearance134 = x3d.Appearance()
Appearance134.setDEF("DeclarativeAppearanceExample")
# DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance 
ProtoInstance135 = x3d.ProtoInstance()
ProtoInstance135.setDEF("MyMaterialModulator")
ProtoInstance135.setName("MaterialModulator")

Appearance134.setMaterial(ProtoInstance135)

Shape132.setAppearance(Appearance134)
Cone136 = x3d.Cone()
Cone136.setBottom(False)
Cone136.setBottomRadius(0.05)
Cone136.setHeight(0.1)

Shape132.setGeometry(Cone136)

Group131.addChildren(Shape132)
# Test success: declarativeGroup.addChild() singleton pipeline method 

Scene29.addChildren(Group131)
# Test success: declarative statement addChild() 
# Test success: x3dModel.findNodeByDEF(DeclarativeAppearanceExample) = <Appearance DEF='DeclarativeAppearanceExample'/> i.e. <Appearance DEF='DeclarativeAppearanceExample'> <!- - DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance - -> <ProtoInstance DEF='MyMaterialModulator' name='MaterialModulator' containerField='material'/> </Appearance> 
# Test success: x3dModel.findElementByNameValue(findThisNameValue) = <MetadataString DEF='FindableMetadataStringTest' name='findThisNameValue' value='\"test case\"'/> 
# Test success: x3dModel.findElementByNameValue(\"ArtDeco01Material\", \"ProtoDeclare\") found 
# Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoDeclare\") found 
# Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoInstance\") found 
Group137 = x3d.Group()
Group137.setDEF("TestFieldObjectsGroup")
# testFieldObjects() results 
# SFBool default=true, true=true, false=false, negate()=true 
# MFBool default=, initial=true false true, negate()=false true false 
# SFFloat default=0.0, initial=1.0, setValue(2)=2.0, setValue(3.0f)=3.0, setValue(4.0)=4.0 
# MFFloat default=, initial=1 2 3, append(5)=1 2 3 5, inserts(3,4)(0,0)=0 1 2 3 4 5, append(6)=0 1 2 3 4 5 6, size()=7 
# ... get1Value[3]=3.0, remove[1]=0 2 3 4 5 6, set1Value(0,10)=10 2 3 4 5 6, multiply(2)=20 4 6 8 10 12, clear= 
# SFVec3f default=0 0 0, initial=1 2 3, setValue=4 5 6, multiply(2)=8 10 12, normalize()=0.45584232 0.5698029 0.68376344 

Scene29.addChildren(Group137)
Sound138 = x3d.Sound()
Sound138.setLocation([0,1.6,0])
# set sound-ellipsoid location height at 1.6m to match typical avatar height 
AudioClip139 = x3d.AudioClip()
AudioClip139.setDescription("chimes")
AudioClip139.setUrl(["chimes.wav","http://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav"])
# Scene example fragment from http://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/default.x3d 

Sound138.setSource(AudioClip139)

Scene29.addChildren(Sound138)
Sound140 = x3d.Sound()
Sound140.setLocation([0,1.6,0])
# set sound-ellipsoid location height at 1.6m to match typical avatar height 
MovieTexture141 = x3d.MovieTexture()
MovieTexture141.setDescription("mpgsys.mpg from ConformanceNist suite")
MovieTexture141.setUrl(["mpgsys.mpg","http://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpgsys.mpg"])
# Scene example fragment from http://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpeg1-systems.x3d 
# Expected containerField='source', allowed containerField values=\"texture\" \"source\" \"back\" \"bottom\" \"front\" \"left\" \"right\" \"top\" \"backTexture\" \"bottomTexture\" \"frontTexture\" \"leftTexture\" \"rightTexture\" \"topTexture\" 

Sound140.setSource(MovieTexture141)

Scene29.addChildren(Sound140)
# Test success: AnchorObject.isNode()=true, siteAnchor.isNode()=true 
# Test success: AnchorObject.isStatement()=false, siteAnchor.isStatement()=false 
# Test success: ROUTEObject.isNode()=false, orbitPositionROUTE.isNode()=false 
# Test success: ROUTEObject.isStatement()=true, orbitPositionROUTE.isStatement()=true 
# Test success: CommentsBlock.isNode()=false, testComments.isNode()=false 
# Test failure: CommentsBlock.isStatement()=true, testComments.isStatement()=true 
Shape142 = x3d.Shape()
Shape142.setDEF("ExtrusionShape")
# ExampleExtrusion isCrossSectionClosed()=true, crossSection='[1.0, 1.0, 1.0, -1.0, -1.0, -1.0, -1.0, 1.0, 1.0, 1.0]' 
# ExampleExtrusion isSpineClosed()=false, spine='[0.0, 0.0, 0.0, 0.0, 1.0, 0.0]' 
Appearance143 = x3d.Appearance()
Appearance143.setDEF("TransparentAppearance")
Material144 = x3d.Material()
Material144.setTransparency(1)

Appearance143.setMaterial(Material144)

Shape142.setAppearance(Appearance143)
Extrusion145 = x3d.Extrusion()
Extrusion145.setDEF("ExampleExtrusion")

Shape142.setGeometry(Extrusion145)

Scene29.addChildren(Shape142)
MetadataString146 = x3d.MetadataString()
MetadataString146.setDEF("scene.addChildMetadata")
MetadataString146.setName("test")
MetadataString146.setValue(["Top-level root Metadata node beneath Scene needs to be one of '-children' in JSON encoding"])

Scene29.addMetadata(MetadataString146)
LayerSet147 = x3d.LayerSet()
LayerSet147.setDEF("scene.addChildLayerSetTest")
LayerSet147.setOrder([0])

Scene29.addLayerSet(LayerSet147)

X3D0.setScene(Scene29)
X3D0.toFileX3D("../data/Java_RoundTrip.x3d")
