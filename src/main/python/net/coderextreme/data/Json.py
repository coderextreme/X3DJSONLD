# x3d.py package 4.0.64.4 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
print(
X3D(profile="Immersive", version="4.0", 
head=head(children=[component(name="Navigation", level=3),
component(name="Shaders", level=1),
component(name="CADGeometry", level=2),
component(name="DIS", level=2),
component(name="H-Anim", level=1),
component(name="Grouping", level=1),
component(name="Layering", level=1),
unit(name="AngleUnitConversion", category="angle", conversionFactor=1.0),
unit(name="LengthUnitConversion", category="length", conversionFactor=1.0),
unit(name="ForceFromPoundsToNewtons", category="force", conversionFactor=4.4482),
meta(name="title", content="Json.x3d"),
meta(name="info", content="continued development and testing in progress"),
meta(name="description", content="Example HelloWorldProgram creates an X3D model using the X3D Java Scene Access Interface Library (X3DJSAIL)"),
meta(name="reference", content="https://www.web3d.org/specifications/java/X3DJSAIL.html"),
meta(name="generator", content="HelloWorldProgramOutput.java"),
meta(name="created", content="6 September 2016"),
meta(name="modified", content="25 May 2020"),
meta(name="generator", content="X3D Java Scene Access Interface Library (X3DJSAIL)"),
meta(name="generator", content="https://www.web3d.org/specifications/java/examples/HelloWorldProgram.java"),
meta(name="generator", content="Netbeans http://www.netbeans.org"),
meta(name="creator", content="Don Brutzman"),
meta(name="reference", content="https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/java/examples/HelloWorldProgramOutput.x3d"),
meta(name="reference", content="Console output, ClassicVRML encoding, VRML97 encoding and pretty-print documentation:"),
meta(name="reference", content="HelloWorldProgramOutput.txt"),
meta(name="reference", content="HelloWorldProgramOutput.x3dv"),
meta(name="reference", content="HelloWorldProgramOutput.wrl"),
meta(name="reference", content="HelloWorldProgramOutput.html"),
meta(name="reference", content="https://savage.nps.edu/X3dValidator?url=https://www.web3d.org/specifications/java/examples/HelloWorldProgramOutput.x3d"),
meta(name="identifier", content="https://www.web3d.org/specifications/java/examples/HelloWorldProgramOutput.x3d"),
meta(name="license", content="../license.html"),
meta(name="translated", content="25 May 2020"),
meta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
meta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding"),
meta(name="translated", content="09 June 2023"),
meta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
meta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")
]), 
Scene=Scene(children=[
ViewpointGroup(description="Available viewpoints", children=[
Viewpoint(DEF="DefaultView", description="Hello X3DJSAIL"),
Viewpoint(DEF="TopDownView", description="top-down view from above", orientation=((1,0,0,-1.570796)), position=((0,100,0)))]),
NavigationInfo(type="\"EXAMINE\" \"FLY\" \"ANY\""),
WorldInfo(DEF="WorldInfoDEF", title="HelloWorldProgram produced by X3D Java SAI Library (X3DJSAIL)"),
WorldInfo(USE="WorldInfoDEF"),
WorldInfo(USE="WorldInfoDEF"),
MetadataString(name="test", DEF="scene.addChildMetadata", value=["Top-level root Metadata node beneath Scene needs to be one of '-children' in JSON encoding"]),
LayerSet(DEF="scene.addChildLayerSetTest"),
Transform(DEF="LogoGeometryTransform", translation=((0,1.5,0)), children=[
Anchor(description="select for X3D Java SAI Library (X3DJSAIL) description", url=["../X3DJSAIL.html","https://www.web3d.org/specifications/java/X3DJSAIL.html"], children=[
Shape(DEF="BoxShape", 
appearance=
Appearance(
material=
Material(DEF="GreenMaterial", diffuseColor=((0,1,1)), emissiveColor=((0.8,0,0)), transparency=0.1), 
texture=
ImageTexture(url=["images/X3dJavaSceneAccessInterfaceSaiLibrary.png","https://www.web3d.org/specifications/java/examples/images/X3dJavaSceneAccessInterfaceSaiLibrary.png"])), 
geometry=
Box(DEF="test-NMTOKEN_regex.0123456789", class_="untextured"))])]),
Shape(DEF="LineShape", 
appearance=
Appearance(
material=
Material(emissiveColor=((0.6,0.19607843,0.8)))), 
geometry=
IndexedLineSet(coordIndex=[0,1,2,3,4,0], 
coord=
Coordinate(point=[(0,1.5,0),(2,1.5,0),(2,1.5,-2),(-2,1.5,-2),(-2,1.5,0),(0,1.5,0)]))),
PositionInterpolator(DEF="BoxPathAnimator", key=[float(0),float(0.125),float(0.375),float(0.625),float(0.875),float(1)], keyValue=[(0,1.5,0),(2,1.5,0),(2,1.5,-2),(-2,1.5,-2),(-2,1.5,0),(0,1.5,0)]),
TimeSensor(DEF="OrbitClock", cycleInterval=8.0, loop=True),
ROUTE(fromField="fraction_changed", fromNode="OrbitClock", toField="set_fraction", toNode="BoxPathAnimator"),
ROUTE(fromField="value_changed", fromNode="BoxPathAnimator", toField="set_translation", toNode="LogoGeometryTransform"),
Transform(DEF="TextTransform", translation=((0,-1.5,0)), children=[
Shape(
appearance=
Appearance(
material=
Material(USE="GreenMaterial")), 
geometry=
Text(string=["X3D Java","SAI Library","X3DJSAIL"], 
metadata=(
MetadataSet(name="EscapedQuotationMarksMetadataSet", value=[
MetadataString(name="quotesTestC", value=["MFString example C, backslash-escaped quotes: He said, \"Immel did it!\""]),
MetadataString(name="extraChildTest", value=["checks MetadataSetObject addValue() method"])])), 
fontStyle=
FontStyle(justify=["MIDDLE","MIDDLE"]))),
Collision(children=[
Comment(value=''' test containerField='proxy' '''),
], 
proxy=Shape(DEF="ProxyShape", 
geometry=
Text(string=["One, Two, Text","","He said, \"Immel did it!\" \"\""]))),
Comment(value=''' It's a beautiful world '''),

Comment(value=''' ... for you! '''),

Comment(value=''' https://en.wikipedia.org/wiki/Beautiful_World_(Devo_song) '''),
]),
Comment(value=''' repeatedly spin 180 degrees as a readable special effect '''),

OrientationInterpolator(DEF="SpinInterpolator", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(1),float(0),float(4.712389)),(float(0),float(1),float(0),float(0)),(float(0),float(1),float(0),float(1.5707964))]),
TimeSensor(DEF="SpinClock", cycleInterval=5.0, loop=True),
ROUTE(fromField="fraction_changed", fromNode="SpinClock", toField="set_fraction", toNode="SpinInterpolator"),
ROUTE(fromField="value_changed", fromNode="SpinInterpolator", toField="rotation", toNode="TextTransform"),
Group(DEF="BackgroundGroup", children=[
Background(DEF="GradualBackground"),
Script(DEF="colorTypeConversionScript", field=[field(name="colorInput", accessType="inputOnly", type="SFColor"),
field(name="colorsOutput", accessType="outputOnly", type="MFColor")
], sourceCode="""['', '', 'ecmascript:', '', 'function colorInput (eventValue) // Example source code', '{', '   colorsOutput = new MFColor(eventValue); // assigning value sends output event', "// Browser.print('colorInput=' + eventValue + ', colorsOutput=' + colorsOutput + '\n');", '}', '', '']""",),
ColorInterpolator(DEF="ColorAnimator", key=[float(0),float(0.5),float(1)], keyValue=[(0.9411765,1,1),(0.29411766,0,0.50980395),(0.9411765,1,1)]),
TimeSensor(DEF="ColorClock", cycleInterval=60.0, loop=True),
ROUTE(fromField="colorsOutput", fromNode="colorTypeConversionScript", toField="skyColor", toNode="GradualBackground"),
ROUTE(fromField="value_changed", fromNode="ColorAnimator", toField="colorInput", toNode="colorTypeConversionScript"),
ROUTE(fromField="fraction_changed", fromNode="ColorClock", toField="set_fraction", toNode="ColorAnimator")]),
ProtoDeclare(name="ArtDeco01Material", appinfo="tooltip: ArtDeco01Material prototype is a Material node", 
ProtoInterface=ProtoInterface(field=[field(name="description", accessType="inputOutput", appinfo="tooltip for descriptionField", type="SFString", value="ArtDeco01Material prototype is a Material node"),
field(name="enabled", accessType="inputOutput", type="SFBool", value=True)
]), 
ProtoBody=ProtoBody(children=[
Comment(value=''' Initial node of ProtoBody determines prototype node type '''),

Material(ambientIntensity=0.25, diffuseColor=((0.282435,0.085159,0.134462)), shininess=0.127273, specularColor=((0.276305,0.11431,0.139857))),
Comment(value=''' [HelloWorldProgram diagnostic] should be connected to scene graph: artDeco01ProtoDeclare.getNodeType()="Material" '''),

Comment(value=''' presence of follow-on TouchSensor shows that additional nodes are allowed in ProtoBody after initial node, regardless of node types '''),

TouchSensor(description="within ProtoBody", 
IS=IS(connect=[connect(nodeField="description", protoField="description"),
connect(nodeField="enabled", protoField="enabled")
])),])),
ExternProtoDeclare(name="ArtDeco02Material", appinfo="this is a different Material node", url=["http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d#ArtDeco02Material","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3dv#ArtDeco02Material"], field=[field(name="description", accessType="inputOutput", appinfo="tooltip for descriptionField", type="SFString")
]),
Comment(value=''' Tested ArtDeco01ProtoInstance, ArtDeco02ProtoInstance for improper node type when ProtoInstance is added in wrong place '''),

Shape(DEF="TestShape1", 
appearance=
Appearance(DEF="TestAppearance1", 
material=
ProtoInstance(name="ArtDeco01Material", fieldValue=[fieldValue(name="description", value="ArtDeco01Material can substitute for a Material node")
])), 
geometry=
Sphere(radius=0.001)),
Shape(DEF="TestShape2", 
appearance=
Appearance(DEF="TestAppearance2", 
material=
ProtoInstance(name="ArtDeco02Material", DEF="ArtDeco02MaterialDEF", fieldValue=[fieldValue(name="description", value="ArtDeco02Material can substitute for another Material node")
])), 
geometry=
Cone(bottomRadius=0.001, height=0.001)),
Shape(DEF="TestShape3", 
appearance=
Appearance(DEF="TestAppearance3", 
material=
ProtoInstance(USE="ArtDeco02MaterialDEF")), 
geometry=
Cylinder(height=0.001, radius=0.001)),
Inline(DEF="inlineSceneDef", url=["someOtherScene.x3d","https://www.web3d.org/specifications/java/examples/someOtherScene.x3d"]),
IMPORT(AS="WorldInfoDEF2", importedDEF="WorldInfoDEF", inlineDEF="inlineSceneDef"),
EXPORT(AS="WorldInfoDEF3", localDEF="WorldInfoDEF"),
ProtoDeclare(name="MaterialModulator", appinfo="mimic a Material node and modulate fields as an animation effect", documentation="http://x3dgraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorIndex.html", 
ProtoInterface=ProtoInterface(field=[field(name="enabled", accessType="inputOutput", type="SFBool", value=True),
field(name="diffuseColor", accessType="inputOutput", type="SFColor", value=(0,0,0)),
field(name="emissiveColor", accessType="inputOutput", type="SFColor", value=(0.05,0.05,0.5)),
field(name="specularColor", accessType="inputOutput", type="SFColor", value=(0,0,0)),
field(name="transparency", accessType="inputOutput", type="SFFloat", value=0.0),
field(name="shininess", accessType="inputOutput", type="SFFloat", value=0.0),
field(name="ambientIntensity", accessType="inputOutput", type="SFFloat", value=0.0)
]), 
ProtoBody=ProtoBody(children=[
Material(DEF="MaterialNode", 
IS=IS(connect=[connect(nodeField="diffuseColor", protoField="diffuseColor"),
connect(nodeField="emissiveColor", protoField="emissiveColor"),
connect(nodeField="specularColor", protoField="specularColor"),
connect(nodeField="transparency", protoField="transparency"),
connect(nodeField="shininess", protoField="shininess"),
connect(nodeField="ambientIntensity", protoField="ambientIntensity")
])),
Comment(value=''' Only first node (the node type) is renderable, others are along for the ride '''),

Script(DEF="MaterialModulatorScript", field=[field(name="enabled", accessType="inputOutput", type="SFBool"),
field(name="diffuseColor", accessType="inputOutput", type="SFColor"),
field(name="newColor", accessType="outputOnly", type="SFColor"),
field(name="clockTrigger", accessType="inputOnly", type="SFTime")
], 
IS=IS(connect=[connect(nodeField="enabled", protoField="enabled"),
connect(nodeField="diffuseColor", protoField="diffuseColor")
]), sourceCode="""['', '', 'ecmascript:', 'function initialize ()', '{', '    newColor = diffuseColor; // start with correct color', '}', 'function set_enabled (newValue)', '{', '\tenabled = newValue;', '}', 'function clockTrigger (timeValue)', '{', '    if (!enabled) return;', '    red   = newColor.r;', '    green = newColor.g;', '    blue  = newColor.b;', '', '    // note different modulation rates for each color component, % is modulus operator', '    newColor = new SFColor ((red + 0.02) % 1, (green + 0.03) % 1, (blue + 0.04) % 1);', '\tif (enabled)', '\t{', "\t\tBrowser.print ('diffuseColor=(' + red + ',' + green + ',' + blue + ') newColor=' + newColor.toString() + '\n');", '\t}', '}', '', '']""",),])),
Comment(value=''' Test success: declarative statement createDeclarativeShapeTests() '''),

Group(DEF="DeclarativeGroupExample", children=[
Shape(
appearance=
Appearance(DEF="DeclarativeAppearanceExample", 
material=
ProtoInstance(name="MaterialModulator", DEF="MyMaterialModulator")), 
geometry=
Cone(bottom=False, bottomRadius=0.05, height=0.1)),
Comment(value=''' Test success: declarativeGroup.addChild() singleton pipeline method '''),
]),
Comment(value=''' Test success: declarative statement addChild() '''),

Comment(value=''' Test success: x3dModel.findNodeByDEF(DeclarativeAppearanceExample) = <Appearance DEF='DeclarativeAppearanceExample'/> i.e. <Appearance DEF='DeclarativeAppearanceExample'> <!- - DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance - -> <ProtoInstance DEF='MyMaterialModulator' name='MaterialModulator' containerField='material'/> </Appearance> '''),

Comment(value=''' Test success: x3dModel.findElementByNameValue(findThisNameValue) = <MetadataString DEF='FindableMetadataStringTest' name='findThisNameValue' value='"test case"'/> '''),

Comment(value=''' Test success: x3dModel.findElementByNameValue("ArtDeco01Material", "ProtoDeclare") found '''),

Comment(value=''' Test success: x3dModel.findElementByNameValue("MaterialModulator", "ProtoDeclare") found '''),

Comment(value=''' Test success: x3dModel.findElementByNameValue("MaterialModulator", "ProtoInstance") found '''),

Group(DEF="TestFieldObjectsGroup", children=[
Comment(value=''' testFieldObjects() results '''),

Comment(value=''' SFBool default=true, true=true, false=false, negate()=true '''),

Comment(value=''' MFBool default=, initial=true false true, negate()=false true false '''),

Comment(value=''' SFFloat default=0.0, initial=1.0, setValue(2)=2.0, setValue(3.0f)=3.0, setValue(4.0)=4.0 '''),

Comment(value=''' MFFloat default=, initial=1 2 3, append(5)=1 2 3 5, inserts(3,4)(0,0)=0 1 2 3 4 5, append(6)=0 1 2 3 4 5 6, size()=7 '''),

Comment(value=''' ... get1Value[3]=3.0, remove[1]=0 2 3 4 5 6, set1Value(0,10)=10 2 3 4 5 6, multiply(2)=20 4 6 8 10 12, clear= '''),

Comment(value=''' SFVec3f default=0 0 0, initial=1 2 3, setValue=4 5 6, multiply(2)=8 10 12, normalize()=0.45584232 0.5698029 0.68376344, regex matches()=true '''),

Comment(value=''' regex test SFVec3f().matches("1 2 3")=true, regex test SFVec3f().matches("1 2 3 4")=false, regex test (SFRotationObject.matches("0 0 0 0")=true, failure detecting illegal (zero axis) rotation value '''),
]),
Sound(location=((0,1.6,0)), 
source=
AudioClip(description="chimes", url=["chimes.wav","https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav"])),
Sound(location=((0,1.6,0)), 
source=
MovieTexture(description="mpgsys.mpg from ConformanceNist suite", url=["mpgsys.mpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpgsys.mpg"])),
Comment(value=''' Test success: AnchorObject.isNode()=true, siteAnchor.isNode()=true '''),

Comment(value=''' Test success: AnchorObject.isStatement()=false, siteAnchor.isStatement()=false '''),

Comment(value=''' Test success: ROUTEObject.isNode()=false, orbitPositionROUTE.isNode()=false '''),

Comment(value=''' Test success: ROUTEObject.isStatement()=true, orbitPositionROUTE.isStatement()=true '''),

Comment(value=''' Test success: CommentsBlock.isNode()=false, testComments.isNode()=false '''),

Comment(value=''' Test failure: CommentsBlock.isStatement()=true, testComments.isStatement()=true '''),

Shape(DEF="ExtrusionShape", 
appearance=
Appearance(DEF="TransparentAppearance", 
material=
Material(transparency=1.0)), 
geometry=
Extrusion(DEF="ExampleExtrusion")),
Group(children=[
Comment(value=''' Test MFNode children array as an ordered list consisting of comments, statements, ProtoInstance and nodes '''),

ProtoDeclare(name="NewWorldInfo", 
ProtoInterface=ProtoInterface(field=[field(name="description", accessType="initializeOnly", type="SFString")
]), 
ProtoBody=ProtoBody(children=[
WorldInfo()])),
Group(DEF="Node2", children=[
Comment(value=''' intentionally empty '''),
]),
Transform(DEF="Node4", children=[
Comment(value=''' intentionally empty '''),
]),
Comment(value=''' Test satisfactorily creates MFNode children array as an ordered list with mixed content '''),
]),
ProtoDeclare(name="ShaderProto", 
ProtoBody=ProtoBody(children=[
ProgramShader()])),
Shape(
appearance=
Appearance(shaders=[
ProgramShader(DEF="TestShader1", programs=[
ShaderProgram(DEF="TestShader2", type="VERTEX")]),
ProtoInstance(name="ShaderProto", DEF="TestShader3"),
ComposedShader(DEF="TestShader4", parts=[
ShaderPart(DEF="TestShader5", type="VERTEX")])])),
Transform(DEF="SpecialtyNodes", children=[
CADLayer(children=[
CADAssembly(children=[
CADPart(children=[
CADFace()])])]),
EspduTransform(),
ReceiverPdu(),
SignalPdu(),
TransmitterPdu(),
DISEntityManager(children=[
DISEntityTypeMapping()])]),]))
.XML())
