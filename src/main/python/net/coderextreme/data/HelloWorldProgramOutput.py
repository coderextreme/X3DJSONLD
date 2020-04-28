import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
# x3dVersionComparisonTest for this model: supportsX3dVersion(X3DObject.VERSION_3_0)=true 
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
component6.setName("H-Anim")
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
meta12.setContent("HelloWorldProgramOutput.x3d")
meta12.setName("title")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setContent("continued development and testing in progress")
meta13.setName("info")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setContent("Example HelloWorldProgram creates an X3D model using the X3D Java Scene Access Interface Library (X3DJSAIL)")
meta14.setName("description")

head1.addMeta(meta14)
meta15 = x3d.meta()
meta15.setContent("https://www.web3d.org/specifications/java/X3DJSAIL.html")
meta15.setName("reference")

head1.addMeta(meta15)
meta16 = x3d.meta()
meta16.setContent("HelloWorldProgramOutput.java")
meta16.setName("generator")

head1.addMeta(meta16)
meta17 = x3d.meta()
meta17.setContent("6 September 2016")
meta17.setName("created")

head1.addMeta(meta17)
meta18 = x3d.meta()
meta18.setContent("4 April 2020")
meta18.setName("modified")

head1.addMeta(meta18)
meta19 = x3d.meta()
meta19.setContent("X3D Java Scene Access Interface Library (X3DJSAIL)")
meta19.setName("generator")

head1.addMeta(meta19)
meta20 = x3d.meta()
meta20.setContent("https://www.web3d.org/specifications/java/examples/HelloWorldProgram.java")
meta20.setName("generator")

head1.addMeta(meta20)
meta21 = x3d.meta()
meta21.setContent("Netbeans http://www.netbeans.org")
meta21.setName("generator")

head1.addMeta(meta21)
meta22 = x3d.meta()
meta22.setContent("Don Brutzman")
meta22.setName("creator")

head1.addMeta(meta22)
meta23 = x3d.meta()
meta23.setContent("https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/java/examples/HelloWorldProgramOutput.x3d")
meta23.setName("reference")

head1.addMeta(meta23)
meta24 = x3d.meta()
meta24.setContent("Console output, ClassicVRML encoding, VRML97 encoding and pretty-print documentation:")
meta24.setName("reference")

head1.addMeta(meta24)
meta25 = x3d.meta()
meta25.setContent("HelloWorldProgramOutput.txt")
meta25.setName("reference")

head1.addMeta(meta25)
meta26 = x3d.meta()
meta26.setContent("HelloWorldProgramOutput.x3dv")
meta26.setName("reference")

head1.addMeta(meta26)
meta27 = x3d.meta()
meta27.setContent("HelloWorldProgramOutput.wrl")
meta27.setName("reference")

head1.addMeta(meta27)
meta28 = x3d.meta()
meta28.setContent("HelloWorldProgramOutput.html")
meta28.setName("reference")

head1.addMeta(meta28)
meta29 = x3d.meta()
meta29.setContent("https://savage.nps.edu/X3dValidator?url=https://www.web3d.org/specifications/java/examples/HelloWorldProgramOutput.x3d")
meta29.setName("reference")

head1.addMeta(meta29)
meta30 = x3d.meta()
meta30.setContent("https://www.web3d.org/specifications/java/examples/HelloWorldProgramOutput.x3d")
meta30.setName("identifier")

head1.addMeta(meta30)
meta31 = x3d.meta()
meta31.setContent("../license.html")
meta31.setName("license")

head1.addMeta(meta31)

X3D0.setHead(head1)
Scene32 = x3d.Scene()
ViewpointGroup33 = x3d.ViewpointGroup()
ViewpointGroup33.setDescription("Available viewpoints")
Viewpoint34 = x3d.Viewpoint()
Viewpoint34.setDEF("DefaultView")
Viewpoint34.setDescription("Hello X3DJSAIL")

ViewpointGroup33.addChildren(Viewpoint34)
Viewpoint35 = x3d.Viewpoint()
Viewpoint35.setDEF("TopDownView")
Viewpoint35.setDescription("top-down view from above")
Viewpoint35.setOrientation([1,0,0,-1.570796])
Viewpoint35.setPosition([0,100,0])

ViewpointGroup33.addChildren(Viewpoint35)

Scene32.addChildren(ViewpointGroup33)
NavigationInfo36 = x3d.NavigationInfo()
NavigationInfo36.setAvatarSize([0.25,1.6,0.75])
NavigationInfo36.setTransitionType(["LINEAR"])
NavigationInfo36.setType(["EXAMINE","FLY","ANY"])

Scene32.addChildren(NavigationInfo36)
WorldInfo37 = x3d.WorldInfo()
WorldInfo37.setDEF("WorldInfoDEF")
WorldInfo37.setTitle("HelloWorldProgram produced by X3D Java SAI Library (X3DJSAIL)")

Scene32.addChildren(WorldInfo37)
WorldInfo38 = x3d.WorldInfo()
WorldInfo38.setUSE("WorldInfoDEF")

Scene32.addChildren(WorldInfo38)
WorldInfo39 = x3d.WorldInfo()
WorldInfo39.setUSE("WorldInfoDEF")

Scene32.addChildren(WorldInfo39)
Transform40 = x3d.Transform()
Transform40.setDEF("LogoGeometryTransform")
Transform40.setTranslation([0,1.5,0])
Anchor41 = x3d.Anchor()
Anchor41.setDescription("select for X3D Java SAI Library (X3DJSAIL) description")
Anchor41.setUrl(["../X3DJSAIL.html","https://www.web3d.org/specifications/java/X3DJSAIL.html"])
Shape42 = x3d.Shape()
Shape42.setDEF("BoxShape")
Appearance43 = x3d.Appearance()
Material44 = x3d.Material()
Material44.setDEF("GreenMaterial")
Material44.setDiffuseColor([0,1,1])
Material44.setEmissiveColor([0.8,0,0])
Material44.setTransparency(0.1)

Appearance43.setMaterial(Material44)
ImageTexture45 = x3d.ImageTexture()
ImageTexture45.setUrl(["images/X3dJavaSceneAccessInterfaceSaiLibrary.png","https://www.web3d.org/specifications/java/examples/images/X3dJavaSceneAccessInterfaceSaiLibrary.png"])

Appearance43.setTexture(ImageTexture45)

Shape42.setAppearance(Appearance43)
Box46 = x3d.Box()
Box46.setDEF("test-NMTOKEN_regex.0123456789")
Box46.setCssClass("untextured")

Shape42.setGeometry(Box46)

Anchor41.addChildren(Shape42)

Transform40.addChildren(Anchor41)

Scene32.addChildren(Transform40)
Shape47 = x3d.Shape()
Shape47.setDEF("LineShape")
Appearance48 = x3d.Appearance()
Material49 = x3d.Material()
Material49.setEmissiveColor([0.6,0.19607843,0.8])

Appearance48.setMaterial(Material49)

Shape47.setAppearance(Appearance48)
IndexedLineSet50 = x3d.IndexedLineSet()
IndexedLineSet50.setCoordIndex([0,1,2,3,4,0])
# Coordinate 3-tuple point count: 6 
Coordinate51 = x3d.Coordinate()
Coordinate51.setPoint([0,1.5,0,2,1.5,0,2,1.5,-2,-2,1.5,-2,-2,1.5,0,0,1.5,0])

IndexedLineSet50.setCoord(Coordinate51)

Shape47.setGeometry(IndexedLineSet50)

Scene32.addChildren(Shape47)
PositionInterpolator52 = x3d.PositionInterpolator()
PositionInterpolator52.setDEF("BoxPathAnimator")
PositionInterpolator52.setKey([0,0.125,0.375,0.625,0.875,1])
PositionInterpolator52.setKeyValue([0,1.5,0,2,1.5,0,2,1.5,-2,-2,1.5,-2,-2,1.5,0,0,1.5,0])

Scene32.addChildren(PositionInterpolator52)
TimeSensor53 = x3d.TimeSensor()
TimeSensor53.setDEF("OrbitClock")
TimeSensor53.setCycleInterval(8)
TimeSensor53.setLoop(True)

Scene32.addChildren(TimeSensor53)
ROUTE54 = x3d.ROUTE()
ROUTE54.setFromField("fraction_changed")
ROUTE54.setFromNode("OrbitClock")
ROUTE54.setToField("set_fraction")
ROUTE54.setToNode("BoxPathAnimator")

Scene32.addChildren(ROUTE54)
ROUTE55 = x3d.ROUTE()
ROUTE55.setFromField("value_changed")
ROUTE55.setFromNode("BoxPathAnimator")
ROUTE55.setToField("set_translation")
ROUTE55.setToNode("LogoGeometryTransform")

Scene32.addChildren(ROUTE55)
Transform56 = x3d.Transform()
Transform56.setDEF("TextTransform")
Transform56.setTranslation([0,-1.5,0])
Shape57 = x3d.Shape()
Appearance58 = x3d.Appearance()
Material59 = x3d.Material()
Material59.setUSE("GreenMaterial")

Appearance58.setMaterial(Material59)

Shape57.setAppearance(Appearance58)
Text60 = x3d.Text()
Text60.setString(["X3D Java","SAI Library","X3DJSAIL"])
# Comment example A, plain quotation marks: He said, \"Immel did it!\" 
# Comment example B, XML character entities: He said, &quot;Immel did it!&quot; 
MetadataSet61 = x3d.MetadataSet()
MetadataSet61.setName("EscapedQuotationMarksMetadataSet")
MetadataString62 = x3d.MetadataString()
MetadataString62.setName("quotesTestC")
MetadataString62.setValue(["MFString example C, backslash-escaped quotes: He said, \"Immel did it!\""])

MetadataSet61.addValue(MetadataString62)
MetadataString63 = x3d.MetadataString()
MetadataString63.setName("extraChildTest")
MetadataString63.setValue(["checks MetadataSetObject addValue() method"])

MetadataSet61.addValue(MetadataString63)

Text60.setMetadata(MetadataSet61)
FontStyle64 = x3d.FontStyle()
FontStyle64.setFamily(["SERIF"])
FontStyle64.setJustify(["MIDDLE","MIDDLE"])

Text60.setFontStyle(FontStyle64)

Shape57.setGeometry(Text60)

Transform56.addChildren(Shape57)
Collision65 = x3d.Collision()
# test containerField='proxy' 
Shape66 = x3d.Shape()
Shape66.setDEF("ProxyShape")
# alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\"' 
# alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\" \"\"' 
# alternative Java source: .setString(new String [] {\"One, Two, Comment\", \"\", \"He said, \\\"Immel did it!\\\"\"}) 
# reference: https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamplesIndex.html 
Text67 = x3d.Text()
Text67.setString(["One, Two, Text","","He said, \"Immel did it!","\""])

Shape66.setGeometry(Text67)

Collision65.setProxy(Shape66)

Transform56.addChildren(Collision65)
# It's a beautiful world 
# ... for you! 
# https://en.wikipedia.org/wiki/Beautiful_World_(Devo_song) 

Scene32.addChildren(Transform56)
# repeatedly spin 180 degrees as a readable special effect 
OrientationInterpolator68 = x3d.OrientationInterpolator()
OrientationInterpolator68.setDEF("SpinInterpolator")
OrientationInterpolator68.setKey([0,0.5,1])
OrientationInterpolator68.setKeyValue([0,1,0,4.712389,0,1,0,0,0,1,0,1.5707964])

Scene32.addChildren(OrientationInterpolator68)
TimeSensor69 = x3d.TimeSensor()
TimeSensor69.setDEF("SpinClock")
TimeSensor69.setCycleInterval(5)
TimeSensor69.setLoop(True)

Scene32.addChildren(TimeSensor69)
ROUTE70 = x3d.ROUTE()
ROUTE70.setFromField("fraction_changed")
ROUTE70.setFromNode("SpinClock")
ROUTE70.setToField("set_fraction")
ROUTE70.setToNode("SpinInterpolator")

Scene32.addChildren(ROUTE70)
ROUTE71 = x3d.ROUTE()
ROUTE71.setFromField("value_changed")
ROUTE71.setFromNode("SpinInterpolator")
ROUTE71.setToField("rotation")
ROUTE71.setToNode("TextTransform")

Scene32.addChildren(ROUTE71)
Group72 = x3d.Group()
Group72.setDEF("BackgroundGroup")
Background73 = x3d.Background()
Background73.setDEF("GradualBackground")

Group72.addChildren(Background73)
Script74 = x3d.Script()
Script74.setDEF("colorTypeConversionScript")
field75 = x3d.field()
field75.setName("colorInput")
field75.setAccessType("inputOnly")
field75.setType("SFColor")

Script74.addField(field75)
field76 = x3d.field()
field76.setName("colorsOutput")
field76.setAccessType("outputOnly")
field76.setType("MFColor")

Script74.addField(field76)

Script74.setSourceCode('''ecmascript:\n"+
"\n"+
"function colorInput (eventValue) // Example source code\n"+
"{\n"+
"   colorsOutput = new MFColor(eventValue); // assigning value sends output event\n"+
"// Browser.print('colorInput=' + eventValue + ', colorsOutput=' + colorsOutput + '\\n');\n"+
"}''')

Group72.addChildren(Script74)
ColorInterpolator77 = x3d.ColorInterpolator()
ColorInterpolator77.setDEF("ColorAnimator")
ColorInterpolator77.setKey([0,0.5,1])
ColorInterpolator77.setKeyValue([0.9411765,1,1,0.29411766,0,0.50980395,0.9411765,1,1])
# AZURE to INDIGO and back again 

Group72.addChildren(ColorInterpolator77)
TimeSensor78 = x3d.TimeSensor()
TimeSensor78.setDEF("ColorClock")
TimeSensor78.setCycleInterval(60)
TimeSensor78.setLoop(True)

Group72.addChildren(TimeSensor78)
ROUTE79 = x3d.ROUTE()
ROUTE79.setFromField("colorsOutput")
ROUTE79.setFromNode("colorTypeConversionScript")
ROUTE79.setToField("skyColor")
ROUTE79.setToNode("GradualBackground")

Group72.addChildren(ROUTE79)
ROUTE80 = x3d.ROUTE()
ROUTE80.setFromField("value_changed")
ROUTE80.setFromNode("ColorAnimator")
ROUTE80.setToField("colorInput")
ROUTE80.setToNode("colorTypeConversionScript")

Group72.addChildren(ROUTE80)
ROUTE81 = x3d.ROUTE()
ROUTE81.setFromField("fraction_changed")
ROUTE81.setFromNode("ColorClock")
ROUTE81.setToField("set_fraction")
ROUTE81.setToNode("ColorAnimator")

Group72.addChildren(ROUTE81)

Scene32.addChildren(Group72)
ProtoDeclare82 = x3d.ProtoDeclare()
ProtoDeclare82.setName("ArtDeco01Material")
ProtoDeclare82.setAppinfo("tooltip: ArtDeco01Material prototype is a Material node")
ProtoInterface83 = x3d.ProtoInterface()
field84 = x3d.field()
field84.setName("description")
field84.setAccessType("inputOutput")
field84.setAppinfo("tooltip for descriptionField")
field84.setType("SFString")
field84.setValue("ArtDeco01Material prototype is a Material node")

ProtoInterface83.addField(field84)
field85 = x3d.field()
field85.setName("enabled")
field85.setAccessType("inputOutput")
field85.setType("SFBool")
field85.setValue("true")

ProtoInterface83.addField(field85)

ProtoDeclare82.setProtoInterface(ProtoInterface83)
ProtoBody86 = x3d.ProtoBody()
# Initial node of ProtoBody determines prototype node type 
Material87 = x3d.Material()
Material87.setAmbientIntensity(0.25)
Material87.setDiffuseColor([0.282435,0.085159,0.134462])
Material87.setShininess(0.127273)
Material87.setSpecularColor([0.276305,0.11431,0.139857])

ProtoBody86.addChildren(Material87)
# [HelloWorldProgram diagnostic] should be connected to scene graph: artDeco01ProtoDeclare.getNodeType()=\"Material\" 
# presence of follow-on TouchSensor shows that additional nodes are allowed in ProtoBody after initial node, regardless of node types 
TouchSensor88 = x3d.TouchSensor()
TouchSensor88.setDescription("within ProtoBody")
IS89 = x3d.IS()
connect90 = x3d.connect()
connect90.setNodeField("description")
connect90.setProtoField("description")

IS89.addConnect(connect90)
connect91 = x3d.connect()
connect91.setNodeField("enabled")
connect91.setProtoField("enabled")

IS89.addConnect(connect91)

TouchSensor88.setIS(IS89)

ProtoBody86.addChildren(TouchSensor88)

ProtoDeclare82.setProtoBody(ProtoBody86)

Scene32.addChildren(ProtoDeclare82)
ExternProtoDeclare92 = x3d.ExternProtoDeclare()
ExternProtoDeclare92.setName("ArtDeco02Material")
ExternProtoDeclare92.setAppinfo("this is a different Material node")
ExternProtoDeclare92.setUrl(["http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d#ArtDeco02Material","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3dv#ArtDeco02Material"])
# [HelloWorldProgram diagnostic] artDeco02ExternProtoDeclare.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time. TODO X3DJSAIL needs to add further capability that retrieves the ExternProtoDeclare file.\" 
field93 = x3d.field()
field93.setName("description")
field93.setAccessType("inputOutput")
field93.setAppinfo("tooltip for descriptionField")
field93.setType("SFString")

ExternProtoDeclare92.addField(field93)

Scene32.addChildren(ExternProtoDeclare92)
# Tested ArtDeco01ProtoInstance, ArtDeco02ProtoInstance for improper node type when ProtoInstance is added in wrong place 
Shape94 = x3d.Shape()
Shape94.setDEF("TestShape1")
Appearance95 = x3d.Appearance()
Appearance95.setDEF("TestAppearance1")
# ArtDeco01Material prototype goes here... TODO ensure setContainerField is handled in exported Java 
ProtoInstance96 = x3d.ProtoInstance()
ProtoInstance96.setName("ArtDeco01Material")
# [HelloWorldProgram diagnostic] ArtDeco01ProtoInstance.getNodeType()=\"Material\" 
fieldValue97 = x3d.fieldValue()
fieldValue97.setName("description")
fieldValue97.setValue("ArtDeco01Material can substitute for a Material node")

ProtoInstance96.addFieldValue(fieldValue97)

Appearance95.setMaterial(ProtoInstance96)

Shape94.setAppearance(Appearance95)
Sphere98 = x3d.Sphere()
Sphere98.setRadius(0.001)

Shape94.setGeometry(Sphere98)

Scene32.addChildren(Shape94)
Shape99 = x3d.Shape()
Shape99.setDEF("TestShape2")
Appearance100 = x3d.Appearance()
Appearance100.setDEF("TestAppearance2")
# ArtDeco02Material prototype goes here... TODO ensure setContainerField is handled in exported Java 
ProtoInstance101 = x3d.ProtoInstance()
ProtoInstance101.setDEF("ArtDeco02MaterialDEF")
ProtoInstance101.setName("ArtDeco02Material")
# [HelloWorldProgram diagnostic] ArtDeco02ProtoInstance.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time. TODO X3DJSAIL needs to add further capability that retrieves the ExternProtoDeclare file.\" 
fieldValue102 = x3d.fieldValue()
fieldValue102.setName("description")
fieldValue102.setValue("ArtDeco02Material can substitute for another Material node")

ProtoInstance101.addFieldValue(fieldValue102)

Appearance100.setMaterial(ProtoInstance101)

Shape99.setAppearance(Appearance100)
Cone103 = x3d.Cone()
Cone103.setBottomRadius(0.001)
Cone103.setHeight(0.001)

Shape99.setGeometry(Cone103)

Scene32.addChildren(Shape99)
Shape104 = x3d.Shape()
Shape104.setDEF("TestShape3")
Appearance105 = x3d.Appearance()
Appearance105.setDEF("TestAppearance3")
# ArtDeco02Material ProtoInstance USE goes here. Note that name field is NOT defined as part of ProtoInstance USE. 
ProtoInstance106 = x3d.ProtoInstance()
ProtoInstance106.setUSE("ArtDeco02MaterialDEF")

Appearance105.setMaterial(ProtoInstance106)

Shape104.setAppearance(Appearance105)
Cylinder107 = x3d.Cylinder()
Cylinder107.setHeight(0.001)
Cylinder107.setRadius(0.001)

Shape104.setGeometry(Cylinder107)

Scene32.addChildren(Shape104)
Inline108 = x3d.Inline()
Inline108.setDEF("inlineSceneDef")
Inline108.setUrl(["someOtherScene.x3d","https://www.web3d.org/specifications/java/examples/someOtherScene.x3d"])

Scene32.addChildren(Inline108)
IMPORT109 = x3d.IMPORT()
IMPORT109.setAS("WorldInfoDEF2")
IMPORT109.setImportedDEF("WorldInfoDEF")
IMPORT109.setInlineDEF("inlineSceneDef")

Scene32.addChildren(IMPORT109)
EXPORT110 = x3d.EXPORT()
EXPORT110.setAS("WorldInfoDEF3")
EXPORT110.setLocalDEF("WorldInfoDEF")

Scene32.addChildren(EXPORT110)
ProtoDeclare111 = x3d.ProtoDeclare()
ProtoDeclare111.setName("MaterialModulator")
ProtoDeclare111.setAppinfo("mimic a Material node and modulate fields as an animation effect")
ProtoDeclare111.setDocumentation("http://x3dgraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorIndex.html")
ProtoInterface112 = x3d.ProtoInterface()
field113 = x3d.field()
field113.setName("enabled")
field113.setAccessType("inputOutput")
field113.setType("SFBool")
field113.setValue("true")

ProtoInterface112.addField(field113)
field114 = x3d.field()
field114.setName("diffuseColor")
field114.setAccessType("inputOutput")
field114.setType("SFColor")
field114.setValue("0 0 0")

ProtoInterface112.addField(field114)
field115 = x3d.field()
field115.setName("emissiveColor")
field115.setAccessType("inputOutput")
field115.setType("SFColor")
field115.setValue("0.05 0.05 0.5")

ProtoInterface112.addField(field115)
field116 = x3d.field()
field116.setName("specularColor")
field116.setAccessType("inputOutput")
field116.setType("SFColor")
field116.setValue("0 0 0")

ProtoInterface112.addField(field116)
field117 = x3d.field()
field117.setName("transparency")
field117.setAccessType("inputOutput")
field117.setType("SFFloat")
field117.setValue("0")

ProtoInterface112.addField(field117)
field118 = x3d.field()
field118.setName("shininess")
field118.setAccessType("inputOutput")
field118.setType("SFFloat")
field118.setValue("0")

ProtoInterface112.addField(field118)
field119 = x3d.field()
field119.setName("ambientIntensity")
field119.setAccessType("inputOutput")
field119.setType("SFFloat")
field119.setValue("0")

ProtoInterface112.addField(field119)

ProtoDeclare111.setProtoInterface(ProtoInterface112)
ProtoBody120 = x3d.ProtoBody()
Material121 = x3d.Material()
Material121.setDEF("MaterialNode")
IS122 = x3d.IS()
connect123 = x3d.connect()
connect123.setNodeField("diffuseColor")
connect123.setProtoField("diffuseColor")

IS122.addConnect(connect123)
connect124 = x3d.connect()
connect124.setNodeField("emissiveColor")
connect124.setProtoField("emissiveColor")

IS122.addConnect(connect124)
connect125 = x3d.connect()
connect125.setNodeField("specularColor")
connect125.setProtoField("specularColor")

IS122.addConnect(connect125)
connect126 = x3d.connect()
connect126.setNodeField("transparency")
connect126.setProtoField("transparency")

IS122.addConnect(connect126)
connect127 = x3d.connect()
connect127.setNodeField("shininess")
connect127.setProtoField("shininess")

IS122.addConnect(connect127)
connect128 = x3d.connect()
connect128.setNodeField("ambientIntensity")
connect128.setProtoField("ambientIntensity")

IS122.addConnect(connect128)

Material121.setIS(IS122)

ProtoBody120.addChildren(Material121)
# Only first node (the node type) is renderable, others are along for the ride 
Script129 = x3d.Script()
Script129.setDEF("MaterialModulatorScript")
field130 = x3d.field()
field130.setName("enabled")
field130.setAccessType("inputOutput")
field130.setType("SFBool")

Script129.addField(field130)
field131 = x3d.field()
field131.setName("diffuseColor")
field131.setAccessType("inputOutput")
field131.setType("SFColor")

Script129.addField(field131)
field132 = x3d.field()
field132.setName("newColor")
field132.setAccessType("outputOnly")
field132.setType("SFColor")

Script129.addField(field132)
field133 = x3d.field()
field133.setName("clockTrigger")
field133.setAccessType("inputOnly")
field133.setType("SFTime")

Script129.addField(field133)
IS134 = x3d.IS()
connect135 = x3d.connect()
connect135.setNodeField("enabled")
connect135.setProtoField("enabled")

IS134.addConnect(connect135)
connect136 = x3d.connect()
connect136.setNodeField("diffuseColor")
connect136.setProtoField("diffuseColor")

IS134.addConnect(connect136)

Script129.setIS(IS134)

Script129.setSourceCode('''ecmascript:\n"+
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
"}''')

ProtoBody120.addChildren(Script129)

ProtoDeclare111.setProtoBody(ProtoBody120)

Scene32.addChildren(ProtoDeclare111)
# Test success: declarative statement createDeclarativeShapeTests() 
Group137 = x3d.Group()
Group137.setDEF("DeclarativeGroupExample")
Shape138 = x3d.Shape()
MetadataString139 = x3d.MetadataString()
MetadataString139.setDEF("FindableMetadataStringTest")
MetadataString139.setName("findThisNameValue")
MetadataString139.setValue(["test case"])

Shape138.setMetadata(MetadataString139)
Appearance140 = x3d.Appearance()
Appearance140.setDEF("DeclarativeAppearanceExample")
# DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance 
ProtoInstance141 = x3d.ProtoInstance()
ProtoInstance141.setDEF("MyMaterialModulator")
ProtoInstance141.setName("MaterialModulator")

Appearance140.setMaterial(ProtoInstance141)

Shape138.setAppearance(Appearance140)
Cone142 = x3d.Cone()
Cone142.setBottom(False)
Cone142.setBottomRadius(0.05)
Cone142.setHeight(0.1)

Shape138.setGeometry(Cone142)

Group137.addChildren(Shape138)
# Test success: declarativeGroup.addChild() singleton pipeline method 

Scene32.addChildren(Group137)
# Test success: declarative statement addChild() 
# Test success: x3dModel.findNodeByDEF(DeclarativeAppearanceExample) = <Appearance DEF='DeclarativeAppearanceExample'/> i.e. <Appearance DEF='DeclarativeAppearanceExample'> <!- - DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance - -> <ProtoInstance DEF='MyMaterialModulator' name='MaterialModulator' containerField='material'/> </Appearance> 
# Test success: x3dModel.findElementByNameValue(findThisNameValue) = <MetadataString DEF='FindableMetadataStringTest' name='findThisNameValue' value='\"test case\"'/> 
# Test success: x3dModel.findElementByNameValue(\"ArtDeco01Material\", \"ProtoDeclare\") found 
# Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoDeclare\") found 
# Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoInstance\") found 
Group143 = x3d.Group()
Group143.setDEF("TestFieldObjectsGroup")
# testFieldObjects() results 
# SFBool default=true, true=true, false=false, negate()=true 
# MFBool default=, initial=true false true, negate()=false true false 
# SFFloat default=0.0, initial=1.0, setValue(2)=2.0, setValue(3.0f)=3.0, setValue(4.0)=4.0 
# MFFloat default=, initial=1 2 3, append(5)=1 2 3 5, inserts(3,4)(0,0)=0 1 2 3 4 5, append(6)=0 1 2 3 4 5 6, size()=7 
# ... get1Value[3]=3.0, remove[1]=0 2 3 4 5 6, set1Value(0,10)=10 2 3 4 5 6, multiply(2)=20 4 6 8 10 12, clear= 
# SFVec3f default=0 0 0, initial=1 2 3, setValue=4 5 6, multiply(2)=8 10 12, normalize()=0.45584232 0.5698029 0.68376344, regex matches()=true 
# regex test SFVec3f().matches(\"1 2 3\")=true, regex test SFVec3f().matches(\"1 2 3 4\")=false, regex test (SFRotationObject.matches(\"0 0 0 0\")=true, failure detecting illegal (zero axis) rotation value 

Scene32.addChildren(Group143)
Sound144 = x3d.Sound()
Sound144.setLocation([0,1.6,0])
# set sound-ellipsoid location height at 1.6m to match typical avatar height 
AudioClip145 = x3d.AudioClip()
AudioClip145.setDescription("chimes")
AudioClip145.setUrl(["chimes.wav","https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav"])
# Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/default.x3d 

Sound144.setSource(AudioClip145)

Scene32.addChildren(Sound144)
Sound146 = x3d.Sound()
Sound146.setLocation([0,1.6,0])
# set sound-ellipsoid location height at 1.6m to match typical avatar height 
MovieTexture147 = x3d.MovieTexture()
MovieTexture147.setDescription("mpgsys.mpg from ConformanceNist suite")
MovieTexture147.setUrl(["mpgsys.mpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpgsys.mpg"])
# Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpeg1-systems.x3d 
# Expected containerField='source', allowed containerField values=\"texture\" \"source\" \"back\" \"bottom\" \"front\" \"left\" \"right\" \"top\" \"backTexture\" \"bottomTexture\" \"frontTexture\" \"leftTexture\" \"rightTexture\" \"topTexture\" \"watchList\" 

Sound146.setSource(MovieTexture147)

Scene32.addChildren(Sound146)
# Test success: AnchorObject.isNode()=true, siteAnchor.isNode()=true 
# Test success: AnchorObject.isStatement()=false, siteAnchor.isStatement()=false 
# Test success: ROUTEObject.isNode()=false, orbitPositionROUTE.isNode()=false 
# Test success: ROUTEObject.isStatement()=true, orbitPositionROUTE.isStatement()=true 
# Test success: CommentsBlock.isNode()=false, testComments.isNode()=false 
# Test failure: CommentsBlock.isStatement()=true, testComments.isStatement()=true 
Shape148 = x3d.Shape()
Shape148.setDEF("ExtrusionShape")
# ExampleExtrusion isCrossSectionClosed()=true, crossSection='[1.0, 1.0, 1.0, -1.0, -1.0, -1.0, -1.0, 1.0, 1.0, 1.0]' 
# ExampleExtrusion isSpineClosed()=false, spine='[0.0, 0.0, 0.0, 0.0, 1.0, 0.0]' 
Appearance149 = x3d.Appearance()
Appearance149.setDEF("TransparentAppearance")
Material150 = x3d.Material()
Material150.setTransparency(1)

Appearance149.setMaterial(Material150)

Shape148.setAppearance(Appearance149)
Extrusion151 = x3d.Extrusion()
Extrusion151.setDEF("ExampleExtrusion")

Shape148.setGeometry(Extrusion151)

Scene32.addChildren(Shape148)
Group152 = x3d.Group()
# Test MFNode children array as an ordered list consisting of comments, statements, ProtoInstance and nodes 
ProtoDeclare153 = x3d.ProtoDeclare()
ProtoDeclare153.setName("NewWorldInfo")
ProtoInterface154 = x3d.ProtoInterface()
field155 = x3d.field()
field155.setName("description")
field155.setAccessType("initializeOnly")
field155.setType("SFString")

ProtoInterface154.addField(field155)

ProtoDeclare153.setProtoInterface(ProtoInterface154)
ProtoBody156 = x3d.ProtoBody()
WorldInfo157 = x3d.WorldInfo()

ProtoBody156.addChildren(WorldInfo157)

ProtoDeclare153.setProtoBody(ProtoBody156)

Group152.addChildren(ProtoDeclare153)
ProtoInstance158 = x3d.ProtoInstance()
ProtoInstance158.setDEF("Proto1")
ProtoInstance158.setName("NewWorldInfo")
fieldValue159 = x3d.fieldValue()
fieldValue159.setName("description")
fieldValue159.setValue("testing 1 2 3")

ProtoInstance158.addFieldValue(fieldValue159)

Group152.addChildren(ProtoInstance158)
Group160 = x3d.Group()
Group160.setDEF("Node2")
# intentionally empty 

Group152.addChildren(Group160)
ProtoInstance161 = x3d.ProtoInstance()
ProtoInstance161.setDEF("Proto3")
ProtoInstance161.setName("NewWorldInfo")

Group152.addChildren(ProtoInstance161)
Transform162 = x3d.Transform()
Transform162.setDEF("Node4")
# intentionally empty 

Group152.addChildren(Transform162)
# Test satisfactorily creates MFNode children array as an ordered list with mixed content 

Scene32.addChildren(Group152)
ProtoDeclare163 = x3d.ProtoDeclare()
ProtoDeclare163.setName("ShaderProto")
ProtoBody164 = x3d.ProtoBody()
ProgramShader165 = x3d.ProgramShader()

ProtoBody164.addChildren(ProgramShader165)

ProtoDeclare163.setProtoBody(ProtoBody164)

Scene32.addChildren(ProtoDeclare163)
Shape166 = x3d.Shape()
Appearance167 = x3d.Appearance()
# Test MFNode shaders array as an ordered list consisting of comments, ProtoInstance and nodes 
# Test satisfactorily creates MFNode shaders array as an ordered list with mixed content 
ProgramShader168 = x3d.ProgramShader()
ProgramShader168.setDEF("TestShader1")
ShaderProgram169 = x3d.ShaderProgram()
ShaderProgram169.setDEF("TestShader2")

ProgramShader168.setPrograms(ShaderProgram169)

Appearance167.addShaders(ProgramShader168)
ProtoInstance170 = x3d.ProtoInstance()
ProtoInstance170.setDEF("TestShader3")
ProtoInstance170.setName("ShaderProto")

Appearance167.addShaders(ProtoInstance170)
ComposedShader171 = x3d.ComposedShader()
ComposedShader171.setDEF("TestShader4")
ShaderPart172 = x3d.ShaderPart()
ShaderPart172.setDEF("TestShader5")

ComposedShader171.setParts(ShaderPart172)

Appearance167.addShaders(ComposedShader171)

Shape166.setAppearance(Appearance167)

Scene32.addChildren(Shape166)
Transform173 = x3d.Transform()
Transform173.setDEF("SpecialtyNodes")
CADLayer174 = x3d.CADLayer()
CADAssembly175 = x3d.CADAssembly()
CADPart176 = x3d.CADPart()
CADFace177 = x3d.CADFace()

CADPart176.addChildren(CADFace177)

CADAssembly175.addChildren(CADPart176)

CADLayer174.addChildren(CADAssembly175)

Transform173.addChildren(CADLayer174)
EspduTransform178 = x3d.EspduTransform()
EspduTransform178.setGeoSystem(["GD","WE"])

Transform173.addChildren(EspduTransform178)
ReceiverPdu179 = x3d.ReceiverPdu()
ReceiverPdu179.setGeoSystem(["GD","WE"])

Transform173.addChildren(ReceiverPdu179)
SignalPdu180 = x3d.SignalPdu()
SignalPdu180.setGeoSystem(["GD","WE"])

Transform173.addChildren(SignalPdu180)
TransmitterPdu181 = x3d.TransmitterPdu()
TransmitterPdu181.setGeoSystem(["GD","WE"])

Transform173.addChildren(TransmitterPdu181)
DISEntityManager182 = x3d.DISEntityManager()
DISEntityTypeMapping183 = x3d.DISEntityTypeMapping()

DISEntityManager182.setMapping(DISEntityTypeMapping183)

Transform173.addChildren(DISEntityManager182)

Scene32.addChildren(Transform173)
MetadataString184 = x3d.MetadataString()
MetadataString184.setDEF("scene.addChildMetadata")
MetadataString184.setName("test")
MetadataString184.setValue(["Top-level root Metadata node beneath Scene needs to be one of '-children' in JSON encoding"])

Scene32.addMetadata(MetadataString184)
LayerSet185 = x3d.LayerSet()
LayerSet185.setDEF("scene.addChildLayerSetTest")
LayerSet185.setOrder([0])

Scene32.addLayerSet(LayerSet185)

X3D0.setScene(Scene32)
X3D0.toFileX3D("../data/HelloWorldProgramOutput_RoundTrip.x3d")
