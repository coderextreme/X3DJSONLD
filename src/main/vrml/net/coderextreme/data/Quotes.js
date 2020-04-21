var browser = X3D.getBrowser();
var X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
ViewpointGroup2 = browser.currentScene.createNode("ViewpointGroup");
ViewpointGroup2.description = "Available viewpoints";
Viewpoint3 = browser.currentScene.createNode("Viewpoint");
Viewpoint3.DEF = "DefaultView";
Viewpoint3.description = "Hello X3DJSAIL";
ViewpointGroup2.children = [];

ViewpointGroup2.children[0] = Viewpoint3;

Viewpoint4 = browser.currentScene.createNode("Viewpoint");
Viewpoint4.DEF = "TopDownView";
Viewpoint4.description = "top-down view from above";
Viewpoint4.orientation = [1,0,0,-1.570796];
Viewpoint4.position = [0,100,0];
ViewpointGroup2.children[1] = Viewpoint4;

browser.currentScene.children = [];

browser.currentScene.children[0] = ViewpointGroup2;

WorldInfo5 = browser.currentScene.createNode("WorldInfo");
WorldInfo5.DEF = "WorldInfoDEF";
WorldInfo5.title = "HelloWorldProgram produced by X3D Java SAI Library (X3DJSAIL)";
browser.currentScene.children[1] = WorldInfo5;

WorldInfo6 = browser.currentScene.createNode("WorldInfo");
WorldInfo6.USE = "WorldInfoDEF";
browser.currentScene.children[2] = WorldInfo6;

WorldInfo7 = browser.currentScene.createNode("WorldInfo");
WorldInfo7.USE = "WorldInfoDEF";
browser.currentScene.children[3] = WorldInfo7;

MetadataString8 = browser.currentScene.createNode("MetadataString");
MetadataString8.name = "test";
MetadataString8.DEF = "scene.addChildMetadata";
MetadataString8.value = ["Top-level root Metadata node beneath Scene needs to be one of '-children' in JSON encoding"];
browser.currentScene.metadata[4] = MetadataString8;

LayerSet9 = browser.currentScene.createNode("LayerSet");
LayerSet9.DEF = "scene.addChildLayerSetTest";
browser.currentScene.layerSet[5] = LayerSet9;

Transform10 = browser.currentScene.createNode("Transform");
Transform10.DEF = "LogoGeometryTransform";
Transform10.translation = [0,1.5,0];
Anchor11 = browser.currentScene.createNode("Anchor");
Anchor11.description = "select for X3D Java SAI Library (X3DJSAIL) description";
Anchor11.url = ["../X3DJSAIL.html","http://www.web3d.org/specifications/java/X3DJSAIL.html"];
Shape12 = browser.currentScene.createNode("Shape");
Shape12.DEF = "BoxShape";
Appearance13 = browser.currentScene.createNode("Appearance");
Material14 = browser.currentScene.createNode("Material");
Material14.DEF = "GreenMaterial";
Material14.diffuseColor = [0,1,1];
Material14.emissiveColor = [0.8,0,0];
Material14.transparency = 0.1;
Appearance13.material = Material14;

ImageTexture15 = browser.currentScene.createNode("ImageTexture");
ImageTexture15.url = ["images/X3dJavaSceneAccessInterfaceSaiLibrary.png","http://www.web3d.org/specifications/java/examples/images/X3dJavaSceneAccessInterfaceSaiLibrary.png"];
Appearance13.texture = ImageTexture15;

Shape12.appearance = Appearance13;

Box16 = browser.currentScene.createNode("Box");
Box16.DEF = "test-NMTOKEN_regex.0123456789";
Box16.CssClass = "untextured";
Shape12.geometry = Box16;

Anchor11.children = [];

Anchor11.children[0] = Shape12;

Transform10.children = [];

Transform10.children[0] = Anchor11;

browser.currentScene.children[6] = Transform10;

Shape17 = browser.currentScene.createNode("Shape");
Shape17.DEF = "LineShape";
Appearance18 = browser.currentScene.createNode("Appearance");
Material19 = browser.currentScene.createNode("Material");
Material19.emissiveColor = [0.6,0.19607843,0.8];
Appearance18.material = Material19;

Shape17.appearance = Appearance18;

IndexedLineSet20 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet20.coordIndex = [0,1,2,3,4,0];
//Coordinate 3-tuple point count: 6
Coordinate21 = browser.currentScene.createNode("Coordinate");
Coordinate21.point = [0,1.5,0,2,1.5,0,2,1.5,-2,-2,1.5,-2,-2,1.5,0,0,1.5,0];
IndexedLineSet20.coord = Coordinate21;

Shape17.geometry = IndexedLineSet20;

browser.currentScene.children[7] = Shape17;

PositionInterpolator22 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator22.DEF = "BoxPathAnimator";
PositionInterpolator22.key = [0,0.125,0.375,0.625,0.875,1];
PositionInterpolator22.keyValue = [0,1.5,0,2,1.5,0,2,1.5,-2,-2,1.5,-2,-2,1.5,0,0,1.5,0];
browser.currentScene.children[8] = PositionInterpolator22;

TimeSensor23 = browser.currentScene.createNode("TimeSensor");
TimeSensor23.DEF = "OrbitClock";
TimeSensor23.cycleInterval = 8;
TimeSensor23.loop = True;
browser.currentScene.children[9] = TimeSensor23;

ROUTE24 = browser.currentScene.createNode("ROUTE");
ROUTE24.fromField = "fraction_changed";
ROUTE24.fromNode = "OrbitClock";
ROUTE24.toField = "set_fraction";
ROUTE24.toNode = "BoxPathAnimator";
browser.currentScene.children[10] = ROUTE24;

ROUTE25 = browser.currentScene.createNode("ROUTE");
ROUTE25.fromField = "value_changed";
ROUTE25.fromNode = "BoxPathAnimator";
ROUTE25.toField = "set_translation";
ROUTE25.toNode = "LogoGeometryTransform";
browser.currentScene.children[11] = ROUTE25;

Transform26 = browser.currentScene.createNode("Transform");
Transform26.DEF = "TextTransform";
Transform26.translation = [0,-1.5,0];
Shape27 = browser.currentScene.createNode("Shape");
Appearance28 = browser.currentScene.createNode("Appearance");
Material29 = browser.currentScene.createNode("Material");
Material29.USE = "GreenMaterial";
Appearance28.material = Material29;

Shape27.appearance = Appearance28;

Text30 = browser.currentScene.createNode("Text");
Text30.string = ["X3D Java","SAI Library","X3DJSAIL"];
//Comment example A, plain quotation marks: He said, \"Immel did it!\"
//Comment example B, XML character entities: He said, &quot;Immel did it!&quot;
MetadataSet31 = browser.currentScene.createNode("MetadataSet");
MetadataSet31.name = "EscapedQuotationMarksMetadataSet";
MetadataString32 = browser.currentScene.createNode("MetadataString");
MetadataString32.name = "quotesTestC";
MetadataString32.value = ["MFString example C, backslash-escaped quotes: He said, \"Immel did it!\""];
MetadataSet31.value = [];

MetadataSet31.value[0] = MetadataString32;

MetadataString33 = browser.currentScene.createNode("MetadataString");
MetadataString33.name = "extraChildTest";
MetadataString33.value = ["checks MetadataSetObject addValue() method"];
MetadataSet31.value[1] = MetadataString33;

Text30.metadata = MetadataSet31;

FontStyle34 = browser.currentScene.createNode("FontStyle");
FontStyle34.justify = ["MIDDLE","MIDDLE"];
Text30.fontStyle = FontStyle34;

Shape27.geometry = Text30;

Transform26.children = [];

Transform26.children[0] = Shape27;

Collision35 = browser.currentScene.createNode("Collision");
//test containerField='proxy'
Shape36 = browser.currentScene.createNode("Shape");
Shape36.DEF = "ProxyShape";
//alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\"'
//alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\" \"\"'
//alternative Java source: .setString(new String [] {\"One, Two, Comment\", \"\", \"He said, \\\"\"\"Immel did it!\\\"\"\\\"\"})
//reference: http://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamplesIndex.html
Text37 = browser.currentScene.createNode("Text");
Text37.string = ["One, Two, Text","","He said, \"Immel did it!\" \"\""];
Shape36.geometry = Text37;

Collision35.proxy = Shape36;

Transform26.children[1] = Collision35;

//It's a beautiful world
//... for you!
//https://en.wikipedia.org/wiki/Beautiful_World_(Devo_song)
browser.currentScene.children[12] = Transform26;

//repeatedly spin 180 degrees as a readable special effect
OrientationInterpolator38 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator38.DEF = "SpinInterpolator";
OrientationInterpolator38.key = [0,0.5,1];
OrientationInterpolator38.keyValue = [0,1,0,4.712389,0,1,0,0,0,1,0,1.5707964];
browser.currentScene.children[13] = OrientationInterpolator38;

TimeSensor39 = browser.currentScene.createNode("TimeSensor");
TimeSensor39.DEF = "SpinClock";
TimeSensor39.cycleInterval = 5;
TimeSensor39.loop = True;
browser.currentScene.children[14] = TimeSensor39;

ROUTE40 = browser.currentScene.createNode("ROUTE");
ROUTE40.fromField = "fraction_changed";
ROUTE40.fromNode = "SpinClock";
ROUTE40.toField = "set_fraction";
ROUTE40.toNode = "SpinInterpolator";
browser.currentScene.children[15] = ROUTE40;

ROUTE41 = browser.currentScene.createNode("ROUTE");
ROUTE41.fromField = "value_changed";
ROUTE41.fromNode = "SpinInterpolator";
ROUTE41.toField = "rotation";
ROUTE41.toNode = "TextTransform";
browser.currentScene.children[16] = ROUTE41;

Group42 = browser.currentScene.createNode("Group");
Group42.DEF = "BackgroundGroup";
Background43 = browser.currentScene.createNode("Background");
Background43.DEF = "GradualBackground";
Group42.children = [];

Group42.children[0] = Background43;

Script44 = browser.currentScene.createNode("Script");
Script44.DEF = "colorTypeConversionScript";
field45 = browser.currentScene.createNode("field");
field45.name = "colorInput";
field45.accessType = "inputOnly";
field45.type = "SFColor";
Script44.field = [];

Script44.field[0] = field45;

field46 = browser.currentScene.createNode("field");
field46.name = "colorsOutput";
field46.accessType = "outputOnly";
field46.type = "MFColor";
Script44.field[1] = field46;


Script44.setSourceCode(`ecmascript:\n"+
"\n"+
"function colorInput (eventValue) // Example source code\n"+
"{\n"+
"   colorsOutput = new MFColor(eventValue); // assigning value sends output event\n"+
"// Browser.print('colorInput=' + eventValue + ', colorsOutput=' + colorsOutput + '\\n');\n"+
"}`)
Group42.children[1] = Script44;

ColorInterpolator47 = browser.currentScene.createNode("ColorInterpolator");
ColorInterpolator47.DEF = "ColorAnimator";
ColorInterpolator47.key = [0,0.5,1];
ColorInterpolator47.keyValue = [0.9411765,1,1,0.29411766,0,0.50980395,0.9411765,1,1];
//AZURE to INDIGO and back again
Group42.children[2] = ColorInterpolator47;

TimeSensor48 = browser.currentScene.createNode("TimeSensor");
TimeSensor48.DEF = "ColorClock";
TimeSensor48.cycleInterval = 60;
TimeSensor48.loop = True;
Group42.children[3] = TimeSensor48;

ROUTE49 = browser.currentScene.createNode("ROUTE");
ROUTE49.fromField = "colorsOutput";
ROUTE49.fromNode = "colorTypeConversionScript";
ROUTE49.toField = "skyColor";
ROUTE49.toNode = "GradualBackground";
Group42.children[4] = ROUTE49;

ROUTE50 = browser.currentScene.createNode("ROUTE");
ROUTE50.fromField = "value_changed";
ROUTE50.fromNode = "ColorAnimator";
ROUTE50.toField = "colorInput";
ROUTE50.toNode = "colorTypeConversionScript";
Group42.children[5] = ROUTE50;

ROUTE51 = browser.currentScene.createNode("ROUTE");
ROUTE51.fromField = "fraction_changed";
ROUTE51.fromNode = "ColorClock";
ROUTE51.toField = "set_fraction";
ROUTE51.toNode = "ColorAnimator";
Group42.children[6] = ROUTE51;

browser.currentScene.children[17] = Group42;

ProtoDeclare52 = browser.currentScene.createNode("ProtoDeclare");
ProtoDeclare52.name = "ArtDeco01Material";
ProtoDeclare52.appinfo = "tooltip: ArtDeco01Material prototype is a Material node";
ProtoInterface53 = browser.currentScene.createNode("ProtoInterface");
field54 = browser.currentScene.createNode("field");
field54.name = "description";
field54.accessType = "inputOutput";
field54.appinfo = "tooltip for descriptionField";
field54.type = "SFString";
field54.value = "ArtDeco01Material prototype is a Material node";
ProtoInterface53.field = [];

ProtoInterface53.field[0] = field54;

field55 = browser.currentScene.createNode("field");
field55.name = "enabled";
field55.accessType = "inputOutput";
field55.type = "SFBool";
field55.value = "true";
ProtoInterface53.field[1] = field55;

ProtoDeclare52.protoInterface = ProtoInterface53;

ProtoBody56 = browser.currentScene.createNode("ProtoBody");
//Initial node of ProtoBody determines prototype node type
Material57 = browser.currentScene.createNode("Material");
Material57.ambientIntensity = 0.25;
Material57.diffuseColor = [0.282435,0.085159,0.134462];
Material57.shininess = 0.127273;
Material57.specularColor = [0.276305,0.11431,0.139857];
ProtoBody56.children = [];

ProtoBody56.children[0] = Material57;

//[HelloWorldProgram diagnostic] should be connected to scene graph: ArtDeco01ProtoDeclare.getNodeType()=\"Material\"
//presence of follow-on TouchSensor shows that additional nodes are allowed in ProtoBody after initial node, regardless of node types
TouchSensor58 = browser.currentScene.createNode("TouchSensor");
TouchSensor58.description = "within ProtoBody";
IS59 = browser.currentScene.createNode("IS");
connect60 = browser.currentScene.createNode("connect");
connect60.nodeField = "description";
connect60.protoField = "description";
IS59.connect = [];

IS59.connect[0] = connect60;

connect61 = browser.currentScene.createNode("connect");
connect61.nodeField = "enabled";
connect61.protoField = "enabled";
IS59.connect[1] = connect61;

TouchSensor58.iS = IS59;

ProtoBody56.children[1] = TouchSensor58;

ProtoDeclare52.protoBody = ProtoBody56;

browser.currentScene.children[18] = ProtoDeclare52;

ExternProtoDeclare62 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare62.name = "ArtDeco02Material";
ExternProtoDeclare62.appinfo = "this is a different Material node";
ExternProtoDeclare62.url = ["http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d#ArtDeco02Material","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3dv#ArtDeco02Material"];
//[HelloWorldProgram diagnostic] ArtDeco02ExternProtoDeclare.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time, TODO X3DJSAIL needs to add further capability.\"
field63 = browser.currentScene.createNode("field");
field63.name = "description";
field63.accessType = "inputOutput";
field63.appinfo = "tooltip for descriptionField";
field63.type = "SFString";
ExternProtoDeclare62.field = [];

ExternProtoDeclare62.field[0] = field63;

browser.currentScene.children[19] = ExternProtoDeclare62;

//Tested ArtDeco01ProtoInstance, ArtDeco02ProtoInstance for improper node type when ProtoInstance is added in wrong place
Shape64 = browser.currentScene.createNode("Shape");
Shape64.DEF = "TestShape1";
Appearance65 = browser.currentScene.createNode("Appearance");
Appearance65.DEF = "TestAppearance1";
//ArtDeco01Material prototype goes here... TODO ensure setContainerField is handled in exported Java
ProtoInstance66 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance66.name = "ArtDeco01Material";
//[HelloWorldProgram diagnostic] ArtDeco01ProtoInstance.getNodeType()=\"Material\"
fieldValue67 = browser.currentScene.createNode("fieldValue");
fieldValue67.name = "description";
fieldValue67.value = "ArtDeco01Material can substitute for a Material node";
ProtoInstance66.fieldValue = [];

ProtoInstance66.fieldValue[0] = fieldValue67;

Appearance65.ers = [];

Appearance65.ers[0] = ProtoInstance66;

Shape64.appearance = Appearance65;

Sphere68 = browser.currentScene.createNode("Sphere");
Sphere68.radius = 0.001;
Shape64.geometry = Sphere68;

browser.currentScene.children[20] = Shape64;

Shape69 = browser.currentScene.createNode("Shape");
Shape69.DEF = "TestShape2";
Appearance70 = browser.currentScene.createNode("Appearance");
Appearance70.DEF = "TestAppearance2";
//ArtDeco02Material prototype goes here... TODO ensure setContainerField is handled in exported Java
ProtoInstance71 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance71.name = "ArtDeco02Material";
ProtoInstance71.DEF = "ArtDeco02MaterialDEF";
//[HelloWorldProgram diagnostic] ArtDeco02ProtoInstance.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time, TODO X3DJSAIL needs to add further capability.\"
fieldValue72 = browser.currentScene.createNode("fieldValue");
fieldValue72.name = "description";
fieldValue72.value = "ArtDeco02Material can substitute for another Material node";
ProtoInstance71.fieldValue = [];

ProtoInstance71.fieldValue[0] = fieldValue72;

Appearance70.ers = [];

Appearance70.ers[0] = ProtoInstance71;

Shape69.appearance = Appearance70;

Cone73 = browser.currentScene.createNode("Cone");
Cone73.bottomRadius = 0.001;
Cone73.height = 0.001;
Shape69.geometry = Cone73;

browser.currentScene.children[21] = Shape69;

Shape74 = browser.currentScene.createNode("Shape");
Shape74.DEF = "TestShape3";
Appearance75 = browser.currentScene.createNode("Appearance");
Appearance75.DEF = "TestAppearance3";
//ArtDeco02Material ProtoInstance USE goes here...
ProtoInstance76 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance76.USE = "ArtDeco02MaterialDEF";
Appearance75.ers = [];

Appearance75.ers[0] = ProtoInstance76;

Shape74.appearance = Appearance75;

Cylinder77 = browser.currentScene.createNode("Cylinder");
Cylinder77.height = 0.001;
Cylinder77.radius = 0.001;
Shape74.geometry = Cylinder77;

browser.currentScene.children[22] = Shape74;

Inline78 = browser.currentScene.createNode("Inline");
Inline78.DEF = "inlineSceneDef";
Inline78.url = ["someOtherScene.x3d"];
browser.currentScene.children[23] = Inline78;

IMPORT79 = browser.currentScene.createNode("IMPORT");
IMPORT79.AS = "WorldInfoDEF2";
IMPORT79.importedDEF = "WorldInfoDEF";
IMPORT79.inlineDEF = "inlineSceneDef";
browser.currentScene.children[24] = IMPORT79;

EXPORT80 = browser.currentScene.createNode("EXPORT");
EXPORT80.AS = "WorldInfoDEF3";
EXPORT80.localDEF = "WorldInfoDEF";
browser.currentScene.children[25] = EXPORT80;

ProtoDeclare81 = browser.currentScene.createNode("ProtoDeclare");
ProtoDeclare81.name = "MaterialModulator";
ProtoDeclare81.appinfo = "mimic a Material node and modulate fields as an animation effect";
ProtoDeclare81.documentation = "http://x3dgraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorIndex.html";
ProtoInterface82 = browser.currentScene.createNode("ProtoInterface");
field83 = browser.currentScene.createNode("field");
field83.name = "enabled";
field83.accessType = "inputOutput";
field83.type = "SFBool";
field83.value = "true";
ProtoInterface82.field = [];

ProtoInterface82.field[0] = field83;

field84 = browser.currentScene.createNode("field");
field84.name = "diffuseColor";
field84.accessType = "inputOutput";
field84.type = "SFColor";
field84.value = "0 0 0";
ProtoInterface82.field[1] = field84;

field85 = browser.currentScene.createNode("field");
field85.name = "emissiveColor";
field85.accessType = "inputOutput";
field85.type = "SFColor";
field85.value = "0.05 0.05 0.5";
ProtoInterface82.field[2] = field85;

field86 = browser.currentScene.createNode("field");
field86.name = "specularColor";
field86.accessType = "inputOutput";
field86.type = "SFColor";
field86.value = "0 0 0";
ProtoInterface82.field[3] = field86;

field87 = browser.currentScene.createNode("field");
field87.name = "transparency";
field87.accessType = "inputOutput";
field87.type = "SFFloat";
field87.value = "0";
ProtoInterface82.field[4] = field87;

field88 = browser.currentScene.createNode("field");
field88.name = "shininess";
field88.accessType = "inputOutput";
field88.type = "SFFloat";
field88.value = "0";
ProtoInterface82.field[5] = field88;

field89 = browser.currentScene.createNode("field");
field89.name = "ambientIntensity";
field89.accessType = "inputOutput";
field89.type = "SFFloat";
field89.value = "0";
ProtoInterface82.field[6] = field89;

ProtoDeclare81.protoInterface = ProtoInterface82;

ProtoBody90 = browser.currentScene.createNode("ProtoBody");
Material91 = browser.currentScene.createNode("Material");
Material91.DEF = "MaterialNode";
IS92 = browser.currentScene.createNode("IS");
connect93 = browser.currentScene.createNode("connect");
connect93.nodeField = "diffuseColor";
connect93.protoField = "diffuseColor";
IS92.connect = [];

IS92.connect[0] = connect93;

connect94 = browser.currentScene.createNode("connect");
connect94.nodeField = "emissiveColor";
connect94.protoField = "emissiveColor";
IS92.connect[1] = connect94;

connect95 = browser.currentScene.createNode("connect");
connect95.nodeField = "specularColor";
connect95.protoField = "specularColor";
IS92.connect[2] = connect95;

connect96 = browser.currentScene.createNode("connect");
connect96.nodeField = "transparency";
connect96.protoField = "transparency";
IS92.connect[3] = connect96;

connect97 = browser.currentScene.createNode("connect");
connect97.nodeField = "shininess";
connect97.protoField = "shininess";
IS92.connect[4] = connect97;

connect98 = browser.currentScene.createNode("connect");
connect98.nodeField = "ambientIntensity";
connect98.protoField = "ambientIntensity";
IS92.connect[5] = connect98;

Material91.iS = IS92;

ProtoBody90.children = [];

ProtoBody90.children[0] = Material91;

//Only first node (the node type) is renderable, others are along for the ride
Script99 = browser.currentScene.createNode("Script");
Script99.DEF = "MaterialModulatorScript";
field100 = browser.currentScene.createNode("field");
field100.name = "enabled";
field100.accessType = "inputOutput";
field100.type = "SFBool";
Script99.field = [];

Script99.field[0] = field100;

field101 = browser.currentScene.createNode("field");
field101.name = "diffuseColor";
field101.accessType = "inputOutput";
field101.type = "SFColor";
Script99.field[1] = field101;

field102 = browser.currentScene.createNode("field");
field102.name = "newColor";
field102.accessType = "outputOnly";
field102.type = "SFColor";
Script99.field[2] = field102;

field103 = browser.currentScene.createNode("field");
field103.name = "clockTrigger";
field103.accessType = "inputOnly";
field103.type = "SFTime";
Script99.field[3] = field103;

IS104 = browser.currentScene.createNode("IS");
connect105 = browser.currentScene.createNode("connect");
connect105.nodeField = "enabled";
connect105.protoField = "enabled";
IS104.connect = [];

IS104.connect[0] = connect105;

connect106 = browser.currentScene.createNode("connect");
connect106.nodeField = "diffuseColor";
connect106.protoField = "diffuseColor";
IS104.connect[1] = connect106;

Script99.iS = IS104;


Script99.setSourceCode(`ecmascript:\n"+
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
ProtoBody90.children[1] = Script99;

ProtoDeclare81.protoBody = ProtoBody90;

browser.currentScene.children[26] = ProtoDeclare81;

//Test success: declarative statement createDeclarativeShapeTests()
Group107 = browser.currentScene.createNode("Group");
Group107.DEF = "DeclarativeGroupExample";
Shape108 = browser.currentScene.createNode("Shape");
MetadataString109 = browser.currentScene.createNode("MetadataString");
MetadataString109.name = "findThisNameValue";
MetadataString109.DEF = "FindableMetadataStringTest";
MetadataString109.value = ["test case"];
Shape108.metadata = MetadataString109;

Appearance110 = browser.currentScene.createNode("Appearance");
Appearance110.DEF = "DeclarativeAppearanceExample";
//DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance
ProtoInstance111 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance111.name = "MaterialModulator";
ProtoInstance111.DEF = "MyMaterialModulator";
Appearance110.ers = [];

Appearance110.ers[0] = ProtoInstance111;

Shape108.appearance = Appearance110;

Cone112 = browser.currentScene.createNode("Cone");
Cone112.bottom = False;
Cone112.bottomRadius = 0.05;
Cone112.height = 0.1;
Shape108.geometry = Cone112;

Group107.children = [];

Group107.children[0] = Shape108;

//Test success: declarativeGroup.addChild() singleton pipeline method
browser.currentScene.children[27] = Group107;

//Test success: declarative statement addChild()
//Test success: x3dModel.findNodeByDEF(DeclarativeAppearanceExample) = <Appearance DEF='DeclarativeAppearanceExample'/> i.e. <Appearance DEF='DeclarativeAppearanceExample'> <!- - DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance - -> <ProtoInstance DEF='MyMaterialModulator' name='MaterialModulator' containerField='material'/> </Appearance>
//Test success: x3dModel.findElementByNameValue(findThisNameValue) = <MetadataString DEF='FindableMetadataStringTest' name='findThisNameValue' value='\"test case\"'/>
//Test success: x3dModel.findElementByNameValue(\"ArtDeco01Material\", \"ProtoDeclare\") found
//Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoDeclare\") found
//Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoInstance\") found
Group113 = browser.currentScene.createNode("Group");
Group113.DEF = "TestFieldObjectsGroup";
//testFieldObjects() results
//SFBool default=true, true=true, false=false, negate()=true
//MFBool default=, initial=true false true, negate()=false true false
//SFFloat default=0.0, initial=1.0, setValue(2)=2.0, setValue(3.0f)=3.0, setValue(4.0)=4.0
//MFFloat default=, initial=1 2 3, append(5)=1 2 3 5, inserts(3,4)(0,0)=0 1 2 3 4 5, append(6)=0 1 2 3 4 5 6, size()=7
//... get1Value[3]=3.0, remove[1]=0 2 3 4 5 6, set1Value(0,10)=10 2 3 4 5 6, multiply(2)=20 4 6 8 10 12, clear=
//SFVec3f default=0 0 0, initial=1 2 3, setValue=4 5 6, multiply(2)=8 10 12, normalize()=0.45584232 0.5698029 0.68376344
browser.currentScene.children[28] = Group113;

Sound114 = browser.currentScene.createNode("Sound");
Sound114.location = [0,1.6,0];
//set sound-ellipsoid location height at 1.6m to match typical avatar height
AudioClip115 = browser.currentScene.createNode("AudioClip");
AudioClip115.description = "chimes";
AudioClip115.url = ["chimes.wav","http://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav"];
//Scene example fragment from http://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/default.x3d
Sound114.source = AudioClip115;

browser.currentScene.children[29] = Sound114;

Sound116 = browser.currentScene.createNode("Sound");
Sound116.location = [0,1.6,0];
//set sound-ellipsoid location height at 1.6m to match typical avatar height
MovieTexture117 = browser.currentScene.createNode("MovieTexture");
MovieTexture117.description = "mpgsys.mpg from ConformanceNist suite";
MovieTexture117.url = ["mpgsys.mpg","http://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpgsys.mpg"];
//Scene example fragment from http://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpeg1-systems.x3d
//Expected containerField='source', allowed containerField values=\"texture\" \"source\" \"back\" \"bottom\" \"front\" \"left\" \"right\" \"top\" \"backTexture\" \"bottomTexture\" \"frontTexture\" \"leftTexture\" \"rightTexture\" \"topTexture\"
Sound116.source = MovieTexture117;

browser.currentScene.children[30] = Sound116;

//Test success: AnchorObject.isNode()=true, siteAnchor.isNode()=true
//Test success: AnchorObject.isStatement()=false, siteAnchor.isStatement()=false
//Test success: ROUTEObject.isNode()=false, orbitPositionROUTE.isNode()=false
//Test success: ROUTEObject.isStatement()=true, orbitPositionROUTE.isStatement()=true
//Test success: CommentsBlock.isNode()=false, testComments.isNode()=false
//Test failure: CommentsBlock.isStatement()=true, testComments.isStatement()=true
Shape118 = browser.currentScene.createNode("Shape");
Shape118.DEF = "ExtrusionShape";
//ExampleExtrusion isCrossSectionClosed()=true, crossSection='[1.0, 1.0, 1.0, -1.0, -1.0, -1.0, -1.0, 1.0, 1.0, 1.0]'
//ExampleExtrusion isSpineClosed()=false, spine='[0.0, 0.0, 0.0, 0.0, 1.0, 0.0]'
Appearance119 = browser.currentScene.createNode("Appearance");
Appearance119.DEF = "TransparentAppearance";
Material120 = browser.currentScene.createNode("Material");
Material120.transparency = 1;
Appearance119.material = Material120;

Shape118.appearance = Appearance119;

Extrusion121 = browser.currentScene.createNode("Extrusion");
Extrusion121.DEF = "ExampleExtrusion";
Shape118.geometry = Extrusion121;

browser.currentScene.children[31] = Shape118;

