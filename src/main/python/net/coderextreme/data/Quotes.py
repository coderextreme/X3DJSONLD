import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
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
meta6.setContent("HelloWorldProgramOutput.x3d")

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
meta9.setContent("HelloWorldProgramOutput.java")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("created")
meta10.setContent("6 September 2016")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("modified")
meta11.setContent("7 April 2018")

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
meta16.setContent("https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/java/examples/HelloWorldProgramOutput.x3d")

head1.addMeta(meta16)
meta17 = x3d.meta()
meta17.setName("reference")
meta17.setContent("Console output, ClassicVRML encoding, VRML97 encoding and pretty-print documentation:")

head1.addMeta(meta17)
meta18 = x3d.meta()
meta18.setName("reference")
meta18.setContent("HelloWorldProgramOutput.txt")

head1.addMeta(meta18)
meta19 = x3d.meta()
meta19.setName("reference")
meta19.setContent("HelloWorldProgramOutput.x3dv")

head1.addMeta(meta19)
meta20 = x3d.meta()
meta20.setName("reference")
meta20.setContent("HelloWorldProgramOutput.wrl")

head1.addMeta(meta20)
meta21 = x3d.meta()
meta21.setName("reference")
meta21.setContent("HelloWorldProgramOutput.html")

head1.addMeta(meta21)
meta22 = x3d.meta()
meta22.setName("reference")
meta22.setContent("X3dValidator https://savage.nps.edu/X3dValidator?url=http://www.web3d.org/specifications/java/examples/HelloWorldProgramOutput.x3d")

head1.addMeta(meta22)
meta23 = x3d.meta()
meta23.setName("identifier")
meta23.setContent("http://www.web3d.org/specifications/java/examples/HelloWorldProgramOutput.x3d")

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
meta26.setContent("30 April 2018")

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
Viewpoint31 = x3d.Viewpoint()
Viewpoint31.setDEF("DefaultView")
Viewpoint31.setDescription("Hello X3DJSAIL")

ViewpointGroup30.addChildren(Viewpoint31)
Viewpoint32 = x3d.Viewpoint()
Viewpoint32.setDEF("TopDownView")
Viewpoint32.setDescription("top-down view from above")
Viewpoint32.setOrientation([1,0,0,-1.570796])
Viewpoint32.setPosition([0,100,0])

ViewpointGroup30.addChildren(Viewpoint32)

Scene29.addChildren(ViewpointGroup30)
WorldInfo33 = x3d.WorldInfo()
WorldInfo33.setDEF("WorldInfoDEF")
WorldInfo33.setTitle("HelloWorldProgram produced by X3D Java SAI Library (X3DJSAIL)")

Scene29.addChildren(WorldInfo33)
WorldInfo34 = x3d.WorldInfo()
WorldInfo34.setUSE("WorldInfoDEF")

Scene29.addChildren(WorldInfo34)
WorldInfo35 = x3d.WorldInfo()
WorldInfo35.setUSE("WorldInfoDEF")

Scene29.addChildren(WorldInfo35)
MetadataString36 = x3d.MetadataString()
MetadataString36.setName("test")
MetadataString36.setDEF("scene.addChildMetadata")
MetadataString36.setValue(["Top-level root Metadata node beneath Scene needs to be one of '-children' in JSON encoding"])

Scene29.addMetadata(MetadataString36)
LayerSet37 = x3d.LayerSet()
LayerSet37.setDEF("scene.addChildLayerSetTest")

Scene29.addLayerSet(LayerSet37)
Transform38 = x3d.Transform()
Transform38.setDEF("LogoGeometryTransform")
Transform38.setTranslation([0,1.5,0])
Transform38.setBboxCenter([0,0,0])
Transform38.setBboxSize([-1,-1,-1])
Anchor39 = x3d.Anchor()
Anchor39.setDescription("select for X3D Java SAI Library (X3DJSAIL) description")
Anchor39.setUrl(["../X3DJSAIL.html","http://www.web3d.org/specifications/java/X3DJSAIL.html"])
Anchor39.setBboxCenter([0,0,0])
Anchor39.setBboxSize([-1,-1,-1])
Shape40 = x3d.Shape()
Shape40.setDEF("BoxShape")
Shape40.setBboxCenter([0,0,0])
Shape40.setBboxSize([-1,-1,-1])
Appearance41 = x3d.Appearance()
Material42 = x3d.Material()
Material42.setDEF("GreenMaterial")
Material42.setDiffuseColor([0,1,1])
Material42.setEmissiveColor([0.8,0,0])
Material42.setTransparency(0.1)

Appearance41.setMaterial(Material42)
ImageTexture43 = x3d.ImageTexture()
ImageTexture43.setUrl(["images/X3dJavaSceneAccessInterfaceSaiLibrary.png","http://www.web3d.org/specifications/java/examples/images/X3dJavaSceneAccessInterfaceSaiLibrary.png"])

Appearance41.setTexture(ImageTexture43)

Shape40.setAppearance(Appearance41)
Box44 = x3d.Box()
Box44.setDEF("test-NMTOKEN_regex.0123456789")
Box44.setCssClass("untextured")
Box44.setSize([2,2,2])
Box44.setSolid(True)

Shape40.setGeometry(Box44)

Anchor39.addChildren(Shape40)

Transform38.addChildren(Anchor39)

Scene29.addChildren(Transform38)
Shape45 = x3d.Shape()
Shape45.setDEF("LineShape")
Shape45.setBboxCenter([0,0,0])
Shape45.setBboxSize([-1,-1,-1])
Appearance46 = x3d.Appearance()
Material47 = x3d.Material()
Material47.setEmissiveColor([0.6,0.19607843,0.8])

Appearance46.setMaterial(Material47)

Shape45.setAppearance(Appearance46)
IndexedLineSet48 = x3d.IndexedLineSet()
IndexedLineSet48.setCoordIndex([0,1,2,3,4,0])
#Coordinate 3-tuple point count: 6
Coordinate49 = x3d.Coordinate()
Coordinate49.setPoint([0,1.5,0,2,1.5,0,2,1.5,-2,-2,1.5,-2,-2,1.5,0,0,1.5,0])

IndexedLineSet48.setCoord(Coordinate49)

Shape45.setGeometry(IndexedLineSet48)

Scene29.addChildren(Shape45)
PositionInterpolator50 = x3d.PositionInterpolator()
PositionInterpolator50.setDEF("BoxPathAnimator")
PositionInterpolator50.setKey([0,0.125,0.375,0.625,0.875,1])
PositionInterpolator50.setKeyValue([0,1.5,0,2,1.5,0,2,1.5,-2,-2,1.5,-2,-2,1.5,0,0,1.5,0])

Scene29.addChildren(PositionInterpolator50)
TimeSensor51 = x3d.TimeSensor()
TimeSensor51.setDEF("OrbitClock")
TimeSensor51.setCycleInterval(8)
TimeSensor51.setLoop(True)

Scene29.addChildren(TimeSensor51)
ROUTE52 = x3d.ROUTE()
ROUTE52.setFromField("fraction_changed")
ROUTE52.setFromNode("OrbitClock")
ROUTE52.setToField("set_fraction")
ROUTE52.setToNode("BoxPathAnimator")

Scene29.addChildren(ROUTE52)
ROUTE53 = x3d.ROUTE()
ROUTE53.setFromField("value_changed")
ROUTE53.setFromNode("BoxPathAnimator")
ROUTE53.setToField("set_translation")
ROUTE53.setToNode("LogoGeometryTransform")

Scene29.addChildren(ROUTE53)
Transform54 = x3d.Transform()
Transform54.setDEF("TextTransform")
Transform54.setTranslation([0,-1.5,0])
Transform54.setBboxCenter([0,0,0])
Transform54.setBboxSize([-1,-1,-1])
Shape55 = x3d.Shape()
Shape55.setBboxCenter([0,0,0])
Shape55.setBboxSize([-1,-1,-1])
Appearance56 = x3d.Appearance()
Material57 = x3d.Material()
Material57.setUSE("GreenMaterial")

Appearance56.setMaterial(Material57)

Shape55.setAppearance(Appearance56)
Text58 = x3d.Text()
Text58.setString(["X3D Java","SAI Library","X3DJSAIL"])
#Comment example A, plain quotation marks: He said, \"Immel did it!\"
#Comment example B, XML character entities: He said, &quot;Immel did it!&quot;
MetadataSet59 = x3d.MetadataSet()
MetadataSet59.setName("EscapedQuotationMarksMetadataSet")
MetadataString60 = x3d.MetadataString()
MetadataString60.setName("quotesTestC")
MetadataString60.setValue(["MFString example C, backslash-escaped quotes: He said, \"Immel did it!\""])

MetadataSet59.addValue(MetadataString60)
MetadataString61 = x3d.MetadataString()
MetadataString61.setName("extraChildTest")
MetadataString61.setValue(["checks MetadataSetObject addValue() method"])

MetadataSet59.addValue(MetadataString61)

Text58.setMetadata(MetadataSet59)
FontStyle62 = x3d.FontStyle()
FontStyle62.setJustify(["MIDDLE","MIDDLE"])

Text58.setFontStyle(FontStyle62)

Shape55.setGeometry(Text58)

Transform54.addChildren(Shape55)
Collision63 = x3d.Collision()
Collision63.setEnabled(True)
Collision63.setBboxCenter([0,0,0])
Collision63.setBboxSize([-1,-1,-1])
#test containerField='proxy'
Shape64 = x3d.Shape()
Shape64.setDEF("ProxyShape")
Shape64.setBboxCenter([0,0,0])
Shape64.setBboxSize([-1,-1,-1])
#alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\"'
#alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\" \"\"'
#alternative Java source: .setString(new String [] {\"One, Two, Comment\", \"\", \"He said, \\\"\"\"Immel did it!\\\"\"\\\"\"})
#reference: http://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamplesIndex.html
Text65 = x3d.Text()
Text65.setString(["One, Two, Text","","He said, \"Immel did it!\" \"\""])

Shape64.setGeometry(Text65)

Collision63.setProxy(Shape64)

Transform54.addChildren(Collision63)
#It's a beautiful world
#... for you!
#https://en.wikipedia.org/wiki/Beautiful_World_(Devo_song)

Scene29.addChildren(Transform54)
#repeatedly spin 180 degrees as a readable special effect
OrientationInterpolator66 = x3d.OrientationInterpolator()
OrientationInterpolator66.setDEF("SpinInterpolator")
OrientationInterpolator66.setKey([0,0.5,1])
OrientationInterpolator66.setKeyValue([0,1,0,4.712389,0,1,0,0,0,1,0,1.5707964])

Scene29.addChildren(OrientationInterpolator66)
TimeSensor67 = x3d.TimeSensor()
TimeSensor67.setDEF("SpinClock")
TimeSensor67.setCycleInterval(5)
TimeSensor67.setLoop(True)

Scene29.addChildren(TimeSensor67)
ROUTE68 = x3d.ROUTE()
ROUTE68.setFromField("fraction_changed")
ROUTE68.setFromNode("SpinClock")
ROUTE68.setToField("set_fraction")
ROUTE68.setToNode("SpinInterpolator")

Scene29.addChildren(ROUTE68)
ROUTE69 = x3d.ROUTE()
ROUTE69.setFromField("value_changed")
ROUTE69.setFromNode("SpinInterpolator")
ROUTE69.setToField("rotation")
ROUTE69.setToNode("TextTransform")

Scene29.addChildren(ROUTE69)
Group70 = x3d.Group()
Group70.setDEF("BackgroundGroup")
Group70.setBboxCenter([0,0,0])
Group70.setBboxSize([-1,-1,-1])
Background71 = x3d.Background()
Background71.setDEF("GradualBackground")
Background71.setSkyColor([0,0,0])
Background71.setTransparency(0)

Group70.addChildren(Background71)
ColorInterpolator72 = x3d.ColorInterpolator()
ColorInterpolator72.setDEF("ColorAnimator")
ColorInterpolator72.setKey([0,0.5,1])
ColorInterpolator72.setKeyValue([0.9411765,1,1,0.29411766,0,0.50980395,0.9411765,1,1])
#AZURE to INDIGO and back again

Group70.addChildren(ColorInterpolator72)
TimeSensor73 = x3d.TimeSensor()
TimeSensor73.setDEF("ColorClock")
TimeSensor73.setCycleInterval(60)
TimeSensor73.setLoop(True)

Group70.addChildren(TimeSensor73)
ROUTE74 = x3d.ROUTE()
ROUTE74.setFromField("colorsOutput")
ROUTE74.setFromNode("colorTypeConversionScript")
ROUTE74.setToField("skyColor")
ROUTE74.setToNode("GradualBackground")

Group70.addChildren(ROUTE74)
ROUTE75 = x3d.ROUTE()
ROUTE75.setFromField("value_changed")
ROUTE75.setFromNode("ColorAnimator")
ROUTE75.setToField("colorInput")
ROUTE75.setToNode("colorTypeConversionScript")

Group70.addChildren(ROUTE75)
ROUTE76 = x3d.ROUTE()
ROUTE76.setFromField("fraction_changed")
ROUTE76.setFromNode("ColorClock")
ROUTE76.setToField("set_fraction")
ROUTE76.setToNode("ColorAnimator")

Group70.addChildren(ROUTE76)
X3DScript77 = x3d.X3DScript()
X3DScript77.setDEF("colorTypeConversionScript")
field78 = x3d.field()
field78.setName("colorInput")
field78.setAccessType("inputOnly")
field78.setType("SFColor")

X3DScript77.addField(field78)
field79 = x3d.field()
field79.setName("colorsOutput")
field79.setAccessType("outputOnly")
field79.setType("MFColor")

X3DScript77.addField(field79)

Group70.addX3DScript(X3DScript77)

Scene29.addChildren(Group70)
ProtoDeclare80 = x3d.ProtoDeclare()
ProtoDeclare80.setName("ArtDeco01Material")
ProtoDeclare80.setAppinfo("tooltip: ArtDeco01Material prototype is a Material node")
ProtoInterface81 = x3d.ProtoInterface()
field82 = x3d.field()
field82.setName("description")
field82.setAccessType("inputOutput")
field82.setAppinfo("tooltip for descriptionField")
field82.setType("SFString")
field82.setValue("ArtDeco01Material prototype is a Material node")

ProtoInterface81.addField(field82)
field83 = x3d.field()
field83.setName("enabled")
field83.setAccessType("inputOutput")
field83.setType("SFBool")
field83.setValue("true")

ProtoInterface81.addField(field83)

ProtoDeclare80.setProtoInterface(ProtoInterface81)
ProtoBody84 = x3d.ProtoBody()
#Initial node of ProtoBody determines prototype node type
Material85 = x3d.Material()
Material85.setAmbientIntensity(0.25)
Material85.setDiffuseColor([0.282435,0.085159,0.134462])
Material85.setShininess(0.127273)
Material85.setSpecularColor([0.276305,0.11431,0.139857])

ProtoBody84.addChildren(Material85)
#[HelloWorldProgram diagnostic] should be connected to scene graph: ArtDeco01ProtoDeclare.getNodeType()=\"Material\"
#presence of follow-on TouchSensor shows that additional nodes are allowed in ProtoBody after initial node, regardless of node types
TouchSensor86 = x3d.TouchSensor()
TouchSensor86.setDescription("within ProtoBody")
IS87 = x3d.IS()
connect88 = x3d.connect()
connect88.setNodeField("description")
connect88.setProtoField("description")

IS87.addConnect(connect88)
connect89 = x3d.connect()
connect89.setNodeField("enabled")
connect89.setProtoField("enabled")

IS87.addConnect(connect89)

TouchSensor86.setIS(IS87)

ProtoBody84.addChildren(TouchSensor86)

ProtoDeclare80.setProtoBody(ProtoBody84)

Scene29.addChildren(ProtoDeclare80)
ExternProtoDeclare90 = x3d.ExternProtoDeclare()
ExternProtoDeclare90.setName("ArtDeco02Material")
ExternProtoDeclare90.setAppinfo("this is a different Material node")
ExternProtoDeclare90.setUrl(["http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d#ArtDeco02Material","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3dv#ArtDeco02Material"])
#[HelloWorldProgram diagnostic] ArtDeco02ExternProtoDeclare.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time, TODO X3DJSAIL needs to add further capability.\"
field91 = x3d.field()
field91.setName("description")
field91.setAccessType("inputOutput")
field91.setAppinfo("tooltip for descriptionField")
field91.setType("SFString")

ExternProtoDeclare90.addField(field91)

Scene29.addChildren(ExternProtoDeclare90)
#Tested ArtDeco01ProtoInstance, ArtDeco02ProtoInstance for improper node type when ProtoInstance is added in wrong place
Shape92 = x3d.Shape()
Shape92.setDEF("TestShape1")
Shape92.setBboxCenter([0,0,0])
Shape92.setBboxSize([-1,-1,-1])
Appearance93 = x3d.Appearance()
Appearance93.setDEF("TestAppearance1")
#ArtDeco01Material prototype goes here... TODO ensure setContainerField is handled in exported Java
ProtoInstance94 = x3d.ProtoInstance()
ProtoInstance94.setName("ArtDeco01Material")
#[HelloWorldProgram diagnostic] ArtDeco01ProtoInstance.getNodeType()=\"Material\"
fieldValue95 = x3d.fieldValue()
fieldValue95.setName("description")
fieldValue95.setValue("ArtDeco01Material can substitute for a Material node")

ProtoInstance94.addFieldValue(fieldValue95)

Appearance93.setMaterial(ProtoInstance94)

Shape92.setAppearance(Appearance93)
Sphere96 = x3d.Sphere()
Sphere96.setRadius(0.001)

Shape92.setGeometry(Sphere96)

Scene29.addChildren(Shape92)
Shape97 = x3d.Shape()
Shape97.setDEF("TestShape2")
Shape97.setBboxCenter([0,0,0])
Shape97.setBboxSize([-1,-1,-1])
Appearance98 = x3d.Appearance()
Appearance98.setDEF("TestAppearance2")
#ArtDeco02Material prototype goes here... TODO ensure setContainerField is handled in exported Java
ProtoInstance99 = x3d.ProtoInstance()
ProtoInstance99.setName("ArtDeco02Material")
ProtoInstance99.setDEF("ArtDeco02MaterialDEF")
#[HelloWorldProgram diagnostic] ArtDeco02ProtoInstance.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time, TODO X3DJSAIL needs to add further capability.\"
fieldValue100 = x3d.fieldValue()
fieldValue100.setName("description")
fieldValue100.setValue("ArtDeco02Material can substitute for another Material node")

ProtoInstance99.addFieldValue(fieldValue100)

Appearance98.setMaterial(ProtoInstance99)

Shape97.setAppearance(Appearance98)
Cone101 = x3d.Cone()
Cone101.setBottomRadius(0.001)
Cone101.setHeight(0.001)
Cone101.setSide(True)
Cone101.setBottom(True)
Cone101.setSolid(True)

Shape97.setGeometry(Cone101)

Scene29.addChildren(Shape97)
Shape102 = x3d.Shape()
Shape102.setDEF("TestShape3")
Shape102.setBboxCenter([0,0,0])
Shape102.setBboxSize([-1,-1,-1])
Appearance103 = x3d.Appearance()
Appearance103.setDEF("TestAppearance3")
#ArtDeco02Material ProtoInstance USE goes here...
ProtoInstance104 = x3d.ProtoInstance()
ProtoInstance104.setUSE("ArtDeco02MaterialDEF")

Appearance103.setMaterial(ProtoInstance104)

Shape102.setAppearance(Appearance103)
Cylinder105 = x3d.Cylinder()
Cylinder105.setHeight(0.001)
Cylinder105.setRadius(0.001)

Shape102.setGeometry(Cylinder105)

Scene29.addChildren(Shape102)
Inline106 = x3d.Inline()
Inline106.setDEF("inlineSceneDef")
Inline106.setUrl(["someOtherScene.x3d"])
Inline106.setBboxCenter([0,0,0])
Inline106.setBboxSize([-1,-1,-1])

Scene29.addChildren(Inline106)
IMPORT107 = x3d.IMPORT()
IMPORT107.setAS("WorldInfoDEF2")
IMPORT107.setImportedDEF("WorldInfoDEF")
IMPORT107.setInlineDEF("inlineSceneDef")

Scene29.addChildren(IMPORT107)
EXPORT108 = x3d.EXPORT()
EXPORT108.setAS("WorldInfoDEF3")
EXPORT108.setLocalDEF("WorldInfoDEF")

Scene29.addChildren(EXPORT108)
ProtoDeclare109 = x3d.ProtoDeclare()
ProtoDeclare109.setName("MaterialModulator")
ProtoDeclare109.setAppinfo("mimic a Material node and modulate fields as an animation effect")
ProtoDeclare109.setDocumentation("http://x3dgraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorIndex.html")
ProtoInterface110 = x3d.ProtoInterface()
field111 = x3d.field()
field111.setName("enabled")
field111.setAccessType("inputOutput")
field111.setType("SFBool")
field111.setValue("true")

ProtoInterface110.addField(field111)
field112 = x3d.field()
field112.setName("diffuseColor")
field112.setAccessType("inputOutput")
field112.setType("SFColor")
field112.setValue("0 0 0")

ProtoInterface110.addField(field112)
field113 = x3d.field()
field113.setName("emissiveColor")
field113.setAccessType("inputOutput")
field113.setType("SFColor")
field113.setValue("0.05 0.05 0.5")

ProtoInterface110.addField(field113)
field114 = x3d.field()
field114.setName("specularColor")
field114.setAccessType("inputOutput")
field114.setType("SFColor")
field114.setValue("0 0 0")

ProtoInterface110.addField(field114)
field115 = x3d.field()
field115.setName("transparency")
field115.setAccessType("inputOutput")
field115.setType("SFFloat")
field115.setValue("0")

ProtoInterface110.addField(field115)
field116 = x3d.field()
field116.setName("shininess")
field116.setAccessType("inputOutput")
field116.setType("SFFloat")
field116.setValue("0")

ProtoInterface110.addField(field116)
field117 = x3d.field()
field117.setName("ambientIntensity")
field117.setAccessType("inputOutput")
field117.setType("SFFloat")
field117.setValue("0")

ProtoInterface110.addField(field117)

ProtoDeclare109.setProtoInterface(ProtoInterface110)
ProtoBody118 = x3d.ProtoBody()
Material119 = x3d.Material()
Material119.setDEF("MaterialNode")
IS120 = x3d.IS()
connect121 = x3d.connect()
connect121.setNodeField("diffuseColor")
connect121.setProtoField("diffuseColor")

IS120.addConnect(connect121)
connect122 = x3d.connect()
connect122.setNodeField("emissiveColor")
connect122.setProtoField("emissiveColor")

IS120.addConnect(connect122)
connect123 = x3d.connect()
connect123.setNodeField("specularColor")
connect123.setProtoField("specularColor")

IS120.addConnect(connect123)
connect124 = x3d.connect()
connect124.setNodeField("transparency")
connect124.setProtoField("transparency")

IS120.addConnect(connect124)
connect125 = x3d.connect()
connect125.setNodeField("shininess")
connect125.setProtoField("shininess")

IS120.addConnect(connect125)
connect126 = x3d.connect()
connect126.setNodeField("ambientIntensity")
connect126.setProtoField("ambientIntensity")

IS120.addConnect(connect126)

Material119.setIS(IS120)

ProtoBody118.addChildren(Material119)
#Only first node (the node type) is renderable, others are along for the ride
X3DScript127 = x3d.X3DScript()
X3DScript127.setDEF("MaterialModulatorScript")
field128 = x3d.field()
field128.setName("enabled")
field128.setAccessType("inputOutput")
field128.setType("SFBool")

X3DScript127.addField(field128)
field129 = x3d.field()
field129.setName("diffuseColor")
field129.setAccessType("inputOutput")
field129.setType("SFColor")

X3DScript127.addField(field129)
field130 = x3d.field()
field130.setName("newColor")
field130.setAccessType("outputOnly")
field130.setType("SFColor")

X3DScript127.addField(field130)
field131 = x3d.field()
field131.setName("clockTrigger")
field131.setAccessType("inputOnly")
field131.setType("SFTime")

X3DScript127.addField(field131)
IS132 = x3d.IS()
connect133 = x3d.connect()
connect133.setNodeField("enabled")
connect133.setProtoField("enabled")

IS132.addConnect(connect133)
connect134 = x3d.connect()
connect134.setNodeField("diffuseColor")
connect134.setProtoField("diffuseColor")

IS132.addConnect(connect134)

X3DScript127.setIS(IS132)

ProtoBody118.addX3DScript(X3DScript127)

ProtoDeclare109.setProtoBody(ProtoBody118)

Scene29.addChildren(ProtoDeclare109)
#Test success: declarative statement createDeclarativeShapeTests()
Group135 = x3d.Group()
Group135.setDEF("DeclarativeGroupExample")
Group135.setBboxCenter([0,0,0])
Group135.setBboxSize([-1,-1,-1])
Shape136 = x3d.Shape()
Shape136.setBboxCenter([0,0,0])
Shape136.setBboxSize([-1,-1,-1])
MetadataString137 = x3d.MetadataString()
MetadataString137.setName("findThisNameValue")
MetadataString137.setDEF("FindableMetadataStringTest")
MetadataString137.setValue(["test case"])

Shape136.setMetadata(MetadataString137)
Appearance138 = x3d.Appearance()
Appearance138.setDEF("DeclarativeAppearanceExample")
#DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance
ProtoInstance139 = x3d.ProtoInstance()
ProtoInstance139.setName("MaterialModulator")
ProtoInstance139.setDEF("MyMaterialModulator")

Appearance138.setMaterial(ProtoInstance139)

Shape136.setAppearance(Appearance138)
Cone140 = x3d.Cone()
Cone140.setBottom(False)
Cone140.setBottomRadius(0.05)
Cone140.setHeight(0.1)
Cone140.setSide(True)
Cone140.setSolid(True)

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
Group141 = x3d.Group()
Group141.setDEF("TestFieldObjectsGroup")
Group141.setBboxCenter([0,0,0])
Group141.setBboxSize([-1,-1,-1])
#testFieldObjects() results
#SFBool default=true, true=true, false=false, negate()=true
#MFBool default=, initial=true false true, negate()=false true false
#SFFloat default=0.0, initial=1.0, setValue(2)=2.0, setValue(3.0f)=3.0, setValue(4.0)=4.0
#MFFloat default=, initial=1 2 3, append(5)=1 2 3 5, inserts(3,4)(0,0)=0 1 2 3 4 5, append(6)=0 1 2 3 4 5 6, size()=7
#... get1Value[3]=3.0, remove[1]=0 2 3 4 5 6, set1Value(0,10)=10 2 3 4 5 6, multiply(2)=20 4 6 8 10 12, clear=
#SFVec3f default=0 0 0, initial=1 2 3, setValue=4 5 6, multiply(2)=8 10 12, normalize()=0.45584232 0.5698029 0.68376344

Scene29.addChildren(Group141)
Sound142 = x3d.Sound()
Sound142.setLocation([0,1.6,0])
#set sound-ellipsoid location height at 1.6m to match typical avatar height
AudioClip143 = x3d.AudioClip()
AudioClip143.setDescription("chimes")
AudioClip143.setUrl(["chimes.wav","http://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav"])
AudioClip143.setLoop(False)
AudioClip143.setPitch(1)
AudioClip143.setStartTime(0)
AudioClip143.setStopTime(0)
AudioClip143.setPauseTime(0)
AudioClip143.setResumeTime(0)
#Scene example fragment from http://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/default.x3d

Sound142.setSource(AudioClip143)

Scene29.addChildren(Sound142)
Sound144 = x3d.Sound()
Sound144.setLocation([0,1.6,0])
#set sound-ellipsoid location height at 1.6m to match typical avatar height
MovieTexture145 = x3d.MovieTexture()
MovieTexture145.setDescription("mpgsys.mpg from ConformanceNist suite")
MovieTexture145.setUrl(["mpgsys.mpg","http://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpgsys.mpg"])
#Scene example fragment from http://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpeg1-systems.x3d
#Expected containerField='source', allowed containerField values=\"texture\" \"source\" \"back\" \"bottom\" \"front\" \"left\" \"right\" \"top\" \"backTexture\" \"bottomTexture\" \"frontTexture\" \"leftTexture\" \"rightTexture\" \"topTexture\"

Sound144.setSource(MovieTexture145)

Scene29.addChildren(Sound144)
#Test success: AnchorObject.isNode()=true, siteAnchor.isNode()=true
#Test success: AnchorObject.isStatement()=false, siteAnchor.isStatement()=false
#Test success: ROUTEObject.isNode()=false, orbitPositionROUTE.isNode()=false
#Test success: ROUTEObject.isStatement()=true, orbitPositionROUTE.isStatement()=true
#Test success: CommentsBlock.isNode()=false, testComments.isNode()=false
#Test failure: CommentsBlock.isStatement()=true, testComments.isStatement()=true
Shape146 = x3d.Shape()
Shape146.setDEF("ExtrusionShape")
Shape146.setBboxCenter([0,0,0])
Shape146.setBboxSize([-1,-1,-1])
#ExampleExtrusion isCrossSectionClosed()=true, crossSection='[1.0, 1.0, 1.0, -1.0, -1.0, -1.0, -1.0, 1.0, 1.0, 1.0]'
#ExampleExtrusion isSpineClosed()=false, spine='[0.0, 0.0, 0.0, 0.0, 1.0, 0.0]'
Appearance147 = x3d.Appearance()
Appearance147.setDEF("TransparentAppearance")
Material148 = x3d.Material()
Material148.setTransparency(1)

Appearance147.setMaterial(Material148)

Shape146.setAppearance(Appearance147)
Extrusion149 = x3d.Extrusion()
Extrusion149.setDEF("ExampleExtrusion")

Shape146.setGeometry(Extrusion149)

Scene29.addChildren(Shape146)

X3D0.setScene(Scene29)
X3D0.toFileX3D("../data/Quotes_RoundTrip.x3d")
