import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Full")
X3D0.setVersion("4.0")
#x3dVersionComparisonTest for this model: supportsX3dVersion(X3D.VERSION_3_0)=true
head1 = x3d.head()
#comment #1
#comment #2
#comment #3
#comment #4
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
meta12.setName("title")
meta12.setContent("HelloWorldProgramOutput.x3d")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("info")
meta13.setContent("continued development and testing in progress")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("description")
meta14.setContent("Example HelloWorldProgram creates an X3D model using the X3D Java Scene Access Interface Library (X3DJSAIL)")

head1.addMeta(meta14)
meta15 = x3d.meta()
meta15.setName("reference")
meta15.setContent("https://www.web3d.org/specifications/java/X3DJSAIL.html")

head1.addMeta(meta15)
meta16 = x3d.meta()
meta16.setName("generator")
meta16.setContent("HelloWorldProgramOutput.java")

head1.addMeta(meta16)
meta17 = x3d.meta()
meta17.setName("created")
meta17.setContent("6 September 2016")

head1.addMeta(meta17)
meta18 = x3d.meta()
meta18.setName("modified")
meta18.setContent("20 December 2020")

head1.addMeta(meta18)
meta19 = x3d.meta()
meta19.setName("generator")
meta19.setContent("X3D Java Scene Access Interface Library (X3DJSAIL)")

head1.addMeta(meta19)
meta20 = x3d.meta()
meta20.setName("generator")
meta20.setContent("https://www.web3d.org/specifications/java/examples/HelloWorldProgram.java")

head1.addMeta(meta20)
meta21 = x3d.meta()
meta21.setName("generator")
meta21.setContent("Netbeans http://www.netbeans.org")

head1.addMeta(meta21)
meta22 = x3d.meta()
meta22.setName("creator")
meta22.setContent("Don Brutzman")

head1.addMeta(meta22)
meta23 = x3d.meta()
meta23.setName("reference")
meta23.setContent("https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/java/examples/HelloWorldProgramOutput.x3d")

head1.addMeta(meta23)
meta24 = x3d.meta()
meta24.setName("reference")
meta24.setContent("Console output, ClassicVRML encoding, VRML97 encoding and pretty-print documentation:")

head1.addMeta(meta24)
meta25 = x3d.meta()
meta25.setName("reference")
meta25.setContent("HelloWorldProgramOutput.txt")

head1.addMeta(meta25)
meta26 = x3d.meta()
meta26.setName("reference")
meta26.setContent("HelloWorldProgramOutput.x3dv")

head1.addMeta(meta26)
meta27 = x3d.meta()
meta27.setName("reference")
meta27.setContent("HelloWorldProgramOutput.wrl")

head1.addMeta(meta27)
meta28 = x3d.meta()
meta28.setName("reference")
meta28.setContent("HelloWorldProgramOutput.html")

head1.addMeta(meta28)
meta29 = x3d.meta()
meta29.setName("reference")
meta29.setContent("https://savage.nps.edu/X3dValidator?url=https://www.web3d.org/specifications/java/examples/HelloWorldProgramOutput.x3d")

head1.addMeta(meta29)
meta30 = x3d.meta()
meta30.setName("identifier")
meta30.setContent("https://www.web3d.org/specifications/java/examples/HelloWorldProgramOutput.x3d")

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

ViewpointGroup33.addChildren(Viewpoint34)
Viewpoint35 = x3d.Viewpoint()
Viewpoint35.setDEF("TopDownView")
Viewpoint35.setDescription("top-down view from above")
Viewpoint35.setOrientation([1,0,0,-1.570796])
Viewpoint35.setPosition([0,100,0])

ViewpointGroup33.addChildren(Viewpoint35)

Scene32.addChildren(ViewpointGroup33)
NavigationInfo36 = x3d.NavigationInfo()
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
MetadataString40 = x3d.MetadataString()
MetadataString40.setName("test")
MetadataString40.setDEF("scene.addChildMetadata")
MetadataString40.setValue(["Top-level root Metadata node beneath Scene needs to be one of '-children' in JSON encoding"])

Scene32.addMetadata(MetadataString40)
LayerSet41 = x3d.LayerSet()
LayerSet41.setDEF("scene.addChildLayerSetTest")

Scene32.addLayerSet(LayerSet41)
Transform42 = x3d.Transform()
Transform42.setDEF("LogoGeometryTransform")
Transform42.setTranslation([0,1.5,0])
Anchor43 = x3d.Anchor()
Anchor43.setDEF("siteAnchor")
Anchor43.setDescription("select for X3D Java SAI Library (X3DJSAIL) description")
Anchor43.setUrl(["../X3DJSAIL.html","https://www.web3d.org/specifications/java/X3DJSAIL.html"])
Shape44 = x3d.Shape()
Shape44.setDEF("BoxShape")
Appearance45 = x3d.Appearance()
Material46 = x3d.Material()
Material46.setDEF("GreenMaterial")
Material46.setDiffuseColor([0,1,1])
Material46.setEmissiveColor([0.8,0,0])
Material46.setTransparency(0.1)

Appearance45.setMaterial(Material46)
ImageTexture47 = x3d.ImageTexture()
ImageTexture47.setUrl(["images/X3dJavaSceneAccessInterfaceSaiLibrary.png","https://www.web3d.org/specifications/java/examples/images/X3dJavaSceneAccessInterfaceSaiLibrary.png"])

Appearance45.setTexture(ImageTexture47)

Shape44.setAppearance(Appearance45)
Box48 = x3d.Box()
Box48.setDEF("test-NMTOKEN_regex.0123456789")
Box48.setCssClass("untextured")

Shape44.setGeometry(Box48)

Anchor43.addChildren(Shape44)

Transform42.addChildren(Anchor43)

Scene32.addChildren(Transform42)
Shape49 = x3d.Shape()
Shape49.setDEF("LineShape")
Appearance50 = x3d.Appearance()
Material51 = x3d.Material()
Material51.setEmissiveColor([0.6,0.19607843,0.8])

Appearance50.setMaterial(Material51)

Shape49.setAppearance(Appearance50)
IndexedLineSet52 = x3d.IndexedLineSet()
IndexedLineSet52.setCoordIndex([0,1,2,3,4,0])
#Coordinate 3-tuple point count: 6
Coordinate53 = x3d.Coordinate()
Coordinate53.setPoint([0,1.5,0,2,1.5,0,2,1.5,-2,-2,1.5,-2,-2,1.5,0,0,1.5,0])

IndexedLineSet52.setCoord(Coordinate53)

Shape49.setGeometry(IndexedLineSet52)

Scene32.addChildren(Shape49)
PositionInterpolator54 = x3d.PositionInterpolator()
PositionInterpolator54.setDEF("BoxPathAnimator")
PositionInterpolator54.setKey([0,0.125,0.375,0.625,0.875,1])
PositionInterpolator54.setKeyValue([0,1.5,0,2,1.5,0,2,1.5,-2,-2,1.5,-2,-2,1.5,0,0,1.5,0])

Scene32.addChildren(PositionInterpolator54)
TimeSensor55 = x3d.TimeSensor()
TimeSensor55.setDEF("OrbitClock")
TimeSensor55.setCycleInterval(8)
TimeSensor55.setLoop(True)

Scene32.addChildren(TimeSensor55)
ROUTE56 = x3d.ROUTE()
ROUTE56.setFromField("fraction_changed")
ROUTE56.setFromNode("OrbitClock")
ROUTE56.setToField("set_fraction")
ROUTE56.setToNode("BoxPathAnimator")

Scene32.addChildren(ROUTE56)
ROUTE57 = x3d.ROUTE()
ROUTE57.setFromField("value_changed")
ROUTE57.setFromNode("BoxPathAnimator")
ROUTE57.setToField("set_translation")
ROUTE57.setToNode("LogoGeometryTransform")

Scene32.addChildren(ROUTE57)
Transform58 = x3d.Transform()
Transform58.setDEF("TextTransform")
Transform58.setTranslation([0,-1.5,0])
Shape59 = x3d.Shape()
Appearance60 = x3d.Appearance()
Material61 = x3d.Material()
Material61.setUSE("GreenMaterial")

Appearance60.setMaterial(Material61)

Shape59.setAppearance(Appearance60)
Text62 = x3d.Text()
Text62.setString(["X3D Java","SAI Library","X3DJSAIL"])
#Comment example A, plain quotation marks: He said, \"Immel did it!\"
#Comment example B, XML character entities: He said, &quot;Immel did it!&quot;
MetadataSet63 = x3d.MetadataSet()
MetadataSet63.setName("EscapedQuotationMarksMetadataSet")
MetadataString64 = x3d.MetadataString()
MetadataString64.setName("quotesTestC")
MetadataString64.setValue(["MFString example C, backslash-escaped quotes: He said, \"Immel did it!\""])

MetadataSet63.setValue(MetadataString64)
MetadataString65 = x3d.MetadataString()
MetadataString65.setName("extraChildTest")
MetadataString65.setValue(["checks MetadataSet addValue() method"])

MetadataSet63.addValue(MetadataString65)

Text62.setMetadata(MetadataSet63)
FontStyle66 = x3d.FontStyle()
FontStyle66.setJustify(["MIDDLE","MIDDLE"])

Text62.setFontStyle(FontStyle66)

Shape59.setGeometry(Text62)

Transform58.addChildren(Shape59)
Collision67 = x3d.Collision()
#test containerField='proxy'
Shape68 = x3d.Shape()
Shape68.setDEF("ProxyShape")
#alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\"'
#alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\" \"\"'
#alternative Java source: .setString(new String [] {\"One, Two, Comment\", \"\", \"He said, \\\"\"Immel did it!\\\"\"\"})
#reference: https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamplesIndex.html
Text69 = x3d.Text()
Text69.setString(["One, Two, Text","","He said, \"Immel did it!\" \"\""])

Shape68.setGeometry(Text69)

Collision67.setProxy(Shape68)

Transform58.addChildren(Collision67)
#It's a beautiful world
#... for you!
#https://en.wikipedia.org/wiki/Beautiful_World_(Devo_song)

Scene32.addChildren(Transform58)
#repeatedly spin 180 degrees as a readable special effect
OrientationInterpolator70 = x3d.OrientationInterpolator()
OrientationInterpolator70.setDEF("SpinInterpolator")
OrientationInterpolator70.setKey([0,0.5,1])
OrientationInterpolator70.setKeyValue([0,1,0,4.712389,0,1,0,0,0,1,0,1.5707964])

Scene32.addChildren(OrientationInterpolator70)
TimeSensor71 = x3d.TimeSensor()
TimeSensor71.setDEF("SpinClock")
TimeSensor71.setCycleInterval(5)
TimeSensor71.setLoop(True)

Scene32.addChildren(TimeSensor71)
ROUTE72 = x3d.ROUTE()
ROUTE72.setFromField("fraction_changed")
ROUTE72.setFromNode("SpinClock")
ROUTE72.setToField("set_fraction")
ROUTE72.setToNode("SpinInterpolator")

Scene32.addChildren(ROUTE72)
ROUTE73 = x3d.ROUTE()
ROUTE73.setFromField("value_changed")
ROUTE73.setFromNode("SpinInterpolator")
ROUTE73.setToField("rotation")
ROUTE73.setToNode("TextTransform")

Scene32.addChildren(ROUTE73)
Group74 = x3d.Group()
Group74.setDEF("BackgroundGroup")
Background75 = x3d.Background()
Background75.setDEF("GradualBackground")

Group74.addChildren(Background75)
Script76 = x3d.Script()
Script76.setDEF("colorTypeConversionScript")
field77 = x3d.field()
field77.setName("colorInput")
field77.setAccessType("inputOnly")
field77.setType("SFColor")

Script76.addField(field77)
field78 = x3d.field()
field78.setName("colorsOutput")
field78.setAccessType("outputOnly")
field78.setType("MFColor")

Script76.addField(field78)

Script76.setSourceCode('''ecmascript:\n"+
"\n"+
"function colorInput (eventValue) // Example source code\n"+
"{\n"+
"   colorsOutput = new MFColor(eventValue); // assigning value sends output event\n"+
"// Browser.print('colorInput=' + eventValue + ', colorsOutput=' + colorsOutput + '\\n');\n"+
"}''')

Group74.addChildren(Script76)
ColorInterpolator79 = x3d.ColorInterpolator()
ColorInterpolator79.setDEF("ColorAnimator")
ColorInterpolator79.setKey([0,0.5,1])
ColorInterpolator79.setKeyValue([0.9411765,1,1,0.29411766,0,0.50980395,0.9411765,1,1])
#AZURE to INDIGO and back again

Group74.addChildren(ColorInterpolator79)
TimeSensor80 = x3d.TimeSensor()
TimeSensor80.setDEF("ColorClock")
TimeSensor80.setCycleInterval(60)
TimeSensor80.setLoop(True)

Group74.addChildren(TimeSensor80)
ROUTE81 = x3d.ROUTE()
ROUTE81.setFromField("colorsOutput")
ROUTE81.setFromNode("colorTypeConversionScript")
ROUTE81.setToField("skyColor")
ROUTE81.setToNode("GradualBackground")

Group74.addChildren(ROUTE81)
ROUTE82 = x3d.ROUTE()
ROUTE82.setFromField("value_changed")
ROUTE82.setFromNode("ColorAnimator")
ROUTE82.setToField("colorInput")
ROUTE82.setToNode("colorTypeConversionScript")

Group74.addChildren(ROUTE82)
ROUTE83 = x3d.ROUTE()
ROUTE83.setFromField("fraction_changed")
ROUTE83.setFromNode("ColorClock")
ROUTE83.setToField("set_fraction")
ROUTE83.setToNode("ColorAnimator")

Group74.addChildren(ROUTE83)

Scene32.addChildren(Group74)
ProtoDeclare84 = x3d.ProtoDeclare()
ProtoDeclare84.setName("ArtDeco01Material")
ProtoDeclare84.setAppinfo("tooltip: ArtDeco01Material prototype is a Material node")
ProtoInterface85 = x3d.ProtoInterface()
field86 = x3d.field()
field86.setName("description")
field86.setAccessType("inputOutput")
field86.setAppinfo("tooltip for descriptionField")
field86.setType("SFString")
field86.setValue("ArtDeco01Material prototype is a Material node")

ProtoInterface85.addField(field86)
field87 = x3d.field()
field87.setName("enabled")
field87.setAccessType("inputOutput")
field87.setType("SFBool")
field87.setValue("true")

ProtoInterface85.addField(field87)

ProtoDeclare84.setProtoInterface(ProtoInterface85)
ProtoBody88 = x3d.ProtoBody()
#Initial node of ProtoBody determines prototype node type
Material89 = x3d.Material()
Material89.setAmbientIntensity(0.25)
Material89.setDiffuseColor([0.282435,0.085159,0.134462])
Material89.setShininess(0.127273)
Material89.setSpecularColor([0.276305,0.11431,0.139857])

ProtoBody88.addChildren(Material89)
#[HelloWorldProgram diagnostic] should be connected to scene graph: artDeco01ProtoDeclare.getNodeType()=\"Material\"
#presence of follow-on TouchSensor shows that additional nodes are allowed in ProtoBody after initial node, regardless of node types
TouchSensor90 = x3d.TouchSensor()
TouchSensor90.setDescription("within ProtoBody")
IS91 = x3d.IS()
connect92 = x3d.connect()
connect92.setNodeField("description")
connect92.setProtoField("description")

IS91.addConnect(connect92)
connect93 = x3d.connect()
connect93.setNodeField("enabled")
connect93.setProtoField("enabled")

IS91.addConnect(connect93)

TouchSensor90.setIS(IS91)

ProtoBody88.addChildren(TouchSensor90)

ProtoDeclare84.setProtoBody(ProtoBody88)

Scene32.addChildren(ProtoDeclare84)
ExternProtoDeclare94 = x3d.ExternProtoDeclare()
ExternProtoDeclare94.setName("ArtDeco02Material")
ExternProtoDeclare94.setAppinfo("this is a different Material node")
ExternProtoDeclare94.setUrl(["http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d#ArtDeco02Material","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3dv#ArtDeco02Material"])
#[HelloWorldProgram diagnostic] artDeco02ExternProtoDeclare.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time. TODO X3DJSAIL needs to add further capability that retrieves the ExternProtoDeclare file.\"
field95 = x3d.field()
field95.setName("description")
field95.setAccessType("inputOutput")
field95.setAppinfo("tooltip for descriptionField")
field95.setType("SFString")

ExternProtoDeclare94.addField(field95)

Scene32.addChildren(ExternProtoDeclare94)
#Tested ArtDeco01ProtoInstance, ArtDeco02ProtoInstance for improper node type when ProtoInstance is added in wrong place
Shape96 = x3d.Shape()
Shape96.setDEF("TestShape1")
Appearance97 = x3d.Appearance()
Appearance97.setDEF("TestAppearance1")
#ArtDeco01Material prototype goes here... TODO ensure setContainerField is handled in exported Java
ProtoInstance98 = x3d.ProtoInstance()
ProtoInstance98.setName("ArtDeco01Material")
#[HelloWorldProgram diagnostic] ArtDeco01ProtoInstance.getNodeType()=\"Material\"
fieldValue99 = x3d.fieldValue()
fieldValue99.setName("description")
fieldValue99.setValue("ArtDeco01Material can substitute for a Material node")

ProtoInstance98.addFieldValue(fieldValue99)

Appearance97.setMaterial(ProtoInstance98)

Shape96.setAppearance(Appearance97)
Sphere100 = x3d.Sphere()
Sphere100.setRadius(0.001)

Shape96.setGeometry(Sphere100)

Scene32.addChildren(Shape96)
Shape101 = x3d.Shape()
Shape101.setDEF("TestShape2")
Appearance102 = x3d.Appearance()
Appearance102.setDEF("TestAppearance2")
#ArtDeco02Material prototype goes here... TODO ensure setContainerField is handled in exported Java
ProtoInstance103 = x3d.ProtoInstance()
ProtoInstance103.setName("ArtDeco02Material")
ProtoInstance103.setDEF("ArtDeco02MaterialDEF")
#[HelloWorldProgram diagnostic] ArtDeco02ProtoInstance.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time. TODO X3DJSAIL needs to add further capability that retrieves the ExternProtoDeclare file.\"
fieldValue104 = x3d.fieldValue()
fieldValue104.setName("description")
fieldValue104.setValue("ArtDeco02Material can substitute for another Material node")

ProtoInstance103.addFieldValue(fieldValue104)

Appearance102.setMaterial(ProtoInstance103)

Shape101.setAppearance(Appearance102)
Cone105 = x3d.Cone()
Cone105.setBottomRadius(0.001)
Cone105.setHeight(0.001)

Shape101.setGeometry(Cone105)

Scene32.addChildren(Shape101)
Shape106 = x3d.Shape()
Shape106.setDEF("TestShape3")
Appearance107 = x3d.Appearance()
Appearance107.setDEF("TestAppearance3")
#ArtDeco02Material ProtoInstance USE goes here. Note that name field is NOT defined as part of ProtoInstance USE.
ProtoInstance108 = x3d.ProtoInstance()
ProtoInstance108.setUSE("ArtDeco02MaterialDEF")

Appearance107.setMaterial(ProtoInstance108)

Shape106.setAppearance(Appearance107)
Cylinder109 = x3d.Cylinder()
Cylinder109.setHeight(0.001)
Cylinder109.setRadius(0.001)

Shape106.setGeometry(Cylinder109)

Scene32.addChildren(Shape106)
Inline110 = x3d.Inline()
Inline110.setDEF("inlineScene")
Inline110.setUrl(["someOtherScene.x3d","https://www.web3d.org/specifications/java/examples/someOtherScene.x3d"])

Scene32.addChildren(Inline110)
IMPORT111 = x3d.IMPORT()
IMPORT111.setAS("WorldInfoDEF2")
IMPORT111.setImportedDEF("WorldInfoDEF")
IMPORT111.setInlineDEF("inlineScene")

Scene32.addChildren(IMPORT111)
EXPORT112 = x3d.EXPORT()
EXPORT112.setAS("WorldInfoDEF3")
EXPORT112.setLocalDEF("WorldInfoDEF")

Scene32.addChildren(EXPORT112)
ProtoDeclare113 = x3d.ProtoDeclare()
ProtoDeclare113.setName("MaterialModulator")
ProtoDeclare113.setAppinfo("mimic a Material node and modulate fields as an animation effect")
ProtoDeclare113.setDocumentation("http://x3dgraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorIndex.html")
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

ProtoBody122.addChildren(Material123)
#Only first node (the node type) is renderable, others are along for the ride
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

Script131.setSourceCode('''ecmascript:\n"+
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

ProtoBody122.addChildren(Script131)

ProtoDeclare113.setProtoBody(ProtoBody122)

Scene32.addChildren(ProtoDeclare113)
#Test success: declarative statement createDeclarativeShapeTests()
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
#DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance
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

Group139.addChildren(Shape140)
#Test success: declarativeGroup.addChild() singleton pipeline method

Scene32.addChildren(Group139)
#Test success: declarative statement addChild()
#Test success: x3dModel.findNodeByDEF(DeclarativeAppearanceExample) = <Appearance DEF='DeclarativeAppearanceExample'/> i.e. <Appearance DEF='DeclarativeAppearanceExample'> <!- - DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance - -> <ProtoInstance DEF='MyMaterialModulator' name='MaterialModulator' containerField='material'/> </Appearance>
#Test success: x3dModel.findElementByNameValue(findThisNameValue) = <MetadataString DEF='FindableMetadataStringTest' name='findThisNameValue' value='\"test case\"'/>
#Test success: x3dModel.findElementByNameValue(\"ArtDeco01Material\", \"ProtoDeclare\") found
#Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoDeclare\") found
#Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoInstance\") found
Group145 = x3d.Group()
Group145.setDEF("TestFieldObjectsGroup")
#testFieldObjects() results
#SFBool default=true, true=true, false=false, negate()=true
#MFBool default=, initial=true false true, negate()=false true false
#SFFloat default=0.0, initial=1.0, setValue(2)=2.0, setValue(3.0f)=3.0, setValue(4.0)=4.0
#MFFloat default=, initial=1 2 3, append(5)=1 2 3 5, inserts(3,4)(0,0)=0 1 2 3 4 5, append(6)=0 1 2 3 4 5 6, size()=7
#... get1Value[3]=3.0, remove[1]=0 2 3 4 5 6, set1Value(0,10)=10 2 3 4 5 6, multiply(2)=20 4 6 8 10 12, clear=
#SFVec3f default=0 0 0, initial=1 2 3, setValue=4 5 6, multiply(2)=8 10 12, normalize()=0.45584232 0.5698029 0.68376344, regex matches()=true
#regex test SFVec3f().matches(\"1 2 3\")=true, regex test SFVec3f().matches(\"1 2 3 4\")=false, regex test (SFRotation.matches(\"0 0 0 0\")=true, failure detecting illegal (zero axis) rotation value

Scene32.addChildren(Group145)
Sound146 = x3d.Sound()
Sound146.setLocation([0,1.6,0])
#set sound-ellipsoid location height at 1.6m to match typical avatar height
AudioClip147 = x3d.AudioClip()
AudioClip147.setDescription("chimes")
AudioClip147.setUrl(["chimes.wav","https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav"])
#Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/default.x3d

Sound146.setSource(AudioClip147)

Scene32.addChildren(Sound146)
Sound148 = x3d.Sound()
Sound148.setLocation([0,1.6,0])
#set sound-ellipsoid location height at 1.6m to match typical avatar height
MovieTexture149 = x3d.MovieTexture()
MovieTexture149.setDescription("mpgsys.mpg from ConformanceNist suite")
MovieTexture149.setUrl(["mpgsys.mpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpgsys.mpg"])
#Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpeg1-systems.x3d
#Expected containerField='source', allowed containerField values=\"texture\" \"source\" \"back\" \"bottom\" \"front\" \"left\" \"right\" \"top\" \"backTexture\" \"bottomTexture\" \"frontTexture\" \"leftTexture\" \"rightTexture\" \"topTexture\" \"children\"

Sound148.setSource(MovieTexture149)

Scene32.addChildren(Sound148)
#Test success: Anchor.isNode()=true, siteAnchor.isNode()=true
#Test success: Anchor.isStatement()=false, siteAnchor.isStatement()=false
#Test success: ROUTE.isNode()=false, orbitPositionROUTE.isNode()=false
#Test success: ROUTE.isStatement()=true, orbitPositionROUTE.isStatement()=true
#Test success: CommentsBlock.isNode()=false, testComments.isNode()=false
#Test failure: CommentsBlock.isStatement()=true, testComments.isStatement()=true
Shape150 = x3d.Shape()
Shape150.setDEF("ExtrusionShape")
#ExampleExtrusion isCrossSectionClosed()=true, crossSection='[1.0, 1.0, 1.0, -1.0, -1.0, -1.0, -1.0, 1.0, 1.0, 1.0]'
#ExampleExtrusion isSpineClosed()=false, spine='[0.0, 0.0, 0.0, 0.0, 1.0, 0.0]'
Appearance151 = x3d.Appearance()
Appearance151.setDEF("TransparentAppearance")
Material152 = x3d.Material()
Material152.setTransparency(1)

Appearance151.setMaterial(Material152)

Shape150.setAppearance(Appearance151)
Extrusion153 = x3d.Extrusion()
Extrusion153.setDEF("ExampleExtrusion")

Shape150.setGeometry(Extrusion153)

Scene32.addChildren(Shape150)
Group154 = x3d.Group()
#Test MFNode children array as an ordered list consisting of comments, statements, ProtoInstance and nodes
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

ProtoBody158.addChildren(WorldInfo159)

ProtoDeclare155.setProtoBody(ProtoBody158)

Group154.addChildren(ProtoDeclare155)
ProtoInstance160 = x3d.ProtoInstance()
ProtoInstance160.setName("NewWorldInfo")
ProtoInstance160.setDEF("Proto1")
fieldValue161 = x3d.fieldValue()
fieldValue161.setName("description")
fieldValue161.setValue("testing 1 2 3")

ProtoInstance160.addFieldValue(fieldValue161)

Group154.addChildren(ProtoInstance160)
Group162 = x3d.Group()
Group162.setDEF("Node2")
#intentionally empty

Group154.addChildren(Group162)
ProtoInstance163 = x3d.ProtoInstance()
ProtoInstance163.setName("NewWorldInfo")
ProtoInstance163.setDEF("Proto3")

Group154.addChildren(ProtoInstance163)
Transform164 = x3d.Transform()
Transform164.setDEF("Node4")
#intentionally empty

Group154.addChildren(Transform164)
#Test satisfactorily creates MFNode children array as an ordered list with mixed content

Scene32.addChildren(Group154)
ProtoDeclare165 = x3d.ProtoDeclare()
ProtoDeclare165.setName("ShaderProto")
ProtoBody166 = x3d.ProtoBody()
ProgramShader167 = x3d.ProgramShader()

ProtoBody166.addChildren(ProgramShader167)

ProtoDeclare165.setProtoBody(ProtoBody166)

Scene32.addChildren(ProtoDeclare165)
Shape168 = x3d.Shape()
Appearance169 = x3d.Appearance()
#Test MFNode shaders array as an ordered list consisting of comments, ProtoInstance and nodes
#Test satisfactorily creates MFNode shaders array as an ordered list with mixed content
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

Scene32.addChildren(Shape168)
Transform175 = x3d.Transform()
Transform175.setDEF("SpecialtyNodes")
CADLayer176 = x3d.CADLayer()
CADAssembly177 = x3d.CADAssembly()
CADPart178 = x3d.CADPart()
CADFace179 = x3d.CADFace()

CADPart178.addChildren(CADFace179)

CADAssembly177.addChildren(CADPart178)

CADLayer176.addChildren(CADAssembly177)

Transform175.addChildren(CADLayer176)
EspduTransform180 = x3d.EspduTransform()

Transform175.addChildren(EspduTransform180)
ReceiverPdu181 = x3d.ReceiverPdu()

Transform175.addChildren(ReceiverPdu181)
SignalPdu182 = x3d.SignalPdu()

Transform175.addChildren(SignalPdu182)
TransmitterPdu183 = x3d.TransmitterPdu()

Transform175.addChildren(TransmitterPdu183)
DISEntityManager184 = x3d.DISEntityManager()
DISEntityTypeMapping185 = x3d.DISEntityTypeMapping()

DISEntityManager184.addChildren(DISEntityTypeMapping185)

Transform175.addChildren(DISEntityManager184)

Scene32.addChildren(Transform175)
EspduTransform186 = x3d.EspduTransform()
WorldInfo187 = x3d.WorldInfo()

EspduTransform186.addChildren(WorldInfo187)

Scene32.addChildren(EspduTransform186)
ReceiverPdu188 = x3d.ReceiverPdu()

Scene32.addChildren(ReceiverPdu188)
SignalPdu189 = x3d.SignalPdu()

Scene32.addChildren(SignalPdu189)
TransmitterPdu190 = x3d.TransmitterPdu()

Scene32.addChildren(TransmitterPdu190)
DISEntityManager191 = x3d.DISEntityManager()
DISEntityTypeMapping192 = x3d.DISEntityTypeMapping()

DISEntityManager191.addChildren(DISEntityTypeMapping192)

Scene32.addChildren(DISEntityManager191)
LoadSensor193 = x3d.LoadSensor()
#Contained nodes typically must be USE references for nodes previously DEFined in the scene
#The following nodes are test cases for all X3DUrlObject nodes
Anchor194 = x3d.Anchor()
Anchor194.setUSE("siteAnchor")

LoadSensor193.addChildren(Anchor194)
Inline195 = x3d.Inline()
Inline195.setUSE("inlineScene")

LoadSensor193.addChildren(Inline195)
DISEntityTypeMapping196 = x3d.DISEntityTypeMapping()

LoadSensor193.addChildren(DISEntityTypeMapping196)
GeoMetadata197 = x3d.GeoMetadata()

LoadSensor193.addChildren(GeoMetadata197)
AudioClip198 = x3d.AudioClip()

LoadSensor193.addChildren(AudioClip198)
ImageCubeMapTexture199 = x3d.ImageCubeMapTexture()

LoadSensor193.addChildren(ImageCubeMapTexture199)
ImageTexture3D200 = x3d.ImageTexture3D()

LoadSensor193.addChildren(ImageTexture3D200)
ImageTexture201 = x3d.ImageTexture()

LoadSensor193.addChildren(ImageTexture201)
MovieTexture202 = x3d.MovieTexture()

LoadSensor193.addChildren(MovieTexture202)
Script203 = x3d.Script()

LoadSensor193.addChildren(Script203)
PackagedShader204 = x3d.PackagedShader()

LoadSensor193.addChildren(PackagedShader204)
ShaderPart205 = x3d.ShaderPart()
ShaderPart205.setType("VERTEX")

LoadSensor193.addChildren(ShaderPart205)
ShaderProgram206 = x3d.ShaderProgram()
ShaderProgram206.setType("VERTEX")

LoadSensor193.addChildren(ShaderProgram206)

Scene32.addChildren(LoadSensor193)

X3D0.setScene(Scene32)
X3D0.toFileX3D("../data/HelloWorldProgramOutput_RoundTrip.x3d")
