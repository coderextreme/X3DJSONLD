print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.cssClass = "x3dModel.class"
X3D0.profile = "Full"
X3D0.style = "x3dModel.style"
X3D0.version = "4.0"
X3D0.children.append(x3d.Comment("""X3D model top-level comment"""))
head1 = x3d.head()
head1.children.append(x3d.Comment("""comment #1"""))
head1.children.append(x3d.Comment("""comment #2"""))
head1.children.append(x3d.Comment("""comment #3"""))
head1.children.append(x3d.Comment("""comment #4"""))
component2 = x3d.component()
component2.name = "Navigation"
component2.level = 3

head1.children.append(component2)
component3 = x3d.component()
component3.name = "Shaders"
component3.level = 1

head1.children.append(component3)
component4 = x3d.component()
component4.name = "CADGeometry"
component4.level = 2

head1.children.append(component4)
component5 = x3d.component()
component5.name = "DIS"
component5.level = 2

head1.children.append(component5)
component6 = x3d.component()
component6.name = "HAnim"
component6.level = 1

head1.children.append(component6)
component7 = x3d.component()
component7.name = "Grouping"
component7.level = 1

head1.children.append(component7)
component8 = x3d.component()
component8.name = "Layering"
component8.level = 1

head1.children.append(component8)
unit9 = x3d.unit()
unit9.name = "AngleUnitConversion"
unit9.category = "angle"
unit9.conversionFactor = 1

head1.children.append(unit9)
unit10 = x3d.unit()
unit10.name = "LengthUnitConversion"
unit10.category = "length"
unit10.conversionFactor = 1

head1.children.append(unit10)
unit11 = x3d.unit()
unit11.name = "ForceFromPoundsToNewtons"
unit11.category = "force"
unit11.conversionFactor = 4.4482

head1.children.append(unit11)
meta12 = x3d.meta()
meta12.name = "title"
meta12.content = "SmokeTestProgramOutput.x3d"

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "info"
meta13.content = "continued development and testing in progress"

head1.children.append(meta13)
meta14 = x3d.meta()
meta14.name = "description"
meta14.content = "Example SmokeTestProgram creates an X3D model using the X3D Java Scene Access Interface Library (X3DJSAIL)"

head1.children.append(meta14)
meta15 = x3d.meta()
meta15.name = "reference"
meta15.content = "https://www.web3d.org/specifications/java/X3DJSAIL.html"

head1.children.append(meta15)
meta16 = x3d.meta()
meta16.name = "generator"
meta16.content = "SmokeTestProgramOutput.java"

head1.children.append(meta16)
meta17 = x3d.meta()
meta17.name = "created"
meta17.content = "6 September 2016"

head1.children.append(meta17)
meta18 = x3d.meta()
meta18.name = "modified"
meta18.content = "20 June 2026"

head1.children.append(meta18)
meta19 = x3d.meta()
meta19.name = "generator"
meta19.content = "X3D Java Scene Access Interface Library (X3DJSAIL)"

head1.children.append(meta19)
meta20 = x3d.meta()
meta20.name = "generator"
meta20.content = "https://www.web3d.org/specifications/java/examples/SmokeTestProgram.java"

head1.children.append(meta20)
meta21 = x3d.meta()
meta21.name = "generator"
meta21.content = "Netbeans https://www.netbeans.org"

head1.children.append(meta21)
meta22 = x3d.meta()
meta22.name = "creator"
meta22.content = "Don Brutzman"

head1.children.append(meta22)
meta23 = x3d.meta()
meta23.name = "reference"
meta23.content = "https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/java/examples/SmokeTestProgramOutput.x3d"

head1.children.append(meta23)
meta24 = x3d.meta()
meta24.name = "reference"
meta24.content = "Console output, ClassicVRML encoding, VRML97 encoding and pretty-print documentation:"

head1.children.append(meta24)
meta25 = x3d.meta()
meta25.name = "reference"
meta25.content = "SmokeTestProgramOutput.txt"

head1.children.append(meta25)
meta26 = x3d.meta()
meta26.name = "reference"
meta26.content = "SmokeTestProgramOutput.x3dv"

head1.children.append(meta26)
meta27 = x3d.meta()
meta27.name = "reference"
meta27.content = "SmokeTestProgramOutput.wrl"

head1.children.append(meta27)
meta28 = x3d.meta()
meta28.name = "reference"
meta28.content = "SmokeTestProgramOutput.html"

head1.children.append(meta28)
meta29 = x3d.meta()
meta29.name = "reference"
meta29.content = "https://savage.nps.edu/X3dValidator?url=https://www.web3d.org/specifications/java/examples/SmokeTestProgramOutput.x3d"

head1.children.append(meta29)
meta30 = x3d.meta()
meta30.name = "identifier"
meta30.content = "https://www.web3d.org/specifications/java/examples/SmokeTestProgramOutput.x3d"

head1.children.append(meta30)
meta31 = x3d.meta()
meta31.name = "license"
meta31.content = "../license.html"

head1.children.append(meta31)

X3D0.head = head1
Scene32 = x3d.Scene()
ViewpointGroup33 = x3d.ViewpointGroup()
ViewpointGroup33.description = "Available viewpoints"
Viewpoint34 = x3d.Viewpoint(DEF="DefaultView")
Viewpoint34.description = "Hello X3DJSAIL"
NavigationInfo35 = x3d.NavigationInfo(DEF="ViewpointChildNavigationInfo")

Viewpoint34.navigationInfo.append(NavigationInfo35)

ViewpointGroup33.children.append(Viewpoint34)
Viewpoint36 = x3d.Viewpoint(DEF="TopDownView")
Viewpoint36.description = "top-down view from above"
Viewpoint36.orientation = [1,0,0,-1.5708]
Viewpoint36.position = [0,100,0]

ViewpointGroup33.children.append(Viewpoint36)

Scene32.children.append(ViewpointGroup33)
NavigationInfo37 = x3d.NavigationInfo()
NavigationInfo37.type = ["EXAMINE","FLY","ANY"]

Scene32.children.append(NavigationInfo37)
WorldInfo38 = x3d.WorldInfo(DEF="WorldInfoDEF")
WorldInfo38.cssClass = "worldInfoNode.class"
WorldInfo38.style = "worldInfoNode.style"
WorldInfo38.title = "SmokeTestProgram produced by X3D Java SAI Library (X3DJSAIL)"

Scene32.children.append(WorldInfo38)
WorldInfo39 = x3d.WorldInfo(USE="WorldInfoDEF")

Scene32.children.append(WorldInfo39)
WorldInfo40 = x3d.WorldInfo(USE="WorldInfoDEF")

Scene32.children.append(WorldInfo40)
MetadataString41 = x3d.MetadataString(DEF="scene.addChildMetadata")
MetadataString41.name = "test"
MetadataString41.value = ["Top-level root Metadata node beneath Scene needs to be one of '-children' in JSON encoding"]

Scene32.metadata = MetadataString41
LayerSet42 = x3d.LayerSet(DEF="scene.addChildLayerSetTest")

Scene32.layerSet = LayerSet42
Transform43 = x3d.Transform(DEF="LogoGeometryTransform")
Transform43.translation = [0,1.5,0]
Anchor44 = x3d.Anchor(DEF="siteAnchor")
Anchor44.description = "select for X3D Java SAI Library (X3DJSAIL) description"
Anchor44.url = ["../X3DJSAIL.html","https://www.web3d.org/specifications/java/X3DJSAIL.html"]
Shape45 = x3d.Shape(DEF="BoxShape")
Appearance46 = x3d.Appearance()
Material47 = x3d.Material(DEF="GreenMaterial")
Material47.diffuseColor = [0,1,1]
Material47.emissiveColor = [0.8,0,0]
Material47.transparency = 0.1

Appearance46.material = Material47
ImageTexture48 = x3d.ImageTexture()
ImageTexture48.url = ["images/X3dJavaSceneAccessInterfaceSaiLibrary.png","https://www.web3d.org/specifications/java/examples/images/X3dJavaSceneAccessInterfaceSaiLibrary.png"]

Appearance46.texture = ImageTexture48

Shape45.appearance = Appearance46
Box49 = x3d.Box(DEF="test-NMTOKEN_regex.0123456789")
Box49.cssClass = "untextured"

Shape45.geometry = Box49

Anchor44.children.append(Shape45)

Transform43.children.append(Anchor44)

Scene32.children.append(Transform43)
Shape50 = x3d.Shape(DEF="LineShape")
Appearance51 = x3d.Appearance()
Material52 = x3d.Material()
Material52.emissiveColor = [0.6,0.1961,0.8]

Appearance51.material = Material52

Shape50.appearance = Appearance51
IndexedLineSet53 = x3d.IndexedLineSet()
IndexedLineSet53.coordIndex = [0,1,2,3,4,0]
IndexedLineSet53.children.append(x3d.Comment("""Coordinate 3-tuple point count: 6"""))
Coordinate54 = x3d.Coordinate()
Coordinate54.point = [(0, 1.5, 0),(2, 1.5, 0),(2, 1.5, -2),(-2, 1.5, -2),(-2, 1.5, 0),(0, 1.5, 0)]

IndexedLineSet53.coord = Coordinate54

Shape50.geometry = IndexedLineSet53

Scene32.children.append(Shape50)
PositionInterpolator55 = x3d.PositionInterpolator(DEF="BoxPathAnimator")
PositionInterpolator55.key = [0,0.125,0.375,0.625,0.875,1]
PositionInterpolator55.keyValue = [(0, 1.5, 0),(2, 1.5, 0),(2, 1.5, -2),(-2, 1.5, -2),(-2, 1.5, 0),(0, 1.5, 0)]

Scene32.children.append(PositionInterpolator55)
TimeSensor56 = x3d.TimeSensor(DEF="OrbitClock")
TimeSensor56.cycleInterval = 8
TimeSensor56.loop = True

Scene32.children.append(TimeSensor56)
ROUTE57 = x3d.ROUTE()
ROUTE57.fromField = "fraction_changed"
ROUTE57.fromNode = "OrbitClock"
ROUTE57.toField = "set_fraction"
ROUTE57.toNode = "BoxPathAnimator"

Scene32.children.append(ROUTE57)
ROUTE58 = x3d.ROUTE()
ROUTE58.fromField = "value_changed"
ROUTE58.fromNode = "BoxPathAnimator"
ROUTE58.toField = "set_translation"
ROUTE58.toNode = "LogoGeometryTransform"

Scene32.children.append(ROUTE58)
Transform59 = x3d.Transform(DEF="TextTransform")
Transform59.translation = [0,-1.5,0]
Shape60 = x3d.Shape()
Appearance61 = x3d.Appearance()
Material62 = x3d.Material(USE="GreenMaterial")

Appearance61.material = Material62

Shape60.appearance = Appearance61
Text63 = x3d.Text()
Text63.string = ["X3D Java","SAI Library","X3DJSAIL"]
Text63.children.append(x3d.Comment("""Comment example A, plain quotation marks: He said, \"Immel did it!\""""))
Text63.children.append(x3d.Comment("""Comment example B, XML character entities: He said, &quot;Immel did it!&quot;"""))
MetadataSet64 = x3d.MetadataSet()
MetadataSet64.name = "EscapedQuotationMarksMetadataSet"
MetadataString65 = x3d.MetadataString()
MetadataString65.name = "quotesTestC"
MetadataString65.value = ["MFString example C, backslash-escaped quotes: He said, \"Immel did it!\""]

if MetadataSet64.value is None:
    MetadataSet64.value = []
MetadataSet64.value.append(MetadataString65)
MetadataString66 = x3d.MetadataString()
MetadataString66.name = "extraChildTest"
MetadataString66.value = ["checks MetadataSet addValue() method"]

if MetadataSet64.value is None:
    MetadataSet64.value = []
MetadataSet64.value.append(MetadataString66)

Text63.metadata = MetadataSet64
FontStyle67 = x3d.FontStyle()
FontStyle67.justify = ["MIDDLE","MIDDLE"]

Text63.fontStyle = FontStyle67

Shape60.geometry = Text63

Transform59.children.append(Shape60)
Collision68 = x3d.Collision()
Collision68.children.append(x3d.Comment("""test containerField='proxy'"""))
Shape69 = x3d.Shape(DEF="ProxyShape")
Shape69.children.append(x3d.Comment("""alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\"'"""))
Shape69.children.append(x3d.Comment("""alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\" \"\"'"""))
Shape69.children.append(x3d.Comment("""alternative Java source: .setString(new String [] {\"One, Two, Comment\", \"\", \"He said, \\\"\"Immel did it!\\\"\"\"})"""))
Shape69.children.append(x3d.Comment("""reference: https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamplesIndex.html"""))
Text70 = x3d.Text()
Text70.string = ["One, Two, Text","He said, \"Immel did it!\" \"\""]

Shape69.geometry = Text70

Collision68.proxy = Shape69

Transform59.children.append(Collision68)
Transform59.children.append(x3d.Comment("""It's a beautiful world"""))
Transform59.children.append(x3d.Comment("""... for you!"""))
Transform59.children.append(x3d.Comment("""https://en.wikipedia.org/wiki/Beautiful_World_(Devo_song)"""))

Scene32.children.append(Transform59)
Scene32.children.append(x3d.Comment("""repeatedly spin 180 degrees as a readable special effect"""))
OrientationInterpolator71 = x3d.OrientationInterpolator(DEF="SpinInterpolator")
OrientationInterpolator71.key = [0,0.5,1]
OrientationInterpolator71.keyValue = [(0, 1, 0, 4.7124),(0, 1, 0, 0),(0, 1, 0, 1.5708)]

Scene32.children.append(OrientationInterpolator71)
TimeSensor72 = x3d.TimeSensor(DEF="SpinClock")
TimeSensor72.cycleInterval = 5
TimeSensor72.loop = True

Scene32.children.append(TimeSensor72)
ROUTE73 = x3d.ROUTE()
ROUTE73.fromField = "fraction_changed"
ROUTE73.fromNode = "SpinClock"
ROUTE73.toField = "set_fraction"
ROUTE73.toNode = "SpinInterpolator"

Scene32.children.append(ROUTE73)
ROUTE74 = x3d.ROUTE()
ROUTE74.fromField = "value_changed"
ROUTE74.fromNode = "SpinInterpolator"
ROUTE74.toField = "rotation"
ROUTE74.toNode = "TextTransform"

Scene32.children.append(ROUTE74)
Group75 = x3d.Group(DEF="BackgroundGroup")
Background76 = x3d.Background(DEF="GradualBackground")

Group75.children.append(Background76)
Script77 = x3d.Script(DEF="colorTypeConversionScript")
field78 = x3d.field()
field78.name = "colorInput"
field78.accessType = "inputOnly"
field78.type = "SFColor"

Script77.field.append(field78)
field79 = x3d.field()
field79.name = "colorsOutput"
field79.accessType = "outputOnly"
field79.type = "MFColor"

Script77.field.append(field79)

Script77.sourceCode = '''ecmascript:\n"+
"\n"+
"function colorInput (eventValue) // Example source code\n"+
"{\n"+
"   colorsOutput = new MFColor(eventValue); // assigning value sends output event\n"+
"// Browser.print('colorInput=' + eventValue + ',\n"+
"//                colorsOutput=' + colorsOutput + '\n"+
"');\n"+
"// TODO check line wrapping when exporting/converting\n"+
"}'''

Group75.children.append(Script77)
ColorInterpolator80 = x3d.ColorInterpolator(DEF="ColorAnimator")
ColorInterpolator80.key = [0,0.5,1]
ColorInterpolator80.keyValue = [(0.9412, 1, 1),(0.2941, 0, 0.5098),(0.9412, 1, 1)]
ColorInterpolator80.children.append(x3d.Comment("""AZURE to INDIGO and back again"""))

Group75.children.append(ColorInterpolator80)
TimeSensor81 = x3d.TimeSensor(DEF="ColorClock")
TimeSensor81.cycleInterval = 60
TimeSensor81.loop = True

Group75.children.append(TimeSensor81)
ROUTE82 = x3d.ROUTE()
ROUTE82.fromField = "colorsOutput"
ROUTE82.fromNode = "colorTypeConversionScript"
ROUTE82.toField = "skyColor"
ROUTE82.toNode = "GradualBackground"

Group75.children.append(ROUTE82)
ROUTE83 = x3d.ROUTE()
ROUTE83.fromField = "value_changed"
ROUTE83.fromNode = "ColorAnimator"
ROUTE83.toField = "colorInput"
ROUTE83.toNode = "colorTypeConversionScript"

Group75.children.append(ROUTE83)
ROUTE84 = x3d.ROUTE()
ROUTE84.fromField = "fraction_changed"
ROUTE84.fromNode = "ColorClock"
ROUTE84.toField = "set_fraction"
ROUTE84.toNode = "ColorAnimator"

Group75.children.append(ROUTE84)

Scene32.children.append(Group75)
ProtoDeclare85 = x3d.ProtoDeclare()
ProtoDeclare85.name = "ArtDeco01"
ProtoDeclare85.appinfo = "tooltip: ArtDeco01Material prototype is a Material node"
ProtoInterface86 = x3d.ProtoInterface()
field87 = x3d.field()
field87.name = "description"
field87.accessType = "inputOutput"
field87.appinfo = "tooltip for descriptionField"
field87.type = "SFString"
field87.value = "ArtDeco01Material prototype is a Material node"

ProtoInterface86.field.append(field87)
field88 = x3d.field()
field88.name = "enabled"
field88.accessType = "inputOutput"
field88.type = "SFBool"
field88.value = True

ProtoInterface86.field.append(field88)

ProtoDeclare85.ProtoInterface = ProtoInterface86
ProtoBody89 = x3d.ProtoBody()
ProtoBody89.children.append(x3d.Comment("""Initial node of ProtoBody determines prototype node type"""))
Material90 = x3d.Material()
Material90.ambientIntensity = 0.25
Material90.diffuseColor = [0.2824,0.0852,0.1345]
Material90.shininess = 0.1273
Material90.specularColor = [0.2763,0.1143,0.1399]

ProtoBody89.children.append(Material90)
ProtoBody89.children.append(x3d.Comment("""[SmokeTestProgram diagnostic] should be connected to scene graph: artDeco01ProtoDeclare.getNodeType()=\"Material\""""))
ProtoBody89.children.append(x3d.Comment("""presence of follow-on TouchSensor shows that additional nodes are allowed in ProtoBody after initial node, regardless of node types"""))
TouchSensor91 = x3d.TouchSensor()
TouchSensor91.description = "within ProtoBody"
IS92 = x3d.IS()
connect93 = x3d.connect()
connect93.nodeField = "description"
connect93.protoField = "description"

IS92.connect.append(connect93)
connect94 = x3d.connect()
connect94.nodeField = "enabled"
connect94.protoField = "enabled"

IS92.connect.append(connect94)

TouchSensor91.IS = IS92

ProtoBody89.children.append(TouchSensor91)

ProtoDeclare85.ProtoBody = ProtoBody89

Scene32.children.append(ProtoDeclare85)
ExternProtoDeclare95 = x3d.ExternProtoDeclare()
ExternProtoDeclare95.name = "ArtDeco02"
ExternProtoDeclare95.appinfo = "this is a different Material node"
ExternProtoDeclare95.url = ["https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d#ArtDeco02","https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3dv#ArtDeco02"]
ExternProtoDeclare95.children.append(x3d.Comment("""[SmokeTestProgram diagnostic] artDeco02ExternProtoDeclare.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02' type cannot be remotely accessed at run time. TODO X3DJSAIL needs to add further capability that retrieves the ExternProtoDeclare file.\""""))
field96 = x3d.field()
field96.name = "description"
field96.accessType = "inputOutput"
field96.appinfo = "tooltip for descriptionField"
field96.type = "SFString"

ExternProtoDeclare95.field.append(field96)

Scene32.children.append(ExternProtoDeclare95)
Scene32.children.append(x3d.Comment("""Tested ArtDeco01ProtoInstance, ArtDeco02ProtoInstance for improper node type when ProtoInstance is added in wrong place"""))
Shape97 = x3d.Shape(DEF="TestShape1")
Appearance98 = x3d.Appearance(DEF="TestAppearance1")
Appearance98.children.append(x3d.Comment("""ArtDeco01Material prototype goes here..."""))
ProtoInstance99 = x3d.ProtoInstance()
ProtoInstance99.name = "ArtDeco01"
ProtoInstance99.children.append(x3d.Comment("""[SmokeTestProgram diagnostic] ArtDeco01ProtoInstance.getNodeType()=\"Material\""""))
fieldValue100 = x3d.fieldValue()
fieldValue100.name = "description"
fieldValue100.value = "ArtDeco01Material can substitute for a Material node"

ProtoInstance99.fieldValue.append(fieldValue100)

Appearance98.material = ProtoInstance99

Shape97.appearance = Appearance98
Sphere101 = x3d.Sphere()
Sphere101.radius = 0.001

Shape97.geometry = Sphere101

Scene32.children.append(Shape97)
Shape102 = x3d.Shape(DEF="TestShape2")
Appearance103 = x3d.Appearance(DEF="TestAppearance2")
Appearance103.children.append(x3d.Comment("""ArtDeco02Material ProtoInstance goes here..."""))
ProtoInstance104 = x3d.ProtoInstance(DEF="ArtDeco02MaterialDEF")
ProtoInstance104.name = "ArtDeco02"
ProtoInstance104.children.append(x3d.Comment("""[SmokeTestProgram diagnostic] ArtDeco02ProtoInstance.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02' type cannot be remotely accessed at run time. TODO X3DJSAIL needs to add further capability that retrieves the ExternProtoDeclare file.\""""))

Appearance103.material = ProtoInstance104

Shape102.appearance = Appearance103
Cone105 = x3d.Cone()
Cone105.bottomRadius = 0.001
Cone105.height = 0.001

Shape102.geometry = Cone105

Scene32.children.append(Shape102)
Shape106 = x3d.Shape(DEF="TestShape3")
Appearance107 = x3d.Appearance(DEF="TestAppearance3")
Appearance107.children.append(x3d.Comment("""ArtDeco02Material ProtoInstance USE goes here. Note that name field is REQUIRED as part of ProtoInstance USE."""))
ProtoInstance108 = x3d.ProtoInstance(USE="ArtDeco02MaterialDEF")
ProtoInstance108.name = "ArtDeco02"

Appearance107.material = ProtoInstance108

Shape106.appearance = Appearance107
Cylinder109 = x3d.Cylinder()
Cylinder109.height = 0.001
Cylinder109.radius = 0.001

Shape106.geometry = Cylinder109

Scene32.children.append(Shape106)
Inline110 = x3d.Inline(DEF="inlineScene")
Inline110.url = ["newScene.x3d","https://www.web3d.org/specifications/java/examples/newScene.x3d"]

Scene32.children.append(Inline110)
IMPORT111 = x3d.IMPORT()
IMPORT111.AS = "WorldInfoDEF2"
IMPORT111.importedDEF = "WorldInfoDEF"
IMPORT111.inlineDEF = "inlineScene"

Scene32.children.append(IMPORT111)
EXPORT112 = x3d.EXPORT()
EXPORT112.AS = "WorldInfoDEF3"
EXPORT112.localDEF = "WorldInfoDEF"

Scene32.children.append(EXPORT112)
ProtoDeclare113 = x3d.ProtoDeclare()
ProtoDeclare113.name = "MaterialModulator"
ProtoDeclare113.appinfo = "mimic a Material node and modulate fields as an animation effect"
ProtoDeclare113.documentation = "https://x3dgraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorIndex.html"
ProtoInterface114 = x3d.ProtoInterface()
field115 = x3d.field()
field115.name = "enabled"
field115.accessType = "inputOutput"
field115.type = "SFBool"
field115.value = True

ProtoInterface114.field.append(field115)
field116 = x3d.field()
field116.name = "diffuseColor"
field116.accessType = "inputOutput"
field116.type = "SFColor"
field116.value = [0,0,0]

ProtoInterface114.field.append(field116)
field117 = x3d.field()
field117.name = "emissiveColor"
field117.accessType = "inputOutput"
field117.type = "SFColor"
field117.value = [0.05,0.05,0.5]

ProtoInterface114.field.append(field117)
field118 = x3d.field()
field118.name = "specularColor"
field118.accessType = "inputOutput"
field118.type = "SFColor"
field118.value = [0,0,0]

ProtoInterface114.field.append(field118)
field119 = x3d.field()
field119.name = "transparency"
field119.accessType = "inputOutput"
field119.type = "SFFloat"
field119.value = 0

ProtoInterface114.field.append(field119)
field120 = x3d.field()
field120.name = "shininess"
field120.accessType = "inputOutput"
field120.type = "SFFloat"
field120.value = 0

ProtoInterface114.field.append(field120)
field121 = x3d.field()
field121.name = "ambientIntensity"
field121.accessType = "inputOutput"
field121.type = "SFFloat"
field121.value = 0

ProtoInterface114.field.append(field121)

ProtoDeclare113.ProtoInterface = ProtoInterface114
ProtoBody122 = x3d.ProtoBody()
Material123 = x3d.Material(DEF="MaterialNode")
IS124 = x3d.IS()
connect125 = x3d.connect()
connect125.nodeField = "diffuseColor"
connect125.protoField = "diffuseColor"

IS124.connect.append(connect125)
connect126 = x3d.connect()
connect126.nodeField = "emissiveColor"
connect126.protoField = "emissiveColor"

IS124.connect.append(connect126)
connect127 = x3d.connect()
connect127.nodeField = "specularColor"
connect127.protoField = "specularColor"

IS124.connect.append(connect127)
connect128 = x3d.connect()
connect128.nodeField = "transparency"
connect128.protoField = "transparency"

IS124.connect.append(connect128)
connect129 = x3d.connect()
connect129.nodeField = "shininess"
connect129.protoField = "shininess"

IS124.connect.append(connect129)
connect130 = x3d.connect()
connect130.nodeField = "ambientIntensity"
connect130.protoField = "ambientIntensity"

IS124.connect.append(connect130)

Material123.IS = IS124

ProtoBody122.children.append(Material123)
ProtoBody122.children.append(x3d.Comment("""Only first node (the node type for the prototype) is renderable, others are along for the ride"""))
Script131 = x3d.Script(DEF="MaterialModulatorScript")
field132 = x3d.field()
field132.name = "enabled"
field132.accessType = "inputOutput"
field132.type = "SFBool"

Script131.field.append(field132)
field133 = x3d.field()
field133.name = "diffuseColor"
field133.accessType = "inputOutput"
field133.type = "SFColor"

Script131.field.append(field133)
field134 = x3d.field()
field134.name = "newColor"
field134.accessType = "outputOnly"
field134.type = "SFColor"

Script131.field.append(field134)
field135 = x3d.field()
field135.name = "clockTrigger"
field135.accessType = "inputOnly"
field135.type = "SFTime"

Script131.field.append(field135)
IS136 = x3d.IS()
connect137 = x3d.connect()
connect137.nodeField = "enabled"
connect137.protoField = "enabled"

IS136.connect.append(connect137)
connect138 = x3d.connect()
connect138.nodeField = "diffuseColor"
connect138.protoField = "diffuseColor"

IS136.connect.append(connect138)

Script131.IS = IS136

Script131.sourceCode = '''ecmascript:\n"+
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
"}'''

ProtoBody122.children.append(Script131)

ProtoDeclare113.ProtoBody = ProtoBody122

Scene32.children.append(ProtoDeclare113)
Scene32.children.append(x3d.Comment("""Test success: declarative statement createDeclarativeShapeTests()"""))
Group139 = x3d.Group(DEF="DeclarativeGroupExample")
Shape140 = x3d.Shape()
MetadataString141 = x3d.MetadataString(DEF="FindableMetadataStringTest")
MetadataString141.name = "findThisNameValue"
MetadataString141.value = ["test case"]

Shape140.metadata = MetadataString141
Appearance142 = x3d.Appearance(DEF="DeclarativeAppearanceExample")
Appearance142.children.append(x3d.Comment("""DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance"""))
ProtoInstance143 = x3d.ProtoInstance(DEF="MyMaterialModulator")
ProtoInstance143.name = "MaterialModulator"

Appearance142.material = ProtoInstance143

Shape140.appearance = Appearance142
Cone144 = x3d.Cone()
Cone144.bottom = False
Cone144.bottomRadius = 0.05
Cone144.height = 0.1

Shape140.geometry = Cone144

Group139.children.append(Shape140)
Group139.children.append(x3d.Comment("""Test success: declarativeGroup.addChild() singleton pipeline method"""))

Scene32.children.append(Group139)
Scene32.children.append(x3d.Comment("""Test success: declarative statement addChild()"""))
Scene32.children.append(x3d.Comment("""Test success: x3dModel.findNodeByDEF(DeclarativeAppearanceExample) = <Appearance DEF='DeclarativeAppearanceExample'/> i.e. <Appearance DEF='DeclarativeAppearanceExample'> <!- - DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance - -> <ProtoInstance DEF='MyMaterialModulator' containerField='material' name='MaterialModulator'/> </Appearance>"""))
Scene32.children.append(x3d.Comment("""Test success: x3dModel.findElementByNameValue(findThisNameValue) = <MetadataString DEF='FindableMetadataStringTest' name='findThisNameValue' value='\"test case\"'/>"""))
Scene32.children.append(x3d.Comment("""Test success: x3dModel.findElementByNameValue(\"ArtDeco01\", \"ProtoDeclare\") found"""))
Scene32.children.append(x3d.Comment("""Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoDeclare\") found"""))
Scene32.children.append(x3d.Comment("""Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoInstance\") found"""))
Group145 = x3d.Group(DEF="TestFieldObjectsGroup")
Group145.children.append(x3d.Comment("""testFieldObjects() results"""))
Group145.children.append(x3d.Comment("""SFBool default=false, true=true, false=false, negate()=true"""))
Group145.children.append(x3d.Comment("""MFBool default=, initial=true false true, negate()=false true false"""))
Group145.children.append(x3d.Comment("""SFFloat default=0.0, initial=1, setValue(2)=2, setValue(3.0f)=3, setValue(4.0)=4"""))
Group145.children.append(x3d.Comment("""MFFloat default=, initial=1 2 3, append(5)=1 2 3 5, inserts(3,4)(0,0)=0 1 2 3 4 5, append(6)=0 1 2 3 4 5 6, size()=7"""))
Group145.children.append(x3d.Comment("""... get1Value[3]=3.0, remove[1]=0 2 3 4 5 6, set1Value(0,10)=10 2 3 4 5 6, multiply(2)=20 4 6 8 10 12, clear="""))
Group145.children.append(x3d.Comment("""SFVec3f default=0 0 0, initial=1 2 3, setValue=4 5 6, multiply(2)=8 10 12, normalize()=0.4558 0.5698 0.6838, regex matches()=true"""))
Group145.children.append(x3d.Comment("""regex test SFVec3f().matches(\"1 2 3\")=true, regex test SFVec3f().matches(\"1 2 3 4\")=false, regex test (SFRotation.matches(\"0 0 0 0\")=true, failure detecting illegal (zero axis) rotation value"""))

Scene32.children.append(Group145)
Sound146 = x3d.Sound()
Sound146.location = [0,1.6,0]
Sound146.children.append(x3d.Comment("""set sound-ellipsoid location height at 1.6m to match typical avatar height"""))
AudioClip147 = x3d.AudioClip()
AudioClip147.description = "chimes"
AudioClip147.url = ["chimes.wav","https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav"]
AudioClip147.children.append(x3d.Comment("""Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/default.x3d"""))

Sound146.source = AudioClip147

Scene32.children.append(Sound146)
Sound148 = x3d.Sound()
Sound148.location = [0,1.6,0]
Sound148.children.append(x3d.Comment("""set sound-ellipsoid location height at 1.6m to match typical avatar height"""))
MovieTexture149 = x3d.MovieTexture()
MovieTexture149.description = "mpgsys.mpg from ConformanceNist suite"
MovieTexture149.url = ["mpgsys.mpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpgsys.mpg"]
MovieTexture149.children.append(x3d.Comment("""Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpeg1-systems.x3d"""))
MovieTexture149.children.append(x3d.Comment("""Expected containerField='source', allowed containerField values=\"texture\" \"source\" \"back\" \"bottom\" \"front\" \"left\" \"right\" \"top\" \"backTexture\" \"bottomTexture\" \"frontTexture\" \"leftTexture\" \"rightTexture\" \"topTexture\" \"children\""""))

Sound148.source = MovieTexture149

Scene32.children.append(Sound148)
Scene32.children.append(x3d.Comment("""Test success: Anchor.isNode()=true, siteAnchor.isNode()=true"""))
Scene32.children.append(x3d.Comment("""Test success: Anchor.isStatement()=false, siteAnchor.isStatement()=false"""))
Scene32.children.append(x3d.Comment("""Test success: ROUTE.isNode()=false, orbitPositionROUTE.isNode()=false"""))
Scene32.children.append(x3d.Comment("""Test success: ROUTE.isStatement()=true, orbitPositionROUTE.isStatement()=true"""))
Scene32.children.append(x3d.Comment("""Test success: CommentsBlock.isNode()=false, testComments.isNode()=false"""))
Scene32.children.append(x3d.Comment("""Test failure: CommentsBlock.isStatement()=true, testComments.isStatement()=true"""))
Shape150 = x3d.Shape(DEF="ExtrusionShape")
Shape150.children.append(x3d.Comment("""ExampleExtrusion isCrossSectionClosed()=true, crossSection='[1.0, 1.0, 1.0, -1.0, -1.0, -1.0, -1.0, 1.0, 1.0, 1.0]'"""))
Shape150.children.append(x3d.Comment("""ExampleExtrusion isSpineClosed()=false, spine='[0.0, 0.0, 0.0, 0.0, 1.0, 0.0]'"""))
Appearance151 = x3d.Appearance(DEF="TransparentAppearance")
Material152 = x3d.Material()
Material152.transparency = 1

Appearance151.material = Material152

Shape150.appearance = Appearance151
Extrusion153 = x3d.Extrusion(DEF="ExampleExtrusion")

Shape150.geometry = Extrusion153

Scene32.children.append(Shape150)
Group154 = x3d.Group()
Group154.children.append(x3d.Comment("""Test MFNode children array as an ordered list consisting of comments, statements, ProtoInstance and nodes"""))
ProtoDeclare155 = x3d.ProtoDeclare()
ProtoDeclare155.name = "NewWorldInfo"
ProtoInterface156 = x3d.ProtoInterface()
field157 = x3d.field()
field157.name = "description"
field157.accessType = "initializeOnly"
field157.type = "SFString"

ProtoInterface156.field.append(field157)

ProtoDeclare155.ProtoInterface = ProtoInterface156
ProtoBody158 = x3d.ProtoBody()
WorldInfo159 = x3d.WorldInfo()

ProtoBody158.children.append(WorldInfo159)

ProtoDeclare155.ProtoBody = ProtoBody158

Group154.children.append(ProtoDeclare155)
ProtoInstance160 = x3d.ProtoInstance(DEF="Proto1")
ProtoInstance160.name = "NewWorldInfo"
fieldValue161 = x3d.fieldValue()
fieldValue161.name = "description"
fieldValue161.value = "testing 1 2 3"

ProtoInstance160.fieldValue.append(fieldValue161)

Group154.children.append(ProtoInstance160)
Group162 = x3d.Group(DEF="Node2")
Group162.children.append(x3d.Comment("""intentionally empty"""))

Group154.children.append(Group162)
ProtoInstance163 = x3d.ProtoInstance(DEF="Proto3")
ProtoInstance163.name = "NewWorldInfo"

Group154.children.append(ProtoInstance163)
Transform164 = x3d.Transform(DEF="Node4")
Transform164.children.append(x3d.Comment("""intentionally empty"""))

Group154.children.append(Transform164)
Group154.children.append(x3d.Comment("""Test satisfactorily creates MFNode children array as an ordered list with mixed content"""))

Scene32.children.append(Group154)
ProtoDeclare165 = x3d.ProtoDeclare()
ProtoDeclare165.name = "ShaderProto"
ProtoBody166 = x3d.ProtoBody()
ProgramShader167 = x3d.ProgramShader()

ProtoBody166.children.append(ProgramShader167)

ProtoDeclare165.ProtoBody = ProtoBody166

Scene32.children.append(ProtoDeclare165)
Shape168 = x3d.Shape()
Appearance169 = x3d.Appearance()
Appearance169.children.append(x3d.Comment("""Test MFNode shaders array as an ordered list consisting of comments, ProtoInstance and nodes"""))
Appearance169.children.append(x3d.Comment("""Test satisfactorily creates MFNode shaders array as an ordered list with mixed content"""))
ProgramShader170 = x3d.ProgramShader(DEF="TestShader1")
ShaderProgram171 = x3d.ShaderProgram(DEF="TestShader2")
ShaderProgram171.type = "VERTEX"

ProgramShader170.programs.append(ShaderProgram171)

Appearance169.shaders.append(ProgramShader170)
ProtoInstance172 = x3d.ProtoInstance(DEF="TestShader3")
ProtoInstance172.name = "ShaderProto"

Appearance169.shaders.append(ProtoInstance172)
ComposedShader173 = x3d.ComposedShader(DEF="TestShader4")
ShaderPart174 = x3d.ShaderPart(DEF="TestShader5")
ShaderPart174.type = "VERTEX"

ComposedShader173.parts.append(ShaderPart174)

Appearance169.shaders.append(ComposedShader173)

Shape168.appearance = Appearance169

Scene32.children.append(Shape168)
Transform175 = x3d.Transform(DEF="SpecialtyNodes")
CADLayer176 = x3d.CADLayer()
CADAssembly177 = x3d.CADAssembly()
CADPart178 = x3d.CADPart()
CADFace179 = x3d.CADFace()

CADPart178.children.append(CADFace179)

CADAssembly177.children.append(CADPart178)

CADLayer176.children.append(CADAssembly177)

Transform175.children.append(CADLayer176)
EspduTransform180 = x3d.EspduTransform()

Transform175.children.append(EspduTransform180)
ReceiverPdu181 = x3d.ReceiverPdu()

Transform175.children.append(ReceiverPdu181)
SignalPdu182 = x3d.SignalPdu()

Transform175.children.append(SignalPdu182)
TransmitterPdu183 = x3d.TransmitterPdu()

Transform175.children.append(TransmitterPdu183)
DISEntityManager184 = x3d.DISEntityManager()
DISEntityTypeMapping185 = x3d.DISEntityTypeMapping()

DISEntityManager184.children.append(DISEntityTypeMapping185)

Transform175.children.append(DISEntityManager184)

Scene32.children.append(Transform175)
EspduTransform186 = x3d.EspduTransform()
WorldInfo187 = x3d.WorldInfo()

EspduTransform186.children.append(WorldInfo187)

Scene32.children.append(EspduTransform186)
ReceiverPdu188 = x3d.ReceiverPdu()

Scene32.children.append(ReceiverPdu188)
SignalPdu189 = x3d.SignalPdu()

Scene32.children.append(SignalPdu189)
TransmitterPdu190 = x3d.TransmitterPdu()

Scene32.children.append(TransmitterPdu190)
DISEntityManager191 = x3d.DISEntityManager()
DISEntityTypeMapping192 = x3d.DISEntityTypeMapping()

DISEntityManager191.children.append(DISEntityTypeMapping192)

Scene32.children.append(DISEntityManager191)
LoadSensor193 = x3d.LoadSensor()
LoadSensor193.children.append(x3d.Comment("""Contained nodes typically must be USE references for nodes previously DEFined in the scene"""))
LoadSensor193.children.append(x3d.Comment("""The following nodes are test cases for all X3DUrlObject nodes"""))
Anchor194 = x3d.Anchor(USE="siteAnchor")

LoadSensor193.children.append(Anchor194)
Inline195 = x3d.Inline(USE="inlineScene")

LoadSensor193.children.append(Inline195)
DISEntityTypeMapping196 = x3d.DISEntityTypeMapping()

LoadSensor193.children.append(DISEntityTypeMapping196)
GeoMetadata197 = x3d.GeoMetadata()

LoadSensor193.children.append(GeoMetadata197)
AudioClip198 = x3d.AudioClip()

LoadSensor193.children.append(AudioClip198)
ImageCubeMapTexture199 = x3d.ImageCubeMapTexture()

LoadSensor193.children.append(ImageCubeMapTexture199)
ImageTexture3D200 = x3d.ImageTexture3D()

LoadSensor193.children.append(ImageTexture3D200)
ImageTexture201 = x3d.ImageTexture()

LoadSensor193.children.append(ImageTexture201)
MovieTexture202 = x3d.MovieTexture()

LoadSensor193.children.append(MovieTexture202)
Script203 = x3d.Script(DEF="DummyScript")

Script203.sourceCode = '''ecmascript:\n"+
"/* dummy test source code */'''

LoadSensor193.children.append(Script203)
PackagedShader204 = x3d.PackagedShader()

LoadSensor193.children.append(PackagedShader204)
ShaderPart205 = x3d.ShaderPart()
ShaderPart205.type = "VERTEX"

LoadSensor193.children.append(ShaderPart205)
ShaderProgram206 = x3d.ShaderProgram()
ShaderProgram206.type = "VERTEX"

LoadSensor193.children.append(ShaderProgram206)

Scene32.children.append(LoadSensor193)
OrthoViewpoint207 = x3d.OrthoViewpoint(DEF="SpecialTestOrthoViewpoint")
OrthoViewpoint207.fieldOfView = [1,3,2,4]

Scene32.children.append(OrthoViewpoint207)

X3D0.Scene = Scene32
f = open("../data/SmokeTestProgramOutput.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/SmokeTestProgramOutput.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/SmokeTestProgramOutput.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
