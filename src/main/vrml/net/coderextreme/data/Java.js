var browser = X3D.getBrowser();
var X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
ViewpointGroup2 = browser.currentScene.createNode("ViewpointGroup");
ViewpointGroup2.description = "Available viewpoints";
browser.currentScene.children = [];

browser.currentScene.children[0] = ViewpointGroup2;

WorldInfo3 = browser.currentScene.createNode("WorldInfo");
WorldInfo3.DEF = "WorldInfoDEF";
WorldInfo3.title = "HelloWorldProgram produced by X3D Java SAI Library (X3DJSAIL)";
browser.currentScene.children[1] = WorldInfo3;

WorldInfo4 = browser.currentScene.createNode("WorldInfo");
WorldInfo4.USE = "WorldInfoDEF";
browser.currentScene.children[2] = WorldInfo4;

WorldInfo5 = browser.currentScene.createNode("WorldInfo");
WorldInfo5.USE = "WorldInfoDEF";
browser.currentScene.children[3] = WorldInfo5;

MetadataString6 = browser.currentScene.createNode("MetadataString");
MetadataString6.name = "test";
MetadataString6.DEF = "scene.addChildMetadata";
MetadataString6.value = ["Top-level root Metadata node beneath Scene needs to be one of '-children' in JSON encoding"];
browser.currentScene.metadata[4] = MetadataString6;

LayerSet7 = browser.currentScene.createNode("LayerSet");
LayerSet7.DEF = "scene.addChildLayerSetTest";
browser.currentScene.layerSet[5] = LayerSet7;

Transform8 = browser.currentScene.createNode("Transform");
Transform8.DEF = "LogoGeometryTransform";
Transform8.translation = [0,1.5,0];
Anchor9 = browser.currentScene.createNode("Anchor");
Anchor9.description = "select for X3D Java SAI Library (X3DJSAIL) description";
Anchor9.url = ["../X3DJSAIL.html","http://www.web3d.org/specifications/java/X3DJSAIL.html"];
Shape10 = browser.currentScene.createNode("Shape");
Shape10.DEF = "BoxShape";
Appearance11 = browser.currentScene.createNode("Appearance");
Material12 = browser.currentScene.createNode("Material");
Material12.DEF = "GreenMaterial";
Material12.diffuseColor = [0,1,1];
Material12.emissiveColor = [0.8,0,0];
Material12.transparency = 0.1;
Appearance11.material = Material12;

ImageTexture13 = browser.currentScene.createNode("ImageTexture");
ImageTexture13.url = ["images/X3dJavaSceneAccessInterfaceSaiLibrary.png","http://www.web3d.org/specifications/java/examples/images/X3dJavaSceneAccessInterfaceSaiLibrary.png"];
Appearance11.texture = ImageTexture13;

Shape10.appearance = Appearance11;

Box14 = browser.currentScene.createNode("Box");
Box14.DEF = "test-NMTOKEN_regex.0123456789";
Box14.CssClass = "untextured";
Shape10.geometry = Box14;

Anchor9.children = [];

Anchor9.children[0] = Shape10;

Transform8.children = [];

Transform8.children[0] = Anchor9;

browser.currentScene.children[6] = Transform8;

Shape15 = browser.currentScene.createNode("Shape");
Shape15.DEF = "LineShape";
Appearance16 = browser.currentScene.createNode("Appearance");
Material17 = browser.currentScene.createNode("Material");
Material17.emissiveColor = [0.6,0.19607843,0.8];
Appearance16.material = Material17;

Shape15.appearance = Appearance16;

IndexedLineSet18 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet18.coordIndex = [0,1,2,3,4,0];
//Coordinate 3-tuple point count: 6
Coordinate19 = browser.currentScene.createNode("Coordinate");
Coordinate19.point = [0,1.5,0,2,1.5,0,2,1.5,-2,-2,1.5,-2,-2,1.5,0,0,1.5,0];
IndexedLineSet18.coord = Coordinate19;

Shape15.geometry = IndexedLineSet18;

browser.currentScene.children[7] = Shape15;

PositionInterpolator20 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator20.DEF = "BoxPathAnimator";
PositionInterpolator20.key = [0,0.125,0.375,0.625,0.875,1];
PositionInterpolator20.keyValue = [0,1.5,0,2,1.5,0,2,1.5,-2,-2,1.5,-2,-2,1.5,0,0,1.5,0];
browser.currentScene.children[8] = PositionInterpolator20;

TimeSensor21 = browser.currentScene.createNode("TimeSensor");
TimeSensor21.DEF = "OrbitClock";
TimeSensor21.cycleInterval = 8;
TimeSensor21.loop = True;
browser.currentScene.children[9] = TimeSensor21;

ROUTE22 = browser.currentScene.createNode("ROUTE");
ROUTE22.fromField = "fraction_changed";
ROUTE22.fromNode = "OrbitClock";
ROUTE22.toField = "set_fraction";
ROUTE22.toNode = "BoxPathAnimator";
browser.currentScene.children[10] = ROUTE22;

ROUTE23 = browser.currentScene.createNode("ROUTE");
ROUTE23.fromField = "value_changed";
ROUTE23.fromNode = "BoxPathAnimator";
ROUTE23.toField = "set_translation";
ROUTE23.toNode = "LogoGeometryTransform";
browser.currentScene.children[11] = ROUTE23;

Transform24 = browser.currentScene.createNode("Transform");
Transform24.DEF = "TextTransform";
Transform24.translation = [0,-1.5,0];
Shape25 = browser.currentScene.createNode("Shape");
Appearance26 = browser.currentScene.createNode("Appearance");
Material27 = browser.currentScene.createNode("Material");
Material27.USE = "GreenMaterial";
Appearance26.material = Material27;

Shape25.appearance = Appearance26;

Text28 = browser.currentScene.createNode("Text");
Text28.string = ["X3D Java","SAI Library","X3DJSAIL"];
//Comment example A, plain quotation marks: He said, \"Immel did it!\"
//Comment example B, XML character entities: He said, &quot;Immel did it!&quot;
MetadataSet29 = browser.currentScene.createNode("MetadataSet");
MetadataSet29.name = "EscapedQuotationMarksMetadataSet";
MetadataString30 = browser.currentScene.createNode("MetadataString");
MetadataString30.name = "quotesTestC";
MetadataString30.value = ["MFString example C, backslash-escaped quotes: He said, \"Immel did it!\""];
MetadataSet29.value = [];

MetadataSet29.value[0] = MetadataString30;

MetadataString31 = browser.currentScene.createNode("MetadataString");
MetadataString31.name = "extraChildTest";
MetadataString31.value = ["checks MetadataSetObject addValue() method"];
MetadataSet29.value[1] = MetadataString31;

Text28.metadata = MetadataSet29;

FontStyle32 = browser.currentScene.createNode("FontStyle");
FontStyle32.justify = ["MIDDLE","MIDDLE"];
Text28.fontStyle = FontStyle32;

Shape25.geometry = Text28;

Transform24.children = [];

Transform24.children[0] = Shape25;

Collision33 = browser.currentScene.createNode("Collision");
//test containerField='proxy'
Shape34 = browser.currentScene.createNode("Shape");
Shape34.DEF = "ProxyShape";
//alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\"'
//alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\" \"\"'
//alternative Java source: .setString(new String [] {\"One, Two, Comment\", \"\", \"He said, \\\"\"Immel did it!\\\"\"\"})
//reference: http://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamplesIndex.html
Text35 = browser.currentScene.createNode("Text");
Text35.string = ["One, Two, Text","","He said, \"Immel did it!\" \"\""];
Shape34.geometry = Text35;

Collision33.proxy = Shape34;

Transform24.children[1] = Collision33;

//It's a beautiful world
//... for you!
//https://en.wikipedia.org/wiki/Beautiful_World_(Devo_song)
browser.currentScene.children[12] = Transform24;

//repeatedly spin 180 degrees as a readable special effect
OrientationInterpolator36 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator36.DEF = "SpinInterpolator";
OrientationInterpolator36.key = [0,0.5,1];
OrientationInterpolator36.keyValue = [0,1,0,4.712389,0,1,0,0,0,1,0,1.5707964];
browser.currentScene.children[13] = OrientationInterpolator36;

TimeSensor37 = browser.currentScene.createNode("TimeSensor");
TimeSensor37.DEF = "SpinClock";
TimeSensor37.cycleInterval = 5;
TimeSensor37.loop = True;
browser.currentScene.children[14] = TimeSensor37;

ROUTE38 = browser.currentScene.createNode("ROUTE");
ROUTE38.fromField = "fraction_changed";
ROUTE38.fromNode = "SpinClock";
ROUTE38.toField = "set_fraction";
ROUTE38.toNode = "SpinInterpolator";
browser.currentScene.children[15] = ROUTE38;

ROUTE39 = browser.currentScene.createNode("ROUTE");
ROUTE39.fromField = "value_changed";
ROUTE39.fromNode = "SpinInterpolator";
ROUTE39.toField = "rotation";
ROUTE39.toNode = "TextTransform";
browser.currentScene.children[16] = ROUTE39;

Group40 = browser.currentScene.createNode("Group");
Group40.DEF = "BackgroundGroup";
Background41 = browser.currentScene.createNode("Background");
Background41.DEF = "GradualBackground";
Group40.children = [];

Group40.children[0] = Background41;

Script42 = browser.currentScene.createNode("Script");
Script42.DEF = "colorTypeConversionScript";
field43 = browser.currentScene.createNode("field");
field43.name = "colorInput";
field43.accessType = "inputOnly";
field43.type = "SFColor";
Script42.field = [];

Script42.field[0] = field43;

field44 = browser.currentScene.createNode("field");
field44.name = "colorsOutput";
field44.accessType = "outputOnly";
field44.type = "MFColor";
Script42.field[1] = field44;


Script42.setSourceCode(`ecmascript:\n"+
"\n"+
"function colorInput (eventValue) // Example source code\n"+
"{\n"+
"   colorsOutput = new MFColor(eventValue); // assigning value sends output event\n"+
"// Browser.print('colorInput=' + eventValue + ', colorsOutput=' + colorsOutput + '\\n');\n"+
"}`)
Group40.children[1] = Script42;

ColorInterpolator45 = browser.currentScene.createNode("ColorInterpolator");
ColorInterpolator45.DEF = "ColorAnimator";
ColorInterpolator45.key = [0,0.5,1];
ColorInterpolator45.keyValue = [0.9411765,1,1,0.29411766,0,0.50980395,0.9411765,1,1];
//AZURE to INDIGO and back again
Group40.children[2] = ColorInterpolator45;

TimeSensor46 = browser.currentScene.createNode("TimeSensor");
TimeSensor46.DEF = "ColorClock";
TimeSensor46.cycleInterval = 60;
TimeSensor46.loop = True;
Group40.children[3] = TimeSensor46;

ROUTE47 = browser.currentScene.createNode("ROUTE");
ROUTE47.fromField = "colorsOutput";
ROUTE47.fromNode = "colorTypeConversionScript";
ROUTE47.toField = "skyColor";
ROUTE47.toNode = "GradualBackground";
Group40.children[4] = ROUTE47;

ROUTE48 = browser.currentScene.createNode("ROUTE");
ROUTE48.fromField = "value_changed";
ROUTE48.fromNode = "ColorAnimator";
ROUTE48.toField = "colorInput";
ROUTE48.toNode = "colorTypeConversionScript";
Group40.children[5] = ROUTE48;

ROUTE49 = browser.currentScene.createNode("ROUTE");
ROUTE49.fromField = "fraction_changed";
ROUTE49.fromNode = "ColorClock";
ROUTE49.toField = "set_fraction";
ROUTE49.toNode = "ColorAnimator";
Group40.children[6] = ROUTE49;

browser.currentScene.children[17] = Group40;

ProtoDeclare50 = browser.currentScene.createNode("ProtoDeclare");
ProtoDeclare50.name = "ArtDeco01Material";
ProtoDeclare50.appinfo = "tooltip: ArtDeco01Material prototype is a Material node";
ProtoInterface51 = browser.currentScene.createNode("ProtoInterface");
field52 = browser.currentScene.createNode("field");
field52.name = "description";
field52.accessType = "inputOutput";
field52.appinfo = "tooltip for descriptionField";
field52.type = "SFString";
field52.value = "ArtDeco01Material prototype is a Material node";
ProtoInterface51.field = [];

ProtoInterface51.field[0] = field52;

field53 = browser.currentScene.createNode("field");
field53.name = "enabled";
field53.accessType = "inputOutput";
field53.type = "SFBool";
field53.value = "true";
ProtoInterface51.field[1] = field53;

ProtoDeclare50.protoInterface = ProtoInterface51;

ProtoBody54 = browser.currentScene.createNode("ProtoBody");
//Initial node of ProtoBody determines prototype node type
Material55 = browser.currentScene.createNode("Material");
Material55.ambientIntensity = 0.25;
Material55.diffuseColor = [0.282435,0.085159,0.134462];
Material55.shininess = 0.127273;
Material55.specularColor = [0.276305,0.11431,0.139857];
ProtoBody54.children = [];

ProtoBody54.children[0] = Material55;

//[HelloWorldProgram diagnostic] should be connected to scene graph: ArtDeco01ProtoDeclare.getNodeType()=\"Material\"
//presence of follow-on TouchSensor shows that additional nodes are allowed in ProtoBody after initial node, regardless of node types
TouchSensor56 = browser.currentScene.createNode("TouchSensor");
TouchSensor56.description = "within ProtoBody";
IS57 = browser.currentScene.createNode("IS");
connect58 = browser.currentScene.createNode("connect");
connect58.nodeField = "description";
connect58.protoField = "description";
IS57.connect = [];

IS57.connect[0] = connect58;

connect59 = browser.currentScene.createNode("connect");
connect59.nodeField = "enabled";
connect59.protoField = "enabled";
IS57.connect[1] = connect59;

TouchSensor56.iS = IS57;

ProtoBody54.children[1] = TouchSensor56;

ProtoDeclare50.protoBody = ProtoBody54;

browser.currentScene.children[18] = ProtoDeclare50;

ExternProtoDeclare60 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare60.name = "ArtDeco02Material";
ExternProtoDeclare60.appinfo = "this is a different Material node";
ExternProtoDeclare60.url = ["http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d#ArtDeco02Material","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3dv#ArtDeco02Material"];
//[HelloWorldProgram diagnostic] ArtDeco02ExternProtoDeclare.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time, TODO X3DJSAIL needs to add further capability.\"
field61 = browser.currentScene.createNode("field");
field61.name = "description";
field61.accessType = "inputOutput";
field61.appinfo = "tooltip for descriptionField";
field61.type = "SFString";
ExternProtoDeclare60.field = [];

ExternProtoDeclare60.field[0] = field61;

browser.currentScene.children[19] = ExternProtoDeclare60;

//Tested ArtDeco01ProtoInstance, ArtDeco02ProtoInstance for improper node type when ProtoInstance is added in wrong place
Shape62 = browser.currentScene.createNode("Shape");
Shape62.DEF = "TestShape1";
Appearance63 = browser.currentScene.createNode("Appearance");
Appearance63.DEF = "TestAppearance1";
//ArtDeco01Material prototype goes here... TODO ensure setContainerField is handled in exported Java
ProtoInstance64 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance64.name = "ArtDeco01Material";
//[HelloWorldProgram diagnostic] ArtDeco01ProtoInstance.getNodeType()=\"Material\"
fieldValue65 = browser.currentScene.createNode("fieldValue");
fieldValue65.name = "description";
fieldValue65.value = "ArtDeco01Material can substitute for a Material node";
ProtoInstance64.fieldValue = [];

ProtoInstance64.fieldValue[0] = fieldValue65;

Appearance63.ers = [];

Appearance63.ers[0] = ProtoInstance64;

Shape62.appearance = Appearance63;

Sphere66 = browser.currentScene.createNode("Sphere");
Sphere66.radius = 0.001;
Shape62.geometry = Sphere66;

browser.currentScene.children[20] = Shape62;

Shape67 = browser.currentScene.createNode("Shape");
Shape67.DEF = "TestShape2";
Appearance68 = browser.currentScene.createNode("Appearance");
Appearance68.DEF = "TestAppearance2";
//ArtDeco02Material prototype goes here... TODO ensure setContainerField is handled in exported Java
ProtoInstance69 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance69.name = "ArtDeco02Material";
ProtoInstance69.DEF = "ArtDeco02MaterialDEF";
//[HelloWorldProgram diagnostic] ArtDeco02ProtoInstance.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time, TODO X3DJSAIL needs to add further capability.\"
fieldValue70 = browser.currentScene.createNode("fieldValue");
fieldValue70.name = "description";
fieldValue70.value = "ArtDeco02Material can substitute for another Material node";
ProtoInstance69.fieldValue = [];

ProtoInstance69.fieldValue[0] = fieldValue70;

Appearance68.ers = [];

Appearance68.ers[0] = ProtoInstance69;

Shape67.appearance = Appearance68;

Cone71 = browser.currentScene.createNode("Cone");
Cone71.bottomRadius = 0.001;
Cone71.height = 0.001;
Shape67.geometry = Cone71;

browser.currentScene.children[21] = Shape67;

Shape72 = browser.currentScene.createNode("Shape");
Shape72.DEF = "TestShape3";
Appearance73 = browser.currentScene.createNode("Appearance");
Appearance73.DEF = "TestAppearance3";
//ArtDeco02Material ProtoInstance USE goes here...
ProtoInstance74 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance74.USE = "ArtDeco02MaterialDEF";
Appearance73.ers = [];

Appearance73.ers[0] = ProtoInstance74;

Shape72.appearance = Appearance73;

Cylinder75 = browser.currentScene.createNode("Cylinder");
Cylinder75.height = 0.001;
Cylinder75.radius = 0.001;
Shape72.geometry = Cylinder75;

browser.currentScene.children[22] = Shape72;

Inline76 = browser.currentScene.createNode("Inline");
Inline76.DEF = "inlineSceneDef";
Inline76.url = ["someOtherScene.x3d"];
browser.currentScene.children[23] = Inline76;

IMPORT77 = browser.currentScene.createNode("IMPORT");
IMPORT77.AS = "WorldInfoDEF2";
IMPORT77.importedDEF = "WorldInfoDEF";
IMPORT77.inlineDEF = "inlineSceneDef";
browser.currentScene.children[24] = IMPORT77;

EXPORT78 = browser.currentScene.createNode("EXPORT");
EXPORT78.AS = "WorldInfoDEF3";
EXPORT78.localDEF = "WorldInfoDEF";
browser.currentScene.children[25] = EXPORT78;

ProtoDeclare79 = browser.currentScene.createNode("ProtoDeclare");
ProtoDeclare79.name = "MaterialModulator";
ProtoDeclare79.appinfo = "mimic a Material node and modulate fields as an animation effect";
ProtoDeclare79.documentation = "http://x3dgraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorIndex.html";
ProtoInterface80 = browser.currentScene.createNode("ProtoInterface");
field81 = browser.currentScene.createNode("field");
field81.name = "enabled";
field81.accessType = "inputOutput";
field81.type = "SFBool";
field81.value = "true";
ProtoInterface80.field = [];

ProtoInterface80.field[0] = field81;

field82 = browser.currentScene.createNode("field");
field82.name = "diffuseColor";
field82.accessType = "inputOutput";
field82.type = "SFColor";
field82.value = "0 0 0";
ProtoInterface80.field[1] = field82;

field83 = browser.currentScene.createNode("field");
field83.name = "emissiveColor";
field83.accessType = "inputOutput";
field83.type = "SFColor";
field83.value = "0.05 0.05 0.5";
ProtoInterface80.field[2] = field83;

field84 = browser.currentScene.createNode("field");
field84.name = "specularColor";
field84.accessType = "inputOutput";
field84.type = "SFColor";
field84.value = "0 0 0";
ProtoInterface80.field[3] = field84;

field85 = browser.currentScene.createNode("field");
field85.name = "transparency";
field85.accessType = "inputOutput";
field85.type = "SFFloat";
field85.value = "0";
ProtoInterface80.field[4] = field85;

field86 = browser.currentScene.createNode("field");
field86.name = "shininess";
field86.accessType = "inputOutput";
field86.type = "SFFloat";
field86.value = "0";
ProtoInterface80.field[5] = field86;

field87 = browser.currentScene.createNode("field");
field87.name = "ambientIntensity";
field87.accessType = "inputOutput";
field87.type = "SFFloat";
field87.value = "0";
ProtoInterface80.field[6] = field87;

ProtoDeclare79.protoInterface = ProtoInterface80;

ProtoBody88 = browser.currentScene.createNode("ProtoBody");
Material89 = browser.currentScene.createNode("Material");
Material89.DEF = "MaterialNode";
IS90 = browser.currentScene.createNode("IS");
connect91 = browser.currentScene.createNode("connect");
connect91.nodeField = "diffuseColor";
connect91.protoField = "diffuseColor";
IS90.connect = [];

IS90.connect[0] = connect91;

connect92 = browser.currentScene.createNode("connect");
connect92.nodeField = "emissiveColor";
connect92.protoField = "emissiveColor";
IS90.connect[1] = connect92;

connect93 = browser.currentScene.createNode("connect");
connect93.nodeField = "specularColor";
connect93.protoField = "specularColor";
IS90.connect[2] = connect93;

connect94 = browser.currentScene.createNode("connect");
connect94.nodeField = "transparency";
connect94.protoField = "transparency";
IS90.connect[3] = connect94;

connect95 = browser.currentScene.createNode("connect");
connect95.nodeField = "shininess";
connect95.protoField = "shininess";
IS90.connect[4] = connect95;

connect96 = browser.currentScene.createNode("connect");
connect96.nodeField = "ambientIntensity";
connect96.protoField = "ambientIntensity";
IS90.connect[5] = connect96;

Material89.iS = IS90;

ProtoBody88.children = [];

ProtoBody88.children[0] = Material89;

//Only first node (the node type) is renderable, others are along for the ride
Script97 = browser.currentScene.createNode("Script");
Script97.DEF = "MaterialModulatorScript";
field98 = browser.currentScene.createNode("field");
field98.name = "enabled";
field98.accessType = "inputOutput";
field98.type = "SFBool";
Script97.field = [];

Script97.field[0] = field98;

field99 = browser.currentScene.createNode("field");
field99.name = "diffuseColor";
field99.accessType = "inputOutput";
field99.type = "SFColor";
Script97.field[1] = field99;

field100 = browser.currentScene.createNode("field");
field100.name = "newColor";
field100.accessType = "outputOnly";
field100.type = "SFColor";
Script97.field[2] = field100;

field101 = browser.currentScene.createNode("field");
field101.name = "clockTrigger";
field101.accessType = "inputOnly";
field101.type = "SFTime";
Script97.field[3] = field101;

IS102 = browser.currentScene.createNode("IS");
connect103 = browser.currentScene.createNode("connect");
connect103.nodeField = "enabled";
connect103.protoField = "enabled";
IS102.connect = [];

IS102.connect[0] = connect103;

connect104 = browser.currentScene.createNode("connect");
connect104.nodeField = "diffuseColor";
connect104.protoField = "diffuseColor";
IS102.connect[1] = connect104;

Script97.iS = IS102;


Script97.setSourceCode(`ecmascript:\n"+
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
"}`)
ProtoBody88.children[1] = Script97;

ProtoDeclare79.protoBody = ProtoBody88;

browser.currentScene.children[26] = ProtoDeclare79;

//Test success: declarative statement createDeclarativeShapeTests()
Group105 = browser.currentScene.createNode("Group");
Group105.DEF = "DeclarativeGroupExample";
Shape106 = browser.currentScene.createNode("Shape");
MetadataString107 = browser.currentScene.createNode("MetadataString");
MetadataString107.name = "findThisNameValue";
MetadataString107.DEF = "FindableMetadataStringTest";
MetadataString107.value = ["test case"];
Shape106.metadata = MetadataString107;

Appearance108 = browser.currentScene.createNode("Appearance");
Appearance108.DEF = "DeclarativeAppearanceExample";
//DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance
ProtoInstance109 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance109.name = "MaterialModulator";
ProtoInstance109.DEF = "MyMaterialModulator";
Appearance108.ers = [];

Appearance108.ers[0] = ProtoInstance109;

Shape106.appearance = Appearance108;

Cone110 = browser.currentScene.createNode("Cone");
Cone110.bottom = False;
Cone110.bottomRadius = 0.05;
Cone110.height = 0.1;
Shape106.geometry = Cone110;

Group105.children = [];

Group105.children[0] = Shape106;

//Test success: declarativeGroup.addChild() singleton pipeline method
browser.currentScene.children[27] = Group105;

//Test success: declarative statement addChild()
//Test success: x3dModel.findNodeByDEF(DeclarativeAppearanceExample) = <Appearance DEF='DeclarativeAppearanceExample'/> i.e. <Appearance DEF='DeclarativeAppearanceExample'> <!- - DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance - -> <ProtoInstance DEF='MyMaterialModulator' name='MaterialModulator' containerField='material'/> </Appearance>
//Test success: x3dModel.findElementByNameValue(findThisNameValue) = <MetadataString DEF='FindableMetadataStringTest' name='findThisNameValue' value='\"test case\"'/>
//Test success: x3dModel.findElementByNameValue(\"ArtDeco01Material\", \"ProtoDeclare\") found
//Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoDeclare\") found
//Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoInstance\") found
Group111 = browser.currentScene.createNode("Group");
Group111.DEF = "TestFieldObjectsGroup";
//testFieldObjects() results
//SFBool default=true, true=true, false=false, negate()=true
//MFBool default=, initial=true false true, negate()=false true false
//SFFloat default=0.0, initial=1.0, setValue(2)=2.0, setValue(3.0f)=3.0, setValue(4.0)=4.0
//MFFloat default=, initial=1 2 3, append(5)=1 2 3 5, inserts(3,4)(0,0)=0 1 2 3 4 5, append(6)=0 1 2 3 4 5 6, size()=7
//... get1Value[3]=3.0, remove[1]=0 2 3 4 5 6, set1Value(0,10)=10 2 3 4 5 6, multiply(2)=20 4 6 8 10 12, clear=
//SFVec3f default=0 0 0, initial=1 2 3, setValue=4 5 6, multiply(2)=8 10 12, normalize()=0.45584232 0.5698029 0.68376344
browser.currentScene.children[28] = Group111;

Sound112 = browser.currentScene.createNode("Sound");
Sound112.location = [0,1.6,0];
//set sound-ellipsoid location height at 1.6m to match typical avatar height
AudioClip113 = browser.currentScene.createNode("AudioClip");
AudioClip113.description = "chimes";
AudioClip113.url = ["chimes.wav","http://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav"];
//Scene example fragment from http://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/default.x3d
Sound112.source = AudioClip113;

browser.currentScene.children[29] = Sound112;

Sound114 = browser.currentScene.createNode("Sound");
Sound114.location = [0,1.6,0];
//set sound-ellipsoid location height at 1.6m to match typical avatar height
MovieTexture115 = browser.currentScene.createNode("MovieTexture");
MovieTexture115.description = "mpgsys.mpg from ConformanceNist suite";
MovieTexture115.url = ["mpgsys.mpg","http://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpgsys.mpg"];
//Scene example fragment from http://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpeg1-systems.x3d
//Expected containerField='source', allowed containerField values=\"texture\" \"source\" \"back\" \"bottom\" \"front\" \"left\" \"right\" \"top\" \"backTexture\" \"bottomTexture\" \"frontTexture\" \"leftTexture\" \"rightTexture\" \"topTexture\"
Sound114.source = MovieTexture115;

browser.currentScene.children[30] = Sound114;

//Test success: AnchorObject.isNode()=true, siteAnchor.isNode()=true
//Test success: AnchorObject.isStatement()=false, siteAnchor.isStatement()=false
//Test success: ROUTEObject.isNode()=false, orbitPositionROUTE.isNode()=false
//Test success: ROUTEObject.isStatement()=true, orbitPositionROUTE.isStatement()=true
//Test success: CommentsBlock.isNode()=false, testComments.isNode()=false
//Test failure: CommentsBlock.isStatement()=true, testComments.isStatement()=true
Shape116 = browser.currentScene.createNode("Shape");
Shape116.DEF = "ExtrusionShape";
//ExampleExtrusion isCrossSectionClosed()=true, crossSection='[1.0, 1.0, 1.0, -1.0, -1.0, -1.0, -1.0, 1.0, 1.0, 1.0]'
//ExampleExtrusion isSpineClosed()=false, spine='[0.0, 0.0, 0.0, 0.0, 1.0, 0.0]'
Appearance117 = browser.currentScene.createNode("Appearance");
Appearance117.DEF = "TransparentAppearance";
Material118 = browser.currentScene.createNode("Material");
Material118.transparency = 1;
Appearance117.material = Material118;

Shape116.appearance = Appearance117;

Extrusion119 = browser.currentScene.createNode("Extrusion");
Extrusion119.DEF = "ExampleExtrusion";
Shape116.geometry = Extrusion119;

browser.currentScene.children[31] = Shape116;
