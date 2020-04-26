let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let ViewpointGroup2 = browser.currentScene.createNode("ViewpointGroup");
ViewpointGroup2.description = "Available viewpoints";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ViewpointGroup2;

let WorldInfo3 = browser.currentScene.createNode("WorldInfo");
WorldInfo3.DEF = "WorldInfoDEF";
WorldInfo3.title = "HelloWorldProgram produced by X3D Java SAI Library (X3DJSAIL)";
browser.currentScene.children[1] = WorldInfo3;

let WorldInfo4 = browser.currentScene.createNode("WorldInfo");
WorldInfo4.USE = "WorldInfoDEF";
browser.currentScene.children[2] = WorldInfo4;

let WorldInfo5 = browser.currentScene.createNode("WorldInfo");
WorldInfo5.USE = "WorldInfoDEF";
browser.currentScene.children[3] = WorldInfo5;

let Transform6 = browser.currentScene.createNode("Transform");
Transform6.DEF = "LogoGeometryTransform";
Transform6.translation = new SFVec3f(new float[0,1.5,0]);
let Anchor7 = browser.currentScene.createNode("Anchor");
Anchor7.description = "select for X3D Java SAI Library (X3DJSAIL) description";
Anchor7.url = new MFString(new java.lang.String["../X3DJSAIL.html","http://www.web3d.org/specifications/java/X3DJSAIL.html"]);
let Shape8 = browser.currentScene.createNode("Shape");
Shape8.DEF = "BoxShape";
let Appearance9 = browser.currentScene.createNode("Appearance");
let Material10 = browser.currentScene.createNode("Material");
Material10.DEF = "GreenMaterial";
Material10.diffuseColor = new SFColor(new float[0,1,1]);
Material10.emissiveColor = new SFColor(new float[0.8,0,0]);
Material10.transparency = 0.1;
Appearance9.material = Material10;

let ImageTexture11 = browser.currentScene.createNode("ImageTexture");
ImageTexture11.url = new MFString(new java.lang.String["images/X3dJavaSceneAccessInterfaceSaiLibrary.png","http://www.web3d.org/specifications/java/examples/images/X3dJavaSceneAccessInterfaceSaiLibrary.png"]);
Appearance9.texture = ImageTexture11;

Shape8.appearance = Appearance9;

let Box12 = browser.currentScene.createNode("Box");
Box12.DEF = "test-NMTOKEN_regex.0123456789";
Box12.CssClass = "untextured";
Shape8.geometry = Box12;

Anchor7.children = new MFNode();

Anchor7.children[0] = Shape8;

Transform6.children = new MFNode();

Transform6.children[0] = Anchor7;

browser.currentScene.children[4] = Transform6;

let Shape13 = browser.currentScene.createNode("Shape");
Shape13.DEF = "LineShape";
let Appearance14 = browser.currentScene.createNode("Appearance");
let Material15 = browser.currentScene.createNode("Material");
Material15.emissiveColor = new SFColor(new float[0.6,0.19607843,0.8]);
Appearance14.material = Material15;

Shape13.appearance = Appearance14;

let IndexedLineSet16 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet16.coordIndex = new MFInt32(new int[0,1,2,3,4,0]);
// Coordinate 3-tuple point count: 6 
let Coordinate17 = browser.currentScene.createNode("Coordinate");
Coordinate17.point = new MFVec3f(new float[0,1.5,0,2,1.5,0,2,1.5,-2,-2,1.5,-2,-2,1.5,0,0,1.5,0]);
IndexedLineSet16.coord = Coordinate17;

Shape13.geometry = IndexedLineSet16;

browser.currentScene.children[5] = Shape13;

let PositionInterpolator18 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator18.DEF = "BoxPathAnimator";
PositionInterpolator18.key = new MFFloat(new float[0,0.125,0.375,0.625,0.875,1]);
PositionInterpolator18.keyValue = new MFVec3f(new float[0,1.5,0,2,1.5,0,2,1.5,-2,-2,1.5,-2,-2,1.5,0,0,1.5,0]);
browser.currentScene.children[6] = PositionInterpolator18;

let TimeSensor19 = browser.currentScene.createNode("TimeSensor");
TimeSensor19.DEF = "OrbitClock";
TimeSensor19.cycleInterval = 8;
TimeSensor19.loop = True;
browser.currentScene.children[7] = TimeSensor19;

let ROUTE20 = browser.currentScene.createNode("ROUTE");
ROUTE20.fromField = "fraction_changed";
ROUTE20.fromNode = "OrbitClock";
ROUTE20.toField = "set_fraction";
ROUTE20.toNode = "BoxPathAnimator";
browser.currentScene.children[8] = ROUTE20;

let ROUTE21 = browser.currentScene.createNode("ROUTE");
ROUTE21.fromField = "value_changed";
ROUTE21.fromNode = "BoxPathAnimator";
ROUTE21.toField = "set_translation";
ROUTE21.toNode = "LogoGeometryTransform";
browser.currentScene.children[9] = ROUTE21;

let Transform22 = browser.currentScene.createNode("Transform");
Transform22.DEF = "TextTransform";
Transform22.translation = new SFVec3f(new float[0,-1.5,0]);
let Shape23 = browser.currentScene.createNode("Shape");
let Appearance24 = browser.currentScene.createNode("Appearance");
let Material25 = browser.currentScene.createNode("Material");
Material25.USE = "GreenMaterial";
Appearance24.material = Material25;

Shape23.appearance = Appearance24;

let Text26 = browser.currentScene.createNode("Text");
Text26.string = new MFString(new java.lang.String["X3D Java","SAI Library","X3DJSAIL"]);
// Comment example A, plain quotation marks: He said, \"Immel did it!\" 
// Comment example B, XML character entities: He said, &quot;Immel did it!&quot; 
let MetadataSet27 = browser.currentScene.createNode("MetadataSet");
MetadataSet27.name = "EscapedQuotationMarksMetadataSet";
let MetadataString28 = browser.currentScene.createNode("MetadataString");
MetadataString28.name = "quotesTestC";
MetadataString28.value = new MFString(new java.lang.String["MFString example C, backslash-escaped quotes: He said, \"Immel did it!\""]);
MetadataSet27.value = new MFNode();

MetadataSet27.value[0] = MetadataString28;

let MetadataString29 = browser.currentScene.createNode("MetadataString");
MetadataString29.name = "extraChildTest";
MetadataString29.value = new MFString(new java.lang.String["checks MetadataSetObject addValue() method"]);
MetadataSet27.value[1] = MetadataString29;

Text26.metadata = MetadataSet27;

let FontStyle30 = browser.currentScene.createNode("FontStyle");
FontStyle30.family = new MFString(new java.lang.String["SERIF"]);
FontStyle30.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text26.fontStyle = FontStyle30;

Shape23.geometry = Text26;

Transform22.children = new MFNode();

Transform22.children[0] = Shape23;

let Collision31 = browser.currentScene.createNode("Collision");
// test containerField='proxy' 
let Shape32 = browser.currentScene.createNode("Shape");
Shape32.DEF = "ProxyShape";
// alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\"' 
// alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\" \"\"' 
// alternative Java source: .setString(new String [] {\"One, Two, Comment\", \"\", \"He said, \\\"Immel did it!\\\"\"}) 
// reference: http://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamplesIndex.html 
let Text33 = browser.currentScene.createNode("Text");
Text33.string = new MFString(new java.lang.String["One, Two, Text","","He said, \"Immel did it!","\""]);
Shape32.geometry = Text33;

Collision31.proxy = Shape32;

Transform22.children[1] = Collision31;

// It's a beautiful world 
// ... for you! 
// https://en.wikipedia.org/wiki/Beautiful_World_(Devo_song) 
browser.currentScene.children[10] = Transform22;

// repeatedly spin 180 degrees as a readable special effect 
let OrientationInterpolator34 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator34.DEF = "SpinInterpolator";
OrientationInterpolator34.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator34.keyValue = new MFRotation(new float[0,1,0,4.712389,0,1,0,0,0,1,0,1.5707964]);
browser.currentScene.children[11] = OrientationInterpolator34;

let TimeSensor35 = browser.currentScene.createNode("TimeSensor");
TimeSensor35.DEF = "SpinClock";
TimeSensor35.cycleInterval = 5;
TimeSensor35.loop = True;
browser.currentScene.children[12] = TimeSensor35;

let ROUTE36 = browser.currentScene.createNode("ROUTE");
ROUTE36.fromField = "fraction_changed";
ROUTE36.fromNode = "SpinClock";
ROUTE36.toField = "set_fraction";
ROUTE36.toNode = "SpinInterpolator";
browser.currentScene.children[13] = ROUTE36;

let ROUTE37 = browser.currentScene.createNode("ROUTE");
ROUTE37.fromField = "value_changed";
ROUTE37.fromNode = "SpinInterpolator";
ROUTE37.toField = "rotation";
ROUTE37.toNode = "TextTransform";
browser.currentScene.children[14] = ROUTE37;

let Group38 = browser.currentScene.createNode("Group");
Group38.DEF = "BackgroundGroup";
let Background39 = browser.currentScene.createNode("Background");
Background39.DEF = "GradualBackground";
Group38.children = new MFNode();

Group38.children[0] = Background39;

let Script40 = browser.currentScene.createNode("Script");
Script40.DEF = "colorTypeConversionScript";
let field41 = browser.currentScene.createNode("field");
field41.name = "colorInput";
field41.accessType = "inputOnly";
field41.type = "SFColor";
Script40.field = new MFNode();

Script40.field[0] = field41;

let field42 = browser.currentScene.createNode("field");
field42.name = "colorsOutput";
field42.accessType = "outputOnly";
field42.type = "MFColor";
Script40.field[1] = field42;


Script40.setSourceCode(`ecmascript:\n"+
"\n"+
"function colorInput (eventValue) // Example source code\n"+
"{\n"+
"   colorsOutput = new MFColor(eventValue); // assigning value sends output event\n"+
"// Browser.print('colorInput=' + eventValue + ', colorsOutput=' + colorsOutput + '\\n');\n"+
"}`)
Group38.children[1] = Script40;

let ColorInterpolator43 = browser.currentScene.createNode("ColorInterpolator");
ColorInterpolator43.DEF = "ColorAnimator";
ColorInterpolator43.key = new MFFloat(new float[0,0.5,1]);
ColorInterpolator43.keyValue = new MFColor(new float[0.9411765,1,1,0.29411766,0,0.50980395,0.9411765,1,1]);
// AZURE to INDIGO and back again 
Group38.children[2] = ColorInterpolator43;

let TimeSensor44 = browser.currentScene.createNode("TimeSensor");
TimeSensor44.DEF = "ColorClock";
TimeSensor44.cycleInterval = 60;
TimeSensor44.loop = True;
Group38.children[3] = TimeSensor44;

let ROUTE45 = browser.currentScene.createNode("ROUTE");
ROUTE45.fromField = "colorsOutput";
ROUTE45.fromNode = "colorTypeConversionScript";
ROUTE45.toField = "skyColor";
ROUTE45.toNode = "GradualBackground";
Group38.children[4] = ROUTE45;

let ROUTE46 = browser.currentScene.createNode("ROUTE");
ROUTE46.fromField = "value_changed";
ROUTE46.fromNode = "ColorAnimator";
ROUTE46.toField = "colorInput";
ROUTE46.toNode = "colorTypeConversionScript";
Group38.children[5] = ROUTE46;

let ROUTE47 = browser.currentScene.createNode("ROUTE");
ROUTE47.fromField = "fraction_changed";
ROUTE47.fromNode = "ColorClock";
ROUTE47.toField = "set_fraction";
ROUTE47.toNode = "ColorAnimator";
Group38.children[6] = ROUTE47;

browser.currentScene.children[15] = Group38;

let ProtoDeclare48 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco01Material" appinfo="tooltip: ArtDeco01Material prototype is a Material node" ><ProtoInterface><field name="description" accessType="inputOutput" appinfo="tooltip for descriptionField" type="SFString" value="ArtDeco01Material prototype is a Material node"></field>
<field name="enabled" accessType="inputOutput" type="SFBool" value="true"></field>
</ProtoInterface>
<ProtoBody><!-- Initial node of ProtoBody determines prototype node type --><Material ambientIntensity="0.25" diffuseColor="0.282435 0.085159 0.134462" shininess="0.127273" specularColor="0.276305 0.11431 0.139857"></Material>
<!-- [HelloWorldProgram diagnostic] should be connected to scene graph: ArtDeco01ProtoDeclare.getNodeType()="Material" --><!-- presence of follow-on TouchSensor shows that additional nodes are allowed in ProtoBody after initial node, regardless of node types --><TouchSensor description="within ProtoBody"><IS><connect nodeField="description" protoField="description"></connect>
<connect nodeField="enabled" protoField="enabled"></connect>
</IS>
</TouchSensor>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare48.name = "ArtDeco01Material";
ProtoDeclare48.appinfo = "tooltip: ArtDeco01Material prototype is a Material node";
let ProtoInterface49 = browser.currentScene.createNode("ProtoInterface");
let field50 = browser.currentScene.createNode("field");
field50.name = "description";
field50.accessType = "inputOutput";
field50.appinfo = "tooltip for descriptionField";
field50.type = "SFString";
field50.value = "ArtDeco01Material prototype is a Material node";
ProtoInterface49.field = new MFNode();

ProtoInterface49.field[0] = field50;

let field51 = browser.currentScene.createNode("field");
field51.name = "enabled";
field51.accessType = "inputOutput";
field51.type = "SFBool";
field51.value = "true";
ProtoInterface49.field[1] = field51;

ProtoDeclare48.protoInterface = ProtoInterface49;

let ProtoBody52 = browser.currentScene.createNode("ProtoBody");
// Initial node of ProtoBody determines prototype node type 
let Material53 = browser.currentScene.createNode("Material");
Material53.ambientIntensity = 0.25;
Material53.diffuseColor = new SFColor(new float[0.282435,0.085159,0.134462]);
Material53.shininess = 0.127273;
Material53.specularColor = new SFColor(new float[0.276305,0.11431,0.139857]);
ProtoBody52.children = new MFNode();

ProtoBody52.children[0] = Material53;

// [HelloWorldProgram diagnostic] should be connected to scene graph: ArtDeco01ProtoDeclare.getNodeType()=\"Material\" 
// presence of follow-on TouchSensor shows that additional nodes are allowed in ProtoBody after initial node, regardless of node types 
let TouchSensor54 = browser.currentScene.createNode("TouchSensor");
TouchSensor54.description = "within ProtoBody";
let IS55 = browser.currentScene.createNode("IS");
let connect56 = browser.currentScene.createNode("connect");
connect56.nodeField = "description";
connect56.protoField = "description";
IS55.connect = new MFNode();

IS55.connect[0] = connect56;

let connect57 = browser.currentScene.createNode("connect");
connect57.nodeField = "enabled";
connect57.protoField = "enabled";
IS55.connect[1] = connect57;

TouchSensor54.iS = IS55;

ProtoBody52.children[1] = TouchSensor54;

ProtoDeclare48.protoBody = ProtoBody52;

browser.currentScene.children[16] = ProtoDeclare48;

let ExternProtoDeclare58 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare58.name = "ArtDeco02Material";
ExternProtoDeclare58.appinfo = "this is a different Material node";
ExternProtoDeclare58.url = new MFString(new java.lang.String["http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d#ArtDeco02Material","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3dv#ArtDeco02Material"]);
// [HelloWorldProgram diagnostic] ArtDeco02ExternProtoDeclare.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time, TODO X3DJSAIL needs to add further capability.\" 
let field59 = browser.currentScene.createNode("field");
field59.name = "description";
field59.accessType = "inputOutput";
field59.appinfo = "tooltip for descriptionField";
field59.type = "SFString";
ExternProtoDeclare58.field = new MFNode();

ExternProtoDeclare58.field[0] = field59;

browser.currentScene.children[17] = ExternProtoDeclare58;

// Tested ArtDeco01ProtoInstance, ArtDeco02ProtoInstance for improper node type when ProtoInstance is added in wrong place 
let Shape60 = browser.currentScene.createNode("Shape");
Shape60.DEF = "TestShape1";
let Appearance61 = browser.currentScene.createNode("Appearance");
Appearance61.DEF = "TestAppearance1";
// ArtDeco01Material prototype goes here... TODO ensure setContainerField is handled in exported Java 
let ProtoInstance62 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance62.name = "ArtDeco01Material";
// [HelloWorldProgram diagnostic] ArtDeco01ProtoInstance.getNodeType()=\"Material\" 
let fieldValue63 = browser.currentScene.createNode("fieldValue");
fieldValue63.name = "description";
fieldValue63.value = "ArtDeco01Material can substitute for a Material node";
ProtoInstance62.fieldValue = new MFNode();

ProtoInstance62.fieldValue[0] = fieldValue63;

Appearance61.shaders = new MFNode();

Appearance61.shaders[0] = ProtoInstance62;

Shape60.appearance = Appearance61;

let Sphere64 = browser.currentScene.createNode("Sphere");
Sphere64.radius = 0.001;
Shape60.geometry = Sphere64;

browser.currentScene.children[18] = Shape60;

let Shape65 = browser.currentScene.createNode("Shape");
Shape65.DEF = "TestShape2";
let Appearance66 = browser.currentScene.createNode("Appearance");
Appearance66.DEF = "TestAppearance2";
// ArtDeco02Material prototype goes here... TODO ensure setContainerField is handled in exported Java 
let ProtoInstance67 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance67.DEF = "ArtDeco02MaterialDEF";
ProtoInstance67.name = "ArtDeco02Material";
// [HelloWorldProgram diagnostic] ArtDeco02ProtoInstance.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time, TODO X3DJSAIL needs to add further capability.\" 
let fieldValue68 = browser.currentScene.createNode("fieldValue");
fieldValue68.name = "description";
fieldValue68.value = "ArtDeco02Material can substitute for another Material node";
ProtoInstance67.fieldValue = new MFNode();

ProtoInstance67.fieldValue[0] = fieldValue68;

Appearance66.shaders = new MFNode();

Appearance66.shaders[0] = ProtoInstance67;

Shape65.appearance = Appearance66;

let Cone69 = browser.currentScene.createNode("Cone");
Cone69.bottomRadius = 0.001;
Cone69.height = 0.001;
Shape65.geometry = Cone69;

browser.currentScene.children[19] = Shape65;

let Shape70 = browser.currentScene.createNode("Shape");
Shape70.DEF = "TestShape3";
let Appearance71 = browser.currentScene.createNode("Appearance");
Appearance71.DEF = "TestAppearance3";
// ArtDeco02Material ProtoInstance USE goes here... 
let ProtoInstance72 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance72.USE = "ArtDeco02MaterialDEF";
Appearance71.shaders = new MFNode();

Appearance71.shaders[0] = ProtoInstance72;

Shape70.appearance = Appearance71;

let Cylinder73 = browser.currentScene.createNode("Cylinder");
Cylinder73.height = 0.001;
Cylinder73.radius = 0.001;
Shape70.geometry = Cylinder73;

browser.currentScene.children[20] = Shape70;

let Inline74 = browser.currentScene.createNode("Inline");
Inline74.DEF = "inlineSceneDef";
Inline74.url = new MFString(new java.lang.String["someOtherScene.x3d"]);
browser.currentScene.children[21] = Inline74;

let IMPORT75 = browser.currentScene.createNode("IMPORT");
IMPORT75.AS = "WorldInfoDEF2";
IMPORT75.importedDEF = "WorldInfoDEF";
IMPORT75.inlineDEF = "inlineSceneDef";
browser.currentScene.children[22] = IMPORT75;

let EXPORT76 = browser.currentScene.createNode("EXPORT");
EXPORT76.AS = "WorldInfoDEF3";
EXPORT76.localDEF = "WorldInfoDEF";
browser.currentScene.children[23] = EXPORT76;

let ProtoDeclare77 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="MaterialModulator" appinfo="mimic a Material node and modulate fields as an animation effect" documentation="http://x3dgraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorIndex.html" ><ProtoInterface><field name="enabled" accessType="inputOutput" type="SFBool" value="true"></field>
<field name="diffuseColor" accessType="inputOutput" type="SFColor" value="0 0 0"></field>
<field name="emissiveColor" accessType="inputOutput" type="SFColor" value="0.05 0.05 0.5"></field>
<field name="specularColor" accessType="inputOutput" type="SFColor" value="0 0 0"></field>
<field name="transparency" accessType="inputOutput" type="SFFloat" value="0"></field>
<field name="shininess" accessType="inputOutput" type="SFFloat" value="0"></field>
<field name="ambientIntensity" accessType="inputOutput" type="SFFloat" value="0"></field>
</ProtoInterface>
<ProtoBody><Material DEF="MaterialNode"><IS><connect nodeField="diffuseColor" protoField="diffuseColor"></connect>
<connect nodeField="emissiveColor" protoField="emissiveColor"></connect>
<connect nodeField="specularColor" protoField="specularColor"></connect>
<connect nodeField="transparency" protoField="transparency"></connect>
<connect nodeField="shininess" protoField="shininess"></connect>
<connect nodeField="ambientIntensity" protoField="ambientIntensity"></connect>
</IS>
</Material>
<!-- Only first node (the node type) is renderable, others are along for the ride --><Script DEF="MaterialModulatorScript"><field name="enabled" accessType="inputOutput" type="SFBool"></field>
<field name="diffuseColor" accessType="inputOutput" type="SFColor"></field>
<field name="newColor" accessType="outputOnly" type="SFColor"></field>
<field name="clockTrigger" accessType="inputOnly" type="SFTime"></field>
<IS><connect nodeField="enabled" protoField="enabled"></connect>
<connect nodeField="diffuseColor" protoField="diffuseColor"></connect>
</IS>
<![CDATA[ecmascript:
function initialize ()
{
    newColor = diffuseColor; // start with correct color
}
function set_enabled (newValue)
{
	enabled = newValue;
}
function clockTrigger (timeValue)
{
    if (!enabled) return;
    red   = newColor.r;
    green = newColor.g;
    blue  = newColor.b;

    // note different modulation rates for each color component, % is modulus operator
    newColor = new SFColor ((red + 0.02) % 1, (green + 0.03) % 1, (blue + 0.04) % 1);
	if (enabled)
	{
		Browser.print ('diffuseColor=(' + red + ',' + green + ',' + blue + ') newColor=' + newColor.toString() + '\n');
	}
}]]></Script>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare77.name = "MaterialModulator";
ProtoDeclare77.appinfo = "mimic a Material node and modulate fields as an animation effect";
ProtoDeclare77.documentation = "http://x3dgraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorIndex.html";
let ProtoInterface78 = browser.currentScene.createNode("ProtoInterface");
let field79 = browser.currentScene.createNode("field");
field79.name = "enabled";
field79.accessType = "inputOutput";
field79.type = "SFBool";
field79.value = "true";
ProtoInterface78.field = new MFNode();

ProtoInterface78.field[0] = field79;

let field80 = browser.currentScene.createNode("field");
field80.name = "diffuseColor";
field80.accessType = "inputOutput";
field80.type = "SFColor";
field80.value = "0 0 0";
ProtoInterface78.field[1] = field80;

let field81 = browser.currentScene.createNode("field");
field81.name = "emissiveColor";
field81.accessType = "inputOutput";
field81.type = "SFColor";
field81.value = "0.05 0.05 0.5";
ProtoInterface78.field[2] = field81;

let field82 = browser.currentScene.createNode("field");
field82.name = "specularColor";
field82.accessType = "inputOutput";
field82.type = "SFColor";
field82.value = "0 0 0";
ProtoInterface78.field[3] = field82;

let field83 = browser.currentScene.createNode("field");
field83.name = "transparency";
field83.accessType = "inputOutput";
field83.type = "SFFloat";
field83.value = "0";
ProtoInterface78.field[4] = field83;

let field84 = browser.currentScene.createNode("field");
field84.name = "shininess";
field84.accessType = "inputOutput";
field84.type = "SFFloat";
field84.value = "0";
ProtoInterface78.field[5] = field84;

let field85 = browser.currentScene.createNode("field");
field85.name = "ambientIntensity";
field85.accessType = "inputOutput";
field85.type = "SFFloat";
field85.value = "0";
ProtoInterface78.field[6] = field85;

ProtoDeclare77.protoInterface = ProtoInterface78;

let ProtoBody86 = browser.currentScene.createNode("ProtoBody");
let Material87 = browser.currentScene.createNode("Material");
Material87.DEF = "MaterialNode";
let IS88 = browser.currentScene.createNode("IS");
let connect89 = browser.currentScene.createNode("connect");
connect89.nodeField = "diffuseColor";
connect89.protoField = "diffuseColor";
IS88.connect = new MFNode();

IS88.connect[0] = connect89;

let connect90 = browser.currentScene.createNode("connect");
connect90.nodeField = "emissiveColor";
connect90.protoField = "emissiveColor";
IS88.connect[1] = connect90;

let connect91 = browser.currentScene.createNode("connect");
connect91.nodeField = "specularColor";
connect91.protoField = "specularColor";
IS88.connect[2] = connect91;

let connect92 = browser.currentScene.createNode("connect");
connect92.nodeField = "transparency";
connect92.protoField = "transparency";
IS88.connect[3] = connect92;

let connect93 = browser.currentScene.createNode("connect");
connect93.nodeField = "shininess";
connect93.protoField = "shininess";
IS88.connect[4] = connect93;

let connect94 = browser.currentScene.createNode("connect");
connect94.nodeField = "ambientIntensity";
connect94.protoField = "ambientIntensity";
IS88.connect[5] = connect94;

Material87.iS = IS88;

ProtoBody86.children = new MFNode();

ProtoBody86.children[0] = Material87;

// Only first node (the node type) is renderable, others are along for the ride 
let Script95 = browser.currentScene.createNode("Script");
Script95.DEF = "MaterialModulatorScript";
let field96 = browser.currentScene.createNode("field");
field96.name = "enabled";
field96.accessType = "inputOutput";
field96.type = "SFBool";
Script95.field = new MFNode();

Script95.field[0] = field96;

let field97 = browser.currentScene.createNode("field");
field97.name = "diffuseColor";
field97.accessType = "inputOutput";
field97.type = "SFColor";
Script95.field[1] = field97;

let field98 = browser.currentScene.createNode("field");
field98.name = "newColor";
field98.accessType = "outputOnly";
field98.type = "SFColor";
Script95.field[2] = field98;

let field99 = browser.currentScene.createNode("field");
field99.name = "clockTrigger";
field99.accessType = "inputOnly";
field99.type = "SFTime";
Script95.field[3] = field99;

let IS100 = browser.currentScene.createNode("IS");
let connect101 = browser.currentScene.createNode("connect");
connect101.nodeField = "enabled";
connect101.protoField = "enabled";
IS100.connect = new MFNode();

IS100.connect[0] = connect101;

let connect102 = browser.currentScene.createNode("connect");
connect102.nodeField = "diffuseColor";
connect102.protoField = "diffuseColor";
IS100.connect[1] = connect102;

Script95.iS = IS100;


Script95.setSourceCode(`ecmascript:\n"+
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
ProtoBody86.children[1] = Script95;

ProtoDeclare77.protoBody = ProtoBody86;

browser.currentScene.children[24] = ProtoDeclare77;

// Test success: declarative statement createDeclarativeShapeTests() 
let Group103 = browser.currentScene.createNode("Group");
Group103.DEF = "DeclarativeGroupExample";
let Shape104 = browser.currentScene.createNode("Shape");
let MetadataString105 = browser.currentScene.createNode("MetadataString");
MetadataString105.DEF = "FindableMetadataStringTest";
MetadataString105.name = "findThisNameValue";
MetadataString105.value = new MFString(new java.lang.String["test case"]);
Shape104.metadata = MetadataString105;

let Appearance106 = browser.currentScene.createNode("Appearance");
Appearance106.DEF = "DeclarativeAppearanceExample";
// DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance 
let ProtoInstance107 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance107.DEF = "MyMaterialModulator";
ProtoInstance107.name = "MaterialModulator";
Appearance106.shaders = new MFNode();

Appearance106.shaders[0] = ProtoInstance107;

Shape104.appearance = Appearance106;

let Cone108 = browser.currentScene.createNode("Cone");
Cone108.bottom = False;
Cone108.bottomRadius = 0.05;
Cone108.height = 0.1;
Shape104.geometry = Cone108;

Group103.children = new MFNode();

Group103.children[0] = Shape104;

// Test success: declarativeGroup.addChild() singleton pipeline method 
browser.currentScene.children[25] = Group103;

// Test success: declarative statement addChild() 
// Test success: x3dModel.findNodeByDEF(DeclarativeAppearanceExample) = <Appearance DEF='DeclarativeAppearanceExample'/> i.e. <Appearance DEF='DeclarativeAppearanceExample'> <!- - DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance - -> <ProtoInstance DEF='MyMaterialModulator' name='MaterialModulator' containerField='material'/> </Appearance> 
// Test success: x3dModel.findElementByNameValue(findThisNameValue) = <MetadataString DEF='FindableMetadataStringTest' name='findThisNameValue' value='\"test case\"'/> 
// Test success: x3dModel.findElementByNameValue(\"ArtDeco01Material\", \"ProtoDeclare\") found 
// Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoDeclare\") found 
// Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoInstance\") found 
let Group109 = browser.currentScene.createNode("Group");
Group109.DEF = "TestFieldObjectsGroup";
// testFieldObjects() results 
// SFBool default=true, true=true, false=false, negate()=true 
// MFBool default=, initial=true false true, negate()=false true false 
// SFFloat default=0.0, initial=1.0, setValue(2)=2.0, setValue(3.0f)=3.0, setValue(4.0)=4.0 
// MFFloat default=, initial=1 2 3, append(5)=1 2 3 5, inserts(3,4)(0,0)=0 1 2 3 4 5, append(6)=0 1 2 3 4 5 6, size()=7 
// ... get1Value[3]=3.0, remove[1]=0 2 3 4 5 6, set1Value(0,10)=10 2 3 4 5 6, multiply(2)=20 4 6 8 10 12, clear= 
// SFVec3f default=0 0 0, initial=1 2 3, setValue=4 5 6, multiply(2)=8 10 12, normalize()=0.45584232 0.5698029 0.68376344 
browser.currentScene.children[26] = Group109;

let Sound110 = browser.currentScene.createNode("Sound");
Sound110.location = new SFVec3f(new float[0,1.6,0]);
// set sound-ellipsoid location height at 1.6m to match typical avatar height 
let AudioClip111 = browser.currentScene.createNode("AudioClip");
AudioClip111.description = "chimes";
AudioClip111.url = new MFString(new java.lang.String["chimes.wav","http://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav"]);
// Scene example fragment from http://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/default.x3d 
Sound110.source = AudioClip111;

browser.currentScene.children[27] = Sound110;

let Sound112 = browser.currentScene.createNode("Sound");
Sound112.location = new SFVec3f(new float[0,1.6,0]);
// set sound-ellipsoid location height at 1.6m to match typical avatar height 
let MovieTexture113 = browser.currentScene.createNode("MovieTexture");
MovieTexture113.description = "mpgsys.mpg from ConformanceNist suite";
MovieTexture113.url = new MFString(new java.lang.String["mpgsys.mpg","http://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpgsys.mpg"]);
// Scene example fragment from http://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpeg1-systems.x3d 
// Expected containerField='source', allowed containerField values=\"texture\" \"source\" \"back\" \"bottom\" \"front\" \"left\" \"right\" \"top\" \"backTexture\" \"bottomTexture\" \"frontTexture\" \"leftTexture\" \"rightTexture\" \"topTexture\" 
Sound112.source = MovieTexture113;

browser.currentScene.children[28] = Sound112;

// Test success: AnchorObject.isNode()=true, siteAnchor.isNode()=true 
// Test success: AnchorObject.isStatement()=false, siteAnchor.isStatement()=false 
// Test success: ROUTEObject.isNode()=false, orbitPositionROUTE.isNode()=false 
// Test success: ROUTEObject.isStatement()=true, orbitPositionROUTE.isStatement()=true 
// Test success: CommentsBlock.isNode()=false, testComments.isNode()=false 
// Test failure: CommentsBlock.isStatement()=true, testComments.isStatement()=true 
let Shape114 = browser.currentScene.createNode("Shape");
Shape114.DEF = "ExtrusionShape";
// ExampleExtrusion isCrossSectionClosed()=true, crossSection='[1.0, 1.0, 1.0, -1.0, -1.0, -1.0, -1.0, 1.0, 1.0, 1.0]' 
// ExampleExtrusion isSpineClosed()=false, spine='[0.0, 0.0, 0.0, 0.0, 1.0, 0.0]' 
let Appearance115 = browser.currentScene.createNode("Appearance");
Appearance115.DEF = "TransparentAppearance";
let Material116 = browser.currentScene.createNode("Material");
Material116.transparency = 1;
Appearance115.material = Material116;

Shape114.appearance = Appearance115;

let Extrusion117 = browser.currentScene.createNode("Extrusion");
Extrusion117.DEF = "ExampleExtrusion";
Shape114.geometry = Extrusion117;

browser.currentScene.children[29] = Shape114;

let MetadataString118 = browser.currentScene.createNode("MetadataString");
MetadataString118.DEF = "scene.addChildMetadata";
MetadataString118.name = "test";
MetadataString118.value = new MFString(new java.lang.String["Top-level root Metadata node beneath Scene needs to be one of '-children' in JSON encoding"]);
browser.currentScene.metadata[30] = MetadataString118;

let LayerSet119 = browser.currentScene.createNode("LayerSet");
LayerSet119.DEF = "scene.addChildLayerSetTest";
LayerSet119.order = new MFInt32(new int[0]);
browser.currentScene.layerSet[31] = LayerSet119;

