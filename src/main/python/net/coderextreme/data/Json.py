import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
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
meta18.setContent("25 May 2020")

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
meta32 = x3d.meta()
meta32.setName("translated")
meta32.setContent("25 May 2020")

head1.addMeta(meta32)
meta33 = x3d.meta()
meta33.setName("generator")
meta33.setContent("X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html")

head1.addMeta(meta33)
meta34 = x3d.meta()
meta34.setName("reference")
meta34.setContent("X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")

head1.addMeta(meta34)

X3D0.setHead(head1)
Scene35 = x3d.Scene()
ViewpointGroup36 = x3d.ViewpointGroup()
ViewpointGroup36.setDescription("Available viewpoints")
Viewpoint37 = x3d.Viewpoint()
Viewpoint37.setDEF("DefaultView")
Viewpoint37.setDescription("Hello X3DJSAIL")

ViewpointGroup36.addChildren(Viewpoint37)
Viewpoint38 = x3d.Viewpoint()
Viewpoint38.setDEF("TopDownView")
Viewpoint38.setDescription("top-down view from above")
Viewpoint38.setOrientation([1,0,0,-1.570796])
Viewpoint38.setPosition([0,100,0])

ViewpointGroup36.addChildren(Viewpoint38)

Scene35.addChildren(ViewpointGroup36)
NavigationInfo39 = x3d.NavigationInfo()
NavigationInfo39.setType(["EXAMINE","FLY","ANY"])

Scene35.addChildren(NavigationInfo39)
WorldInfo40 = x3d.WorldInfo()
WorldInfo40.setDEF("WorldInfoDEF")
WorldInfo40.setTitle("HelloWorldProgram produced by X3D Java SAI Library (X3DJSAIL)")

Scene35.addChildren(WorldInfo40)
WorldInfo41 = x3d.WorldInfo()
WorldInfo41.setUSE("WorldInfoDEF")

Scene35.addChildren(WorldInfo41)
WorldInfo42 = x3d.WorldInfo()
WorldInfo42.setUSE("WorldInfoDEF")

Scene35.addChildren(WorldInfo42)
MetadataString43 = x3d.MetadataString()
MetadataString43.setName("test")
MetadataString43.setDEF("scene.addChildMetadata")
MetadataString43.setValue(["Top-level root Metadata node beneath Scene needs to be one of '-children' in JSON encoding"])

Scene35.addMetadata(MetadataString43)
LayerSet44 = x3d.LayerSet()
LayerSet44.setDEF("scene.addChildLayerSetTest")

Scene35.addLayerSet(LayerSet44)
Transform45 = x3d.Transform()
Transform45.setDEF("LogoGeometryTransform")
Transform45.setTranslation([0,1.5,0])
Transform45.setBboxCenter([0,0,0])
Transform45.setBboxSize([-1,-1,-1])
Anchor46 = x3d.Anchor()
Anchor46.setDescription("select for X3D Java SAI Library (X3DJSAIL) description")
Anchor46.setUrl(["../X3DJSAIL.html","https://www.web3d.org/specifications/java/X3DJSAIL.html"])
Anchor46.setBboxCenter([0,0,0])
Anchor46.setBboxSize([-1,-1,-1])
Shape47 = x3d.Shape()
Shape47.setDEF("BoxShape")
Shape47.setBboxCenter([0,0,0])
Shape47.setBboxSize([-1,-1,-1])
Appearance48 = x3d.Appearance()
Material49 = x3d.Material()
Material49.setDEF("GreenMaterial")
Material49.setDiffuseColor([0,1,1])
Material49.setEmissiveColor([0.8,0,0])
Material49.setTransparency(0.1)

Appearance48.setMaterial(Material49)
ImageTexture50 = x3d.ImageTexture()
ImageTexture50.setUrl(["images/X3dJavaSceneAccessInterfaceSaiLibrary.png","https://www.web3d.org/specifications/java/examples/images/X3dJavaSceneAccessInterfaceSaiLibrary.png"])

Appearance48.setTexture(ImageTexture50)

Shape47.setAppearance(Appearance48)
Box51 = x3d.Box()
Box51.setDEF("test-NMTOKEN_regex.0123456789")
Box51.setCssClass("untextured")
Box51.setSize([2,2,2])
Box51.setSolid(True)

Shape47.setGeometry(Box51)

Anchor46.addChildren(Shape47)

Transform45.addChildren(Anchor46)

Scene35.addChildren(Transform45)
Shape52 = x3d.Shape()
Shape52.setDEF("LineShape")
Shape52.setBboxCenter([0,0,0])
Shape52.setBboxSize([-1,-1,-1])
Appearance53 = x3d.Appearance()
Material54 = x3d.Material()
Material54.setEmissiveColor([0.6,0.19607843,0.8])

Appearance53.setMaterial(Material54)

Shape52.setAppearance(Appearance53)
IndexedLineSet55 = x3d.IndexedLineSet()
IndexedLineSet55.setCoordIndex([0,1,2,3,4,0])
#Coordinate 3-tuple point count: 6
Coordinate56 = x3d.Coordinate()
Coordinate56.setPoint([0,1.5,0,2,1.5,0,2,1.5,-2,-2,1.5,-2,-2,1.5,0,0,1.5,0])

IndexedLineSet55.setCoord(Coordinate56)

Shape52.setGeometry(IndexedLineSet55)

Scene35.addChildren(Shape52)
PositionInterpolator57 = x3d.PositionInterpolator()
PositionInterpolator57.setDEF("BoxPathAnimator")
PositionInterpolator57.setKey([0,0.125,0.375,0.625,0.875,1])
PositionInterpolator57.setKeyValue([0,1.5,0,2,1.5,0,2,1.5,-2,-2,1.5,-2,-2,1.5,0,0,1.5,0])

Scene35.addChildren(PositionInterpolator57)
TimeSensor58 = x3d.TimeSensor()
TimeSensor58.setDEF("OrbitClock")
TimeSensor58.setCycleInterval(8)
TimeSensor58.setLoop(True)

Scene35.addChildren(TimeSensor58)
ROUTE59 = x3d.ROUTE()
ROUTE59.setFromField("fraction_changed")
ROUTE59.setFromNode("OrbitClock")
ROUTE59.setToField("set_fraction")
ROUTE59.setToNode("BoxPathAnimator")

Scene35.addChildren(ROUTE59)
ROUTE60 = x3d.ROUTE()
ROUTE60.setFromField("value_changed")
ROUTE60.setFromNode("BoxPathAnimator")
ROUTE60.setToField("set_translation")
ROUTE60.setToNode("LogoGeometryTransform")

Scene35.addChildren(ROUTE60)
Transform61 = x3d.Transform()
Transform61.setDEF("TextTransform")
Transform61.setTranslation([0,-1.5,0])
Transform61.setBboxCenter([0,0,0])
Transform61.setBboxSize([-1,-1,-1])
Shape62 = x3d.Shape()
Shape62.setBboxCenter([0,0,0])
Shape62.setBboxSize([-1,-1,-1])
Appearance63 = x3d.Appearance()
Material64 = x3d.Material()
Material64.setUSE("GreenMaterial")

Appearance63.setMaterial(Material64)

Shape62.setAppearance(Appearance63)
Text65 = x3d.Text()
Text65.setString(["X3D Java","SAI Library","X3DJSAIL"])
#Comment example A, plain quotation marks: He said, \"Immel did it!\"
#Comment example B, XML character entities: He said, &quot;Immel did it!&quot;
MetadataSet66 = x3d.MetadataSet()
MetadataSet66.setName("EscapedQuotationMarksMetadataSet")
MetadataString67 = x3d.MetadataString()
MetadataString67.setName("quotesTestC")
MetadataString67.setValue(["MFString example C, backslash-escaped quotes: He said, \"Immel did it!\""])

MetadataSet66.addValue(MetadataString67)
MetadataString68 = x3d.MetadataString()
MetadataString68.setName("extraChildTest")
MetadataString68.setValue(["checks MetadataSetObject addValue() method"])

MetadataSet66.addValue(MetadataString68)

Text65.setMetadata(MetadataSet66)
FontStyle69 = x3d.FontStyle()
FontStyle69.setJustify(["MIDDLE","MIDDLE"])

Text65.setFontStyle(FontStyle69)

Shape62.setGeometry(Text65)

Transform61.addChildren(Shape62)
Collision70 = x3d.Collision()
Collision70.setEnabled(True)
Collision70.setBboxCenter([0,0,0])
Collision70.setBboxSize([-1,-1,-1])
#test containerField='proxy'
Shape71 = x3d.Shape()
Shape71.setDEF("ProxyShape")
Shape71.setBboxCenter([0,0,0])
Shape71.setBboxSize([-1,-1,-1])
#alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\"'
#alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\" \"\"'
#alternative Java source: .setString(new String [] {\"One, Two, Comment\", \"\", \"He said, \\\"\"Immel did it!\\\"\"\"})
#reference: https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamplesIndex.html
Text72 = x3d.Text()
Text72.setString(["One, Two, Text","","He said, \"Immel did it!\" \"\""])

Shape71.setGeometry(Text72)

Collision70.setProxy(Shape71)

Transform61.addChildren(Collision70)
#It's a beautiful world
#... for you!
#https://en.wikipedia.org/wiki/Beautiful_World_(Devo_song)

Scene35.addChildren(Transform61)
#repeatedly spin 180 degrees as a readable special effect
OrientationInterpolator73 = x3d.OrientationInterpolator()
OrientationInterpolator73.setDEF("SpinInterpolator")
OrientationInterpolator73.setKey([0,0.5,1])
OrientationInterpolator73.setKeyValue([0,1,0,4.712389,0,1,0,0,0,1,0,1.5707964])

Scene35.addChildren(OrientationInterpolator73)
TimeSensor74 = x3d.TimeSensor()
TimeSensor74.setDEF("SpinClock")
TimeSensor74.setCycleInterval(5)
TimeSensor74.setLoop(True)

Scene35.addChildren(TimeSensor74)
ROUTE75 = x3d.ROUTE()
ROUTE75.setFromField("fraction_changed")
ROUTE75.setFromNode("SpinClock")
ROUTE75.setToField("set_fraction")
ROUTE75.setToNode("SpinInterpolator")

Scene35.addChildren(ROUTE75)
ROUTE76 = x3d.ROUTE()
ROUTE76.setFromField("value_changed")
ROUTE76.setFromNode("SpinInterpolator")
ROUTE76.setToField("rotation")
ROUTE76.setToNode("TextTransform")

Scene35.addChildren(ROUTE76)
Group77 = x3d.Group()
Group77.setDEF("BackgroundGroup")
Group77.setBboxCenter([0,0,0])
Group77.setBboxSize([-1,-1,-1])
Background78 = x3d.Background()
Background78.setDEF("GradualBackground")
Background78.setSkyColor([0,0,0])
Background78.setTransparency(0)

Group77.addChildren(Background78)
ColorInterpolator79 = x3d.ColorInterpolator()
ColorInterpolator79.setDEF("ColorAnimator")
ColorInterpolator79.setKey([0,0.5,1])
ColorInterpolator79.setKeyValue([0.9411765,1,1,0.29411766,0,0.50980395,0.9411765,1,1])
#AZURE to INDIGO and back again

Group77.addChildren(ColorInterpolator79)
TimeSensor80 = x3d.TimeSensor()
TimeSensor80.setDEF("ColorClock")
TimeSensor80.setCycleInterval(60)
TimeSensor80.setLoop(True)

Group77.addChildren(TimeSensor80)
ROUTE81 = x3d.ROUTE()
ROUTE81.setFromField("colorsOutput")
ROUTE81.setFromNode("colorTypeConversionScript")
ROUTE81.setToField("skyColor")
ROUTE81.setToNode("GradualBackground")

Group77.addChildren(ROUTE81)
ROUTE82 = x3d.ROUTE()
ROUTE82.setFromField("value_changed")
ROUTE82.setFromNode("ColorAnimator")
ROUTE82.setToField("colorInput")
ROUTE82.setToNode("colorTypeConversionScript")

Group77.addChildren(ROUTE82)
ROUTE83 = x3d.ROUTE()
ROUTE83.setFromField("fraction_changed")
ROUTE83.setFromNode("ColorClock")
ROUTE83.setToField("set_fraction")
ROUTE83.setToNode("ColorAnimator")

Group77.addChildren(ROUTE83)
X3DScript84 = x3d.X3DScript()
X3DScript84.setDEF("colorTypeConversionScript")
field85 = x3d.field()
field85.setName("colorInput")
field85.setAccessType("inputOnly")
field85.setType("SFColor")

X3DScript84.addField(field85)
field86 = x3d.field()
field86.setName("colorsOutput")
field86.setAccessType("outputOnly")
field86.setType("MFColor")

X3DScript84.addField(field86)

Group77.addX3DScript(X3DScript84)

Scene35.addChildren(Group77)
ProtoDeclare87 = x3d.ProtoDeclare()
ProtoDeclare87.setName("ArtDeco01Material")
ProtoDeclare87.setAppinfo("tooltip: ArtDeco01Material prototype is a Material node")
ProtoInterface88 = x3d.ProtoInterface()
field89 = x3d.field()
field89.setName("description")
field89.setAccessType("inputOutput")
field89.setAppinfo("tooltip for descriptionField")
field89.setType("SFString")
field89.setValue("ArtDeco01Material prototype is a Material node")

ProtoInterface88.addField(field89)
field90 = x3d.field()
field90.setName("enabled")
field90.setAccessType("inputOutput")
field90.setType("SFBool")
field90.setValue("true")

ProtoInterface88.addField(field90)

ProtoDeclare87.setProtoInterface(ProtoInterface88)
ProtoBody91 = x3d.ProtoBody()
#Initial node of ProtoBody determines prototype node type
Material92 = x3d.Material()
Material92.setAmbientIntensity(0.25)
Material92.setDiffuseColor([0.282435,0.085159,0.134462])
Material92.setShininess(0.127273)
Material92.setSpecularColor([0.276305,0.11431,0.139857])

ProtoBody91.addChildren(Material92)
#[HelloWorldProgram diagnostic] should be connected to scene graph: artDeco01ProtoDeclare.getNodeType()=\"Material\"
#presence of follow-on TouchSensor shows that additional nodes are allowed in ProtoBody after initial node, regardless of node types
TouchSensor93 = x3d.TouchSensor()
TouchSensor93.setDescription("within ProtoBody")
IS94 = x3d.IS()
connect95 = x3d.connect()
connect95.setNodeField("description")
connect95.setProtoField("description")

IS94.addConnect(connect95)
connect96 = x3d.connect()
connect96.setNodeField("enabled")
connect96.setProtoField("enabled")

IS94.addConnect(connect96)

TouchSensor93.setIS(IS94)

ProtoBody91.addChildren(TouchSensor93)

ProtoDeclare87.setProtoBody(ProtoBody91)

Scene35.addChildren(ProtoDeclare87)
ExternProtoDeclare97 = x3d.ExternProtoDeclare()
ExternProtoDeclare97.setName("ArtDeco02Material")
ExternProtoDeclare97.setAppinfo("this is a different Material node")
ExternProtoDeclare97.setUrl(["http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d#ArtDeco02Material","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3dv#ArtDeco02Material"])
#[HelloWorldProgram diagnostic] artDeco02ExternProtoDeclare.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time. TODO X3DJSAIL needs to add further capability that retrieves the ExternProtoDeclare file.\"
field98 = x3d.field()
field98.setName("description")
field98.setAccessType("inputOutput")
field98.setAppinfo("tooltip for descriptionField")
field98.setType("SFString")

ExternProtoDeclare97.addField(field98)

Scene35.addChildren(ExternProtoDeclare97)
#Tested ArtDeco01ProtoInstance, ArtDeco02ProtoInstance for improper node type when ProtoInstance is added in wrong place
Shape99 = x3d.Shape()
Shape99.setDEF("TestShape1")
Shape99.setBboxCenter([0,0,0])
Shape99.setBboxSize([-1,-1,-1])
Appearance100 = x3d.Appearance()
Appearance100.setDEF("TestAppearance1")
#ArtDeco01Material prototype goes here... TODO ensure setContainerField is handled in exported Java
ProtoInstance101 = x3d.ProtoInstance()
ProtoInstance101.setName("ArtDeco01Material")
#[HelloWorldProgram diagnostic] ArtDeco01ProtoInstance.getNodeType()=\"Material\"
fieldValue102 = x3d.fieldValue()
fieldValue102.setName("description")
fieldValue102.setValue("ArtDeco01Material can substitute for a Material node")

ProtoInstance101.addFieldValue(fieldValue102)

Appearance100.setMaterial(ProtoInstance101)

Shape99.setAppearance(Appearance100)
Sphere103 = x3d.Sphere()
Sphere103.setRadius(0.001)

Shape99.setGeometry(Sphere103)

Scene35.addChildren(Shape99)
Shape104 = x3d.Shape()
Shape104.setDEF("TestShape2")
Shape104.setBboxCenter([0,0,0])
Shape104.setBboxSize([-1,-1,-1])
Appearance105 = x3d.Appearance()
Appearance105.setDEF("TestAppearance2")
#ArtDeco02Material prototype goes here... TODO ensure setContainerField is handled in exported Java
ProtoInstance106 = x3d.ProtoInstance()
ProtoInstance106.setName("ArtDeco02Material")
ProtoInstance106.setDEF("ArtDeco02MaterialDEF")
#[HelloWorldProgram diagnostic] ArtDeco02ProtoInstance.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time. TODO X3DJSAIL needs to add further capability that retrieves the ExternProtoDeclare file.\"
fieldValue107 = x3d.fieldValue()
fieldValue107.setName("description")
fieldValue107.setValue("ArtDeco02Material can substitute for another Material node")

ProtoInstance106.addFieldValue(fieldValue107)

Appearance105.setMaterial(ProtoInstance106)

Shape104.setAppearance(Appearance105)
Cone108 = x3d.Cone()
Cone108.setBottomRadius(0.001)
Cone108.setHeight(0.001)
Cone108.setSide(True)
Cone108.setBottom(True)
Cone108.setSolid(True)

Shape104.setGeometry(Cone108)

Scene35.addChildren(Shape104)
Shape109 = x3d.Shape()
Shape109.setDEF("TestShape3")
Shape109.setBboxCenter([0,0,0])
Shape109.setBboxSize([-1,-1,-1])
Appearance110 = x3d.Appearance()
Appearance110.setDEF("TestAppearance3")
#ArtDeco02Material ProtoInstance USE goes here. Note that name field is NOT defined as part of ProtoInstance USE.
ProtoInstance111 = x3d.ProtoInstance()
ProtoInstance111.setUSE("ArtDeco02MaterialDEF")

Appearance110.setMaterial(ProtoInstance111)

Shape109.setAppearance(Appearance110)
Cylinder112 = x3d.Cylinder()
Cylinder112.setHeight(0.001)
Cylinder112.setRadius(0.001)

Shape109.setGeometry(Cylinder112)

Scene35.addChildren(Shape109)
Inline113 = x3d.Inline()
Inline113.setDEF("inlineSceneDef")
Inline113.setUrl(["someOtherScene.x3d","https://www.web3d.org/specifications/java/examples/someOtherScene.x3d"])
Inline113.setBboxCenter([0,0,0])
Inline113.setBboxSize([-1,-1,-1])

Scene35.addChildren(Inline113)
IMPORT114 = x3d.IMPORT()
IMPORT114.setAS("WorldInfoDEF2")
IMPORT114.setImportedDEF("WorldInfoDEF")
IMPORT114.setInlineDEF("inlineSceneDef")

Scene35.addChildren(IMPORT114)
EXPORT115 = x3d.EXPORT()
EXPORT115.setAS("WorldInfoDEF3")
EXPORT115.setLocalDEF("WorldInfoDEF")

Scene35.addChildren(EXPORT115)
ProtoDeclare116 = x3d.ProtoDeclare()
ProtoDeclare116.setName("MaterialModulator")
ProtoDeclare116.setAppinfo("mimic a Material node and modulate fields as an animation effect")
ProtoDeclare116.setDocumentation("http://x3dgraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorIndex.html")
ProtoInterface117 = x3d.ProtoInterface()
field118 = x3d.field()
field118.setName("enabled")
field118.setAccessType("inputOutput")
field118.setType("SFBool")
field118.setValue("true")

ProtoInterface117.addField(field118)
field119 = x3d.field()
field119.setName("diffuseColor")
field119.setAccessType("inputOutput")
field119.setType("SFColor")
field119.setValue("0 0 0")

ProtoInterface117.addField(field119)
field120 = x3d.field()
field120.setName("emissiveColor")
field120.setAccessType("inputOutput")
field120.setType("SFColor")
field120.setValue("0.05 0.05 0.5")

ProtoInterface117.addField(field120)
field121 = x3d.field()
field121.setName("specularColor")
field121.setAccessType("inputOutput")
field121.setType("SFColor")
field121.setValue("0 0 0")

ProtoInterface117.addField(field121)
field122 = x3d.field()
field122.setName("transparency")
field122.setAccessType("inputOutput")
field122.setType("SFFloat")
field122.setValue("0")

ProtoInterface117.addField(field122)
field123 = x3d.field()
field123.setName("shininess")
field123.setAccessType("inputOutput")
field123.setType("SFFloat")
field123.setValue("0")

ProtoInterface117.addField(field123)
field124 = x3d.field()
field124.setName("ambientIntensity")
field124.setAccessType("inputOutput")
field124.setType("SFFloat")
field124.setValue("0")

ProtoInterface117.addField(field124)

ProtoDeclare116.setProtoInterface(ProtoInterface117)
ProtoBody125 = x3d.ProtoBody()
Material126 = x3d.Material()
Material126.setDEF("MaterialNode")
IS127 = x3d.IS()
connect128 = x3d.connect()
connect128.setNodeField("diffuseColor")
connect128.setProtoField("diffuseColor")

IS127.addConnect(connect128)
connect129 = x3d.connect()
connect129.setNodeField("emissiveColor")
connect129.setProtoField("emissiveColor")

IS127.addConnect(connect129)
connect130 = x3d.connect()
connect130.setNodeField("specularColor")
connect130.setProtoField("specularColor")

IS127.addConnect(connect130)
connect131 = x3d.connect()
connect131.setNodeField("transparency")
connect131.setProtoField("transparency")

IS127.addConnect(connect131)
connect132 = x3d.connect()
connect132.setNodeField("shininess")
connect132.setProtoField("shininess")

IS127.addConnect(connect132)
connect133 = x3d.connect()
connect133.setNodeField("ambientIntensity")
connect133.setProtoField("ambientIntensity")

IS127.addConnect(connect133)

Material126.setIS(IS127)

ProtoBody125.addChildren(Material126)
#Only first node (the node type) is renderable, others are along for the ride
X3DScript134 = x3d.X3DScript()
X3DScript134.setDEF("MaterialModulatorScript")
field135 = x3d.field()
field135.setName("enabled")
field135.setAccessType("inputOutput")
field135.setType("SFBool")

X3DScript134.addField(field135)
field136 = x3d.field()
field136.setName("diffuseColor")
field136.setAccessType("inputOutput")
field136.setType("SFColor")

X3DScript134.addField(field136)
field137 = x3d.field()
field137.setName("newColor")
field137.setAccessType("outputOnly")
field137.setType("SFColor")

X3DScript134.addField(field137)
field138 = x3d.field()
field138.setName("clockTrigger")
field138.setAccessType("inputOnly")
field138.setType("SFTime")

X3DScript134.addField(field138)
IS139 = x3d.IS()
connect140 = x3d.connect()
connect140.setNodeField("enabled")
connect140.setProtoField("enabled")

IS139.addConnect(connect140)
connect141 = x3d.connect()
connect141.setNodeField("diffuseColor")
connect141.setProtoField("diffuseColor")

IS139.addConnect(connect141)

X3DScript134.setIS(IS139)

ProtoBody125.addX3DScript(X3DScript134)

ProtoDeclare116.setProtoBody(ProtoBody125)

Scene35.addChildren(ProtoDeclare116)
#Test success: declarative statement createDeclarativeShapeTests()
Group142 = x3d.Group()
Group142.setDEF("DeclarativeGroupExample")
Group142.setBboxCenter([0,0,0])
Group142.setBboxSize([-1,-1,-1])
Shape143 = x3d.Shape()
Shape143.setBboxCenter([0,0,0])
Shape143.setBboxSize([-1,-1,-1])
MetadataString144 = x3d.MetadataString()
MetadataString144.setName("findThisNameValue")
MetadataString144.setDEF("FindableMetadataStringTest")
MetadataString144.setValue(["test case"])

Shape143.setMetadata(MetadataString144)
Appearance145 = x3d.Appearance()
Appearance145.setDEF("DeclarativeAppearanceExample")
#DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance
ProtoInstance146 = x3d.ProtoInstance()
ProtoInstance146.setName("MaterialModulator")
ProtoInstance146.setDEF("MyMaterialModulator")

Appearance145.setMaterial(ProtoInstance146)

Shape143.setAppearance(Appearance145)
Cone147 = x3d.Cone()
Cone147.setBottom(False)
Cone147.setBottomRadius(0.05)
Cone147.setHeight(0.1)
Cone147.setSide(True)
Cone147.setSolid(True)

Shape143.setGeometry(Cone147)

Group142.addChildren(Shape143)
#Test success: declarativeGroup.addChild() singleton pipeline method

Scene35.addChildren(Group142)
#Test success: declarative statement addChild()
#Test success: x3dModel.findNodeByDEF(DeclarativeAppearanceExample) = <Appearance DEF='DeclarativeAppearanceExample'/> i.e. <Appearance DEF='DeclarativeAppearanceExample'> <!- - DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance - -> <ProtoInstance DEF='MyMaterialModulator' name='MaterialModulator' containerField='material'/> </Appearance>
#Test success: x3dModel.findElementByNameValue(findThisNameValue) = <MetadataString DEF='FindableMetadataStringTest' name='findThisNameValue' value='\"test case\"'/>
#Test success: x3dModel.findElementByNameValue(\"ArtDeco01Material\", \"ProtoDeclare\") found
#Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoDeclare\") found
#Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoInstance\") found
Group148 = x3d.Group()
Group148.setDEF("TestFieldObjectsGroup")
Group148.setBboxCenter([0,0,0])
Group148.setBboxSize([-1,-1,-1])
#testFieldObjects() results
#SFBool default=true, true=true, false=false, negate()=true
#MFBool default=, initial=true false true, negate()=false true false
#SFFloat default=0.0, initial=1.0, setValue(2)=2.0, setValue(3.0f)=3.0, setValue(4.0)=4.0
#MFFloat default=, initial=1 2 3, append(5)=1 2 3 5, inserts(3,4)(0,0)=0 1 2 3 4 5, append(6)=0 1 2 3 4 5 6, size()=7
#... get1Value[3]=3.0, remove[1]=0 2 3 4 5 6, set1Value(0,10)=10 2 3 4 5 6, multiply(2)=20 4 6 8 10 12, clear=
#SFVec3f default=0 0 0, initial=1 2 3, setValue=4 5 6, multiply(2)=8 10 12, normalize()=0.45584232 0.5698029 0.68376344, regex matches()=true
#regex test SFVec3f().matches(\"1 2 3\")=true, regex test SFVec3f().matches(\"1 2 3 4\")=false, regex test (SFRotationObject.matches(\"0 0 0 0\")=true, failure detecting illegal (zero axis) rotation value

Scene35.addChildren(Group148)
Sound149 = x3d.Sound()
Sound149.setLocation([0,1.6,0])
#set sound-ellipsoid location height at 1.6m to match typical avatar height
AudioClip150 = x3d.AudioClip()
AudioClip150.setDescription("chimes")
AudioClip150.setUrl(["chimes.wav","https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav"])
AudioClip150.setLoop(False)
AudioClip150.setPitch(1)
AudioClip150.setStartTime(0)
AudioClip150.setStopTime(0)
AudioClip150.setPauseTime(0)
AudioClip150.setResumeTime(0)
#Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/default.x3d

Sound149.setSource(AudioClip150)

Scene35.addChildren(Sound149)
Sound151 = x3d.Sound()
Sound151.setLocation([0,1.6,0])
#set sound-ellipsoid location height at 1.6m to match typical avatar height
MovieTexture152 = x3d.MovieTexture()
MovieTexture152.setDescription("mpgsys.mpg from ConformanceNist suite")
MovieTexture152.setUrl(["mpgsys.mpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpgsys.mpg"])
#Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpeg1-systems.x3d
#Expected containerField='source', allowed containerField values=\"texture\" \"source\" \"back\" \"bottom\" \"front\" \"left\" \"right\" \"top\" \"backTexture\" \"bottomTexture\" \"frontTexture\" \"leftTexture\" \"rightTexture\" \"topTexture\" \"watchList\"

Sound151.setSource(MovieTexture152)

Scene35.addChildren(Sound151)
#Test success: AnchorObject.isNode()=true, siteAnchor.isNode()=true
#Test success: AnchorObject.isStatement()=false, siteAnchor.isStatement()=false
#Test success: ROUTEObject.isNode()=false, orbitPositionROUTE.isNode()=false
#Test success: ROUTEObject.isStatement()=true, orbitPositionROUTE.isStatement()=true
#Test success: CommentsBlock.isNode()=false, testComments.isNode()=false
#Test failure: CommentsBlock.isStatement()=true, testComments.isStatement()=true
Shape153 = x3d.Shape()
Shape153.setDEF("ExtrusionShape")
Shape153.setBboxCenter([0,0,0])
Shape153.setBboxSize([-1,-1,-1])
#ExampleExtrusion isCrossSectionClosed()=true, crossSection='[1.0, 1.0, 1.0, -1.0, -1.0, -1.0, -1.0, 1.0, 1.0, 1.0]'
#ExampleExtrusion isSpineClosed()=false, spine='[0.0, 0.0, 0.0, 0.0, 1.0, 0.0]'
Appearance154 = x3d.Appearance()
Appearance154.setDEF("TransparentAppearance")
Material155 = x3d.Material()
Material155.setTransparency(1)

Appearance154.setMaterial(Material155)

Shape153.setAppearance(Appearance154)
Extrusion156 = x3d.Extrusion()
Extrusion156.setDEF("ExampleExtrusion")

Shape153.setGeometry(Extrusion156)

Scene35.addChildren(Shape153)
Group157 = x3d.Group()
Group157.setBboxCenter([0,0,0])
Group157.setBboxSize([-1,-1,-1])
#Test MFNode children array as an ordered list consisting of comments, statements, ProtoInstance and nodes
ProtoDeclare158 = x3d.ProtoDeclare()
ProtoDeclare158.setName("NewWorldInfo")
ProtoInterface159 = x3d.ProtoInterface()
field160 = x3d.field()
field160.setName("description")
field160.setAccessType("initializeOnly")
field160.setType("SFString")

ProtoInterface159.addField(field160)

ProtoDeclare158.setProtoInterface(ProtoInterface159)
ProtoBody161 = x3d.ProtoBody()
WorldInfo162 = x3d.WorldInfo()

ProtoBody161.addChildren(WorldInfo162)

ProtoDeclare158.setProtoBody(ProtoBody161)

Group157.addChildren(ProtoDeclare158)
Group163 = x3d.Group()
Group163.setDEF("Node2")
Group163.setBboxCenter([0,0,0])
Group163.setBboxSize([-1,-1,-1])
#intentionally empty

Group157.addChildren(Group163)
Transform164 = x3d.Transform()
Transform164.setDEF("Node4")
Transform164.setBboxCenter([0,0,0])
Transform164.setBboxSize([-1,-1,-1])
#intentionally empty

Group157.addChildren(Transform164)
#Test satisfactorily creates MFNode children array as an ordered list with mixed content

Scene35.addChildren(Group157)
ProtoDeclare165 = x3d.ProtoDeclare()
ProtoDeclare165.setName("ShaderProto")
ProtoBody166 = x3d.ProtoBody()
ProgramShader167 = x3d.ProgramShader()

ProtoBody166.addChildren(ProgramShader167)

ProtoDeclare165.setProtoBody(ProtoBody166)

Scene35.addChildren(ProtoDeclare165)
Shape168 = x3d.Shape()
Shape168.setBboxCenter([0,0,0])
Shape168.setBboxSize([-1,-1,-1])
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

Scene35.addChildren(Shape168)
Transform175 = x3d.Transform()
Transform175.setDEF("SpecialtyNodes")
Transform175.setBboxCenter([0,0,0])
Transform175.setBboxSize([-1,-1,-1])
CADLayer176 = x3d.CADLayer()
CADAssembly177 = x3d.CADAssembly()
CADPart178 = x3d.CADPart()
CADFace179 = x3d.CADFace()

CADPart178.addChildren(CADFace179)

CADAssembly177.addChildren(CADPart178)

CADLayer176.addChildren(CADAssembly177)

Transform175.addChildren(CADLayer176)
EspduTransform180 = x3d.EspduTransform()
EspduTransform180.setBboxCenter([0,0,0])
EspduTransform180.setBboxSize([-1,-1,-1])

Transform175.addChildren(EspduTransform180)
ReceiverPdu181 = x3d.ReceiverPdu()
ReceiverPdu181.setBboxCenter([0,0,0])
ReceiverPdu181.setBboxSize([-1,-1,-1])

Transform175.addChildren(ReceiverPdu181)
SignalPdu182 = x3d.SignalPdu()
SignalPdu182.setBboxCenter([0,0,0])
SignalPdu182.setBboxSize([-1,-1,-1])

Transform175.addChildren(SignalPdu182)
TransmitterPdu183 = x3d.TransmitterPdu()
TransmitterPdu183.setBboxCenter([0,0,0])
TransmitterPdu183.setBboxSize([-1,-1,-1])

Transform175.addChildren(TransmitterPdu183)
DISEntityManager184 = x3d.DISEntityManager()
DISEntityTypeMapping185 = x3d.DISEntityTypeMapping()

DISEntityManager184.addMapping(DISEntityTypeMapping185)

Transform175.addChildren(DISEntityManager184)

Scene35.addChildren(Transform175)

X3D0.setScene(Scene35)
X3D0.toFileX3D("../data/Json_RoundTrip.x3d")
